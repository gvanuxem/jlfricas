#include <julia.h>

static jl_value_t *jl_complex64_type, *jl_complex32_type, *V, *refs; // *irefs;
static jl_datatype_t* reft;
static jl_value_t *array_int64, *array_dbl, *array_cdbl, *array2_dbl,
    *array2_cdbl;
static jl_value_t *array_flt, *array_cflt, *array2_flt, *array2_cflt;
static jl_value_t *setind, *getind, *delind, *stringify, *Stringify, *MIME,
    *printstyle;

#define JL_CHECK_EXCEPT(retval)                                                \
  if (jl_exception_occurred()) {                                               \
    jl_call2(jl_get_function(jl_base_module, "showerror"), jl_stderr_obj(),    \
             jl_exception_occurred());                                         \
    jl_printf(jl_stderr_stream(), "\n");                                       \
    jl_exception_clear();                                                      \
    return retval;                                                             \
  }

// Macros for 1D/2D Array wrappers
#define GEN_JL_CALL_1D_VOID(name, c_type, arr_flt, arr_cflt)                   \
  void name(int64_t cplx, const char *func, c_type *array, int64_t size) {     \
    jl_array_t *x;                                                             \
    if (cplx)                                                                  \
      x = jl_ptr_to_array_1d(arr_cflt, array, size, 0);                        \
    else                                                                       \
      x = jl_ptr_to_array_1d(arr_flt, array, size, 0);                         \
    jl_value_t *function = jl_get_function(jl_main_module, func);           \
    jl_call1(function, (jl_value_t *)x);                                       \
    JL_CHECK_EXCEPT()                                                          \
    return;                                                                    \
  }

#define GEN_JL_CALL_1D_RET(name, ret_c_type, c_type, arr_flt, arr_cflt, unbox, \
                           err)                                                \
  ret_c_type name(int64_t cplx, const char *func, c_type *array,               \
                  int64_t size) {                                              \
    jl_array_t *x;                                                             \
    if (cplx)                                                                  \
      x = jl_ptr_to_array_1d(arr_cflt, array, size, 0);                        \
    else                                                                       \
      x = jl_ptr_to_array_1d(arr_flt, array, size, 0);                         \
    jl_value_t *function = jl_get_function(jl_main_module, func);           \
    jl_value_t *ret = jl_call1(function, (jl_value_t *)x);                     \
    JL_CHECK_EXCEPT(err)                                                       \
    return unbox(ret);                                                         \
  }

#define GEN_JL_CALL_1D_RET_ARG(name, ret_c_type, c_type, arr_flt, arr_cflt,    \
                               unbox, box, err)                                \
  ret_c_type name(int64_t cplx, const char *func, c_type *array, int64_t size, \
                  c_type val) {                                                \
    jl_array_t *x;                                                             \
    if (cplx)                                                                  \
      x = jl_ptr_to_array_1d(arr_cflt, array, size, 0);                        \
    else                                                                       \
      x = jl_ptr_to_array_1d(arr_flt, array, size, 0);                         \
    jl_value_t *function = jl_get_function(jl_main_module, func);           \
    jl_value_t *ret =                                                          \
        jl_call2(function, (jl_value_t *)x, (jl_value_t *)box(val));           \
    JL_CHECK_EXCEPT(err)                                                       \
    return unbox(ret);                                                         \
  }

#define GEN_JL_CALL_1D2_VOID(name, c_type, arr_flt, arr_cflt)                  \
  void name(int64_t cplx, const char *func, c_type *array1, int64_t size1,     \
            c_type *array2, int64_t size2) {                                   \
    jl_array_t *x, *y;                                                         \
    if (cplx) {                                                                \
      x = jl_ptr_to_array_1d(arr_cflt, array1, size1, 0);                      \
      y = jl_ptr_to_array_1d(arr_cflt, array2, size2, 0);                      \
    } else {                                                                   \
      x = jl_ptr_to_array_1d(arr_flt, array1, size1, 0);                       \
      y = jl_ptr_to_array_1d(arr_flt, array2, size2, 0);                       \
    }                                                                          \
    jl_value_t *function = jl_get_function(jl_main_module, func);           \
    jl_call2(function, (jl_value_t *)x, (jl_value_t *)y);                      \
    JL_CHECK_EXCEPT()                                                          \
    return;                                                                    \
  }

#define GEN_JL_CALL_1D2_RET(name, ret_c_type, c_type, arr_flt, arr_cflt,       \
                            unbox, err)                                        \
  ret_c_type name(int64_t cplx, const char *func, c_type *array1,              \
                  int64_t size1, c_type *array2, int64_t size2) {              \
    jl_array_t *x, *y;                                                         \
    if (cplx) {                                                                \
      x = jl_ptr_to_array_1d(arr_cflt, array1, size1, 0);                      \
      y = jl_ptr_to_array_1d(arr_cflt, array2, size2, 0);                      \
    } else {                                                                   \
      x = jl_ptr_to_array_1d(arr_flt, array1, size1, 0);                       \
      y = jl_ptr_to_array_1d(arr_flt, array2, size2, 0);                       \
    }                                                                          \
    jl_value_t *function = jl_get_function(jl_main_module, func);           \
    jl_value_t *ret = jl_call2(function, (jl_value_t *)x, (jl_value_t *)y);    \
    JL_CHECK_EXCEPT(err)                                                       \
    return unbox(ret);                                                         \
  }

#define GEN_JL_CALL_1D3_VOID(name, c_type, arr_flt)                            \
  void name(const char *func, c_type *array1, int64_t size1, c_type *array2,   \
            int64_t size2, c_type *array3, int64_t size3) {                    \
    jl_array_t *x = jl_ptr_to_array_1d(arr_flt, array1, size1, 0);             \
    jl_array_t *y = jl_ptr_to_array_1d(arr_flt, array2, size2, 0);             \
    jl_array_t *z = jl_ptr_to_array_1d(arr_flt, array3, size2, 0);             \
    jl_value_t *function = jl_get_function(jl_main_module, func);           \
    jl_call3(function, (jl_value_t *)x, (jl_value_t *)y, (jl_value_t *)z);     \
    JL_CHECK_EXCEPT()                                                          \
    return;                                                                    \
  }

#define GEN_JL_CALL_2D_VOID(name, c_type, arr_flt, arr_cflt)                   \
  void name(int64_t cplx, const char *func, c_type *array, int64_t m,          \
            int64_t n) {                                                       \
    char cdims[50];                                                            \
    jl_array_t *mat;                                                           \
    sprintf(cdims, "(%ld, %ld)", m, n);                                        \
    jl_value_t *dims = (jl_value_t *)jl_eval_string(cdims);                    \
    if (cplx)                                                                  \
      mat = jl_ptr_to_array(arr_cflt, array, dims, 0);                         \
    else                                                                       \
      mat = jl_ptr_to_array(arr_flt, array, dims, 0);                          \
    jl_value_t *function = jl_get_function(jl_main_module, func);           \
    jl_call1(function, (jl_value_t *)mat);                                     \
    JL_CHECK_EXCEPT()                                                          \
    return;                                                                    \
  }

#define GEN_JL_CALL_2D_RET(name, ret_c_type, c_type, arr_flt, arr_cflt, unbox, \
                           err)                                                \
  ret_c_type name(int64_t cplx, const char *func, c_type *array, int64_t m,    \
                  int64_t n) {                                                 \
    char cdims[50];                                                            \
    jl_array_t *mat;                                                           \
    sprintf(cdims, "(%ld, %ld)", m, n);                                        \
    jl_value_t *dims = (jl_value_t *)jl_eval_string(cdims);                    \
    if (cplx)                                                                  \
      mat = jl_ptr_to_array(arr_cflt, array, dims, 0);                         \
    else                                                                       \
      mat = jl_ptr_to_array(arr_flt, array, dims, 0);                          \
    jl_value_t *function = jl_get_function(jl_main_module, func);           \
    jl_value_t *ret = jl_call1(function, (jl_value_t *)mat);                   \
    JL_CHECK_EXCEPT(err)                                                       \
    return unbox(ret);                                                         \
  }

#define GEN_JL_CALL_2D_RET_ARG(name, ret_c_type, c_type, arr_flt, arr_cflt,    \
                               unbox, box, err)                                \
  ret_c_type name(int64_t cplx, const char *func, c_type *array, int64_t m,    \
                  int64_t n, c_type val) {                                     \
    char cdims[50];                                                            \
    jl_array_t *mat;                                                           \
    sprintf(cdims, "(%ld, %ld)", m, n);                                        \
    jl_value_t *dims = (jl_value_t *)jl_eval_string(cdims);                    \
    if (cplx)                                                                  \
      mat = jl_ptr_to_array(arr_cflt, array, dims, 0);                         \
    else                                                                       \
      mat = jl_ptr_to_array(arr_flt, array, dims, 0);                          \
    jl_value_t *function = jl_get_function(jl_main_module, func);           \
    jl_value_t *ret = jl_call2(function, (jl_value_t *)mat, box(val));         \
    JL_CHECK_EXCEPT(err)                                                       \
    return unbox(ret);                                                         \
  }

#define GEN_JL_CALL_2D2_VOID(name, c_type, arr_flt, arr_cflt)                  \
  void name(int64_t cplx, const char *func, c_type *array, int64_t m,          \
            int64_t n, c_type *array1, int64_t o, int64_t p) {                 \
    char cdims[50];                                                            \
    jl_array_t *mat, *mat1;                                                    \
    sprintf(cdims, "(%ld, %ld)", m, n);                                        \
    jl_value_t *dims = (jl_value_t *)jl_eval_string(cdims);                    \
    sprintf(cdims, "(%ld, %ld)", o, p);                                        \
    jl_value_t *dims1 = (jl_value_t *)jl_eval_string(cdims);                   \
    if (cplx) {                                                                \
      mat = jl_ptr_to_array(arr_cflt, array, dims, 0);                         \
      mat1 = jl_ptr_to_array(arr_cflt, array1, dims1, 0);                      \
    } else {                                                                   \
      mat = jl_ptr_to_array(arr_flt, array, dims, 0);                          \
      mat1 = jl_ptr_to_array(arr_flt, array1, dims1, 0);                       \
    }                                                                          \
    jl_value_t *function = jl_get_function(jl_main_module, func);           \
    jl_call2(function, (jl_value_t *)mat, (jl_value_t *)mat1);                 \
    JL_CHECK_EXCEPT()                                                          \
    return;                                                                    \
  }

#define GEN_JL_CALL_2D2_RET(name, ret_c_type, c_type, arr_flt, arr_cflt,       \
                            unbox, err)                                        \
  ret_c_type name(int64_t cplx, const char *func, c_type *array, int64_t m,    \
                  int64_t n, c_type *array1, int64_t o, int64_t p) {           \
    char cdims[50];                                                            \
    jl_array_t *mat, *mat1;                                                    \
    sprintf(cdims, "(%ld, %ld)", m, n);                                        \
    jl_value_t *dims = (jl_value_t *)jl_eval_string(cdims);                    \
    sprintf(cdims, "(%ld, %ld)", o, p);                                        \
    jl_value_t *dims1 = (jl_value_t *)jl_eval_string(cdims);                   \
    if (cplx) {                                                                \
      mat = jl_ptr_to_array(arr_cflt, array, dims, 0);                         \
      mat1 = jl_ptr_to_array(arr_cflt, array1, dims1, 0);                      \
    } else {                                                                   \
      mat = jl_ptr_to_array(arr_flt, array, dims, 0);                          \
      mat1 = jl_ptr_to_array(arr_flt, array1, dims1, 0);                       \
    }                                                                          \
    jl_value_t *function = jl_get_function(jl_main_module, func);           \
    jl_value_t *ret =                                                          \
        jl_call2(function, (jl_value_t *)mat, (jl_value_t *)mat1);             \
    JL_CHECK_EXCEPT(err)                                                       \
    return unbox(ret);                                                         \
  }

#define GEN_JL_CALL_2D3_VOID(name, c_type, arr_flt, arr_cflt)                  \
  void name(int64_t cplx, const char *func, c_type *array, int64_t m,          \
            int64_t n, c_type *array1, int64_t o, int64_t p, c_type *array2,   \
            int64_t q, int64_t r) {                                            \
    char cdims[50];                                                            \
    jl_array_t *mat, *mat1, *mat2;                                             \
    sprintf(cdims, "(%ld, %ld)", m, n);                                        \
    jl_value_t *dims = (jl_value_t *)jl_eval_string(cdims);                    \
    sprintf(cdims, "(%ld, %ld)", o, p);                                        \
    jl_value_t *dims1 = (jl_value_t *)jl_eval_string(cdims);                   \
    sprintf(cdims, "(%ld, %ld)", q, r);                                        \
    jl_value_t *dims2 = (jl_value_t *)jl_eval_string(cdims);                   \
    if (cplx) {                                                                \
      mat = jl_ptr_to_array(arr_cflt, array, dims, 0);                         \
      mat1 = jl_ptr_to_array(arr_cflt, array1, dims1, 0);                      \
      mat2 = jl_ptr_to_array(arr_cflt, array2, dims2, 0);                      \
    } else {                                                                   \
      mat = jl_ptr_to_array(arr_flt, array, dims, 0);                          \
      mat1 = jl_ptr_to_array(arr_flt, array1, dims1, 0);                       \
      mat2 = jl_ptr_to_array(arr_flt, array2, dims2, 0);                       \
    }                                                                          \
    jl_value_t *function = jl_get_function(jl_main_module, func);           \
    jl_call3(function, (jl_value_t *)mat, (jl_value_t *)mat1,                  \
             (jl_value_t *)mat2);                                              \
    JL_CHECK_EXCEPT()                                                          \
    return;                                                                    \
  }

// Macros for Scalar Wrapper functions
#define GEN_JL_CALL_VOID_ARG1(name, c_type, box_func)                          \
  void name(const char *function, c_type arg) {                                \
    jl_value_t *func = jl_get_function(jl_main_module, function);           \
    jl_value_t *argument = box_func(arg);                                      \
    jl_call1(func, argument);                                                  \
    JL_CHECK_EXCEPT()                                                          \
    return;                                                                    \
  }

#define GEN_JL_CALL_VOID_ARG2(name, c_type, box_func)                          \
  void name(const char *function, c_type arg1, c_type arg2) {                  \
    jl_value_t *func = jl_get_function(jl_main_module, function);           \
    jl_value_t *argument1 = box_func(arg1);                                    \
    jl_value_t *argument2 = box_func(arg2);                                    \
    jl_call2(func, argument1, argument2);                                      \
    JL_CHECK_EXCEPT()                                                          \
    return;                                                                    \
  }

#define GEN_JL_CALL_VOID_ARG3(name, c_type, box_func)                          \
  void name(const char *function, c_type arg1, c_type arg2, c_type arg3) {     \
    jl_value_t *func = jl_get_function(jl_main_module, function);           \
    jl_value_t *argument1 = box_func(arg1);                                    \
    jl_value_t *argument2 = box_func(arg2);                                    \
    jl_value_t *argument3 = box_func(arg3);                                    \
    jl_call3(func, argument1, argument2, argument3);                           \
    JL_CHECK_EXCEPT()                                                          \
    return;                                                                    \
  }

#define GEN_JL_CALL_RET_ARG1(name, ret_c_type, c_type, unbox_func, box_func,   \
                             err)                                              \
  ret_c_type name(const char *function, c_type arg) {                          \
    jl_value_t *func = jl_get_function(jl_main_module, function);           \
    jl_value_t *argument = box_func(arg);                                      \
    jl_value_t *ret = jl_call1(func, argument);                                \
    JL_CHECK_EXCEPT(err)                                                       \
    return unbox_func(ret);                                                    \
  }

#define GEN_JL_CALL_RET_ARG2(name, ret_c_type, c_type, unbox_func, box_func,   \
                             err)                                              \
  ret_c_type name(const char *function, c_type arg1, c_type arg2) {            \
    jl_value_t *func = jl_get_function(jl_main_module, function);           \
    jl_value_t *argument1 = box_func(arg1);                                    \
    jl_value_t *argument2 = box_func(arg2);                                    \
    jl_value_t *ret = jl_call2(func, argument1, argument2);                    \
    JL_CHECK_EXCEPT(err)                                                       \
    return unbox_func(ret);                                                    \
  }

#define GEN_JL_CALL_RET_ARG3(name, ret_c_type, c_type, unbox_func, box_func,   \
                             err)                                              \
  ret_c_type name(const char *function, c_type arg1, c_type arg2,              \
                  c_type arg3) {                                               \
    jl_value_t *func = jl_get_function(jl_main_module, function);           \
    jl_value_t *argument1 = box_func(arg1);                                    \
    jl_value_t *argument2 = box_func(arg2);                                    \
    jl_value_t *argument3 = box_func(arg3);                                    \
    jl_value_t *ret = jl_call3(func, argument1, argument2, argument3);         \
    JL_CHECK_EXCEPT(err)                                                       \
    return unbox_func(ret);                                                    \
  }

// Mixed argument type macros (e.g. float, int64)
#define GEN_JL_CALL_RET_ARG2_MIX(name, ret_c_type, type1, type2, unbox_func,   \
                                 box1, box2, err)                              \
  ret_c_type name(const char *function, type1 arg1, type2 arg2) {              \
    jl_value_t *func = jl_get_function(jl_main_module, function);           \
    jl_value_t *argument1 = box1(arg1);                                        \
    jl_value_t *argument2 = box2(arg2);                                        \
    jl_value_t *ret = jl_call2(func, argument1, argument2);                    \
    JL_CHECK_EXCEPT(err)                                                       \
    return unbox_func(ret);                                                    \
  }

// Macros for String Wrapper functions
#define GEN_JL_CALL_STRING_ARG1(name, c_type, box_func)                        \
  char *name(const char *function, c_type arg) {                               \
    jl_value_t *func = jl_get_function(jl_main_module, function);           \
    jl_value_t *argument = box_func(arg);                                      \
    jl_value_t *str = jl_call1(func, argument);                                \
    JL_CHECK_EXCEPT("")                                                        \
    return (jl_string_data(str));                                              \
  }

static inline void ensure_refs(void) {
  if (!jl_is_initialized()) return;
  if (!refs) {
    refs = jl_eval_string("isdefined(Main, :refs) ? Main.refs : (Main.refs = IdDict{Int64, Any}())");
  }
  if (!getind) getind = jl_get_function(jl_base_module, "getindex");
  if (!setind) setind = jl_get_function(jl_base_module, "setindex!");
  if (!delind) delind = jl_get_function(jl_base_module, "delete!");
  if (!stringify) stringify = jl_get_function(jl_base_module, "string");
}

// Function call on wrapped index
int8_t jl_call1_bool_wrapped_index(const char *function, int64_t varind) {
  ensure_refs();
  if (!refs || varind == 0) return -1;
  jl_value_t *arg = jl_call2(getind, refs, jl_box_int64(varind));
  jl_value_t *func = jl_get_function(jl_main_module, function);
  if (!func) func = jl_get_function(jl_base_module, function);
  if (!func) return -1;
  jl_value_t *res = jl_call1(func, arg);
  JL_CHECK_EXCEPT(-1)
  return (jl_unbox_bool(res));
}

int8_t jl_call2_bool_wrapped_index(const char *function, int64_t varind1,
                                   int64_t varind2) {
  ensure_refs();
  if (!refs || varind1 == 0 || varind2 == 0) return -1;
  jl_value_t *arg1 = jl_call2(getind, refs, jl_box_int64(varind1));
  jl_value_t *arg2 = jl_call2(getind, refs, jl_box_int64(varind2));
  jl_value_t *func = jl_get_function(jl_main_module, function);
  if (!func) func = jl_get_function(jl_base_module, function);
  if (!func) return -1;
  jl_value_t *res = jl_call2(func, arg1, arg2);
  JL_CHECK_EXCEPT(-1)
  return (jl_unbox_bool(res));
}

int64_t jl_call1_wrapped_index(const char *function, int64_t index,
                               int64_t varind) {
  ensure_refs();
  if (!refs || varind == 0) return 0;
  jl_value_t *arg = jl_call2(getind, refs, jl_box_int64(varind));
  jl_value_t *func = jl_get_function(jl_main_module, function);
  if (!func) func = jl_get_function(jl_base_module, function);
  if (!func) return 0;
  jl_value_t *res = jl_call1(func, arg);
  JL_CHECK_EXCEPT(0)
  JL_GC_PUSH1(&res);
  jl_call3(setind, refs, res, jl_box_int64(index));
  JL_GC_POP();
  return (index);
}

int64_t jl_call2_wrapped_index(const char *function, int64_t index,
                               int64_t varind1, int64_t varind2) {
  ensure_refs();
  if (!refs || varind1 == 0 || varind2 == 0) return 0;
  jl_value_t *arg1 = jl_call2(getind, refs, jl_box_int64(varind1));
  jl_value_t *arg2 = jl_call2(getind, refs, jl_box_int64(varind2));
  jl_value_t *func = jl_get_function(jl_main_module, function);
  if (!func) func = jl_get_function(jl_base_module, function);
  if (!func) return 0;
  jl_value_t *res = jl_call2(func, arg1, arg2);
  JL_CHECK_EXCEPT(0)
  JL_GC_PUSH1(&res);
  jl_call3(setind, refs, res, jl_box_int64(index));
  JL_GC_POP();
  return (index);
}

int64_t jl_call3_wrapped_index(const char *function, int64_t index,
                               int64_t varind1, int64_t varind2,
                               int64_t varind3) {
  ensure_refs();
  if (!refs || varind1 == 0 || varind2 == 0 || varind3 == 0) return 0;
  jl_value_t *arg1 = jl_call2(getind, refs, jl_box_int64(varind1));
  jl_value_t *arg2 = jl_call2(getind, refs, jl_box_int64(varind2));
  jl_value_t *arg3 = jl_call2(getind, refs, jl_box_int64(varind3));
  jl_value_t *func = jl_get_function(jl_main_module, function);
  if (!func) func = jl_get_function(jl_base_module, function);
  if (!func) return 0;
  jl_value_t *res = jl_call3(func, arg1, arg2, arg3);
  JL_CHECK_EXCEPT(0)
  JL_GC_PUSH1(&res);
  jl_call3(setind, refs, res, jl_box_int64(index));
  JL_GC_POP();
  return (index);
}

// For 4 and 5 args
int64_t jl_call4_wrapped_index(const char *function, int64_t index,
                               int64_t varind1, int64_t varind2,
                               int64_t varind3, int64_t varind4) {
  ensure_refs();
  if (!refs || varind1 == 0 || varind2 == 0 || varind3 == 0 || varind4 == 0) return 0;
  jl_value_t *args[4] = {jl_call2(getind, refs, jl_box_int64(varind1)),
                         jl_call2(getind, refs, jl_box_int64(varind2)),
                         jl_call2(getind, refs, jl_box_int64(varind3)),
                         jl_call2(getind, refs, jl_box_int64(varind4))};
  jl_value_t *func = jl_get_function(jl_main_module, function);
  if (!func) func = jl_get_function(jl_base_module, function);
  if (!func) return 0;
  jl_value_t *res = jl_call(func, args, 4);
  JL_CHECK_EXCEPT(0)
  JL_GC_PUSH1(&res);
  jl_call3(setind, refs, res, jl_box_int64(index));
  JL_GC_POP();
  return (index);
}

int64_t jl_call5_wrapped_index(const char *function, int64_t index,
                               int64_t varind1, int64_t varind2,
                               int64_t varind3, int64_t varind4,
                               int64_t varind5) {
  ensure_refs();
  if (!refs || varind1 == 0 || varind2 == 0 || varind3 == 0 || varind4 == 0 || varind5 == 0) return 0;
  jl_value_t *args[5] = {jl_call2(getind, refs, jl_box_int64(varind1)),
                         jl_call2(getind, refs, jl_box_int64(varind2)),
                         jl_call2(getind, refs, jl_box_int64(varind3)),
                         jl_call2(getind, refs, jl_box_int64(varind4)),
                         jl_call2(getind, refs, jl_box_int64(varind5))};
  jl_value_t *func = jl_get_function(jl_main_module, function);
  if (!func) func = jl_get_function(jl_base_module, function);
  if (!func) return 0;
  jl_value_t *res = jl_call(func, args, 5);
  JL_CHECK_EXCEPT(0)
  JL_GC_PUSH1(&res);
  jl_call3(setind, refs, res, jl_box_int64(index));
  JL_GC_POP();
  return (index);
}

// Wrapped index direct primitives: introspection, indexing, properties, scalars
int64_t jl_length_wrapped_index(int64_t varind) {
  ensure_refs();
  if (!refs || varind == 0) return 0;
  jl_value_t *arg = jl_call2(getind, refs, jl_box_int64(varind));
  JL_CHECK_EXCEPT(0)
  static jl_value_t *length_func = NULL;
  if (!length_func) length_func = jl_get_function(jl_base_module, "length");
  jl_value_t *res = jl_call1(length_func, arg);
  JL_CHECK_EXCEPT(0)
  return jl_unbox_int64(res);
}

int64_t jl_size_wrapped_index(int64_t varind, int64_t dim) {
  ensure_refs();
  if (!refs || varind == 0) return 0;
  jl_value_t *arg = jl_call2(getind, refs, jl_box_int64(varind));
  JL_CHECK_EXCEPT(0)
  static jl_value_t *size_func = NULL;
  if (!size_func) size_func = jl_get_function(jl_base_module, "size");
  jl_value_t *res = jl_call2(size_func, arg, jl_box_int64(dim));
  JL_CHECK_EXCEPT(0)
  return jl_unbox_int64(res);
}

char *jl_typeof_wrapped_index(int64_t varind) {
  ensure_refs();
  if (!refs || varind == 0) return "";
  jl_value_t *arg = jl_call2(getind, refs, jl_box_int64(varind));
  JL_CHECK_EXCEPT("")
  jl_value_t *t = (jl_value_t *)jl_typeof(arg);
  jl_value_t *res = jl_call1(stringify, t);
  JL_CHECK_EXCEPT("")
  return (jl_string_data(res));
}

int64_t jl_getproperty_wrapped_index(int64_t index, int64_t varind, const char *prop) {
  ensure_refs();
  if (!refs || varind == 0 || !prop) return 0;
  if (*prop == ':') prop++;
  jl_value_t *arg = jl_call2(getind, refs, jl_box_int64(varind));
  JL_CHECK_EXCEPT(0)
  static jl_value_t *getprop_func = NULL;
  if (!getprop_func) getprop_func = jl_get_function(jl_base_module, "getproperty");
  jl_value_t *sym = (jl_value_t *)jl_symbol(prop);
  jl_value_t *res = jl_call2(getprop_func, arg, sym);
  JL_CHECK_EXCEPT(0)
  JL_GC_PUSH1(&res);
  jl_call3(setind, refs, res, jl_box_int64(index));
  JL_GC_POP();
  return index;
}

int8_t jl_hasproperty_wrapped_index(int64_t varind, const char *prop) {
  ensure_refs();
  if (!refs || varind == 0 || !prop) return 0;
  if (*prop == ':') prop++;
  jl_value_t *arg = jl_call2(getind, refs, jl_box_int64(varind));
  JL_CHECK_EXCEPT(0)
  static jl_value_t *hasprop_func = NULL;
  if (!hasprop_func) hasprop_func = jl_get_function(jl_base_module, "hasproperty");
  jl_value_t *sym = (jl_value_t *)jl_symbol(prop);
  jl_value_t *res = jl_call2(hasprop_func, arg, sym);
  JL_CHECK_EXCEPT(0)
  return jl_unbox_bool(res);
}

int64_t jl_getfield_wrapped_index(int64_t index, int64_t varind, const char *field) {
  ensure_refs();
  if (!refs || varind == 0 || !field) return 0;
  if (*field == ':') field++;
  jl_value_t *arg = jl_call2(getind, refs, jl_box_int64(varind));
  JL_CHECK_EXCEPT(0)
  static jl_value_t *getfield_func = NULL;
  if (!getfield_func) getfield_func = jl_get_function(jl_core_module, "getfield");
  jl_value_t *sym = (jl_value_t *)jl_symbol(field);
  jl_value_t *res = jl_call2(getfield_func, arg, sym);
  JL_CHECK_EXCEPT(0)
  JL_GC_PUSH1(&res);
  jl_call3(setind, refs, res, jl_box_int64(index));
  JL_GC_POP();
  return index;
}

int64_t jl_getindex_int64_wrapped_index(int64_t index, int64_t varind, int64_t i) {
  ensure_refs();
  if (!refs || varind == 0) return 0;
  jl_value_t *arg = jl_call2(getind, refs, jl_box_int64(varind));
  JL_CHECK_EXCEPT(0)
  jl_value_t *res = jl_call2(getind, arg, jl_box_int64(i));
  JL_CHECK_EXCEPT(0)
  JL_GC_PUSH1(&res);
  jl_call3(setind, refs, res, jl_box_int64(index));
  JL_GC_POP();
  return index;
}

void jl_setindex_int64_wrapped_index(int64_t varind, int64_t valind, int64_t i) {
  ensure_refs();
  if (!refs || varind == 0 || valind == 0) return;
  jl_value_t *arr = jl_call2(getind, refs, jl_box_int64(varind));
  jl_value_t *val = jl_call2(getind, refs, jl_box_int64(valind));
  JL_CHECK_EXCEPT()
  jl_call3(setind, arr, val, jl_box_int64(i));
  JL_CHECK_EXCEPT()
}

int64_t jl_getindex2_int64_wrapped_index(int64_t index, int64_t varind, int64_t i, int64_t j) {
  ensure_refs();
  if (!refs || varind == 0) return 0;
  jl_value_t *arg = jl_call2(getind, refs, jl_box_int64(varind));
  JL_CHECK_EXCEPT(0)
  jl_value_t *res = jl_call3(getind, arg, jl_box_int64(i), jl_box_int64(j));
  JL_CHECK_EXCEPT(0)
  JL_GC_PUSH1(&res);
  jl_call3(setind, refs, res, jl_box_int64(index));
  JL_GC_POP();
  return index;
}

void jl_setindex2_int64_wrapped_index(int64_t varind, int64_t valind, int64_t i, int64_t j) {
  ensure_refs();
  if (!refs || varind == 0 || valind == 0) return;
  jl_value_t *arr = jl_call2(getind, refs, jl_box_int64(varind));
  jl_value_t *val = jl_call2(getind, refs, jl_box_int64(valind));
  JL_CHECK_EXCEPT()
  static jl_value_t *setind2_fn = NULL;
  if (!setind2_fn) setind2_fn = jl_get_function(jl_base_module, "setindex!");
  jl_call4(setind2_fn, arr, val, jl_box_int64(i), jl_box_int64(j));
  JL_CHECK_EXCEPT()
}

int64_t jl_call1_int64_wrapped_index(const char *function, int64_t varind) {
  ensure_refs();
  if (!refs || varind == 0) return 0;
  jl_value_t *arg = jl_call2(getind, refs, jl_box_int64(varind));
  JL_CHECK_EXCEPT(0)
  jl_value_t *func = jl_get_function(jl_main_module, function);
  if (!func) func = jl_get_function(jl_base_module, function);
  if (!func) return 0;
  jl_value_t *res = jl_call1(func, arg);
  JL_CHECK_EXCEPT(0)
  return jl_unbox_int64(res);
}

int64_t jl_call2_wrapped_index_int64(const char *function, int64_t index,
                                     int64_t varind, int64_t arg2) {
  ensure_refs();
  if (!refs || varind == 0) return 0;
  jl_value_t *v1 = jl_call2(getind, refs, jl_box_int64(varind));
  jl_value_t *v2 = jl_box_int64(arg2);
  jl_value_t *func = jl_get_function(jl_main_module, function);
  if (!func) func = jl_get_function(jl_base_module, function);
  if (!func) return 0;
  jl_value_t *res = jl_call2(func, v1, v2);
  JL_CHECK_EXCEPT(0)
  JL_GC_PUSH1(&res);
  jl_call3(setind, refs, res, jl_box_int64(index));
  JL_GC_POP();
  return index;
}

int64_t jl_call2_int64_wrapped_index(const char *function, int64_t index,
                                     int64_t arg1, int64_t varind) {
  ensure_refs();
  if (!refs || varind == 0) return 0;
  jl_value_t *v1 = jl_box_int64(arg1);
  jl_value_t *v2 = jl_call2(getind, refs, jl_box_int64(varind));
  jl_value_t *func = jl_get_function(jl_main_module, function);
  if (!func) func = jl_get_function(jl_base_module, function);
  if (!func) return 0;
  jl_value_t *res = jl_call2(func, v1, v2);
  JL_CHECK_EXCEPT(0)
  JL_GC_PUSH1(&res);
  jl_call3(setind, refs, res, jl_box_int64(index));
  JL_GC_POP();
  return index;
}

void jl_call1_void_wrapped_index(const char *function, int64_t varind) {
  ensure_refs();
  if (!refs || varind == 0) return;
  jl_value_t *arg = jl_call2(getind, refs, jl_box_int64(varind));
  JL_CHECK_EXCEPT()
  jl_value_t *func = jl_get_function(jl_main_module, function);
  if (!func) func = jl_get_function(jl_base_module, function);
  if (!func) return;
  jl_call1(func, arg);
  JL_CHECK_EXCEPT()
}

// MathLink direct evaluation helpers
static void extract_ws_name(const char *src, char *dst, size_t maxlen) {
  if (!src || !*src) {
    if (maxlen > 0) dst[0] = '\0';
    return;
  }
  while (*src == ' ') src++;
  if (strcmp(src, "-(") == 0 || strcmp(src, "-") == 0) {
    snprintf(dst, maxlen, "-");
    return;
  }
  if (strcmp(src, "+(") == 0 || strcmp(src, "+") == 0) {
    snprintf(dst, maxlen, "+");
    return;
  }
  const char *p = src;
  if (p[0] == 'W' && p[1] == '_' && p[2] == '"') {
    p += 3;
  } else if (p[0] == 'W' && p[1] == '"') {
    p += 2;
  }
  size_t i = 0;
  while (*p && i + 1 < maxlen) {
    if (p[0] == '_' && p[1] == '"') break;
    if (p[0] == '"') break;
    if (p[0] == '(') break;
    dst[i++] = *p++;
  }
  while (i > 0 && dst[i - 1] == ' ') i--;
  dst[i] = '\0';
}

static void ensure_init_env(void) {
  if (!getind) {
    getind = jl_get_function(jl_base_module, "getindex");
  }
  if (!setind) {
    setind = jl_get_function(jl_base_module, "setindex!");
  }
  if (!refs) {
    jl_value_t *r = jl_get_global(jl_main_module, jl_symbol("refs"));
    if (r) {
      refs = r;
    } else {
      refs = (jl_value_t *)jl_eval_string("refs = IdDict{Int64, Any}()");
    }
  }
}

static void ensure_ws_helpers(void) {
  ensure_init_env();
  if (!jl_get_function(jl_main_module, "_ws_eval_list")) {
    jl_eval_string(
        "function _ws_eval1(func::AbstractString, a); s = strip(func); "
        "s == \"-\" || s == \"-(\" || s == \"Minus\" ? Main.MathLink.weval(-a) : "
        "s == \"+\" || s == \"+(\" || s == \"Plus\" ? Main.MathLink.weval(+a) : "
        "Main.MathLink.weval(Main.MathLink.WSymbol(s)(a)); end;\n"
        "_ws_eval2(func::AbstractString, a, b) = "
        "Main.MathLink.weval(Main.MathLink.WSymbol(strip(func))(a, b));\n"
        "_ws_eval3(func::AbstractString, a, b, c) = "
        "Main.MathLink.weval(Main.MathLink.WSymbol(strip(func))(a, b, c));\n"
        "_ws_eval4(func::AbstractString, a, b, c, d) = "
        "Main.MathLink.weval(Main.MathLink.WSymbol(strip(func))(a, b, c, d));\n"
        "_ws_eval5(func::AbstractString, a, b, c, d, e) = "
        "Main.MathLink.weval(Main.MathLink.WSymbol(strip(func))(a, b, c, d, e));\n"
        "_ws_eval_list(func::AbstractString, list) = "
        "Main.MathLink.weval(Main.MathLink.WSymbol(strip(func))((list isa Main.MathLink.WExpr ? list.args : list)...));\n"
        "function _ws_binop(op::AbstractString, a, b); s = strip(op); "
        "s == \"+\" || s == \"Plus\" ? Main.MathLink.weval(a + b) : "
        "s == \"-\" || s == \"Subtract\" ? Main.MathLink.weval(a - b) : "
        "s == \"*\" || s == \"Times\" ? Main.MathLink.weval(a * b) : "
        "s == \"/\" || s == \"Divide\" ? Main.MathLink.weval(a / b) : "
        "s == \"//\" ? Main.MathLink.weval(a // b) : "
        "s == \"^\" || s == \"Power\" ? Main.MathLink.weval(a ^ b) : "
        "Main.MathLink.weval(Main.MathLink.WSymbol(s)(a, b)); end;\n"
        "function _ws_binbop(op::AbstractString, a, b)::Int8; s = strip(op); "
        "s == \"!=\" ? (a != b ? Int8(1) : Int8(0)) : "
        "s == \"<\" ? (a < b ? Int8(1) : Int8(0)) : "
        "s == \"<=\" ? (a <= b ? Int8(1) : Int8(0)) : "
        "s == \">\" ? (a > b ? Int8(1) : Int8(0)) : "
        "s == \">=\" ? (a >= b ? Int8(1) : Int8(0)) : "
        "(a == b ? Int8(1) : Int8(0)); end;\n"
        "_ws_apply1(sym::AbstractString, a) = "
        "Main.MathLink.WSymbol(strip(sym))(a);\n"
        "_ws_apply2(sym::AbstractString, a, b) = "
        "Main.MathLink.WSymbol(strip(sym))(a, b);\n"
        "_ws_apply3(sym::AbstractString, a, b, c) = "
        "Main.MathLink.WSymbol(strip(sym))(a, b, c);\n"
        "_ws_apply4(sym::AbstractString, a, b, c, d) = "
        "Main.MathLink.WSymbol(strip(sym))(a, b, c, d);\n"
        "_ws_apply5(sym::AbstractString, a, b, c, d, e) = "
        "Main.MathLink.WSymbol(strip(sym))(a, b, c, d, e);\n"
        "_ws_apply_list(sym::AbstractString, list) = "
        "Main.MathLink.WSymbol(strip(sym))((list isa Main.MathLink.WExpr ? list.args : list)...);\n");
  }
}

int64_t jl_weval1_wrapped_index(const char *function, int64_t index,
                                int64_t varind) {
  ensure_ws_helpers();
  char clean_fn[128];
  extract_ws_name(function, clean_fn, sizeof(clean_fn));
  jl_value_t *arg = jl_call2(getind, refs, jl_box_int64(varind));
  jl_value_t *fn_str = jl_cstr_to_string(clean_fn);
  jl_value_t *func = jl_get_function(jl_main_module, "_ws_eval1");
  if (!func) { return 0; }
  jl_value_t *res = jl_call2(func, fn_str, arg);
  JL_CHECK_EXCEPT(0)
  JL_GC_PUSH1(&res);
  jl_call3(setind, refs, res, jl_box_int64(index));
  JL_GC_POP();
  return index;
}

int64_t jl_weval2_wrapped_index(const char *function, int64_t index,
                                int64_t varind1, int64_t varind2) {
  ensure_ws_helpers();
  char clean_fn[128];
  extract_ws_name(function, clean_fn, sizeof(clean_fn));
  jl_value_t *arg1 = jl_call2(getind, refs, jl_box_int64(varind1));
  jl_value_t *arg2 = jl_call2(getind, refs, jl_box_int64(varind2));
  jl_value_t *fn_str = jl_cstr_to_string(clean_fn);
  jl_value_t *func = jl_get_function(jl_main_module, "_ws_eval2");
  if (!func) return 0;
  jl_value_t *res = jl_call3(func, fn_str, arg1, arg2);
  JL_CHECK_EXCEPT(0)
  JL_GC_PUSH1(&res);
  jl_call3(setind, refs, res, jl_box_int64(index));
  JL_GC_POP();
  return index;
}

int64_t jl_weval3_wrapped_index(const char *function, int64_t index,
                                int64_t varind1, int64_t varind2,
                                int64_t varind3) {
  ensure_ws_helpers();
  char clean_fn[128];
  extract_ws_name(function, clean_fn, sizeof(clean_fn));
  jl_value_t *arg1 = jl_call2(getind, refs, jl_box_int64(varind1));
  jl_value_t *arg2 = jl_call2(getind, refs, jl_box_int64(varind2));
  jl_value_t *arg3 = jl_call2(getind, refs, jl_box_int64(varind3));
  jl_value_t *fn_str = jl_cstr_to_string(clean_fn);
  jl_value_t *func = jl_get_function(jl_main_module, "_ws_eval3");
  if (!func) return 0;
  jl_value_t *res = jl_call4(func, fn_str, arg1, arg2, arg3);
  JL_CHECK_EXCEPT(0)
  JL_GC_PUSH1(&res);
  jl_call3(setind, refs, res, jl_box_int64(index));
  JL_GC_POP();
  return index;
}

int64_t jl_weval4_wrapped_index(const char *function, int64_t index,
                                int64_t varind1, int64_t varind2,
                                int64_t varind3, int64_t varind4) {
  ensure_ws_helpers();
  char clean_fn[128];
  extract_ws_name(function, clean_fn, sizeof(clean_fn));
  jl_value_t *arg1 = jl_call2(getind, refs, jl_box_int64(varind1));
  jl_value_t *arg2 = jl_call2(getind, refs, jl_box_int64(varind2));
  jl_value_t *arg3 = jl_call2(getind, refs, jl_box_int64(varind3));
  jl_value_t *arg4 = jl_call2(getind, refs, jl_box_int64(varind4));
  jl_value_t *fn_str = jl_cstr_to_string(clean_fn);
  jl_value_t *args[5] = {fn_str, arg1, arg2, arg3, arg4};
  jl_value_t *func = jl_get_function(jl_main_module, "_ws_eval4");
  if (!func) return 0;
  jl_value_t *res = jl_call(func, args, 5);
  JL_CHECK_EXCEPT(0)
  JL_GC_PUSH1(&res);
  jl_call3(setind, refs, res, jl_box_int64(index));
  JL_GC_POP();
  return index;
}

int64_t jl_weval5_wrapped_index(const char *function, int64_t index,
                                int64_t varind1, int64_t varind2,
                                int64_t varind3, int64_t varind4,
                                int64_t varind5) {
  ensure_ws_helpers();
  char clean_fn[128];
  extract_ws_name(function, clean_fn, sizeof(clean_fn));
  jl_value_t *arg1 = jl_call2(getind, refs, jl_box_int64(varind1));
  jl_value_t *arg2 = jl_call2(getind, refs, jl_box_int64(varind2));
  jl_value_t *arg3 = jl_call2(getind, refs, jl_box_int64(varind3));
  jl_value_t *arg4 = jl_call2(getind, refs, jl_box_int64(varind4));
  jl_value_t *arg5 = jl_call2(getind, refs, jl_box_int64(varind5));
  jl_value_t *fn_str = jl_cstr_to_string(clean_fn);
  jl_value_t *args[6] = {fn_str, arg1, arg2, arg3, arg4, arg5};
  jl_value_t *func = jl_get_function(jl_main_module, "_ws_eval5");
  if (!func) return 0;
  jl_value_t *res = jl_call(func, args, 6);
  JL_CHECK_EXCEPT(0)
  JL_GC_PUSH1(&res);
  jl_call3(setind, refs, res, jl_box_int64(index));
  JL_GC_POP();
  return index;
}

int64_t jl_weval_list_wrapped_index(const char *function, int64_t index,
                                    int64_t list_ind) {
  ensure_ws_helpers();
  char clean_fn[128];
  extract_ws_name(function, clean_fn, sizeof(clean_fn));
  jl_value_t *list = jl_call2(getind, refs, jl_box_int64(list_ind));
  jl_value_t *fn_str = jl_cstr_to_string(clean_fn);
  jl_value_t *func = jl_get_function(jl_main_module, "_ws_eval_list");
  if (!func) return 0;
  jl_value_t *res = jl_call2(func, fn_str, list);
  JL_CHECK_EXCEPT(0)
  JL_GC_PUSH1(&res);
  jl_call3(setind, refs, res, jl_box_int64(index));
  JL_GC_POP();
  return index;
}

int64_t jl_weval_binop_wrapped_index(const char *op, int64_t index,
                                     int64_t varind1, int64_t varind2) {
  ensure_ws_helpers();
  char clean_op[128];
  extract_ws_name(op, clean_op, sizeof(clean_op));
  jl_value_t *arg1 = jl_call2(getind, refs, jl_box_int64(varind1));
  jl_value_t *arg2 = jl_call2(getind, refs, jl_box_int64(varind2));
  jl_value_t *op_str = jl_cstr_to_string(clean_op);
  jl_value_t *func = jl_get_function(jl_main_module, "_ws_binop");
  if (!func) return 0;
  jl_value_t *res = jl_call3(func, op_str, arg1, arg2);
  JL_CHECK_EXCEPT(0)
  JL_GC_PUSH1(&res);
  jl_call3(setind, refs, res, jl_box_int64(index));
  JL_GC_POP();
  return index;
}

int8_t jl_weval_binbop_wrapped_index(const char *op, int64_t varind1,
                                     int64_t varind2) {
  ensure_ws_helpers();
  jl_value_t *arg1 = jl_call2(getind, refs, jl_box_int64(varind1));
  jl_value_t *arg2 = jl_call2(getind, refs, jl_box_int64(varind2));
  jl_value_t *op_str = jl_cstr_to_string(op);
  jl_value_t *func = jl_get_function(jl_main_module, "_ws_binbop");
  if (!func) return -1;
  jl_value_t *res = jl_call3(func, op_str, arg1, arg2);
  JL_CHECK_EXCEPT(-1)
  return jl_unbox_int8(res);
}

int64_t jl_wapply1_wrapped_index(const char *sym, int64_t index,
                                 int64_t varind) {
  ensure_ws_helpers();
  char clean_fn[128];
  extract_ws_name(sym, clean_fn, sizeof(clean_fn));
  jl_value_t *arg = jl_call2(getind, refs, jl_box_int64(varind));
  jl_value_t *sym_str = jl_cstr_to_string(clean_fn);
  jl_value_t *func = jl_get_function(jl_main_module, "_ws_apply1");
  if (!func) return 0;
  jl_value_t *res = jl_call2(func, sym_str, arg);
  JL_CHECK_EXCEPT(0)
  JL_GC_PUSH1(&res);
  jl_call3(setind, refs, res, jl_box_int64(index));
  JL_GC_POP();
  return index;
}

int64_t jl_wapply2_wrapped_index(const char *sym, int64_t index,
                                 int64_t varind1, int64_t varind2) {
  ensure_ws_helpers();
  char clean_fn[128];
  extract_ws_name(sym, clean_fn, sizeof(clean_fn));
  jl_value_t *arg1 = jl_call2(getind, refs, jl_box_int64(varind1));
  jl_value_t *arg2 = jl_call2(getind, refs, jl_box_int64(varind2));
  jl_value_t *sym_str = jl_cstr_to_string(clean_fn);
  jl_value_t *func = jl_get_function(jl_main_module, "_ws_apply2");
  if (!func) return 0;
  jl_value_t *res = jl_call3(func, sym_str, arg1, arg2);
  JL_CHECK_EXCEPT(0)
  JL_GC_PUSH1(&res);
  jl_call3(setind, refs, res, jl_box_int64(index));
  JL_GC_POP();
  return index;
}

int64_t jl_wapply3_wrapped_index(const char *sym, int64_t index,
                                 int64_t varind1, int64_t varind2,
                                 int64_t varind3) {
  ensure_ws_helpers();
  char clean_fn[128];
  extract_ws_name(sym, clean_fn, sizeof(clean_fn));
  jl_value_t *arg1 = jl_call2(getind, refs, jl_box_int64(varind1));
  jl_value_t *arg2 = jl_call2(getind, refs, jl_box_int64(varind2));
  jl_value_t *arg3 = jl_call2(getind, refs, jl_box_int64(varind3));
  jl_value_t *sym_str = jl_cstr_to_string(clean_fn);
  jl_value_t *func = jl_get_function(jl_main_module, "_ws_apply3");
  if (!func) return 0;
  jl_value_t *res = jl_call4(func, sym_str, arg1, arg2, arg3);
  JL_CHECK_EXCEPT(0)
  JL_GC_PUSH1(&res);
  jl_call3(setind, refs, res, jl_box_int64(index));
  JL_GC_POP();
  return index;
}

int64_t jl_wapply4_wrapped_index(const char *sym, int64_t index,
                                 int64_t varind1, int64_t varind2,
                                 int64_t varind3, int64_t varind4) {
  ensure_ws_helpers();
  char clean_fn[128];
  extract_ws_name(sym, clean_fn, sizeof(clean_fn));
  jl_value_t *arg1 = jl_call2(getind, refs, jl_box_int64(varind1));
  jl_value_t *arg2 = jl_call2(getind, refs, jl_box_int64(varind2));
  jl_value_t *arg3 = jl_call2(getind, refs, jl_box_int64(varind3));
  jl_value_t *arg4 = jl_call2(getind, refs, jl_box_int64(varind4));
  jl_value_t *sym_str = jl_cstr_to_string(clean_fn);
  jl_value_t *args[5] = {sym_str, arg1, arg2, arg3, arg4};
  jl_value_t *func = jl_get_function(jl_main_module, "_ws_apply4");
  if (!func) return 0;
  jl_value_t *res = jl_call(func, args, 5);
  JL_CHECK_EXCEPT(0)
  JL_GC_PUSH1(&res);
  jl_call3(setind, refs, res, jl_box_int64(index));
  JL_GC_POP();
  return index;
}

int64_t jl_wapply5_wrapped_index(const char *sym, int64_t index,
                                 int64_t varind1, int64_t varind2,
                                 int64_t varind3, int64_t varind4,
                                 int64_t varind5) {
  ensure_ws_helpers();
  char clean_fn[128];
  extract_ws_name(sym, clean_fn, sizeof(clean_fn));
  jl_value_t *arg1 = jl_call2(getind, refs, jl_box_int64(varind1));
  jl_value_t *arg2 = jl_call2(getind, refs, jl_box_int64(varind2));
  jl_value_t *arg3 = jl_call2(getind, refs, jl_box_int64(varind3));
  jl_value_t *arg4 = jl_call2(getind, refs, jl_box_int64(varind4));
  jl_value_t *arg5 = jl_call2(getind, refs, jl_box_int64(varind5));
  jl_value_t *sym_str = jl_cstr_to_string(clean_fn);
  jl_value_t *args[6] = {sym_str, arg1, arg2, arg3, arg4, arg5};
  jl_value_t *func = jl_get_function(jl_main_module, "_ws_apply5");
  if (!func) return 0;
  jl_value_t *res = jl_call(func, args, 6);
  JL_CHECK_EXCEPT(0)
  JL_GC_PUSH1(&res);
  jl_call3(setind, refs, res, jl_box_int64(index));
  JL_GC_POP();
  return index;
}

int64_t jl_wapply_list_wrapped_index(const char *sym, int64_t index,
                                     int64_t list_ind) {
  ensure_ws_helpers();
  char clean_fn[128];
  extract_ws_name(sym, clean_fn, sizeof(clean_fn));
  jl_value_t *list = jl_call2(getind, refs, jl_box_int64(list_ind));
  jl_value_t *sym_str = jl_cstr_to_string(clean_fn);
  jl_value_t *func = jl_get_function(jl_main_module, "_ws_apply_list");
  if (!func) return 0;
  jl_value_t *res = jl_call2(func, sym_str, list);
  JL_CHECK_EXCEPT(0)
  JL_GC_PUSH1(&res);
  jl_call3(setind, refs, res, jl_box_int64(index));
  JL_GC_POP();
  return index;
}

// TODO: check return type of julia call

// We use '_str' instead of '_string' to avoid conflict with Julia
void jl_eval_str(char *code) {
  jl_eval_string(code);
  JL_CHECK_EXCEPT()
  return;
}

int8_t jl_bool_eval_string(char *code) {
  jl_value_t *result = jl_eval_string(code);
  JL_CHECK_EXCEPT((-1))
  return jl_unbox_bool(result);
}

int64_t jl_int64_eval_string(char *code) {
  jl_value_t *result = jl_eval_string(code);
  JL_CHECK_EXCEPT((0))
  return jl_unbox_int64(result);
}

float jl_flt_eval_string(char *code) {
  jl_value_t *result = jl_eval_string(code);
  JL_CHECK_EXCEPT((NAN))
  return jl_unbox_float32(result);
}

double jl_dbl_eval_string(char *code) {
  jl_value_t *result = jl_eval_string(code);
  JL_CHECK_EXCEPT((NAN))
  return jl_unbox_float64(result);
}

char *jl_string_eval_string(char *code) {
  jl_value_t *result = jl_eval_string(code);
  JL_CHECK_EXCEPT("")
  return (jl_string_data(result));
}

GEN_JL_CALL_STRING_ARG1(jl_call_string_function_flt, float, jl_box_float32)

GEN_JL_CALL_STRING_ARG1(jl_call_string_function_dbl, double, jl_box_float64)

// mutable
int64_t jl_setindex_mwrap_eval_string(int64_t index, const char *code) {
  if (index == 0) {
    jl_printf(jl_stderr_stream(),
              "ERROR: index is 0 (jl_setindex_mwrap_eval_string)\n");
    return (0);
  } else if (code == NULL) {
    jl_printf(jl_stderr_stream(),
              "ERROR: empty code string (jl_setindex_mwrap_eval_string)\n");
    return (0);
  }
  ensure_refs();
  if (!refs) return 0;
  jl_value_t *res = jl_eval_string(code);
  JL_CHECK_EXCEPT(0)
  JL_GC_PUSH1(&res);
  jl_call3(setind, refs, res, jl_box_int64(index));
  JL_GC_POP();
  return (index);
}

// immutable
// -- getindex
int64_t jl_setindex_imwrap_eval_string(int64_t index, const char *code) {
  if (index == 0) {
    jl_printf(jl_stderr_stream(),
              "ERROR: index is 0 (jl_setindex_imwrap_eval_string)\n");
    return (0);
  } else if (code == NULL) {
    jl_printf(jl_stderr_stream(),
              "ERROR: empty code string (jl_setindex_imwrap_eval_string)\n");
    return (0);
  }
  ensure_refs();
  if (!refs || !reft) return 0;
  jl_value_t *res = jl_eval_string(code);
  JL_CHECK_EXCEPT(0)
  JL_GC_PUSH1(&res);
  jl_value_t* rvar = jl_new_struct(reft, res);
  JL_GC_POP();
  jl_call3(setind, refs, rvar, jl_box_int64(index));
  return (index);
}

void jl_delete_wrapped_index(int64_t index) {
  if (index == 0) {
    jl_printf(jl_stderr_stream(),
              "ERROR: index is 0 (jl_delete_wrapped_index)\n");
    return;
  }
  ensure_refs();
  if (!refs) return;
  jl_call2(delind, refs, jl_box_int64(index));
  JL_CHECK_EXCEPT()
  return;
}

// TODO: NULL string
char *jl_stringify_wrapped_index(int64_t index) {
  if (index == 0) {
    jl_printf(jl_stderr_stream(),
              "ERROR: index is 0 (jl_stringify_wrapped_index)\n");
    return ("");
  }
  ensure_refs();
  if (!refs) return "";
  jl_value_t *result = jl_call2(getind, refs, jl_box_int64(index));
  JL_CHECK_EXCEPT("")
  result = jl_call1(stringify, result);
  JL_CHECK_EXCEPT("")
  return (jl_string_data(result));
}

///////////////////////////////////////////////////////////
// Scalars

GEN_JL_CALL_VOID_ARG1(jl_call_function_flt, float, jl_box_float32)

GEN_JL_CALL_VOID_ARG1(jl_call_function_dbl, double, jl_box_float64)

GEN_JL_CALL_VOID_ARG2(jl_call_function_flt_flt, float, jl_box_float32)

GEN_JL_CALL_VOID_ARG2(jl_call_function_dbl_dbl, double, jl_box_float64)

GEN_JL_CALL_VOID_ARG3(jl_call_function_flt_flt_flt, float, jl_box_float32)

GEN_JL_CALL_VOID_ARG3(jl_call_function_dbl_dbl_dbl, double, jl_box_float64)

GEN_JL_CALL_RET_ARG1(jl_call_int64_function_flt, int64_t, float, jl_unbox_int64,
                     jl_box_float32, 0)

GEN_JL_CALL_RET_ARG1(jl_call_int64_function_dbl, int64_t, double,
                     jl_unbox_int64, jl_box_float64, 0)

GEN_JL_CALL_RET_ARG1(jl_call_flt_function_flt, float, float, jl_unbox_float32,
                     jl_box_float32, NAN)

GEN_JL_CALL_RET_ARG1(jl_call_dbl_function_dbl, double, double, jl_unbox_float64,
                     jl_box_float64, NAN)

GEN_JL_CALL_RET_ARG2(jl_call_flt_function_flt_flt, float, float,
                     jl_unbox_float32, jl_box_float32, NAN)

GEN_JL_CALL_RET_ARG2(jl_call_dbl_function_dbl_dbl, double, double,
                     jl_unbox_float64, jl_box_float64, NAN)

GEN_JL_CALL_RET_ARG3(jl_call_flt_function_flt_flt_flt, float, float,
                     jl_unbox_float32, jl_box_float32, NAN)

GEN_JL_CALL_RET_ARG3(jl_call_dbl_function_dbl_dbl_dbl, double, double,
                     jl_unbox_float64, jl_box_float64, NAN)

GEN_JL_CALL_RET_ARG2_MIX(jl_call_flt_function_flt_int64, float, float, int64_t,
                         jl_unbox_float32, jl_box_float32, jl_box_int64, NAN)

GEN_JL_CALL_RET_ARG2_MIX(jl_call_dbl_function_dbl_int64, double, double,
                         int64_t, jl_unbox_float64, jl_box_float64,
                         jl_box_int64, NAN)

GEN_JL_CALL_RET_ARG2_MIX(jl_call_flt_function_int64_flt, float, int64_t, float,
                         jl_unbox_float32, jl_box_int64, jl_box_float32, NAN)

GEN_JL_CALL_RET_ARG2_MIX(jl_call_dbl_function_int64_dbl, double, int64_t,
                         double, jl_unbox_float64, jl_box_int64, jl_box_float64,
                         NAN)

GEN_JL_CALL_RET_ARG2(jl_call_bool_function_flt_flt, int8_t, float,
                     jl_unbox_bool, jl_box_float32, -1)

GEN_JL_CALL_RET_ARG2(jl_call_bool_function_dbl_dbl, int8_t, double,
                     jl_unbox_bool, jl_box_float64, -1)

///////////////////////////////////////////////////////////////////
// Vectors

char *jl_call_stringify_1difunction(const char *function, const char *mime,
                                    int64_t *array, int64_t size) {
  jl_array_t *x;
  jl_value_t *ret;
  jl_value_t *mm = jl_eval_string(mime);
  jl_value_t *io = jl_call0(jl_get_function(jl_base_module, "IOBuffer"));
  x = jl_ptr_to_array_1d(array_int64, array, size, 0);

  jl_call3(jl_get_function(jl_main_module, function), io,
           (jl_value_t *)jl_call1(MIME, mm), (jl_value_t *)x);
  JL_CHECK_EXCEPT((""))

  ret = jl_call1(Stringify,
                 jl_call1(jl_get_function(jl_main_module, "take!"), io));
  JL_CHECK_EXCEPT((""))
  return (jl_string_data(ret));
}

void jl_call_1difunction(const char *func, int64_t *array, int64_t size) {
  jl_array_t *x = jl_ptr_to_array_1d(array_int64, array, size, 0);
  jl_value_t *function = jl_get_function(jl_main_module, func);
  jl_call1(function, (jl_value_t *)x);
  JL_CHECK_EXCEPT()
  return;
}

char *jl_call_stringify_1dffunction(int64_t cplx, const char *function,
                                    const char *mime, float *array,
                                    int64_t size) {
  jl_array_t *x;
  jl_value_t *ret;
  jl_value_t *mm = jl_eval_string(mime);
  jl_value_t *io = jl_call0(jl_get_function(jl_base_module, "IOBuffer"));

  if (cplx)
    x = jl_ptr_to_array_1d(array_cflt, array, size, 0);
  else
    x = jl_ptr_to_array_1d(array_flt, array, size, 0);

  jl_call3(jl_get_function(jl_main_module, function), io,
           (jl_value_t *)jl_call1(MIME, mm), (jl_value_t *)x);
  JL_CHECK_EXCEPT((""))

  ret = jl_call1(Stringify,
                 jl_call1(jl_get_function(jl_main_module, "take!"), io));
  JL_CHECK_EXCEPT((""))
  return (jl_string_data(ret));
}

char *jl_call_stringify_1dfunction(int64_t cplx, const char *function,
                                   const char *mime, double *array,
                                   int64_t size) {
  jl_array_t *x;
  jl_value_t *ret;
  jl_value_t *mm = jl_eval_string(mime);
  jl_value_t *io = jl_call0(jl_get_function(jl_base_module, "IOBuffer"));

  if (cplx)
    x = jl_ptr_to_array_1d(array_cdbl, array, size, 0);
  else
    x = jl_ptr_to_array_1d(array_dbl, array, size, 0);

  jl_call3(jl_get_function(jl_main_module, function), io,
           (jl_value_t *)jl_call1(MIME, mm), (jl_value_t *)x);
  JL_CHECK_EXCEPT((""))

  ret = jl_call1(Stringify,
                 jl_call1(jl_get_function(jl_main_module, "take!"), io));
  JL_CHECK_EXCEPT((""))
  return (jl_string_data(ret));
}

GEN_JL_CALL_1D_VOID(jl_call_1dffunction, float, array_flt, array_cflt)

GEN_JL_CALL_1D_VOID(jl_call_1dfunction, double, array_dbl, array_cdbl)

GEN_JL_CALL_1D_RET(jl_call_flt_1dffunction, float, float, array_flt, array_cflt,
                   jl_unbox_float32, NAN)

GEN_JL_CALL_1D_RET(jl_call_dbl_1dfunction, double, double, array_dbl,
                   array_cdbl, jl_unbox_float64, NAN)

GEN_JL_CALL_1D_RET_ARG(jl_call_flt_1dffunction_flt, float, float, array_flt,
                       array_cflt, jl_unbox_float32, jl_box_float32, NAN)

GEN_JL_CALL_1D_RET_ARG(jl_call_dbl_1dfunction_dbl, double, double, array_dbl,
                       array_cdbl, jl_unbox_float64, jl_box_float64, NAN)

GEN_JL_CALL_1D2_VOID(jl_call_1d2ffunction, float, array_flt, array_cflt)

GEN_JL_CALL_1D2_VOID(jl_call_1d2function, double, array_dbl, array_cdbl)

GEN_JL_CALL_1D2_RET(jl_call_bool_1d2ffunction, int8_t, float, array_flt,
                    array_cflt, jl_unbox_bool, -1)

GEN_JL_CALL_1D2_RET(jl_call_bool_1d2function, int8_t, double, array_dbl,
                    array_cdbl, jl_unbox_bool, -1)

GEN_JL_CALL_1D2_RET(jl_call_flt_1d2ffunction, float, float, array_flt,
                    array_cflt, jl_unbox_float32, NAN)

GEN_JL_CALL_1D2_RET(jl_call_dbl_1d2function, double, double, array_dbl,
                    array_cdbl, jl_unbox_float64, NAN)

// Necessary? (used in plotting functions with double-s)
GEN_JL_CALL_1D3_VOID(jl_call_1d3ffunction, float, array_flt)

GEN_JL_CALL_1D3_VOID(jl_call_1d3function, double, array_dbl)

void jl_call_farray_1dffunction(int64_t acplx, int64_t cplx, char *func,
                                float *arr, float *array, int64_t n) {

  float *svref;
  jl_array_t *v;
  if (cplx)
    v = jl_ptr_to_array_1d(array_cflt, array, n, 0);
  else
    v = jl_ptr_to_array_1d(array_flt, array, n, 0);

  jl_value_t *function = jl_get_function(jl_main_module, func);
  jl_array_t *ret = (jl_array_t *)jl_call1(function, (jl_value_t *)v);
  JL_CHECK_EXCEPT()

  JL_GC_PUSH1(&ret);

#if JULIA_VERSION_MINOR > 10
  svref = (float *)jl_array_data(ret, float);
#else
  svref = (float *)jl_array_data(ret);
#endif

  if (acplx && !strncmp(jl_typename_str(jl_array_eltype((jl_value_t *)ret)),
                        "Complex", 7)) {
    memcpy(arr, svref, jl_array_len(ret) * 2 * sizeof(float));
  } else if (acplx) {
    // ret is not a complex array but arr is
    for (size_t i = 0; i < jl_array_len(ret); i++)
      arr[2 * i] = svref[i];
  } else {
    // real array
    memcpy(arr, svref, jl_array_len(ret) * sizeof(float));
  }
  JL_GC_POP();
  return;
}

void jl_call_array_1dfunction(int64_t acplx, int64_t cplx, char *func,
                              double *arr, double *array, int64_t n) {

  double *svref;
  jl_array_t *v;
  if (cplx)
    v = jl_ptr_to_array_1d(array_cdbl, array, n, 0);
  else
    v = jl_ptr_to_array_1d(array_dbl, array, n, 0);

  jl_value_t *function = jl_get_function(jl_main_module, func);
  jl_array_t *ret = (jl_array_t *)jl_call1(function, (jl_value_t *)v);
  JL_CHECK_EXCEPT()

  JL_GC_PUSH1(&ret);

#if JULIA_VERSION_MINOR > 10
  svref = (double *)jl_array_data(ret, double);
#else
  svref = (double *)jl_array_data(ret);
#endif

  if (acplx && !strncmp(jl_typename_str(jl_array_eltype((jl_value_t *)ret)),
                        "Complex", 7)) {
    memcpy(arr, svref, jl_array_len(ret) * 2 * sizeof(double));
  } else if (acplx) {
    // ret is not a complex array but arr is
    for (size_t i = 0; i < jl_array_len(ret); i++)
      arr[2 * i] = svref[i];
  } else {
    // real array
    memcpy(arr, svref, jl_array_len(ret) * sizeof(double));
  }
  JL_GC_POP();
  return;
}

int64_t jl_call_wrap_1dfarray(int64_t cplx, int64_t index, float *array,
                              int64_t n) {
  jl_array_t *v;

  if (cplx)
    v = jl_ptr_to_array_1d(array_cflt, array, n, 0);
  else
    v = jl_ptr_to_array_1d(array_flt, array, n, 0);

  jl_value_t *function = jl_get_function(jl_main_module, "deepcopy");
  jl_value_t *var = jl_call1(function, (jl_value_t *)v);
  JL_CHECK_EXCEPT((0))
  JL_GC_PUSH1(&var);
  jl_call3(setind, refs, var, jl_box_int64(index));
  JL_GC_POP();
  return (index);
}

int64_t jl_call_wrap_1darray(int64_t cplx, int64_t index, double *array,
                             int64_t n) {
  jl_array_t *v;

  if (cplx)
    v = jl_ptr_to_array_1d(array_cdbl, array, n, 0);
  else
    v = jl_ptr_to_array_1d(array_dbl, array, n, 0);

  jl_value_t *function = jl_get_function(jl_main_module, "deepcopy");
  jl_value_t *var = jl_call1(function, (jl_value_t *)v);
  JL_CHECK_EXCEPT((0))
  JL_GC_PUSH1(&var);
  jl_call3(setind, refs, var, jl_box_int64(index));
  JL_GC_POP();
  return (index);
}

//////////////////////////////////////////////////////////
// Matrices

char *jl_call_stringify_2dffunction(int64_t cplx, const char *function,
                                    const char *mime, float *array, int64_t m,
                                    int64_t n) {
  jl_array_t *x;
  jl_value_t *ret;
  jl_value_t *mm = jl_eval_string(mime);
  jl_value_t *io = jl_call0(jl_get_function(jl_base_module, "IOBuffer"));

  char cdims[50];
  jl_array_t *mat;

  sprintf(cdims, "(%ld, %ld)", m, n);

  jl_value_t *dims = (jl_value_t *)jl_eval_string(cdims);
  if (cplx)
    mat = jl_ptr_to_array(array2_cflt, array, dims, 0);
  else
    mat = jl_ptr_to_array(array2_flt, array, dims, 0);

  jl_call3(jl_get_function(jl_main_module, function), io,
           (jl_value_t *)jl_call1(MIME, mm), (jl_value_t *)mat);
  JL_CHECK_EXCEPT((""))

  ret = jl_call1(Stringify,
                 jl_call1(jl_get_function(jl_main_module, "take!"), io));
  JL_CHECK_EXCEPT((""))
  return (jl_string_data(ret));
}

char *jl_call_stringify_2dfunction(int64_t cplx, const char *function,
                                   const char *mime, double *array, int64_t m,
                                   int64_t n) {
  jl_array_t *x;
  jl_value_t *ret;
  jl_value_t *mm = jl_eval_string(mime);
  jl_value_t *io = jl_call0(jl_get_function(jl_base_module, "IOBuffer"));

  char cdims[50];
  jl_array_t *mat;

  sprintf(cdims, "(%ld, %ld)", m, n);

  jl_value_t *dims = (jl_value_t *)jl_eval_string(cdims);
  if (cplx)
    mat = jl_ptr_to_array(array2_cdbl, array, dims, 0);
  else
    mat = jl_ptr_to_array(array2_dbl, array, dims, 0);

  jl_call3(jl_get_function(jl_main_module, function), io,
           (jl_value_t *)jl_call1(MIME, mm), (jl_value_t *)mat);
  JL_CHECK_EXCEPT((""))

  ret = jl_call1(Stringify,
                 jl_call1(jl_get_function(jl_main_module, "take!"), io));
  JL_CHECK_EXCEPT((""))
  return (jl_string_data(ret));
}

GEN_JL_CALL_2D_VOID(jl_call_2dffunction, float, array2_flt, array2_cflt)

GEN_JL_CALL_2D_VOID(jl_call_2dfunction, double, array2_dbl, array2_cdbl)

void jl_call_fsvd(int64_t cplx, const char *func, float *u, float *s, float *vt,
                  float *array, int64_t m, int64_t n) {
  char cdims[50];
  float *uref, *svref, *vtref;
  jl_array_t *mat;

  sprintf(cdims, "(%ld, %ld)", m, n);
  jl_value_t *dims = (jl_value_t *)jl_eval_string(cdims);
  if (cplx)
    mat = jl_ptr_to_array(array2_cflt, array, dims, 0);
  else
    mat = jl_ptr_to_array(array2_flt, array, dims, 0);
  jl_value_t *svd = jl_get_function(jl_main_module, func);
  jl_value_t *ret = jl_call1(svd, (jl_value_t *)mat);
  JL_CHECK_EXCEPT()
  JL_GC_PUSH1(&ret);
  jl_array_t *jl_U = (jl_array_t *)(jl_fieldref(ret, 0));
  jl_array_t *jl_S = (jl_array_t *)(jl_fieldref(ret, 1));
  jl_array_t *jl_Vt = (jl_array_t *)(jl_fieldref(ret, 2));

#if JULIA_VERSION_MINOR > 10
  uref = (float *)jl_array_data(jl_U, float);
  svref = (float *)jl_array_data(jl_S, float);
  vtref = (float *)jl_array_data(jl_Vt, float);
#else
  uref = (float *)jl_array_data(jl_U);
  svref = (float *)jl_array_data(jl_S);
  vtref = (float *)jl_array_data(jl_Vt);
#endif

  if (cplx) {
    memcpy(u, uref, jl_array_len(jl_U) * 2 * sizeof(float));
    memcpy(s, svref, jl_array_len(jl_S) * sizeof(float));
    memcpy(vt, vtref, jl_array_len(jl_Vt) * 2 * sizeof(float));
  } else {
    memcpy(u, uref, jl_array_len(jl_U) * sizeof(float));
    memcpy(s, svref, jl_array_len(jl_S) * sizeof(float));
    memcpy(vt, vtref, jl_array_len(jl_Vt) * sizeof(float));
  }
  JL_GC_POP();
  return;
}

void jl_call_svd(int64_t cplx, const char *func, double *u, double *s,
                 double *vt, double *array, int64_t m, int64_t n) {
  char cdims[50];
  double *uref, *svref, *vtref;
  jl_array_t *mat;

  sprintf(cdims, "(%ld, %ld)", m, n);
  jl_value_t *dims = (jl_value_t *)jl_eval_string(cdims);
  if (cplx)
    mat = jl_ptr_to_array(array2_cdbl, array, dims, 0);
  else
    mat = jl_ptr_to_array(array2_dbl, array, dims, 0);
  jl_value_t *svd = jl_get_function(jl_main_module, func);
  jl_value_t *ret = jl_call1(svd, (jl_value_t *)mat);
  JL_CHECK_EXCEPT()
  JL_GC_PUSH1(&ret);
  jl_array_t *jl_U = (jl_array_t *)(jl_fieldref(ret, 0));
  jl_array_t *jl_S = (jl_array_t *)(jl_fieldref(ret, 1));
  jl_array_t *jl_Vt = (jl_array_t *)(jl_fieldref(ret, 2));

#if JULIA_VERSION_MINOR > 10
  uref = (double *)jl_array_data(jl_U, double);
  svref = (double *)jl_array_data(jl_S, double);
  vtref = (double *)jl_array_data(jl_Vt, double);
#else
  uref = (double *)jl_array_data(jl_U);
  svref = (double *)jl_array_data(jl_S);
  vtref = (double *)jl_array_data(jl_Vt);
#endif

  if (cplx) {
    memcpy(u, uref, jl_array_len(jl_U) * 2 * sizeof(double));
    memcpy(s, svref, jl_array_len(jl_S) * sizeof(double));
    memcpy(vt, vtref, jl_array_len(jl_Vt) * 2 * sizeof(double));
  } else {
    memcpy(u, uref, jl_array_len(jl_U) * sizeof(double));
    memcpy(s, svref, jl_array_len(jl_S) * sizeof(double));
    memcpy(vt, vtref, jl_array_len(jl_Vt) * sizeof(double));
  }
  JL_GC_POP();
  return;
}

void jl_call_feigen(int64_t cplx, const char *func, float *val, float *vec,
                    float *array, int64_t m, int64_t n) {
  char cdims[50];
  float *valref, *vecref;
  jl_array_t *mat;

  sprintf(cdims, "(%ld, %ld)", m, n);
  jl_value_t *dims = (jl_value_t *)jl_eval_string(cdims);
  if (cplx)
    mat = jl_ptr_to_array(array2_cflt, array, dims, 0);
  else
    mat = jl_ptr_to_array(array2_flt, array, dims, 0);

  jl_value_t *eigen = jl_get_function(jl_main_module, func);
  jl_value_t *ret = jl_call1(eigen, (jl_value_t *)mat);
  JL_CHECK_EXCEPT()
  JL_GC_PUSH1(&ret);
  jl_array_t *jl_values = (jl_array_t *)(jl_fieldref(ret, 0));
  jl_array_t *jl_vectors = (jl_array_t *)(jl_fieldref(ret, 1));

#if JULIA_VERSION_MINOR > 10
  valref = (float *)jl_array_data(jl_values, float);
  vecref = (float *)jl_array_data(jl_vectors, float);
#else
  valref = (float *)jl_array_data(jl_values);
  vecref = (float *)jl_array_data(jl_vectors);
#endif

  if (cplx ||
      !strncmp(jl_typename_str(jl_array_eltype((jl_value_t *)jl_values)),
               "Complex", 7)) {
    memcpy(val, valref, jl_array_len(jl_values) * 2 * sizeof(float));
    memcpy(vec, vecref, jl_array_len(jl_vectors) * 2 * sizeof(float));
  } else {
    // Not complex
    for (size_t i = 0; i < jl_array_len(jl_values); i++)
      val[2 * i] = valref[i];
    for (size_t i = 0; i < jl_array_len(jl_vectors); i++)
      vec[2 * i] = vecref[i];
  }
  JL_GC_POP();
  return;
}

void jl_call_eigen(int64_t cplx, const char *func, double *val, double *vec,
                   double *array, int64_t m, int64_t n) {
  char cdims[50];
  double *valref, *vecref;
  jl_array_t *mat;

  sprintf(cdims, "(%ld, %ld)", m, n);
  jl_value_t *dims = (jl_value_t *)jl_eval_string(cdims);
  if (cplx)
    mat = jl_ptr_to_array(array2_cdbl, array, dims, 0);
  else
    mat = jl_ptr_to_array(array2_dbl, array, dims, 0);

  jl_value_t *eigen = jl_get_function(jl_main_module, func);
  jl_value_t *ret = jl_call1(eigen, (jl_value_t *)mat);
  JL_CHECK_EXCEPT()
  JL_GC_PUSH1(&ret);
  jl_array_t *jl_values = (jl_array_t *)(jl_fieldref(ret, 0));
  jl_array_t *jl_vectors = (jl_array_t *)(jl_fieldref(ret, 1));

#if JULIA_VERSION_MINOR > 10
  valref = (double *)jl_array_data(jl_values, double);
  vecref = (double *)jl_array_data(jl_vectors, double);
#else
  valref = (double *)jl_array_data(jl_values);
  vecref = (double *)jl_array_data(jl_vectors);
#endif

  if (cplx ||
      !strncmp(jl_typename_str(jl_array_eltype((jl_value_t *)jl_values)),
               "Complex", 7)) {
    memcpy(val, valref, jl_array_len(jl_values) * 2 * sizeof(double));
    memcpy(vec, vecref, jl_array_len(jl_vectors) * 2 * sizeof(double));
  } else {
    // Not complex
    for (size_t i = 0; i < jl_array_len(jl_values); i++)
      val[2 * i] = valref[i];
    for (size_t i = 0; i < jl_array_len(jl_vectors); i++)
      vec[2 * i] = vecref[i];
  }
  JL_GC_POP();
  return;
}

void jl_call_feigen_system(int64_t cplx, char *func, float *val, float *lvec,
                           float *rvec, float *array, int64_t m, int64_t n) {
  char cdims[50];
  jl_array_t *mat;

  sprintf(cdims, "(%ld, %ld)", m, n);
  jl_value_t *dims = (jl_value_t *)jl_eval_string(cdims);

  if (cplx)
    mat = jl_ptr_to_array(array2_cflt, array, dims, 0);
  else
    mat = jl_ptr_to_array(array2_flt, array, dims, 0);

  jl_value_t *eigens = jl_get_function(jl_main_module, func);
  jl_value_t *ret = jl_call3(eigens, V, V, (jl_value_t *)mat);
  JL_CHECK_EXCEPT()

  JL_GC_PUSH1(&ret);
  if (cplx) {
    float *valref, *lvecref, *rvecref;
    jl_array_t *W = (jl_array_t *)(jl_fieldref(ret, 0));
    jl_array_t *VL = (jl_array_t *)(jl_fieldref(ret, 1));
    jl_array_t *VR = (jl_array_t *)(jl_fieldref(ret, 2));

#if JULIA_VERSION_MINOR > 10
    valref = (float *)jl_array_data(W, float);
    lvecref = (float *)jl_array_data(VL, float);
    rvecref = (float *)jl_array_data(VR, float);
#else
    valref = (float *)jl_array_data(W);
    lvecref = (float *)jl_array_data(VL);
    rvecref = (float *)jl_array_data(VR);
#endif
    memcpy(val, valref, jl_array_len(W) * 2 * sizeof(float));
    memcpy(lvec, lvecref, jl_array_len(VL) * 2 * sizeof(float));
    memcpy(rvec, rvecref, jl_array_len(VL) * 2 * sizeof(float));
  } else {
    float *rvalref, *ivalref, *lvecref, *rvecref;
    jl_array_t *RW = (jl_array_t *)(jl_fieldref(ret, 0));
    jl_array_t *IW = (jl_array_t *)(jl_fieldref(ret, 1));
    jl_array_t *VL = (jl_array_t *)(jl_fieldref(ret, 2));
    jl_array_t *VR = (jl_array_t *)(jl_fieldref(ret, 3));

#if JULIA_VERSION_MINOR > 10
    rvalref = (float *)jl_array_data(RW, float);
    ivalref = (float *)jl_array_data(IW, float);
    lvecref = (float *)jl_array_data(VL, float);
    rvecref = (float *)jl_array_data(VR, float);
#else
    rvalref = (float *)jl_array_data(RW);
    ivalref = (float *)jl_array_data(IW);
    lvecref = (float *)jl_array_data(VL);
    rvecref = (float *)jl_array_data(VR);
#endif

    for (size_t i = 0; i < jl_array_len(RW); i++) {
      val[2 * i] = rvalref[i];
      val[2 * i + 1] = ivalref[i];
    }
    memcpy(lvec, lvecref, jl_array_len(VL) * sizeof(float));
    memcpy(rvec, rvecref, jl_array_len(VL) * sizeof(float));
  }

  JL_GC_POP();
  return;
}

void jl_call_eigen_system(int64_t cplx, char *func, double *val, double *lvec,
                          double *rvec, double *array, int64_t m, int64_t n) {
  char cdims[50];
  jl_array_t *mat;

  sprintf(cdims, "(%ld, %ld)", m, n);
  jl_value_t *dims = (jl_value_t *)jl_eval_string(cdims);

  if (cplx)
    mat = jl_ptr_to_array(array2_cdbl, array, dims, 0);
  else
    mat = jl_ptr_to_array(array2_dbl, array, dims, 0);

  jl_value_t *eigens = jl_get_function(jl_main_module, func);
  jl_value_t *ret = jl_call3(eigens, V, V, (jl_value_t *)mat);
  JL_CHECK_EXCEPT()

  JL_GC_PUSH1(&ret);
  if (cplx) {
    double *valref, *lvecref, *rvecref;
    jl_array_t *W = (jl_array_t *)(jl_fieldref(ret, 0));
    jl_array_t *VL = (jl_array_t *)(jl_fieldref(ret, 1));
    jl_array_t *VR = (jl_array_t *)(jl_fieldref(ret, 2));

#if JULIA_VERSION_MINOR > 10
    valref = (double *)jl_array_data(W, double);
    lvecref = (double *)jl_array_data(VL, double);
    rvecref = (double *)jl_array_data(VR, double);
#else
    valref = (double *)jl_array_data(W);
    lvecref = (double *)jl_array_data(VL);
    rvecref = (double *)jl_array_data(VR);
#endif
    memcpy(val, valref, jl_array_len(W) * 2 * sizeof(double));
    memcpy(lvec, lvecref, jl_array_len(VL) * 2 * sizeof(double));
    memcpy(rvec, rvecref, jl_array_len(VL) * 2 * sizeof(double));
  } else {
    double *rvalref, *ivalref, *lvecref, *rvecref;
    jl_array_t *RW = (jl_array_t *)(jl_fieldref(ret, 0));
    jl_array_t *IW = (jl_array_t *)(jl_fieldref(ret, 1));
    jl_array_t *VL = (jl_array_t *)(jl_fieldref(ret, 2));
    jl_array_t *VR = (jl_array_t *)(jl_fieldref(ret, 3));

#if JULIA_VERSION_MINOR > 10
    rvalref = (double *)jl_array_data(RW, double);
    ivalref = (double *)jl_array_data(IW, double);
    lvecref = (double *)jl_array_data(VL, double);
    rvecref = (double *)jl_array_data(VR, double);
#else
    rvalref = (double *)jl_array_data(RW);
    ivalref = (double *)jl_array_data(IW);
    lvecref = (double *)jl_array_data(VL);
    rvecref = (double *)jl_array_data(VR);
#endif

    for (size_t i = 0; i < jl_array_len(RW); i++) {
      val[2 * i] = rvalref[i];
      val[2 * i + 1] = ivalref[i];
    }
    memcpy(lvec, lvecref, jl_array_len(VL) * sizeof(double));
    memcpy(rvec, rvecref, jl_array_len(VL) * sizeof(double));
  }

  JL_GC_POP();
  return;
}

GEN_JL_CALL_2D_RET(jl_call_bool_2dffunction, int8_t, float, array2_flt,
                   array2_cflt, jl_unbox_bool, -1)

GEN_JL_CALL_2D_RET(jl_call_bool_2dfunction, int8_t, double, array2_dbl,
                   array2_cdbl, jl_unbox_bool, -1)

GEN_JL_CALL_2D_RET(jl_call_flt_2dffunction, float, float, array2_flt,
                   array2_cflt, jl_unbox_float32, NAN)

GEN_JL_CALL_2D_RET(jl_call_dbl_2dfunction, double, double, array2_dbl,
                   array2_cdbl, jl_unbox_float64, NAN)

GEN_JL_CALL_2D_RET_ARG(jl_call_flt_2dffunction_flt, float, float, array2_flt,
                       array2_cflt, jl_unbox_float32, jl_box_float32, NAN)

GEN_JL_CALL_2D_RET_ARG(jl_call_dbl_2dfunction_dbl, double, double, array2_dbl,
                       array2_cdbl, jl_unbox_float64, jl_box_float64, NAN)

void jl_call_iarray_2dffunction(int64_t cplx, const char *func, int64_t *ip,
                                float *array, int64_t m, int64_t n) {
  int64_t *iptmp;
  char cdims[50];
  jl_array_t *mat;

  sprintf(cdims, "(%ld, %ld)", m, n);
  jl_value_t *dims = (jl_value_t *)jl_eval_string(cdims);
  if (cplx)
    mat = jl_ptr_to_array(array2_cflt, array, dims, 0);
  else
    mat = jl_ptr_to_array(array2_flt, array, dims, 0);

  jl_value_t *function = jl_get_function(jl_main_module, func);

  jl_value_t *ret = jl_call1(function, (jl_value_t *)mat);
  JL_CHECK_EXCEPT()
  JL_GC_PUSH1(&ret);
  jl_array_t *ipiv = (jl_array_t *)(jl_fieldref(ret, 1));

#if JULIA_VERSION_MINOR > 10
  iptmp = (int64_t *)jl_array_data(ipiv, int64_t);
#else
  iptmp = (int64_t *)jl_array_data(ipiv);
#endif

  memcpy(ip, iptmp, jl_array_len(ipiv) * sizeof(int64_t));
  JL_GC_POP();
  return;
}

void jl_call_iarray_2dfunction(int64_t cplx, const char *func, int64_t *ip,
                               double *array, int64_t m, int64_t n) {
  int64_t *iptmp;
  char cdims[50];
  jl_array_t *mat;

  sprintf(cdims, "(%ld, %ld)", m, n);
  jl_value_t *dims = (jl_value_t *)jl_eval_string(cdims);
  if (cplx)
    mat = jl_ptr_to_array(array2_cdbl, array, dims, 0);
  else
    mat = jl_ptr_to_array(array2_dbl, array, dims, 0);

  jl_value_t *function = jl_get_function(jl_main_module, func);

  jl_value_t *ret = jl_call1(function, (jl_value_t *)mat);
  JL_CHECK_EXCEPT()
  JL_GC_PUSH1(&ret);
  jl_array_t *ipiv = (jl_array_t *)(jl_fieldref(ret, 1));

#if JULIA_VERSION_MINOR > 10
  iptmp = (int64_t *)jl_array_data(ipiv, int64_t);
#else
  iptmp = (int64_t *)jl_array_data(ipiv);
#endif

  memcpy(ip, iptmp, jl_array_len(ipiv) * sizeof(int64_t));
  JL_GC_POP();
  return;
}

GEN_JL_CALL_2D2_VOID(jl_call_2d2ffunction, float, array2_flt, array2_cflt)

GEN_JL_CALL_2D2_VOID(jl_call_2d2function, double, array2_dbl, array2_cdbl)

int64_t jl_call_wrap_2dfarray(int64_t cplx, int64_t index, float *array,
                              int64_t m, int64_t n) {
  char cdims[50];
  jl_array_t *mat;

  sprintf(cdims, "(%ld, %ld)", m, n);
  jl_value_t *dims = (jl_value_t *)jl_eval_string(cdims);

  if (cplx)
    mat = jl_ptr_to_array(array2_cflt, array, dims, 0);
  else
    mat = jl_ptr_to_array(array2_flt, array, dims, 0);

  jl_value_t *function = jl_get_function(jl_main_module, "deepcopy");
  jl_value_t *var = jl_call1(function, (jl_value_t *)mat);
  JL_CHECK_EXCEPT((0))

  JL_GC_PUSH1(&var);
  jl_call3(setind, refs, var, jl_box_int64(index));
  JL_GC_POP();
  return (index);
}

int64_t jl_call_wrap_2darray(int64_t cplx, int64_t index, double *array,
                             int64_t m, int64_t n) {
  char cdims[50];
  jl_array_t *mat;

  sprintf(cdims, "(%ld, %ld)", m, n);
  jl_value_t *dims = (jl_value_t *)jl_eval_string(cdims);

  if (cplx)
    mat = jl_ptr_to_array(array2_cdbl, array, dims, 0);
  else
    mat = jl_ptr_to_array(array2_dbl, array, dims, 0);

  jl_value_t *function = jl_get_function(jl_main_module, "deepcopy");
  jl_value_t *var = jl_call1(function, (jl_value_t *)mat);
  JL_CHECK_EXCEPT((0))

  JL_GC_PUSH1(&var);
  jl_call3(setind, refs, var, jl_box_int64(index));
  JL_GC_POP();
  return (index);
}

GEN_JL_CALL_2D2_RET(jl_call_bool_2d2ffunction, int8_t, float, array2_flt,
                    array2_cflt, jl_unbox_bool, -1)

GEN_JL_CALL_2D2_RET(jl_call_bool_2d2function, int8_t, double, array2_dbl,
                    array2_cdbl, jl_unbox_bool, -1)

GEN_JL_CALL_2D3_VOID(jl_call_2d3ffunction, float, array2_flt, array2_cflt)

GEN_JL_CALL_2D3_VOID(jl_call_2d3function, double, array2_dbl, array2_cdbl)

void jl_call_2v2dffunction(const char *func, int64_t size, float *vec1,
                           float *vec2, float *array, int64_t m, int64_t n) {
  char cdims[50];
  sprintf(cdims, "(%ld, %ld)", m, n);
  jl_value_t *dims = (jl_value_t *)jl_eval_string(cdims);

  jl_array_t *v1 = jl_ptr_to_array_1d(array_flt, vec1, size, 0);
  jl_array_t *v2 = jl_ptr_to_array_1d(array_flt, vec2, size, 0);
  jl_array_t *mat = jl_ptr_to_array(array2_flt, array, dims, 0);

  jl_value_t *function = jl_get_function(jl_main_module, func);
  jl_call3(function, (jl_value_t *)v1, (jl_value_t *)v2, (jl_value_t *)mat);
  JL_CHECK_EXCEPT()
  return;
}

void jl_call_2v2dfunction(const char *func, int64_t size, double *vec1,
                          double *vec2, double *array, int64_t m, int64_t n) {
  char cdims[50];
  sprintf(cdims, "(%ld, %ld)", m, n);
  jl_value_t *dims = (jl_value_t *)jl_eval_string(cdims);

  jl_array_t *v1 = jl_ptr_to_array_1d(array_dbl, vec1, size, 0);
  jl_array_t *v2 = jl_ptr_to_array_1d(array_dbl, vec2, size, 0);
  jl_array_t *mat = jl_ptr_to_array(array2_dbl, array, dims, 0);

  jl_value_t *function = jl_get_function(jl_main_module, func);
  jl_call3(function, (jl_value_t *)v1, (jl_value_t *)v2, (jl_value_t *)mat);
  JL_CHECK_EXCEPT()
  return;
}

void jl_call_array_2dffunction(int64_t acplx, int64_t cplx, char *func,
                               float *arr, float *array, int64_t m, int64_t n) {
  char cdims[50];
  float *svref;
  jl_array_t *mat;

  sprintf(cdims, "(%ld, %ld)", m, n);
  jl_value_t *dims = (jl_value_t *)jl_eval_string(cdims);
  if (cplx)
    mat = jl_ptr_to_array(array2_cflt, array, dims, 0);
  else
    mat = jl_ptr_to_array(array2_flt, array, dims, 0);
  jl_value_t *function = jl_get_function(jl_main_module, func);
  jl_array_t *ret = (jl_array_t *)jl_call1(function, (jl_value_t *)mat);
  JL_CHECK_EXCEPT()
  JL_GC_PUSH1(&ret);

#if JULIA_VERSION_MINOR > 10
  svref = (float *)jl_array_data(ret, float);
#else
  svref = (float *)jl_array_data(ret);
#endif

  if (acplx && !strncmp(jl_typename_str(jl_array_eltype((jl_value_t *)ret)),
                        "Complex", 7)) {
    memcpy(arr, svref, jl_array_len(ret) * 2 * sizeof(float));
  } else if (acplx) {
    // ret is not a complex array but arr is
    for (size_t i = 0; i < jl_array_len(ret); i++)
      arr[2 * i] = svref[i];
  } else {
    // real array
    memcpy(arr, svref, jl_array_len(ret) * sizeof(float));
  }
  JL_GC_POP();
  return;
}

void jl_call_array_2dfunction(int64_t acplx, int64_t cplx, char *func,
                              double *arr, double *array, int64_t m,
                              int64_t n) {
  char cdims[50];
  double *svref;
  jl_array_t *mat;

  sprintf(cdims, "(%ld, %ld)", m, n);
  jl_value_t *dims = (jl_value_t *)jl_eval_string(cdims);
  if (cplx)
    mat = jl_ptr_to_array(array2_cdbl, array, dims, 0);
  else
    mat = jl_ptr_to_array(array2_dbl, array, dims, 0);
  jl_value_t *function = jl_get_function(jl_main_module, func);
  jl_array_t *ret = (jl_array_t *)jl_call1(function, (jl_value_t *)mat);
  JL_CHECK_EXCEPT()
  JL_GC_PUSH1(&ret);

#if JULIA_VERSION_MINOR > 10
  svref = (double *)jl_array_data(ret, double);
#else
  svref = (double *)jl_array_data(ret);
#endif

  if (acplx && !strncmp(jl_typename_str(jl_array_eltype((jl_value_t *)ret)),
                        "Complex", 7)) {
    memcpy(arr, svref, jl_array_len(ret) * 2 * sizeof(double));
  } else if (acplx) {
    // ret is not a complex array but arr is
    for (size_t i = 0; i < jl_array_len(ret); i++)
      arr[2 * i] = svref[i];
  } else {
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

void jl_init_env(void) {
  jl_options.handle_signals = JL_OPTIONS_HANDLE_SIGNALS_OFF;
  jl_init();
  jl_complex32_type = (jl_value_t *)jl_eval_string("ComplexF32");
  jl_complex64_type = (jl_value_t *)jl_eval_string("ComplexF64");

  refs = (jl_value_t *)jl_eval_string("refs = IdDict{Int64, Any}()");
  reft = (jl_datatype_t*)jl_eval_string("Base.RefValue{Any}");
  V = (jl_value_t *)jl_eval_string("'V'");
  array_int64 = jl_apply_array_type((jl_value_t *)jl_int64_type, 1);
  array_dbl = jl_apply_array_type((jl_value_t *)jl_float64_type, 1);
  array_cdbl = jl_apply_array_type(jl_complex64_type, 1);
  array_flt = jl_apply_array_type((jl_value_t *)jl_float32_type, 1);
  array_cflt = jl_apply_array_type(jl_complex32_type, 1);
  array2_flt = jl_apply_array_type((jl_value_t *)jl_float32_type, 2);
  array2_cflt = jl_apply_array_type(jl_complex32_type, 2);
  array2_dbl = jl_apply_array_type((jl_value_t *)jl_float64_type, 2);
  array2_cdbl = jl_apply_array_type(jl_complex64_type, 2);

  // To use struct for immutables
  // refi = (jl_datatype_t*) jl_eval_string("Base.RefValue{Any}");

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
  jl_eval_str("import SpecialFunctions: gamma, digamma, polygamma, erf, erfi, "
              "erfc, zeta");
  jl_eval_str(
      "function _ws_eval1(func::AbstractString, a); s = strip(func); "
      "s == \"-\" || s == \"-(\" || s == \"Minus\" ? Main.MathLink.weval(-a) : "
      "s == \"+\" || s == \"+(\" || s == \"Plus\" ? Main.MathLink.weval(+a) : "
      "Main.MathLink.weval(Main.MathLink.WSymbol(s)(a)); end;\n"
      "_ws_eval2(func::AbstractString, a, b) = "
      "Main.MathLink.weval(Main.MathLink.WSymbol(strip(func))(a, b));\n"
      "_ws_eval3(func::AbstractString, a, b, c) = "
      "Main.MathLink.weval(Main.MathLink.WSymbol(strip(func))(a, b, c));\n"
      "_ws_eval4(func::AbstractString, a, b, c, d) = "
      "Main.MathLink.weval(Main.MathLink.WSymbol(strip(func))(a, b, c, d));\n"
      "function _ws_binop(op::AbstractString, a, b); s = strip(op); "
      "s == \"+\" || s == \"Plus\" ? Main.MathLink.weval(a + b) : "
      "s == \"-\" || s == \"Subtract\" ? Main.MathLink.weval(a - b) : "
      "s == \"*\" || s == \"Times\" ? Main.MathLink.weval(a * b) : "
      "s == \"/\" || s == \"Divide\" ? Main.MathLink.weval(a / b) : "
      "s == \"//\" ? Main.MathLink.weval(a // b) : "
      "s == \"^\" || s == \"Power\" ? Main.MathLink.weval(a ^ b) : "
      "Main.MathLink.weval(Main.MathLink.WSymbol(s)(a, b)); end;\n"
      "function _ws_binbop(op::AbstractString, a, b)::Int8; s = strip(op); "
      "s == \"!=\" ? (a != b ? Int8(1) : Int8(0)) : "
      "s == \"<\" ? (a < b ? Int8(1) : Int8(0)) : "
      "s == \"<=\" ? (a <= b ? Int8(1) : Int8(0)) : "
      "s == \">\" ? (a > b ? Int8(1) : Int8(0)) : "
      "s == \">=\" ? (a >= b ? Int8(1) : Int8(0)) : "
      "(a == b ? Int8(1) : Int8(0)); end;\n"
      "_ws_apply1(sym::AbstractString, a) = "
      "Main.MathLink.WSymbol(strip(sym))(a);\n"
      "_ws_apply2(sym::AbstractString, a, b) = "
      "Main.MathLink.WSymbol(strip(sym))(a, b);\n"
      "_ws_apply3(sym::AbstractString, a, b, c) = "
      "Main.MathLink.WSymbol(strip(sym))(a, b, c);\n"
      "_ws_apply4(sym::AbstractString, a, b, c, d) = "
      "Main.MathLink.WSymbol(strip(sym))(a, b, c, d);\n"
      "_ws_apply5(sym::AbstractString, a, b, c, d, e) = "
      "Main.MathLink.WSymbol(strip(sym))(a, b, c, d, e);\n");
}

void jl_clear_env(void) {
  jl_eval_string("refs=nothing");
  jl_atexit_hook(0);
}
