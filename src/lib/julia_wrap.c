#include <julia.h>
#include <signal.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// TODO: check return type of julia call

static jl_value_t *jl_complex64_type, *jl_complex32_type, *V, *refs; // *irefs;
static jl_value_t *array_int64, *array_dbl, *array_cdbl, *array2_dbl, *array2_cdbl;
static jl_value_t *array_flt, *array_cflt, *array2_flt, *array2_cflt;
static jl_function_t *setind, *getind, *delind, *stringify, *Stringify, *MIME, *printstyle;


// We use '_str' instead of '_string' to avoid conflict with Julia
void jl_eval_str(char* code)
{
    jl_eval_string(code);
    if (jl_exception_occurred()) {
        jl_call2(jl_get_function(jl_base_module, "showerror"),
                jl_stderr_obj(),
                jl_exception_occurred());
        jl_printf(jl_stderr_stream(), "\n");
        jl_exception_clear();
        return;
    }
    return;
}

int8_t jl_bool_eval_string(char* code)
{
    jl_value_t *result = jl_eval_string(code);
    if (jl_exception_occurred()) {
        jl_call2(jl_get_function(jl_base_module, "showerror"),
                jl_stderr_obj(),
                jl_exception_occurred());
        jl_printf(jl_stderr_stream(), "\n");
        jl_exception_clear();
        return(-1);
    }
    return jl_unbox_bool(result);
}

int64_t jl_int64_eval_string(char* code)
{
    jl_value_t *result = jl_eval_string(code);
    if (jl_exception_occurred()) {
        jl_call2(jl_get_function(jl_base_module, "showerror"),
                jl_stderr_obj(),
                jl_exception_occurred());
        jl_printf(jl_stderr_stream(), "\n");
        jl_exception_clear();
        return(0);
    }
    return jl_unbox_int64(result);
}

float jl_flt_eval_string(char* code)
{
    jl_value_t *result = jl_eval_string(code);
    if (jl_exception_occurred()) {
        jl_call2(jl_get_function(jl_base_module, "showerror"),
                jl_stderr_obj(),
                jl_exception_occurred());
        jl_printf(jl_stderr_stream(), "\n");
        jl_exception_clear();
        return(NAN);
    }
    return jl_unbox_float32(result);
}

double jl_dbl_eval_string(char* code)
{
    jl_value_t *result = jl_eval_string(code);
    if (jl_exception_occurred()) {
        jl_call2(jl_get_function(jl_base_module, "showerror"),
                jl_stderr_obj(),
                jl_exception_occurred());
        jl_printf(jl_stderr_stream(), "\n");
        jl_exception_clear();
        return(NAN);
    }
    return jl_unbox_float64(result);
}

char* jl_string_eval_string(char* code)
{
    char* nstr = "";
    jl_value_t *result = jl_eval_string(code);
    if (jl_exception_occurred()) {
        jl_call2(jl_get_function(jl_base_module, "showerror"),
                jl_stderr_obj(),
                jl_exception_occurred());
        jl_printf(jl_stderr_stream(), "\n");
        jl_exception_clear();
        return(nstr);
    }
    return(jl_string_data(result));
}

char* jl_call_string_function_flt(const char* function, float arg)
{
    char* nstr = "";
    jl_value_t *str;
    jl_function_t *func = jl_get_function(jl_main_module, function);
    jl_value_t* argument = jl_box_float32(arg);
  
    str = jl_call1(func, argument);
    if (jl_exception_occurred()) {
        jl_call2(jl_get_function(jl_base_module, "showerror"),
                jl_stderr_obj(),
                jl_exception_occurred());
        jl_printf(jl_stderr_stream(), "\n");
        jl_exception_clear();
        return(nstr);
    }
    return(jl_string_data(str));
}

char* jl_call_string_function_dbl(const char* function, double arg)
{
    char* nstr = "";
    jl_value_t *str;
    jl_function_t *func = jl_get_function(jl_main_module, function);
    jl_value_t* argument = jl_box_float64(arg);
  
    str = jl_call1(func, argument);

    if (jl_exception_occurred()) {
        jl_call2(jl_get_function(jl_base_module, "showerror"),
                jl_stderr_obj(),
                jl_exception_occurred());
        jl_printf(jl_stderr_stream(), "\n");
        jl_exception_clear();
        return(nstr);
    }
    return(jl_string_data(str));
}

int64_t jl_setindex_wrap_eval_string(int64_t index, const char* code)
{
    if (index == 0){
        jl_printf(jl_stderr_stream(), "ERROR: index is 0 (jl_setindex_wrap_eval_string)\n");
        return(0);
    }else if (code == NULL){
        jl_printf(jl_stderr_stream(), "ERROR: empty code string (jl_setindex_wrap_eval_string)\n");
        return(0);  
    }
    jl_value_t *res = jl_eval_string(code);
    if (jl_exception_occurred()) {
        jl_call2(jl_get_function(jl_base_module, "showerror"),
                jl_stderr_obj(),
                jl_exception_occurred());
        jl_printf(jl_stderr_stream(), "\n");
        jl_exception_clear();
        return(0);
    }
    JL_GC_PUSH1(&res);
    jl_call3(setind, refs, res, jl_box_int64(index));
    JL_GC_POP();
    return(index); 
}

void jl_delete_wrapped_index(int64_t index)
{
    if (index == 0){
        jl_printf(jl_stderr_stream(), "ERROR: index is 0 (jl_delete_wrapped_index)\n");
        return;
    }

    jl_call2(delind, refs, jl_box_int64(index));

    if (jl_exception_occurred()) {
        jl_call2(jl_get_function(jl_base_module, "showerror"),
                jl_stderr_obj(),
                jl_exception_occurred());
        jl_printf(jl_stderr_stream(), "\n");
        jl_exception_clear();
        return;
    }
    return;
}

// TODO: NULL string
char* jl_stringify_wrapped_index(int64_t index)
{
    char* nstr = "";

    if (index == 0){
        jl_printf(jl_stderr_stream(),
            "ERROR: index is 0 (jl_stringify_wrapped_index)\n");
        return(nstr);
    }

    jl_value_t *result = jl_call2(getind, refs, jl_box_int64(index));
    if (jl_exception_occurred()) {
        jl_call2(jl_get_function(jl_base_module, "showerror"),
                jl_stderr_obj(),
                jl_exception_occurred());
        jl_printf(jl_stderr_stream(), "\n");
        jl_exception_clear();
        return(nstr);
    }
    result = jl_call1(stringify, result);
    if (jl_exception_occurred()) {
        jl_call2(jl_get_function(jl_base_module, "showerror"),
                jl_stderr_obj(),
                jl_exception_occurred());
        jl_printf(jl_stderr_stream(), "\n");
        jl_exception_clear();
        return(nstr);
    }
    return(jl_string_data(result));
}

int8_t jl_call1_bool_wrapped_index(const char* function, int64_t varind){
    jl_value_t *arg = jl_call2(getind, refs, jl_box_int64(varind));
    jl_function_t *func = jl_get_function(jl_main_module, function);
    jl_value_t *res = jl_call1(func, arg);
    if (jl_exception_occurred()) {
        jl_call2(jl_get_function(jl_base_module, "showerror"),
                jl_stderr_obj(),
                jl_exception_occurred());
        jl_printf(jl_stderr_stream(), "\n");
        jl_exception_clear();
        return(-1);
    }
    return(jl_unbox_bool(res));
}

int8_t jl_call2_bool_wrapped_index(const char* function, int64_t varind1, int64_t varind2){
    jl_value_t *arg1 = jl_call2(getind, refs, jl_box_int64(varind1));
    jl_value_t *arg2 = jl_call2(getind, refs, jl_box_int64(varind2));
    jl_function_t *func = jl_get_function(jl_main_module, function);
    jl_value_t *res = jl_call2(func, arg1, arg2);
    if (jl_exception_occurred()) {
        jl_call2(jl_get_function(jl_base_module, "showerror"),
                jl_stderr_obj(),
                jl_exception_occurred());
        jl_printf(jl_stderr_stream(), "\n");
        jl_exception_clear();
        return(-1);
    }
    return(jl_unbox_bool(res));
}

int64_t jl_call1_wrapped_index(const char* function, int64_t index,
        int64_t varind){
    jl_value_t *arg = jl_call2(getind, refs, jl_box_int64(varind));
    jl_function_t *func = jl_get_function(jl_main_module, function);
    jl_value_t *res = jl_call1(func, arg);
    if (jl_exception_occurred()) {
        jl_call2(jl_get_function(jl_base_module, "showerror"),
                jl_stderr_obj(),
                jl_exception_occurred());
        jl_printf(jl_stderr_stream(), "\n");
        jl_exception_clear();
        return(0);
    }
    JL_GC_PUSH1(&res);
    jl_call3(setind, refs, res, jl_box_int64(index));
    JL_GC_POP();
    return(index);
}

int64_t jl_call2_wrapped_index(const char* function, int64_t index,
        int64_t varind1, int64_t varind2){
    jl_value_t *arg1 = jl_call2(getind, refs, jl_box_int64(varind1));
    jl_value_t *arg2 = jl_call2(getind, refs, jl_box_int64(varind2));
    jl_function_t *func = jl_get_function(jl_main_module, function);
    jl_value_t *res = jl_call2(func, arg1, arg2);
    if (jl_exception_occurred()) {
        jl_call2(jl_get_function(jl_base_module, "showerror"),
                jl_stderr_obj(),
                jl_exception_occurred());
        jl_printf(jl_stderr_stream(), "\n");
        jl_exception_clear();
        return(0);
    }
    JL_GC_PUSH1(&res);
    jl_call3(setind, refs, res, jl_box_int64(index));
    JL_GC_POP();
    return(index);
}

int64_t jl_call3_wrapped_index(const char* function, int64_t index,
        int64_t varind1, int64_t varind2, int64_t varind3){
    jl_value_t *arg1 = jl_call2(getind, refs, jl_box_int64(varind1));
    jl_value_t *arg2 = jl_call2(getind, refs, jl_box_int64(varind2));
    jl_value_t *arg3 = jl_call2(getind, refs, jl_box_int64(varind3));
    jl_function_t *func = jl_get_function(jl_main_module, function);
    jl_value_t *res = jl_call3(func, arg1, arg2, arg3);
    if (jl_exception_occurred()) {
        jl_call2(jl_get_function(jl_base_module, "showerror"),
                jl_stderr_obj(),
                jl_exception_occurred());
        jl_printf(jl_stderr_stream(), "\n");
        jl_exception_clear();
        return(0);
    }
    JL_GC_PUSH1(&res);
    jl_call3(setind, refs, res, jl_box_int64(index));
    JL_GC_POP();
    return(index);
}

int64_t jl_call4_wrapped_index(const char* function, int64_t index,
        int64_t varind1, int64_t varind2, int64_t varind3, int64_t varind4){
    jl_value_t *args[4]={jl_call2(getind, refs, jl_box_int64(varind1)),
        jl_call2(getind, refs, jl_box_int64(varind2)),
        jl_call2(getind, refs, jl_box_int64(varind3)),
        jl_call2(getind, refs, jl_box_int64(varind4))};
    jl_function_t *func = jl_get_function(jl_main_module, function);
    jl_value_t *res = jl_call(func, args, 4);
    if (jl_exception_occurred()) {
        jl_call2(jl_get_function(jl_base_module, "showerror"),
                jl_stderr_obj(),
                jl_exception_occurred());
        jl_printf(jl_stderr_stream(), "\n");
        jl_exception_clear();
        return(0);
    }
    JL_GC_PUSH1(&res);
    jl_call3(setind, refs, res, jl_box_int64(index));
    JL_GC_POP();
    return(index);
}

int64_t jl_call5_wrapped_index(const char* function, int64_t index,
        int64_t varind1, int64_t varind2, int64_t varind3, int64_t varind4,
            int64_t varind5){
    jl_value_t *args[5]={jl_call2(getind, refs, jl_box_int64(varind1)),
        jl_call2(getind, refs, jl_box_int64(varind2)),
        jl_call2(getind, refs, jl_box_int64(varind3)),
        jl_call2(getind, refs, jl_box_int64(varind4)),
        jl_call2(getind, refs, jl_box_int64(varind5))};
    jl_function_t *func = jl_get_function(jl_main_module, function);
    jl_value_t *res = jl_call(func, args, 5);
    if (jl_exception_occurred()) {
        jl_call2(jl_get_function(jl_base_module, "showerror"),
                jl_stderr_obj(),
                jl_exception_occurred());
        jl_printf(jl_stderr_stream(), "\n");
        jl_exception_clear();
        return(0);
    }
    JL_GC_PUSH1(&res);
    jl_call3(setind, refs, res, jl_box_int64(index));
    JL_GC_POP();
    return(index);
}

///////////////////////////////////////////////////////////
// Scalars

void jl_call_function_flt(const char* function, float arg){
    jl_function_t *func = jl_get_function(jl_main_module, function);
    jl_value_t* argument = jl_box_float32(arg);
    jl_call1(func, argument);
    if (jl_exception_occurred()) {
        jl_call2(jl_get_function(jl_base_module, "showerror"),
                jl_stderr_obj(),
                jl_exception_occurred());
        jl_printf(jl_stderr_stream(), "\n");
        jl_exception_clear();
        return;
    }
    return;
}

void jl_call_function_dbl(const char* function, double arg){
    jl_function_t *func = jl_get_function(jl_main_module, function);
    jl_value_t* argument = jl_box_float64(arg);
    jl_call1(func, argument);
    if (jl_exception_occurred()) {
        jl_call2(jl_get_function(jl_base_module, "showerror"),
                jl_stderr_obj(),
                jl_exception_occurred());
        jl_printf(jl_stderr_stream(), "\n");
        jl_exception_clear();
        return;
    }
    return;
}

void jl_call_function_flt_flt(const char* function, float arg1, float arg2){
    jl_function_t *func = jl_get_function(jl_main_module, function);
    jl_value_t* argument1 = jl_box_float32(arg1);
    jl_value_t* argument2 = jl_box_float32(arg2);
    jl_call2(func, argument1, argument2);
    if (jl_exception_occurred()) {
        jl_call2(jl_get_function(jl_base_module, "showerror"),
                jl_stderr_obj(),
                jl_exception_occurred());
        jl_printf(jl_stderr_stream(), "\n");
        jl_exception_clear();
        return;
    }
    return;
}

void jl_call_function_dbl_dbl(const char* function, double arg1, double arg2){
    jl_function_t *func = jl_get_function(jl_main_module, function);
    jl_value_t* argument1 = jl_box_float64(arg1);
    jl_value_t* argument2 = jl_box_float64(arg2);
    jl_call2(func, argument1, argument2);
    if (jl_exception_occurred()) {
        jl_call2(jl_get_function(jl_base_module, "showerror"),
                jl_stderr_obj(),
                jl_exception_occurred());
        jl_printf(jl_stderr_stream(), "\n");
        jl_exception_clear();
        return;
    }
    return;
}

void jl_call_function_flt_flt_flt(const char* function, float arg1,
        float arg2, float arg3){
    jl_function_t *func = jl_get_function(jl_main_module, function);
    jl_value_t* argument1 = jl_box_float32(arg1);
    jl_value_t* argument2 = jl_box_float32(arg2);
    jl_value_t* argument3 = jl_box_float32(arg3);
    jl_call3(func, argument1, argument2, argument3);
    if (jl_exception_occurred()) {
        jl_call2(jl_get_function(jl_base_module, "showerror"),
                jl_stderr_obj(),
                jl_exception_occurred());
        jl_printf(jl_stderr_stream(), "\n");
        jl_exception_clear();
        return;
    }
    return;
}

void jl_call_function_dbl_dbl_dbl(const char* function, double arg1,
        double arg2, double arg3){
    jl_function_t *func = jl_get_function(jl_main_module, function);
    jl_value_t* argument1 = jl_box_float64(arg1);
    jl_value_t* argument2 = jl_box_float64(arg2);
    jl_value_t* argument3 = jl_box_float64(arg3);
    jl_call3(func, argument1, argument2, argument3);
    if (jl_exception_occurred()) {
        jl_call2(jl_get_function(jl_base_module, "showerror"),
                jl_stderr_obj(),
                jl_exception_occurred());
        jl_printf(jl_stderr_stream(), "\n");
        jl_exception_clear();
        return;
    }
    return;
}

int64_t jl_call_int64_function_flt(const char* function, float arg){
    jl_function_t *func = jl_get_function(jl_main_module, function);
    jl_value_t* argument = jl_box_float32(arg);
    jl_value_t* ret = jl_call1(func, argument);
    if (jl_exception_occurred()) {
        jl_call2(jl_get_function(jl_base_module, "showerror"),
                jl_stderr_obj(),
                jl_exception_occurred());
        jl_printf(jl_stderr_stream(), "\n");
        jl_exception_clear();
        return(0);
    }
    return jl_unbox_int64(ret);
}

int64_t jl_call_int64_function_dbl(const char* function, double arg){
    jl_function_t *func = jl_get_function(jl_main_module, function);
    jl_value_t* argument = jl_box_float64(arg);
    jl_value_t* ret = jl_call1(func, argument);
    if (jl_exception_occurred()) {
        jl_call2(jl_get_function(jl_base_module, "showerror"),
                jl_stderr_obj(),
                jl_exception_occurred());
        jl_printf(jl_stderr_stream(), "\n");
        jl_exception_clear();
        return(0);
    }
    return jl_unbox_int64(ret);
}

float jl_call_flt_function_flt(const char* function, float arg){
    jl_function_t *func = jl_get_function(jl_main_module, function);
    jl_value_t* argument = jl_box_float32(arg);
    jl_value_t* ret = jl_call1(func, argument);
    if (jl_exception_occurred()) {
        jl_call2(jl_get_function(jl_base_module, "showerror"),
                jl_stderr_obj(),
                jl_exception_occurred());
        jl_printf(jl_stderr_stream(), "\n");
        jl_exception_clear();
        return(NAN);
    }
    return jl_unbox_float32(ret);
}

double jl_call_dbl_function_dbl(const char* function, double arg){
    jl_function_t *func = jl_get_function(jl_main_module, function);
    jl_value_t* argument = jl_box_float64(arg);
    jl_value_t* ret = jl_call1(func, argument);
    if (jl_exception_occurred()) {
        jl_call2(jl_get_function(jl_base_module, "showerror"),
                jl_stderr_obj(),
                jl_exception_occurred());
        jl_printf(jl_stderr_stream(), "\n");
        jl_exception_clear();
        return(NAN);
    }
    return jl_unbox_float64(ret);
}

float jl_call_flt_function_flt_flt(const char* function, float arg1, float arg2){
    jl_function_t *func = jl_get_function(jl_main_module, function);
    jl_value_t* argument1 = jl_box_float32(arg1);
    jl_value_t* argument2 = jl_box_float32(arg2);
    jl_value_t* ret = jl_call2(func, argument1, argument2);
    if (jl_exception_occurred()) {
        jl_call2(jl_get_function(jl_base_module, "showerror"),
                jl_stderr_obj(),
                jl_exception_occurred());
        jl_printf(jl_stderr_stream(), "\n");
        jl_exception_clear();
        return(NAN);
    }
    return jl_unbox_float32(ret);
}

double jl_call_dbl_function_dbl_dbl(const char* function, double arg1, double arg2){
    jl_function_t *func = jl_get_function(jl_main_module, function);
    jl_value_t* argument1 = jl_box_float64(arg1);
    jl_value_t* argument2 = jl_box_float64(arg2);
    jl_value_t* ret = jl_call2(func, argument1, argument2);
    if (jl_exception_occurred()) {
        jl_call2(jl_get_function(jl_base_module, "showerror"),
                jl_stderr_obj(),
                jl_exception_occurred());
        jl_printf(jl_stderr_stream(), "\n");
        jl_exception_clear();
        return(NAN);
    }
    return jl_unbox_float64(ret);
}

float jl_call_flt_function_flt_flt_flt(const char* function, 
        float arg1, float arg2, float arg3){
    jl_function_t *func = jl_get_function(jl_main_module, function);
    jl_value_t* argument1 = jl_box_float32(arg1);
    jl_value_t* argument2 = jl_box_float32(arg2);
    jl_value_t* argument3 = jl_box_float32(arg3);
    jl_value_t* ret = jl_call3(func, argument1, argument2, argument3);
    if (jl_exception_occurred()) {
        jl_call2(jl_get_function(jl_base_module, "showerror"),
                jl_stderr_obj(),
                jl_exception_occurred());
        jl_printf(jl_stderr_stream(), "\n");
        jl_exception_clear();
        return(NAN);
    }
    return jl_unbox_float32(ret);
}

double jl_call_dbl_function_dbl_dbl_dbl(const char* function,
        double arg1, double arg2, double arg3){
    jl_function_t *func = jl_get_function(jl_main_module, function);
    jl_value_t* argument1 = jl_box_float64(arg1);
    jl_value_t* argument2 = jl_box_float64(arg2);
    jl_value_t* argument3 = jl_box_float64(arg3);
    jl_value_t* ret = jl_call3(func, argument1, argument2, argument3);
    if (jl_exception_occurred()) {
        jl_call2(jl_get_function(jl_base_module, "showerror"),
                jl_stderr_obj(),
                jl_exception_occurred());
        jl_printf(jl_stderr_stream(), "\n");
        jl_exception_clear();
        return(NAN);
    }
    return jl_unbox_float64(ret);
}

float jl_call_flt_function_flt_int64(const char* function, float arg1, int64_t arg2){
    jl_function_t *func = jl_get_function(jl_main_module, function);
    jl_value_t* argument1 = jl_box_float32(arg1);
    jl_value_t* argument2 = jl_box_int64(arg2);
    jl_value_t* ret = jl_call2(func, argument1, argument2);
    if (jl_exception_occurred()) {
        jl_call2(jl_get_function(jl_base_module, "showerror"),
                jl_stderr_obj(),
                jl_exception_occurred());
        jl_printf(jl_stderr_stream(), "\n");
        jl_exception_clear();
        return(NAN);
    }
    return jl_unbox_float32(ret);
}

double jl_call_dbl_function_dbl_int64(const char* function, double arg1, int64_t arg2){
    jl_function_t *func = jl_get_function(jl_main_module, function);
    jl_value_t* argument1 = jl_box_float64(arg1);
    jl_value_t* argument2 = jl_box_int64(arg2);
    jl_value_t* ret = jl_call2(func, argument1, argument2);
    if (jl_exception_occurred()) {
        jl_call2(jl_get_function(jl_base_module, "showerror"),
                jl_stderr_obj(),
                jl_exception_occurred());
        jl_printf(jl_stderr_stream(), "\n");
        jl_exception_clear();
        return(NAN);
    }
    return jl_unbox_float64(ret);
}

float jl_call_flt_function_int64_flt(const char* function, int64_t arg1, float arg2){
    jl_function_t *func = jl_get_function(jl_main_module, function);
    jl_value_t* argument1 = jl_box_int64(arg1);
    jl_value_t* argument2 = jl_box_float32(arg2);
    jl_value_t* ret = jl_call2(func, argument1, argument2);
    if (jl_exception_occurred()) {
        jl_call2(jl_get_function(jl_base_module, "showerror"),
                jl_stderr_obj(),
                jl_exception_occurred());
        jl_printf(jl_stderr_stream(), "\n");
        jl_exception_clear();
        return(NAN);
    }
    return jl_unbox_float32(ret);
}

double jl_call_dbl_function_int64_dbl(const char* function, int64_t arg1, double arg2){
    jl_function_t *func = jl_get_function(jl_main_module, function);
    jl_value_t* argument1 = jl_box_int64(arg1);
    jl_value_t* argument2 = jl_box_float64(arg2);
    jl_value_t* ret = jl_call2(func, argument1, argument2);
    if (jl_exception_occurred()) {
        jl_call2(jl_get_function(jl_base_module, "showerror"),
                jl_stderr_obj(),
                jl_exception_occurred());
        jl_printf(jl_stderr_stream(), "\n");
        jl_exception_clear();
        return(NAN);
    }
    return jl_unbox_float64(ret);
}

int8_t jl_call_bool_function_flt_flt(const char* function, float arg1, float arg2){
    jl_function_t *func = jl_get_function(jl_main_module, function);
    jl_value_t* argument1 = jl_box_float32(arg1);
    jl_value_t* argument2 = jl_box_float32(arg2);
    jl_value_t* ret = jl_call2(func, argument1, argument2);
    if (jl_exception_occurred()) {
        jl_call2(jl_get_function(jl_base_module, "showerror"),
                jl_stderr_obj(),
                jl_exception_occurred());
        jl_printf(jl_stderr_stream(), "\n");
        jl_exception_clear();
        return(-1);
    }
    return jl_unbox_bool(ret);
}

int8_t jl_call_bool_function_dbl_dbl(const char* function, double arg1, double arg2){
    jl_function_t *func = jl_get_function(jl_main_module, function);
    jl_value_t* argument1 = jl_box_float64(arg1);
    jl_value_t* argument2 = jl_box_float64(arg2);
    jl_value_t* ret = jl_call2(func, argument1, argument2);
    if (jl_exception_occurred()) {
        jl_call2(jl_get_function(jl_base_module, "showerror"),
                jl_stderr_obj(),
                jl_exception_occurred());
        jl_printf(jl_stderr_stream(), "\n");
        jl_exception_clear();
        return(-1);
    }
    return jl_unbox_bool(ret);
}

///////////////////////////////////////////////////////////////////
// Vectors

char*  jl_call_stringify_1difunction(const char* function,
        const char* mime, int64_t *array, int64_t size){
    char* nstr = "";
    
    jl_array_t *x; jl_value_t *ret;
    jl_value_t *mm = jl_eval_string(mime);
    jl_value_t *io = jl_call0(jl_get_function(jl_base_module, "IOBuffer"));
    x = jl_ptr_to_array_1d(array_int64, array, size, 0);

    jl_call3(jl_get_function(jl_main_module, function), io, 
        (jl_value_t *)  jl_call1(MIME, mm), (jl_value_t*) x);

    if (jl_exception_occurred()) {
        jl_call2(jl_get_function(jl_base_module, "showerror"),
                jl_stderr_obj(),
                jl_exception_occurred());
        jl_printf(jl_stderr_stream(), "\n");
        jl_exception_clear();
        return("");
    }

    ret = jl_call1(Stringify, jl_call1(jl_get_function(jl_main_module, "take!"), io));
    if (jl_exception_occurred()) {
        jl_call2(jl_get_function(jl_base_module, "showerror"),
                jl_stderr_obj(),
                jl_exception_occurred());
        jl_printf(jl_stderr_stream(), "\n");
        jl_exception_clear();
        return("");
    }
    return(jl_string_data(ret));
}

void jl_call_1difunction(const char* func, int64_t *array, int64_t size){
    jl_array_t *x = jl_ptr_to_array_1d(array_int64, array, size, 0);
    jl_function_t *function = jl_get_function(jl_main_module, func);
    jl_call1(function, (jl_value_t*) x);
    if (jl_exception_occurred()) {
        jl_call2(jl_get_function(jl_base_module, "showerror"),
                jl_stderr_obj(),
                jl_exception_occurred());
        jl_printf(jl_stderr_stream(), "\n");
        jl_exception_clear();
        return;
    }
    return;
}

char* jl_call_stringify_1dffunction(int64_t cplx, const char* function,
        const char* mime, float *array, int64_t size){
    char* nstr = "";
    
    jl_array_t *x; jl_value_t *ret;
    jl_value_t *mm = jl_eval_string(mime);
    jl_value_t *io = jl_call0(jl_get_function(jl_base_module, "IOBuffer"));

    if(cplx)
        x = jl_ptr_to_array_1d(array_cflt, array, size, 0);
    else
        x = jl_ptr_to_array_1d(array_flt, array, size, 0);

    jl_call3(jl_get_function(jl_main_module, function), io, 
        (jl_value_t *)  jl_call1(MIME, mm), (jl_value_t*) x);

    if (jl_exception_occurred()) {
        jl_call2(jl_get_function(jl_base_module, "showerror"),
                jl_stderr_obj(),
                jl_exception_occurred());
        jl_printf(jl_stderr_stream(), "\n");
        jl_exception_clear();
        return("");
    }

    ret = jl_call1(Stringify, jl_call1(jl_get_function(jl_main_module, "take!"), io));
    if (jl_exception_occurred()) {
        jl_call2(jl_get_function(jl_base_module, "showerror"),
                jl_stderr_obj(),
                jl_exception_occurred());
        jl_printf(jl_stderr_stream(), "\n");
        jl_exception_clear();
        return("");
    }
    return(jl_string_data(ret));
}

char* jl_call_stringify_1dfunction(int64_t cplx, const char* function,
        const char* mime, double *array, int64_t size){
    char* nstr = "";
    
    jl_array_t *x; jl_value_t *ret;
    jl_value_t *mm = jl_eval_string(mime);
    jl_value_t *io = jl_call0(jl_get_function(jl_base_module, "IOBuffer"));

    if(cplx)
        x = jl_ptr_to_array_1d(array_cdbl, array, size, 0);
    else
        x = jl_ptr_to_array_1d(array_dbl, array, size, 0);

    jl_call3(jl_get_function(jl_main_module, function), io, 
        (jl_value_t *)  jl_call1(MIME, mm), (jl_value_t*) x);

    if (jl_exception_occurred()) {
        jl_call2(jl_get_function(jl_base_module, "showerror"),
                jl_stderr_obj(),
                jl_exception_occurred());
        jl_printf(jl_stderr_stream(), "\n");
        jl_exception_clear();
        return("");
    }

    ret = jl_call1(Stringify, jl_call1(jl_get_function(jl_main_module, "take!"), io));
    if (jl_exception_occurred()) {
        jl_call2(jl_get_function(jl_base_module, "showerror"),
                jl_stderr_obj(),
                jl_exception_occurred());
        jl_printf(jl_stderr_stream(), "\n");
        jl_exception_clear();
        return("");
    }
    return(jl_string_data(ret));
}

void jl_call_1dffunction(int64_t cplx, const char* func,
        float *array, int64_t size){
    jl_array_t *x;
    if(cplx)
        x = jl_ptr_to_array_1d(array_cflt, array, size, 0);
    else
        x = jl_ptr_to_array_1d(array_flt, array, size, 0);
    jl_function_t *function = jl_get_function(jl_main_module, func);
    jl_call1(function, (jl_value_t*)x);
    if (jl_exception_occurred()) {
        jl_call2(jl_get_function(jl_base_module, "showerror"),
                jl_stderr_obj(),
                jl_exception_occurred());
        jl_printf(jl_stderr_stream(), "\n");
        jl_exception_clear();
        return;
    }
    return;
}

void jl_call_1dfunction(int64_t cplx, const char* func,
        double *array, int64_t size){
    jl_array_t *x;
    if(cplx)
        x = jl_ptr_to_array_1d(array_cdbl, array, size, 0);
    else
        x = jl_ptr_to_array_1d(array_dbl, array, size, 0);
    jl_function_t *function = jl_get_function(jl_main_module, func);
    jl_call1(function, (jl_value_t*)x);
    if (jl_exception_occurred()) {
        jl_call2(jl_get_function(jl_base_module, "showerror"),
                jl_stderr_obj(),
                jl_exception_occurred());
        jl_printf(jl_stderr_stream(), "\n");
        jl_exception_clear();
        return;
    }
    return;
}

float jl_call_flt_1dffunction(int64_t cplx, const char* func,
        float *array, int64_t size){
    jl_array_t *x;
    if(cplx)
        x = jl_ptr_to_array_1d(array_cflt, array, size, 0);
    else
        x = jl_ptr_to_array_1d(array_flt, array, size, 0);
    jl_function_t *function = jl_get_function(jl_main_module, func);
    jl_value_t* ret = jl_call1(function, (jl_value_t*)x);
    if (jl_exception_occurred()) {
        jl_call2(jl_get_function(jl_base_module, "showerror"),
                jl_stderr_obj(),
                jl_exception_occurred());
        jl_printf(jl_stderr_stream(), "\n");
        jl_exception_clear();
        return NAN;
    }
    return jl_unbox_float32(ret);
}

double jl_call_dbl_1dfunction(int64_t cplx, const char* func,
        double *array, int64_t size){
    jl_array_t *x;
    if(cplx)
        x = jl_ptr_to_array_1d(array_cdbl, array, size, 0);
    else
        x = jl_ptr_to_array_1d(array_dbl, array, size, 0);
    jl_function_t *function = jl_get_function(jl_main_module, func);
    jl_value_t* ret = jl_call1(function, (jl_value_t*)x);
    if (jl_exception_occurred()) {
        jl_call2(jl_get_function(jl_base_module, "showerror"),
                jl_stderr_obj(),
                jl_exception_occurred());
        jl_printf(jl_stderr_stream(), "\n");
        jl_exception_clear();
        return NAN;
    }
    return jl_unbox_float64(ret);
}

float jl_call_flt_1dffunction_flt(int64_t cplx, const char* func, 
        float *array, int64_t size, float val){
    jl_array_t *x;
    if(cplx)
        x = jl_ptr_to_array_1d(array_cflt, array, size, 0);
    else
        x = jl_ptr_to_array_1d(array_flt, array, size, 0);
    jl_function_t *function = jl_get_function(jl_main_module, func);
    jl_value_t* ret = jl_call2(function, (jl_value_t*) x,
        (jl_value_t*) jl_box_float32(val));
    if (jl_exception_occurred()) {
        jl_call2(jl_get_function(jl_base_module, "showerror"),
                jl_stderr_obj(),
                jl_exception_occurred());
        jl_printf(jl_stderr_stream(), "\n");
        jl_exception_clear();
        return NAN;
    }
    return jl_unbox_float32(ret);
}

double jl_call_dbl_1dfunction_dbl(int64_t cplx, const char* func, 
        double *array, int64_t size, double val){
    jl_array_t *x;
    if(cplx)
        x = jl_ptr_to_array_1d(array_cdbl, array, size, 0);
    else
        x = jl_ptr_to_array_1d(array_dbl, array, size, 0);
    jl_function_t *function = jl_get_function(jl_main_module, func);
    jl_value_t* ret = jl_call2(function, (jl_value_t*) x,
        (jl_value_t*) jl_box_float64(val));
    if (jl_exception_occurred()) {
        jl_call2(jl_get_function(jl_base_module, "showerror"),
                jl_stderr_obj(),
                jl_exception_occurred());
        jl_printf(jl_stderr_stream(), "\n");
        jl_exception_clear();
        return NAN;
    }
    return jl_unbox_float64(ret);
}

void jl_call_1d2ffunction(int64_t cplx, const char* func,
        float *array1, int64_t size1, float *array2, int64_t size2){
    jl_array_t *x, *y;
    if(cplx){
        x = jl_ptr_to_array_1d(array_cflt, array1, size1, 0);
        y = jl_ptr_to_array_1d(array_cflt, array2, size2, 0);
    }
    else{
        x = jl_ptr_to_array_1d(array_flt, array1, size1, 0);
        y = jl_ptr_to_array_1d(array_flt, array2, size2, 0);
    }
    jl_function_t *function = jl_get_function(jl_main_module, func);
   
    jl_call2(function, (jl_value_t*)x, (jl_value_t*)y);
    
    if (jl_exception_occurred()) {
        jl_call2(jl_get_function(jl_base_module, "showerror"),
                jl_stderr_obj(),
                jl_exception_occurred());
        jl_printf(jl_stderr_stream(), "\n");
        jl_exception_clear();
        return;
    }
    return;
}

void jl_call_1d2function(int64_t cplx, const char* func,
        double *array1, int64_t size1, double *array2, int64_t size2){
    jl_array_t *x, *y;
    if(cplx){
        x = jl_ptr_to_array_1d(array_cdbl, array1, size1, 0);
        y = jl_ptr_to_array_1d(array_cdbl, array2, size2, 0);
    }
    else{
        x = jl_ptr_to_array_1d(array_dbl, array1, size1, 0);
        y = jl_ptr_to_array_1d(array_dbl, array2, size2, 0);
    }
    jl_function_t *function = jl_get_function(jl_main_module, func);
   
    jl_call2(function, (jl_value_t*)x, (jl_value_t*)y);
    
    if (jl_exception_occurred()) {
        jl_call2(jl_get_function(jl_base_module, "showerror"),
                jl_stderr_obj(),
                jl_exception_occurred());
        jl_printf(jl_stderr_stream(), "\n");
        jl_exception_clear();
        return;
    }
    return;
}

int8_t jl_call_bool_1d2ffunction(int64_t cplx, const char* func,
        float *array1, int64_t size1, float *array2, int64_t size2){
    jl_array_t *x, *y;
    if(cplx){
        x = jl_ptr_to_array_1d(array_cflt, array1, size1, 0);
        y = jl_ptr_to_array_1d(array_cflt, array2, size2, 0);
    }
    else{
        x = jl_ptr_to_array_1d(array_flt, array1, size1, 0);
        y = jl_ptr_to_array_1d(array_flt, array2, size2, 0);
    }
    jl_function_t *function = jl_get_function(jl_main_module, func);
   
    jl_value_t* ret = jl_call2(function, (jl_value_t*)x, (jl_value_t*)y);
    if (jl_exception_occurred()) {
        jl_call2(jl_get_function(jl_base_module, "showerror"),
                jl_stderr_obj(),
                jl_exception_occurred());
        jl_printf(jl_stderr_stream(), "\n");
        jl_exception_clear();
        return(-1);
    }
    return jl_unbox_bool(ret);
}

int8_t jl_call_bool_1d2function(int64_t cplx, const char* func,
        double *array1, int64_t size1, double *array2, int64_t size2){
    jl_array_t *x, *y;
    if(cplx){
        x = jl_ptr_to_array_1d(array_cdbl, array1, size1, 0);
        y = jl_ptr_to_array_1d(array_cdbl, array2, size2, 0);
    }
    else{
        x = jl_ptr_to_array_1d(array_dbl, array1, size1, 0);
        y = jl_ptr_to_array_1d(array_dbl, array2, size2, 0);
    }
    jl_function_t *function = jl_get_function(jl_main_module, func);
   
    jl_value_t* ret = jl_call2(function, (jl_value_t*)x, (jl_value_t*)y);
    if (jl_exception_occurred()) {
        jl_call2(jl_get_function(jl_base_module, "showerror"),
                jl_stderr_obj(),
                jl_exception_occurred());
        jl_printf(jl_stderr_stream(), "\n");
        jl_exception_clear();
        return(-1);
    }
    return jl_unbox_bool(ret);
}

float jl_call_flt_1d2ffunction(int64_t cplx, const char* func,
        float *array1, int64_t size1, float *array2, int64_t size2){

    jl_array_t *x, *y;
    if(cplx){
        x = jl_ptr_to_array_1d(array_cflt, array1, size1, 0);
        y = jl_ptr_to_array_1d(array_cflt, array2, size2, 0);
    }
    else{
        x = jl_ptr_to_array_1d(array_flt, array1, size1, 0);
        y = jl_ptr_to_array_1d(array_flt, array2, size2, 0);
    }

    jl_function_t *function = jl_get_function(jl_main_module, func);
    jl_value_t* ret = jl_call2(function, (jl_value_t*)x, (jl_value_t*)y);
    
    if (jl_exception_occurred()) {
        jl_call2(jl_get_function(jl_base_module, "showerror"),
                jl_stderr_obj(),
                jl_exception_occurred());
        jl_printf(jl_stderr_stream(), "\n");
        jl_exception_clear();
        return NAN;
    }
    return jl_unbox_float32(ret);
}

double jl_call_dbl_1d2function(int64_t cplx, const char* func,
        double *array1, int64_t size1, double *array2, int64_t size2){

    jl_array_t *x, *y;
    if(cplx){
        x = jl_ptr_to_array_1d(array_cdbl, array1, size1, 0);
        y = jl_ptr_to_array_1d(array_cdbl, array2, size2, 0);
    }
    else{
        x = jl_ptr_to_array_1d(array_dbl, array1, size1, 0);
        y = jl_ptr_to_array_1d(array_dbl, array2, size2, 0);
    }

    jl_function_t *function = jl_get_function(jl_main_module, func);
    jl_value_t* ret = jl_call2(function, (jl_value_t*)x, (jl_value_t*)y);
    
    if (jl_exception_occurred()) {
        jl_call2(jl_get_function(jl_base_module, "showerror"),
                jl_stderr_obj(),
                jl_exception_occurred());
        jl_printf(jl_stderr_stream(), "\n");
        jl_exception_clear();
        return NAN;
    }
    return jl_unbox_float64(ret);
}

// Necessary? (used in plotting functions with double-s)
void jl_call_1d3ffunction(const char* func, float *array1, int64_t size1,
        float *array2, int64_t size2, float *array3, int64_t size3){

    jl_array_t *x = jl_ptr_to_array_1d(array_flt, array1, size1, 0);
    jl_array_t *y = jl_ptr_to_array_1d(array_flt, array2, size2, 0);
    jl_array_t *z = jl_ptr_to_array_1d(array_flt, array3, size2, 0);
    jl_function_t *function = jl_get_function(jl_main_module, func);

    jl_call3(function, (jl_value_t*)x, (jl_value_t*)y, (jl_value_t*)z);
    if (jl_exception_occurred()) {
        jl_call2(jl_get_function(jl_base_module, "showerror"),
                jl_stderr_obj(),
                jl_exception_occurred());
        jl_printf(jl_stderr_stream(), "\n");
        jl_exception_clear();
        return;
    }
    return;
}

void jl_call_1d3function(const char* func, double *array1, int64_t size1,
        double *array2, int64_t size2, double *array3, int64_t size3){

    jl_array_t *x = jl_ptr_to_array_1d(array_dbl, array1, size1, 0);
    jl_array_t *y = jl_ptr_to_array_1d(array_dbl, array2, size2, 0);
    jl_array_t *z = jl_ptr_to_array_1d(array_dbl, array3, size2, 0);
    jl_function_t *function = jl_get_function(jl_main_module, func);

    jl_call3(function, (jl_value_t*)x, (jl_value_t*)y, (jl_value_t*)z);
    if (jl_exception_occurred()) {
        jl_call2(jl_get_function(jl_base_module, "showerror"),
                jl_stderr_obj(),
                jl_exception_occurred());
        jl_printf(jl_stderr_stream(), "\n");
        jl_exception_clear();
        return;
    }
    return;
}

void jl_call_farray_1dffunction(int64_t acplx, int64_t cplx,
            char* func, float *arr, float *array, int64_t n){

    float *svref;
    jl_array_t *v;
    if(cplx)
        v = jl_ptr_to_array_1d(array_cflt, array, n, 0);
    else
        v = jl_ptr_to_array_1d(array_flt, array, n, 0);
    
    jl_function_t *function = jl_get_function(jl_main_module, func);
    jl_array_t *ret = (jl_array_t*) jl_call1(function, (jl_value_t*) v);
    
    if (jl_exception_occurred()) {
        jl_call2(jl_get_function(jl_base_module, "showerror"),
                jl_stderr_obj(),
                jl_exception_occurred());
        jl_printf(jl_stderr_stream(), "\n");
        jl_exception_clear();
        return;
    }

    JL_GC_PUSH1(&ret);

#if JULIA_VERSION_MINOR > 10
    svref = (float*) jl_array_data(ret, float);
#else
    svref = (float*) jl_array_data(ret);
#endif

    if (acplx && !strncmp(jl_typename_str(jl_array_eltype((jl_value_t *) ret)),
            "Complex", 7)){
        memcpy(arr, svref, jl_array_len(ret) * 2 * sizeof(float));
    }
    else if (acplx){
        // ret is not a complex array but arr is
        for(size_t i=0; i < jl_array_len(ret); i++)
            arr[2*i] = svref[i];
    }
    else{
        // real array
        memcpy(arr, svref, jl_array_len(ret) * sizeof(float));
    }
    JL_GC_POP();
    return;
}

void jl_call_array_1dfunction(int64_t acplx, int64_t cplx,
            char* func, double *arr, double *array, int64_t n){

    double *svref;
    jl_array_t *v;
    if(cplx)
        v = jl_ptr_to_array_1d(array_cdbl, array, n, 0);
    else
        v = jl_ptr_to_array_1d(array_dbl, array, n, 0);
    
    jl_function_t *function = jl_get_function(jl_main_module, func);
    jl_array_t *ret = (jl_array_t*) jl_call1(function, (jl_value_t*) v);
    
    if (jl_exception_occurred()) {
        jl_call2(jl_get_function(jl_base_module, "showerror"),
                jl_stderr_obj(),
                jl_exception_occurred());
        jl_printf(jl_stderr_stream(), "\n");
        jl_exception_clear();
        return;
    }

    JL_GC_PUSH1(&ret);

#if JULIA_VERSION_MINOR > 10
    svref = (double*) jl_array_data(ret, double);
#else
    svref = (double*) jl_array_data(ret);
#endif

    if (acplx && !strncmp(jl_typename_str(jl_array_eltype((jl_value_t *) ret)),
            "Complex", 7)){
        memcpy(arr, svref, jl_array_len(ret) * 2 * sizeof(double));
    }
    else if (acplx){
        // ret is not a complex array but arr is
        for(size_t i=0; i < jl_array_len(ret); i++)
            arr[2*i] = svref[i];
    }
    else{
        // real array
        memcpy(arr, svref, jl_array_len(ret) * sizeof(double));
    }
    JL_GC_POP();
    return;
}

int64_t jl_call_wrap_1dfarray(int64_t cplx, int64_t index, float *array, int64_t n)
{
    jl_array_t *v;

    if(cplx)
        v = jl_ptr_to_array_1d(array_cflt, array, n, 0);
    else
        v = jl_ptr_to_array_1d(array_flt, array, n, 0);
    
    jl_function_t *function = jl_get_function(jl_main_module, "deepcopy");
    jl_value_t *var = jl_call1(function, (jl_value_t*) v);
    if (jl_exception_occurred()) {
        jl_call2(jl_get_function(jl_base_module, "showerror"),
                jl_stderr_obj(),
                jl_exception_occurred());
        jl_printf(jl_stderr_stream(), "\n");
        jl_exception_clear();
        return(0);
    }
    JL_GC_PUSH1(&var);
    jl_call3(setind, refs, var, jl_box_int64(index));
    JL_GC_POP();
    return(index);
}

int64_t jl_call_wrap_1darray(int64_t cplx, int64_t index, double *array, int64_t n)
{
    jl_array_t *v;

    if(cplx)
        v = jl_ptr_to_array_1d(array_cdbl, array, n, 0);
    else
        v = jl_ptr_to_array_1d(array_dbl, array, n, 0);
    
    jl_function_t *function = jl_get_function(jl_main_module, "deepcopy");
    jl_value_t *var = jl_call1(function, (jl_value_t*) v);
    if (jl_exception_occurred()) {
        jl_call2(jl_get_function(jl_base_module, "showerror"),
                jl_stderr_obj(),
                jl_exception_occurred());
        jl_printf(jl_stderr_stream(), "\n");
        jl_exception_clear();
        return(0);
    }
    JL_GC_PUSH1(&var);
    jl_call3(setind, refs, var, jl_box_int64(index));
    JL_GC_POP();
    return(index);    
}

//////////////////////////////////////////////////////////
// Matrices

char*  jl_call_stringify_2dffunction(int64_t cplx, const char* function,
        const char* mime, float *array, int64_t m, int64_t n){
    char* nstr = "";
    
    jl_array_t *x; jl_value_t *ret;
    jl_value_t *mm = jl_eval_string(mime);
    jl_value_t *io = jl_call0(jl_get_function(jl_base_module, "IOBuffer"));

    char cdims[50];
    jl_array_t *mat;

    sprintf(cdims, "(%ld, %ld)", m, n);

    jl_value_t* dims = (jl_value_t *) jl_eval_string(cdims);
    if(cplx)
        mat = jl_ptr_to_array(array2_cflt, array, dims, 0);
    else
        mat = jl_ptr_to_array(array2_flt, array, dims, 0);

    jl_call3(jl_get_function(jl_main_module, function), io, 
        (jl_value_t *) jl_call1(MIME, mm), (jl_value_t*) mat);

    if (jl_exception_occurred()) {
        jl_call2(jl_get_function(jl_base_module, "showerror"),
                jl_stderr_obj(),
                jl_exception_occurred());
        jl_printf(jl_stderr_stream(), "\n");
        jl_exception_clear();
        return("");
    }

    ret = jl_call1(Stringify, jl_call1(jl_get_function(jl_main_module, "take!"), io));
    if (jl_exception_occurred()) {
        jl_call2(jl_get_function(jl_base_module, "showerror"),
                jl_stderr_obj(),
                jl_exception_occurred());
        jl_printf(jl_stderr_stream(), "\n");
        jl_exception_clear();
        return("");
    }
    return(jl_string_data(ret));
}

char*  jl_call_stringify_2dfunction(int64_t cplx, const char* function,
        const char* mime, double *array, int64_t m, int64_t n){
    char* nstr = "";
    
    jl_array_t *x; jl_value_t *ret;
    jl_value_t *mm = jl_eval_string(mime);
    jl_value_t *io = jl_call0(jl_get_function(jl_base_module, "IOBuffer"));

    char cdims[50];
    jl_array_t *mat;

    sprintf(cdims, "(%ld, %ld)", m, n);

    jl_value_t* dims = (jl_value_t *) jl_eval_string(cdims);
    if(cplx)
        mat = jl_ptr_to_array(array2_cdbl, array, dims, 0);
    else
        mat = jl_ptr_to_array(array2_dbl, array, dims, 0);

    jl_call3(jl_get_function(jl_main_module, function), io, 
        (jl_value_t *) jl_call1(MIME, mm), (jl_value_t*) mat);

    if (jl_exception_occurred()) {
        jl_call2(jl_get_function(jl_base_module, "showerror"),
                jl_stderr_obj(),
                jl_exception_occurred());
        jl_printf(jl_stderr_stream(), "\n");
        jl_exception_clear();
        return("");
    }

    ret = jl_call1(Stringify, jl_call1(jl_get_function(jl_main_module, "take!"), io));
    if (jl_exception_occurred()) {
        jl_call2(jl_get_function(jl_base_module, "showerror"),
                jl_stderr_obj(),
                jl_exception_occurred());
        jl_printf(jl_stderr_stream(), "\n");
        jl_exception_clear();
        return("");
    }
    return(jl_string_data(ret));
}

void jl_call_2dffunction(int64_t cplx, const char* func, 
    float *array, int64_t m, int64_t n){
    char cdims[50];
    jl_array_t *mat;

    sprintf(cdims, "(%ld, %ld)", m, n);
    jl_value_t* dims = (jl_value_t *) jl_eval_string(cdims);
    if(cplx)
        mat = jl_ptr_to_array(array2_cflt, array, dims, 0);
    else
        mat = jl_ptr_to_array(array2_flt, array, dims, 0);

    jl_function_t *function = jl_get_function(jl_main_module, func);
    jl_call1(function, (jl_value_t*)mat);

    if (jl_exception_occurred()) {
        jl_call2(jl_get_function(jl_base_module, "showerror"),
                jl_stderr_obj(),
                jl_exception_occurred());
        jl_printf(jl_stderr_stream(), "\n");
        jl_exception_clear();
        return;
    }
    return;
}

void jl_call_2dfunction(int64_t cplx, const char* func, 
    double *array, int64_t m, int64_t n){
    char cdims[50];
    jl_array_t *mat;

    sprintf(cdims, "(%ld, %ld)", m, n);
    jl_value_t* dims = (jl_value_t *) jl_eval_string(cdims);
    if(cplx)
        mat = jl_ptr_to_array(array2_cdbl, array, dims, 0);
    else
        mat = jl_ptr_to_array(array2_dbl, array, dims, 0);

    jl_function_t *function = jl_get_function(jl_main_module, func);
    jl_call1(function, (jl_value_t*)mat);

    if (jl_exception_occurred()) {
        jl_call2(jl_get_function(jl_base_module, "showerror"),
                jl_stderr_obj(),
                jl_exception_occurred());
        jl_printf(jl_stderr_stream(), "\n");
        jl_exception_clear();
        return;
    }
    return;
}

void jl_call_fsvd(int64_t cplx, const char* func,
            float *u, float *s, float *vt,
                float *array, int64_t m, int64_t n){
    char cdims[50];
    float *uref, *svref, *vtref;
    jl_array_t* mat;

    sprintf(cdims, "(%ld, %ld)", m, n);
    jl_value_t* dims = (jl_value_t *) jl_eval_string(cdims);
    if (cplx)
        mat = jl_ptr_to_array(array2_cflt, array, dims, 0);
    else
        mat = jl_ptr_to_array(array2_flt, array, dims, 0);
    jl_function_t *svd = jl_get_function(jl_main_module, func);
    jl_value_t *ret = jl_call1(svd, (jl_value_t*) mat);
    if (jl_exception_occurred()) {
        jl_call2(jl_get_function(jl_base_module, "showerror"),
                jl_stderr_obj(),
                jl_exception_occurred());
        jl_printf(jl_stderr_stream(), "\n");
        jl_exception_clear();
        return;
    }
    JL_GC_PUSH1(&ret);
    jl_array_t *jl_U = (jl_array_t*) (jl_fieldref(ret, 0));
    jl_array_t *jl_S = (jl_array_t*) (jl_fieldref(ret, 1));
    jl_array_t *jl_Vt = (jl_array_t*) (jl_fieldref(ret, 2));

#if JULIA_VERSION_MINOR > 10
    uref = (float*) jl_array_data(jl_U, float);
    svref = (float*) jl_array_data(jl_S, float);
    vtref = (float*) jl_array_data(jl_Vt, float);
#else
    uref = (float*) jl_array_data(jl_U);
    svref = (float*) jl_array_data(jl_S);
    vtref = (float*) jl_array_data(jl_Vt);
#endif

    if(cplx){
        memcpy(u, uref, jl_array_len(jl_U) * 2 * sizeof(float));
        memcpy(s, svref, jl_array_len(jl_S) * sizeof(float));
        memcpy(vt, vtref, jl_array_len(jl_Vt) * 2 * sizeof(float));
    }else{
        memcpy(u, uref, jl_array_len(jl_U) * sizeof(float));
        memcpy(s, svref, jl_array_len(jl_S) * sizeof(float));
        memcpy(vt, vtref, jl_array_len(jl_Vt) * sizeof(float));        
    }
    JL_GC_POP();
    return;
}

void jl_call_svd(int64_t cplx, const char* func,
            double *u, double *s, double *vt,
                double *array, int64_t m, int64_t n){
    char cdims[50];
    double *uref, *svref, *vtref;
    jl_array_t* mat;

    sprintf(cdims, "(%ld, %ld)", m, n);
    jl_value_t* dims = (jl_value_t *) jl_eval_string(cdims);
    if (cplx)
        mat = jl_ptr_to_array(array2_cdbl, array, dims, 0);
    else
        mat = jl_ptr_to_array(array2_dbl, array, dims, 0);
    jl_function_t *svd = jl_get_function(jl_main_module, func);
    jl_value_t *ret = jl_call1(svd, (jl_value_t*) mat);
    if (jl_exception_occurred()) {
        jl_call2(jl_get_function(jl_base_module, "showerror"),
                jl_stderr_obj(),
                jl_exception_occurred());
        jl_printf(jl_stderr_stream(), "\n");
        jl_exception_clear();
        return;
    }
    JL_GC_PUSH1(&ret);
    jl_array_t *jl_U = (jl_array_t*) (jl_fieldref(ret, 0));
    jl_array_t *jl_S = (jl_array_t*) (jl_fieldref(ret, 1));
    jl_array_t *jl_Vt = (jl_array_t*) (jl_fieldref(ret, 2));

#if JULIA_VERSION_MINOR > 10
    uref = (double*) jl_array_data(jl_U, double);
    svref = (double*) jl_array_data(jl_S, double);
    vtref = (double*) jl_array_data(jl_Vt, double);
#else
    uref = (double*) jl_array_data(jl_U);
    svref = (double*) jl_array_data(jl_S);
    vtref = (double*) jl_array_data(jl_Vt);
#endif

    if(cplx){
        memcpy(u, uref, jl_array_len(jl_U) * 2 * sizeof(double));
        memcpy(s, svref, jl_array_len(jl_S) * sizeof(double));
        memcpy(vt, vtref, jl_array_len(jl_Vt) * 2 * sizeof(double));
    }else{
        memcpy(u, uref, jl_array_len(jl_U) * sizeof(double));
        memcpy(s, svref, jl_array_len(jl_S) * sizeof(double));
        memcpy(vt, vtref, jl_array_len(jl_Vt) * sizeof(double));        
    }
    JL_GC_POP();
    return;
}

void jl_call_feigen(int64_t cplx, const char* func, float *val, float *vec,
                    float *array, int64_t m, int64_t n){
    char cdims[50];
    float *valref, *vecref;
    jl_array_t* mat;

    sprintf(cdims, "(%ld, %ld)", m, n);
    jl_value_t* dims = (jl_value_t *) jl_eval_string(cdims);
    if(cplx)
        mat = jl_ptr_to_array(array2_cflt, array, dims, 0);
    else
        mat = jl_ptr_to_array(array2_flt, array, dims, 0);

    jl_function_t *eigen = jl_get_function(jl_main_module, func);
    jl_value_t *ret = jl_call1(eigen, (jl_value_t*) mat);
    if (jl_exception_occurred()) {
        jl_call2(jl_get_function(jl_base_module, "showerror"),
                jl_stderr_obj(),
                jl_exception_occurred());
        jl_printf(jl_stderr_stream(), "\n");
        jl_exception_clear();
        return;
    }
    JL_GC_PUSH1(&ret);
    jl_array_t *jl_values = (jl_array_t*) (jl_fieldref(ret, 0));
    jl_array_t *jl_vectors = (jl_array_t*) (jl_fieldref(ret, 1));

#if JULIA_VERSION_MINOR > 10
    valref = (float*) jl_array_data(jl_values, float);
    vecref = (float*) jl_array_data(jl_vectors, float);
#else
    valref = (float*) jl_array_data(jl_values);
    vecref = (float*) jl_array_data(jl_vectors);
#endif


    if (cplx || !strncmp(jl_typename_str(jl_array_eltype((jl_value_t *) jl_values)),
                        "Complex", 7)){
        memcpy(val, valref, jl_array_len(jl_values) * 2 * sizeof(float));
        memcpy(vec, vecref, jl_array_len(jl_vectors) * 2 * sizeof(float));
    }
    else{
        // Not complex
        for(size_t i=0; i < jl_array_len(jl_values); i++)
            val[2*i] = valref[i];
        for(size_t i=0; i < jl_array_len(jl_vectors); i++)
            vec[2*i] = vecref[i];
    }
    JL_GC_POP();
    return;
}

void jl_call_eigen(int64_t cplx, const char* func, double *val, double *vec,
                    double *array, int64_t m, int64_t n){
    char cdims[50];
    double *valref, *vecref;
    jl_array_t* mat;

    sprintf(cdims, "(%ld, %ld)", m, n);
    jl_value_t* dims = (jl_value_t *) jl_eval_string(cdims);
    if(cplx)
        mat = jl_ptr_to_array(array2_cdbl, array, dims, 0);
    else
        mat = jl_ptr_to_array(array2_dbl, array, dims, 0);

    jl_function_t *eigen = jl_get_function(jl_main_module, func);
    jl_value_t *ret = jl_call1(eigen, (jl_value_t*) mat);
    if (jl_exception_occurred()) {
        jl_call2(jl_get_function(jl_base_module, "showerror"),
                jl_stderr_obj(),
                jl_exception_occurred());
        jl_printf(jl_stderr_stream(), "\n");
        jl_exception_clear();
        return;
    }
    JL_GC_PUSH1(&ret);
    jl_array_t *jl_values = (jl_array_t*) (jl_fieldref(ret, 0));
    jl_array_t *jl_vectors = (jl_array_t*) (jl_fieldref(ret, 1));

#if JULIA_VERSION_MINOR > 10
    valref = (double*) jl_array_data(jl_values, double);
    vecref = (double*) jl_array_data(jl_vectors, double);
#else
    valref = (double*) jl_array_data(jl_values);
    vecref = (double*) jl_array_data(jl_vectors);
#endif


    if (cplx || !strncmp(jl_typename_str(jl_array_eltype((jl_value_t *) jl_values)),
                        "Complex", 7)){
        memcpy(val, valref, jl_array_len(jl_values) * 2 * sizeof(double));
        memcpy(vec, vecref, jl_array_len(jl_vectors) * 2 * sizeof(double));
    }
    else{
        // Not complex
        for(size_t i=0; i < jl_array_len(jl_values); i++)
            val[2*i] = valref[i];
        for(size_t i=0; i < jl_array_len(jl_vectors); i++)
            vec[2*i] = vecref[i];
    }
    JL_GC_POP();
    return;
}

void jl_call_feigen_system(int64_t cplx, char* func, float *val,
                float *lvec, float *rvec, float *array, int64_t m, int64_t n){
    char cdims[50];
    jl_array_t* mat;

    sprintf(cdims, "(%ld, %ld)", m, n);
    jl_value_t* dims = (jl_value_t *) jl_eval_string(cdims);

    if(cplx)
        mat = jl_ptr_to_array(array2_cflt, array, dims, 0);
    else
        mat = jl_ptr_to_array(array2_flt, array, dims, 0);

    jl_function_t *eigens = jl_get_function(jl_main_module, func);
    jl_value_t *ret = jl_call3(eigens, V, V, (jl_value_t*) mat);

    if (jl_exception_occurred()) {
        jl_call2(jl_get_function(jl_base_module, "showerror"),
                jl_stderr_obj(),
                jl_exception_occurred());
        jl_printf(jl_stderr_stream(), "\n");
        jl_exception_clear();
        return;
    }

    JL_GC_PUSH1(&ret);
    if (cplx){
        float *valref, *lvecref, *rvecref;
        jl_array_t *W = (jl_array_t*) (jl_fieldref(ret, 0));
        jl_array_t *VL = (jl_array_t*) (jl_fieldref(ret, 1));
        jl_array_t *VR = (jl_array_t*) (jl_fieldref(ret, 2));

#if JULIA_VERSION_MINOR > 10
        valref = (float*) jl_array_data(W, float);
        lvecref = (float*) jl_array_data(VL, float);
        rvecref = (float*) jl_array_data(VR, float);
#else
        valref = (float*) jl_array_data(W);
        lvecref = (float*) jl_array_data(VL);
        rvecref = (float*) jl_array_data(VR);
#endif
        memcpy(val, valref, jl_array_len(W) * 2 * sizeof(float));
        memcpy(lvec, lvecref, jl_array_len(VL) * 2 * sizeof(float));
        memcpy(rvec, rvecref, jl_array_len(VL) * 2 * sizeof(float));
    }
    else{
        float *rvalref, *ivalref, *lvecref, *rvecref;
        jl_array_t *RW = (jl_array_t*) (jl_fieldref(ret, 0));
        jl_array_t *IW = (jl_array_t*) (jl_fieldref(ret, 1));
        jl_array_t *VL = (jl_array_t*) (jl_fieldref(ret, 2));
        jl_array_t *VR = (jl_array_t*) (jl_fieldref(ret, 3));

#if JULIA_VERSION_MINOR > 10
        rvalref = (float*) jl_array_data(RW, float);
        ivalref = (float*) jl_array_data(IW, float);
        lvecref = (float*) jl_array_data(VL, float);
        rvecref = (float*) jl_array_data(VR, float);
#else
        rvalref = (float*) jl_array_data(RW);
        ivalref = (float*) jl_array_data(IW);
        lvecref = (float*) jl_array_data(VL);
        rvecref = (float*) jl_array_data(VR);
#endif

        for(size_t i=0; i < jl_array_len(RW); i++){
            val[2*i] = rvalref[i];
            val[2*i+1] = ivalref[i];

        }
        memcpy(lvec, lvecref, jl_array_len(VL) * sizeof(float));
        memcpy(rvec, rvecref, jl_array_len(VL) * sizeof(float));
    }

    JL_GC_POP();
    return;
}

void jl_call_eigen_system(int64_t cplx, char* func, double *val,
                double *lvec, double *rvec, double *array, int64_t m, int64_t n){
    char cdims[50];
    jl_array_t* mat;

    sprintf(cdims, "(%ld, %ld)", m, n);
    jl_value_t* dims = (jl_value_t *) jl_eval_string(cdims);

    if(cplx)
        mat = jl_ptr_to_array(array2_cdbl, array, dims, 0);
    else
        mat = jl_ptr_to_array(array2_dbl, array, dims, 0);

    jl_function_t *eigens = jl_get_function(jl_main_module, func);
    jl_value_t *ret = jl_call3(eigens, V, V, (jl_value_t*) mat);

    if (jl_exception_occurred()) {
        jl_call2(jl_get_function(jl_base_module, "showerror"),
                jl_stderr_obj(),
                jl_exception_occurred());
        jl_printf(jl_stderr_stream(), "\n");
        jl_exception_clear();
        return;
    }

    JL_GC_PUSH1(&ret);
    if (cplx){
        double *valref, *lvecref, *rvecref;
        jl_array_t *W = (jl_array_t*) (jl_fieldref(ret, 0));
        jl_array_t *VL = (jl_array_t*) (jl_fieldref(ret, 1));
        jl_array_t *VR = (jl_array_t*) (jl_fieldref(ret, 2));

#if JULIA_VERSION_MINOR > 10
        valref = (double*) jl_array_data(W, double);
        lvecref = (double*) jl_array_data(VL, double);
        rvecref = (double*) jl_array_data(VR, double);
#else
        valref = (double*) jl_array_data(W);
        lvecref = (double*) jl_array_data(VL);
        rvecref = (double*) jl_array_data(VR);
#endif
        memcpy(val, valref, jl_array_len(W) * 2 * sizeof(double));
        memcpy(lvec, lvecref, jl_array_len(VL) * 2 * sizeof(double));
        memcpy(rvec, rvecref, jl_array_len(VL) * 2 * sizeof(double));
    }
    else{
        double *rvalref, *ivalref, *lvecref, *rvecref;
        jl_array_t *RW = (jl_array_t*) (jl_fieldref(ret, 0));
        jl_array_t *IW = (jl_array_t*) (jl_fieldref(ret, 1));
        jl_array_t *VL = (jl_array_t*) (jl_fieldref(ret, 2));
        jl_array_t *VR = (jl_array_t*) (jl_fieldref(ret, 3));

#if JULIA_VERSION_MINOR > 10
        rvalref = (double*) jl_array_data(RW, double);
        ivalref = (double*) jl_array_data(IW, double);
        lvecref = (double*) jl_array_data(VL, double);
        rvecref = (double*) jl_array_data(VR, double);
#else
        rvalref = (double*) jl_array_data(RW);
        ivalref = (double*) jl_array_data(IW);
        lvecref = (double*) jl_array_data(VL);
        rvecref = (double*) jl_array_data(VR);
#endif

        for(size_t i=0; i < jl_array_len(RW); i++){
            val[2*i] = rvalref[i];
            val[2*i+1] = ivalref[i];

        }
        memcpy(lvec, lvecref, jl_array_len(VL) * sizeof(double));
        memcpy(rvec, rvecref, jl_array_len(VL) * sizeof(double));
    }

    JL_GC_POP();
    return;
}

int8_t jl_call_bool_2dffunction(int64_t cplx, const char* func,
            float *array, int64_t m, int64_t n){
    char cdims[50];
    jl_array_t *mat;

    sprintf(cdims, "(%ld, %ld)", m, n);
    jl_value_t* dims = (jl_value_t *) jl_eval_string(cdims);

    if(cplx)
        mat = jl_ptr_to_array(array2_cflt, array, dims, 0);
    else
        mat = jl_ptr_to_array(array2_flt, array, dims, 0);

    jl_function_t *function = jl_get_function(jl_main_module, func);
    jl_value_t* ret = jl_call1(function, (jl_value_t*)mat);

    if (jl_exception_occurred()) {
        jl_call2(jl_get_function(jl_base_module, "showerror"),
                jl_stderr_obj(),
                jl_exception_occurred());
        jl_printf(jl_stderr_stream(), "\n");
        jl_exception_clear();
        return(-1);
    }
    return jl_unbox_bool(ret);
}

int8_t jl_call_bool_2dfunction(int64_t cplx, const char* func,
            double *array, int64_t m, int64_t n){
    char cdims[50];
    jl_array_t *mat;

    sprintf(cdims, "(%ld, %ld)", m, n);
    jl_value_t* dims = (jl_value_t *) jl_eval_string(cdims);

    if(cplx)
        mat = jl_ptr_to_array(array2_cdbl, array, dims, 0);
    else
        mat = jl_ptr_to_array(array2_dbl, array, dims, 0);

    jl_function_t *function = jl_get_function(jl_main_module, func);
    jl_value_t* ret = jl_call1(function, (jl_value_t*)mat);

    if (jl_exception_occurred()) {
        jl_call2(jl_get_function(jl_base_module, "showerror"),
                jl_stderr_obj(),
                jl_exception_occurred());
        jl_printf(jl_stderr_stream(), "\n");
        jl_exception_clear();
        return(-1);
    }
    return jl_unbox_bool(ret);
}

float jl_call_flt_2dffunction(int64_t cplx, const char* func, float *array,
        int64_t m, int64_t n){
    char cdims[50];
    jl_array_t *mat;

    sprintf(cdims, "(%ld, %ld)", m, n);
    jl_value_t* dims = (jl_value_t *) jl_eval_string(cdims);
    if (cplx)
        mat = jl_ptr_to_array(array2_cflt, array, dims, 0);
    else
        mat = jl_ptr_to_array(array2_flt, array, dims, 0);

    jl_function_t *function = jl_get_function(jl_main_module, func);
    jl_value_t* ret = jl_call1(function, (jl_value_t*)mat);

    if (jl_exception_occurred()) {
        jl_call2(jl_get_function(jl_base_module, "showerror"),
                jl_stderr_obj(),
                jl_exception_occurred());
        jl_printf(jl_stderr_stream(), "\n");
        jl_exception_clear();
        return NAN;
    }
    return jl_unbox_float32(ret);
}

double jl_call_dbl_2dfunction(int64_t cplx, const char* func, double *array,
        int64_t m, int64_t n){
    char cdims[50];
    jl_array_t *mat;

    sprintf(cdims, "(%ld, %ld)", m, n);
    jl_value_t* dims = (jl_value_t *) jl_eval_string(cdims);
    if (cplx)
        mat = jl_ptr_to_array(array2_cdbl, array, dims, 0);
    else
        mat = jl_ptr_to_array(array2_dbl, array, dims, 0);

    jl_function_t *function = jl_get_function(jl_main_module, func);
    jl_value_t* ret = jl_call1(function, (jl_value_t*)mat);

    if (jl_exception_occurred()) {
        jl_call2(jl_get_function(jl_base_module, "showerror"),
                jl_stderr_obj(),
                jl_exception_occurred());
        jl_printf(jl_stderr_stream(), "\n");
        jl_exception_clear();
        return NAN;
    }
    return jl_unbox_float64(ret);
}

float jl_call_flt_2dffunction_flt(int64_t cplx, const char* func, float *array,
        int64_t m, int64_t n, float val){
    char cdims[50];
    jl_array_t *mat;

    sprintf(cdims, "(%ld, %ld)", m, n);
    jl_value_t* dims = (jl_value_t *) jl_eval_string(cdims);
    if (cplx)
        mat = jl_ptr_to_array(array2_cflt, array, dims, 0);
    else
        mat = jl_ptr_to_array(array2_flt, array, dims, 0);

    jl_function_t *function = jl_get_function(jl_main_module, func);
    jl_value_t* ret = jl_call2(function, (jl_value_t*)mat, jl_box_float32(val));

    if (jl_exception_occurred()) {
        jl_call2(jl_get_function(jl_base_module, "showerror"),
                jl_stderr_obj(),
                jl_exception_occurred());
        jl_printf(jl_stderr_stream(), "\n");
        jl_exception_clear();
        return NAN;
    }
    return jl_unbox_float32(ret);
}

double jl_call_dbl_2dfunction_dbl(int64_t cplx, const char* func, double *array,
        int64_t m, int64_t n, double val){
    char cdims[50];
    jl_array_t *mat;

    sprintf(cdims, "(%ld, %ld)", m, n);
    jl_value_t* dims = (jl_value_t *) jl_eval_string(cdims);
    if (cplx)
        mat = jl_ptr_to_array(array2_cdbl, array, dims, 0);
    else
        mat = jl_ptr_to_array(array2_dbl, array, dims, 0);

    jl_function_t *function = jl_get_function(jl_main_module, func);
    jl_value_t* ret = jl_call2(function, (jl_value_t*)mat, jl_box_float64(val));

    if (jl_exception_occurred()) {
        jl_call2(jl_get_function(jl_base_module, "showerror"),
                jl_stderr_obj(),
                jl_exception_occurred());
        jl_printf(jl_stderr_stream(), "\n");
        jl_exception_clear();
        return NAN;
    }
    return jl_unbox_float64(ret);
}

void jl_call_iarray_2dffunction(int64_t cplx, const char* func, int64_t *ip,
        float *array, int64_t m, int64_t n){
    int64_t *iptmp;
    char cdims[50];
    jl_array_t *mat;

    sprintf(cdims, "(%ld, %ld)", m, n);
    jl_value_t* dims = (jl_value_t *) jl_eval_string(cdims);
    if (cplx)
        mat = jl_ptr_to_array(array2_cflt, array, dims, 0);
    else
        mat = jl_ptr_to_array(array2_flt, array, dims, 0);

    jl_function_t *function = jl_get_function(jl_main_module, func);

    jl_value_t* ret =  jl_call1(function, (jl_value_t*) mat);
    if (jl_exception_occurred()) {
        jl_call2(jl_get_function(jl_base_module, "showerror"),
            jl_stderr_obj(),
            jl_exception_occurred());
        jl_printf(jl_stderr_stream(), "\n");
        jl_exception_clear();
        return;
    }
    JL_GC_PUSH1(&ret);
    jl_array_t *ipiv = (jl_array_t*) (jl_fieldref(ret, 1));

#if JULIA_VERSION_MINOR > 10
    iptmp = (int64_t *) jl_array_data(ipiv, int64_t);
#else
    iptmp = (int64_t *) jl_array_data(ipiv);
#endif

    memcpy(ip, iptmp, jl_array_len(ipiv) * sizeof(int64_t));
    JL_GC_POP();
    return;
}

void jl_call_iarray_2dfunction(int64_t cplx, const char* func, int64_t *ip,
        double *array, int64_t m, int64_t n){
    int64_t *iptmp;
    char cdims[50];
    jl_array_t *mat;

    sprintf(cdims, "(%ld, %ld)", m, n);
    jl_value_t* dims = (jl_value_t *) jl_eval_string(cdims);
    if (cplx)
        mat = jl_ptr_to_array(array2_cdbl, array, dims, 0);
    else
        mat = jl_ptr_to_array(array2_dbl, array, dims, 0);

    jl_function_t *function = jl_get_function(jl_main_module, func);

    jl_value_t* ret =  jl_call1(function, (jl_value_t*) mat);
    if (jl_exception_occurred()) {
        jl_call2(jl_get_function(jl_base_module, "showerror"),
            jl_stderr_obj(),
            jl_exception_occurred());
        jl_printf(jl_stderr_stream(), "\n");
        jl_exception_clear();
        return;
    }
    JL_GC_PUSH1(&ret);
    jl_array_t *ipiv = (jl_array_t*) (jl_fieldref(ret, 1));

#if JULIA_VERSION_MINOR > 10
    iptmp = (int64_t *) jl_array_data(ipiv, int64_t);
#else
    iptmp = (int64_t *) jl_array_data(ipiv);
#endif

    memcpy(ip, iptmp, jl_array_len(ipiv) * sizeof(int64_t));
    JL_GC_POP();
    return;
}

void jl_call_2d2ffunction(int64_t cplx, const char* func, float *array,
        int64_t m, int64_t n, float *array1, int64_t o, int64_t p){
    char cdims[50];
    jl_array_t *mat, *mat1;

    sprintf(cdims, "(%ld, %ld)", m, n);
    jl_value_t* dims = (jl_value_t *) jl_eval_string(cdims);
    sprintf(cdims, "(%ld, %ld)", o, p);
    jl_value_t* dims1 = (jl_value_t *) jl_eval_string(cdims);
 
    if(cplx){
        mat = jl_ptr_to_array(array2_cflt, array, dims, 0);
        mat1 = jl_ptr_to_array(array2_cflt, array1, dims1, 0);
    }
    else{
        mat = jl_ptr_to_array(array2_flt, array, dims, 0);
        mat1 = jl_ptr_to_array(array2_flt, array1, dims1, 0);
    }

    jl_function_t *function = jl_get_function(jl_main_module, func);
    jl_call2(function, (jl_value_t*)mat, (jl_value_t*)mat1);

    if (jl_exception_occurred()) {
        jl_call2(jl_get_function(jl_base_module, "showerror"),
            jl_stderr_obj(),
            jl_exception_occurred());
        jl_printf(jl_stderr_stream(), "\n");
        jl_exception_clear();
        return;
    }
    return;
}

void jl_call_2d2function(int64_t cplx, const char* func, double *array,
        int64_t m, int64_t n, double *array1, int64_t o, int64_t p){
    char cdims[50];
    jl_array_t *mat, *mat1;

    sprintf(cdims, "(%ld, %ld)", m, n);
    jl_value_t* dims = (jl_value_t *) jl_eval_string(cdims);
    sprintf(cdims, "(%ld, %ld)", o, p);
    jl_value_t* dims1 = (jl_value_t *) jl_eval_string(cdims);
 
    if(cplx){
        mat = jl_ptr_to_array(array2_cdbl, array, dims, 0);
        mat1 = jl_ptr_to_array(array2_cdbl, array1, dims1, 0);
    }
    else{
        mat = jl_ptr_to_array(array2_dbl, array, dims, 0);
        mat1 = jl_ptr_to_array(array2_dbl, array1, dims1, 0);
    }

    jl_function_t *function = jl_get_function(jl_main_module, func);
    jl_call2(function, (jl_value_t*)mat, (jl_value_t*)mat1);

    if (jl_exception_occurred()) {
        jl_call2(jl_get_function(jl_base_module, "showerror"),
            jl_stderr_obj(),
            jl_exception_occurred());
        jl_printf(jl_stderr_stream(), "\n");
        jl_exception_clear();
        return;
    }
    return;
}

int64_t jl_call_wrap_2dfarray(int64_t cplx, int64_t index, float *array, int64_t m, int64_t n)
{
    char cdims[50];
    jl_array_t *mat;

    sprintf(cdims, "(%ld, %ld)", m, n);
    jl_value_t* dims = (jl_value_t *) jl_eval_string(cdims);

    if(cplx)
        mat = jl_ptr_to_array(array2_cflt, array, dims, 0);
    else
        mat = jl_ptr_to_array(array2_flt, array, dims, 0);

    jl_function_t *function = jl_get_function(jl_main_module, "deepcopy");
    jl_value_t *var = jl_call1(function, (jl_value_t*) mat);

    if (jl_exception_occurred()) {
        jl_call2(jl_get_function(jl_base_module, "showerror"),
                jl_stderr_obj(),
                jl_exception_occurred());
        jl_printf(jl_stderr_stream(), "\n");
        jl_exception_clear();
        return(0);
    }

    JL_GC_PUSH1(&var);
    jl_call3(setind, refs, var, jl_box_int64(index));
    JL_GC_POP();
    return(index);    
}

int64_t jl_call_wrap_2darray(int64_t cplx, int64_t index, double *array, int64_t m, int64_t n)
{
    char cdims[50];
    jl_array_t *mat;

    sprintf(cdims, "(%ld, %ld)", m, n);
    jl_value_t* dims = (jl_value_t *) jl_eval_string(cdims);

    if(cplx)
        mat = jl_ptr_to_array(array2_cdbl, array, dims, 0);
    else
        mat = jl_ptr_to_array(array2_dbl, array, dims, 0);

    jl_function_t *function = jl_get_function(jl_main_module, "deepcopy");
    jl_value_t *var = jl_call1(function, (jl_value_t*) mat);

    if (jl_exception_occurred()) {
        jl_call2(jl_get_function(jl_base_module, "showerror"),
                jl_stderr_obj(),
                jl_exception_occurred());
        jl_printf(jl_stderr_stream(), "\n");
        jl_exception_clear();
        return(0);
    }

    JL_GC_PUSH1(&var);
    jl_call3(setind, refs, var, jl_box_int64(index));
    JL_GC_POP();
    return(index);    
}

int8_t jl_call_bool_2d2ffunction(int64_t cplx, const char* func,
            float *array, int64_t m, int64_t n,
            float *array1, int64_t o, int64_t p){
    char cdims[50];
    jl_array_t *mat, *mat1;

    sprintf(cdims, "(%ld, %ld)", m, n);
    jl_value_t* dims = (jl_value_t *) jl_eval_string(cdims);
    sprintf(cdims, "(%ld, %ld)", o, p);
    jl_value_t* dims1 = (jl_value_t *) jl_eval_string(cdims);

    if(cplx){
        mat = jl_ptr_to_array(array2_cflt, array, dims, 0);
        mat1 = jl_ptr_to_array(array2_cflt, array1, dims1, 0);  
    }
    else{
        mat = jl_ptr_to_array(array2_flt, array, dims, 0);
        mat1 = jl_ptr_to_array(array2_flt, array1, dims1, 0);        
    }

    jl_function_t *function = jl_get_function(jl_main_module, func);
    jl_value_t* ret = jl_call2(function, (jl_value_t*)mat, (jl_value_t*)mat1);

    if (jl_exception_occurred()) {
        jl_call2(jl_get_function(jl_base_module, "showerror"),
                jl_stderr_obj(),
                jl_exception_occurred());
        jl_printf(jl_stderr_stream(), "\n");
        jl_exception_clear();
        return(-1);
    }
    return jl_unbox_bool(ret);
}

int8_t jl_call_bool_2d2function(int64_t cplx, const char* func,
            double *array, int64_t m, int64_t n,
            double *array1, int64_t o, int64_t p){
    char cdims[50];
    jl_array_t *mat, *mat1;

    sprintf(cdims, "(%ld, %ld)", m, n);
    jl_value_t* dims = (jl_value_t *) jl_eval_string(cdims);
    sprintf(cdims, "(%ld, %ld)", o, p);
    jl_value_t* dims1 = (jl_value_t *) jl_eval_string(cdims);

    if(cplx){
        mat = jl_ptr_to_array(array2_cdbl, array, dims, 0);
        mat1 = jl_ptr_to_array(array2_cdbl, array1, dims1, 0);  
    }
    else{
        mat = jl_ptr_to_array(array2_dbl, array, dims, 0);
        mat1 = jl_ptr_to_array(array2_dbl, array1, dims1, 0);        
    }

    jl_function_t *function = jl_get_function(jl_main_module, func);
    jl_value_t* ret = jl_call2(function, (jl_value_t*)mat, (jl_value_t*)mat1);

    if (jl_exception_occurred()) {
        jl_call2(jl_get_function(jl_base_module, "showerror"),
                jl_stderr_obj(),
                jl_exception_occurred());
        jl_printf(jl_stderr_stream(), "\n");
        jl_exception_clear();
        return(-1);
    }
    return jl_unbox_bool(ret);
}

void jl_call_2d3ffunction(int64_t cplx, const char* func, float *array,
        int64_t m, int64_t n, float *array1, int64_t o, int64_t p,
        float *array2, int64_t q, int64_t r){
    char cdims[50];
    jl_array_t *mat, *mat1, *mat2;
    sprintf(cdims, "(%ld, %ld)", m, n);
    jl_value_t* dims = (jl_value_t *) jl_eval_string(cdims);
    sprintf(cdims, "(%ld, %ld)", o, p);
    jl_value_t* dims1 = (jl_value_t *) jl_eval_string(cdims);
    sprintf(cdims, "(%ld, %ld)", q, r);
    jl_value_t* dims2 = (jl_value_t *) jl_eval_string(cdims);

    if (cplx){
        mat = jl_ptr_to_array(array2_cflt, array, dims, 0);
        mat1 = jl_ptr_to_array(array2_cflt, array1, dims1, 0);
        mat2 = jl_ptr_to_array(array2_cflt, array2, dims2, 0);
    }
    else{
        mat = jl_ptr_to_array(array2_flt, array, dims, 0);
        mat1 = jl_ptr_to_array(array2_flt, array1, dims1, 0);
        mat2 = jl_ptr_to_array(array2_flt, array2, dims2, 0);
    }

    jl_function_t *function = jl_get_function(jl_main_module, func);
    jl_call3(function, (jl_value_t*)mat, (jl_value_t*)mat1, (jl_value_t*)mat2);

    if (jl_exception_occurred()) {
        jl_call2(jl_get_function(jl_base_module, "showerror"),
                jl_stderr_obj(),
                jl_exception_occurred());
        jl_printf(jl_stderr_stream(), "\n");
        jl_exception_clear();
        return;
    }
    return;
}

void jl_call_2d3function(int64_t cplx, const char* func, double *array,
        int64_t m, int64_t n, double *array1, int64_t o, int64_t p,
        double *array2, int64_t q, int64_t r){
    char cdims[50];
    jl_array_t *mat, *mat1, *mat2;
    sprintf(cdims, "(%ld, %ld)", m, n);
    jl_value_t* dims = (jl_value_t *) jl_eval_string(cdims);
    sprintf(cdims, "(%ld, %ld)", o, p);
    jl_value_t* dims1 = (jl_value_t *) jl_eval_string(cdims);
    sprintf(cdims, "(%ld, %ld)", q, r);
    jl_value_t* dims2 = (jl_value_t *) jl_eval_string(cdims);

    if (cplx){
        mat = jl_ptr_to_array(array2_cdbl, array, dims, 0);
        mat1 = jl_ptr_to_array(array2_cdbl, array1, dims1, 0);
        mat2 = jl_ptr_to_array(array2_cdbl, array2, dims2, 0);
    }
    else{
        mat = jl_ptr_to_array(array2_dbl, array, dims, 0);
        mat1 = jl_ptr_to_array(array2_dbl, array1, dims1, 0);
        mat2 = jl_ptr_to_array(array2_dbl, array2, dims2, 0);
    }

    jl_function_t *function = jl_get_function(jl_main_module, func);
    jl_call3(function, (jl_value_t*)mat, (jl_value_t*)mat1, (jl_value_t*)mat2);

    if (jl_exception_occurred()) {
        jl_call2(jl_get_function(jl_base_module, "showerror"),
                jl_stderr_obj(),
                jl_exception_occurred());
        jl_printf(jl_stderr_stream(), "\n");
        jl_exception_clear();
        return;
    }
    return;
}

void jl_call_2v2dffunction(const char* func, int64_t size,
            float *vec1, float *vec2, float *array, int64_t m, int64_t n){
    char cdims[50];
    sprintf(cdims, "(%ld, %ld)", m, n);
    jl_value_t* dims = (jl_value_t *) jl_eval_string(cdims);
  
    jl_array_t *v1 = jl_ptr_to_array_1d(array_flt, vec1, size, 0);
    jl_array_t *v2 = jl_ptr_to_array_1d(array_flt, vec2, size, 0);    
    jl_array_t *mat = jl_ptr_to_array(array2_flt, array, dims, 0);

    jl_function_t *function = jl_get_function(jl_main_module, func);
    jl_call3(function, (jl_value_t*)v1, (jl_value_t*)v2, (jl_value_t*)mat);

    if (jl_exception_occurred()) {
        jl_call2(jl_get_function(jl_base_module, "showerror"),
                jl_stderr_obj(),
                jl_exception_occurred());
        jl_printf(jl_stderr_stream(), "\n");
        jl_exception_clear();
        return;
    }
    return;
}

void jl_call_2v2dfunction(const char* func, int64_t size,
            double *vec1, double *vec2, double *array, int64_t m, int64_t n){
    char cdims[50];
    sprintf(cdims, "(%ld, %ld)", m, n);
    jl_value_t* dims = (jl_value_t *) jl_eval_string(cdims);

    jl_array_t *v1 = jl_ptr_to_array_1d(array_dbl, vec1, size, 0);
    jl_array_t *v2 = jl_ptr_to_array_1d(array_dbl, vec2, size, 0);    
    jl_array_t *mat = jl_ptr_to_array(array2_dbl, array, dims, 0);

    jl_function_t *function = jl_get_function(jl_main_module, func);
    jl_call3(function, (jl_value_t*)v1, (jl_value_t*)v2, (jl_value_t*)mat);

    if (jl_exception_occurred()) {
        jl_call2(jl_get_function(jl_base_module, "showerror"),
                jl_stderr_obj(),
                jl_exception_occurred());
        jl_printf(jl_stderr_stream(), "\n");
        jl_exception_clear();
        return;
    }
    return;
}

void jl_call_array_2dffunction(int64_t acplx, int64_t cplx,
            char* func, float *arr, float *array, int64_t m, int64_t n){
    char cdims[50];
    float *svref;
    jl_array_t *mat;

    sprintf(cdims, "(%ld, %ld)", m, n);
    jl_value_t* dims = (jl_value_t *) jl_eval_string(cdims);
    if (cplx)
        mat = jl_ptr_to_array(array2_cflt, array, dims, 0);
    else
        mat = jl_ptr_to_array(array2_flt, array, dims, 0);
    jl_function_t *function = jl_get_function(jl_main_module, func);
    jl_array_t *ret = (jl_array_t*) jl_call1(function, (jl_value_t*) mat);
    if (jl_exception_occurred()) {
        jl_call2(jl_get_function(jl_base_module, "showerror"),
                jl_stderr_obj(),
                jl_exception_occurred());
        jl_printf(jl_stderr_stream(), "\n");
        jl_exception_clear();
        return;
    }
    JL_GC_PUSH1(&ret);

#if JULIA_VERSION_MINOR > 10
    svref = (float*) jl_array_data(ret, float);
#else
    svref = (float*) jl_array_data(ret);
#endif

    if (acplx && !strncmp(jl_typename_str(jl_array_eltype((jl_value_t *) ret)),
            "Complex", 7)){
        memcpy(arr, svref, jl_array_len(ret) * 2 * sizeof(float));
    }
    else if (acplx){
        // ret is not a complex array but arr is
        for(size_t i=0; i < jl_array_len(ret); i++)
            arr[2*i] = svref[i];
    }
    else{
        // real array
        memcpy(arr, svref, jl_array_len(ret) * sizeof(float));
    }
    JL_GC_POP();
    return;
}

void jl_call_array_2dfunction(int64_t acplx, int64_t cplx,
            char* func, double *arr, double *array, int64_t m, int64_t n){
    char cdims[50];
    double *svref;
    jl_array_t *mat;

    sprintf(cdims, "(%ld, %ld)", m, n);
    jl_value_t* dims = (jl_value_t *) jl_eval_string(cdims);
    if (cplx)
        mat = jl_ptr_to_array(array2_cdbl, array, dims, 0);
    else
        mat = jl_ptr_to_array(array2_dbl, array, dims, 0);
    jl_function_t *function = jl_get_function(jl_main_module, func);
    jl_array_t *ret = (jl_array_t*) jl_call1(function, (jl_value_t*) mat);
    if (jl_exception_occurred()) {
        jl_call2(jl_get_function(jl_base_module, "showerror"),
                jl_stderr_obj(),
                jl_exception_occurred());
        jl_printf(jl_stderr_stream(), "\n");
        jl_exception_clear();
        return;
    }
    JL_GC_PUSH1(&ret);

#if JULIA_VERSION_MINOR > 10
    svref = (double*) jl_array_data(ret, double);
#else
    svref = (double*) jl_array_data(ret);
#endif

    if (acplx && !strncmp(jl_typename_str(jl_array_eltype((jl_value_t *) ret)),
            "Complex", 7)){
        memcpy(arr, svref, jl_array_len(ret) * 2 * sizeof(double));
    }
    else if (acplx){
        // ret is not a complex array but arr is
        for(size_t i=0; i < jl_array_len(ret); i++)
            arr[2*i] = svref[i];
    }
    else{
        // real array
        memcpy(arr, svref, jl_array_len(ret) * sizeof(double));
    }
    JL_GC_POP();
    return;
}

/*
void jl_add_module(char *module){
    jl_module_using(jl_main_module, jl_new_module(jl_symbol(module)));
}
*/

void jl_init_env(void){
    jl_options.handle_signals = JL_OPTIONS_HANDLE_SIGNALS_OFF;
    jl_init();
    jl_complex32_type = (jl_value_t *) jl_eval_string("ComplexF32");
    jl_complex64_type = (jl_value_t *) jl_eval_string("ComplexF64");

    refs = (jl_value_t *) jl_eval_string("refs = IdDict{Int64, Any}()");
    V = (jl_value_t *) jl_eval_string("'V'");
    array_int64 = jl_apply_array_type((jl_value_t*) jl_int64_type, 1);
    array_dbl = jl_apply_array_type((jl_value_t*) jl_float64_type, 1);
    array_cdbl = jl_apply_array_type(jl_complex64_type, 1);
    array_flt = jl_apply_array_type((jl_value_t*) jl_float32_type, 1);
    array_cflt = jl_apply_array_type(jl_complex32_type, 1);
    array2_flt = jl_apply_array_type((jl_value_t*)jl_float32_type, 2);
    array2_cflt = jl_apply_array_type(jl_complex32_type, 2);
    array2_dbl = jl_apply_array_type((jl_value_t*)jl_float64_type, 2);
    array2_cdbl = jl_apply_array_type(jl_complex64_type, 2);
    
    // To use struct for immutables
    //refi = (jl_datatype_t*) jl_eval_string("Base.RefValue{Any}");

    setind = jl_get_function(jl_base_module, "setindex!");
    getind = jl_get_function(jl_base_module, "getindex");
    delind = jl_get_function(jl_base_module, "delete!");
    stringify = jl_get_function(jl_base_module, "string");
    MIME = jl_get_function(jl_base_module, "MIME");
    Stringify = jl_get_function(jl_base_module, "String");
    printstyle = jl_get_function(jl_base_module, "printstyled");

    jl_eval_str("using Random, LinearAlgebra, SpecialFunctions, Suppressor");
    jl_eval_string("import REPL; import InteractiveUtils.run");
    jl_eval_str("@suppress_err using Nemo");
    // Force package calls
    jl_eval_str("import LinearAlgebra.mul!");
    jl_eval_str("import SpecialFunctions: gamma, digamma, polygamma, erf, erfi, erfc, zeta");
}

void jl_clear_env(void){
    jl_eval_string("refs=nothing");
    jl_atexit_hook(0);
}
