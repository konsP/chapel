/* Atomics.chpl:33 */
static void chpl__init_Atomics(int64_t _ln, c_string _fn) {
  c_string modFormatStr;
  c_string modStr;
  _ref_int32_t refIndentLevel = NULL;
  if (chpl__init_Atomics_p) {
    goto _exit_chpl__init_Atomics;
  }
  modFormatStr = "%*s\n";
  modStr = "Atomics";
  printModuleInit(modFormatStr, modStr, INT64(7));
  refIndentLevel = &moduleInitLevel;
  *(refIndentLevel) += INT64(1);
  chpl__init_Atomics_p = true;
  {
    chpl__init_MemConsistency(INT64(33), "/home/kp167/chap-svn/modules/internal/Atomics.chpl");
  }
  *(refIndentLevel) -= INT64(1);
  _exit_chpl__init_Atomics:;
  return;
}

/* Atomics.chpl:260 */
static atomicflag _construct_atomicflag(atomic_flag _v, atomicflag* const meme) {
  atomicflag this8;
  this8 = *(meme);
  (&this8)->_v = _v;
  return this8;
}

/* Atomics.chpl:267 */
static void on_fn(chpl____wide__ref_atomicflag* const this8, memory_order order, chpl____wide__ref_chpl_bool* const ret) {
  chpl____wide__ref_atomic_flag call_tmp = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_bool call_tmp2;
  _ref_atomic_flag T = NULL;
  chpl____wide__ref_atomic_flag chpl_macro_tmp_54;
  chpl____wide__ref_atomic_flag chpl_macro_tmp_55;
  chpl_macro_tmp_54.locale = (*(this8)).locale;
  chpl_macro_tmp_54.addr = &(((*(this8)).addr)->_v);
  call_tmp = chpl_macro_tmp_54;
  T = (&call_tmp)->addr;
  call_tmp2 = atomic_load_explicit_flag(T, order);
  chpl_macro_tmp_55.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_55.addr = T;
  call_tmp = chpl_macro_tmp_55;
  chpl_gen_comm_put(((void*)(&call_tmp2)), chpl_nodeFromLocaleID(&((*(ret)).locale), INT64(0), NULL), (*(ret)).addr, sizeof(chpl_bool), -1, INT64(1), INT64(267), "/home/kp167/chap-svn/modules/internal/Atomics.chpl");
  return;
}

/* Atomics.chpl:267 */
static void wrapon_fn(_class_localson_fn c) {
  chpl____wide__ref_atomicflag _1_this = {CHPL_LOCALEID_T_INIT, NULL};
  memory_order _2_order;
  chpl____wide__ref_chpl_bool _3__tmp = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_check_nil(c, INT64(267), "/home/kp167/chap-svn/modules/internal/Atomics.chpl");
  _1_this = (c)->_1_this;
  chpl_check_nil(c, INT64(267), "/home/kp167/chap-svn/modules/internal/Atomics.chpl");
  _2_order = (c)->_2_order;
  chpl_check_nil(c, INT64(267), "/home/kp167/chap-svn/modules/internal/Atomics.chpl");
  _3__tmp = (c)->_3__tmp;
  on_fn(&_1_this, _2_order, &_3__tmp);
  return;
}

/* Atomics.chpl:294 */
static void _local_on_fn(chpl____wide__ref_atomicflag* const this8, memory_order order, chpl____wide__ref_chpl_bool* const ret) {
  _ref_atomic_flag call_tmp = NULL;
  _ref_atomicflag local_this = NULL;
  chpl_bool call_tmp2;
  _ref_atomic_flag T = NULL;
  _ref_chpl_bool local_ret = NULL;
  chpl_check_local(chpl_nodeFromLocaleID(&((this8)->locale), INT64(0), NULL), INT64(294), "/home/kp167/chap-svn/modules/internal/Atomics.chpl", "cannot access remote data in local block");
  local_this = (this8)->addr;
  chpl_check_nil(local_this, INT64(294), "/home/kp167/chap-svn/modules/internal/Atomics.chpl");
  call_tmp = &((local_this)->_v);
  T = call_tmp;
  call_tmp2 = atomic_flag_test_and_set_explicit(T, order);
  call_tmp = T;
  chpl_check_local(chpl_nodeFromLocaleID(&((ret)->locale), INT64(0), NULL), INT64(294), "/home/kp167/chap-svn/modules/internal/Atomics.chpl", "cannot access remote data in local block");
  local_ret = (ret)->addr;
  *(local_ret) = call_tmp2;
  return;
}

/* Atomics.chpl:294 */
static void on_fn2(chpl____wide__ref_atomicflag* const this8, memory_order order, chpl____wide__ref_chpl_bool* const ret) {
  chpl____wide__ref_atomic_flag call_tmp = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_bool call_tmp2;
  _ref_atomic_flag T = NULL;
  chpl____wide__ref_atomic_flag chpl_macro_tmp_56;
  chpl____wide__ref_atomic_flag chpl_macro_tmp_57;
  chpl_macro_tmp_56.locale = (*(this8)).locale;
  chpl_macro_tmp_56.addr = &(((*(this8)).addr)->_v);
  call_tmp = chpl_macro_tmp_56;
  T = (&call_tmp)->addr;
  call_tmp2 = atomic_flag_test_and_set_explicit(T, order);
  chpl_macro_tmp_57.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_57.addr = T;
  call_tmp = chpl_macro_tmp_57;
  chpl_gen_comm_put(((void*)(&call_tmp2)), chpl_nodeFromLocaleID(&((*(ret)).locale), INT64(0), NULL), (*(ret)).addr, sizeof(chpl_bool), -1, INT64(1), INT64(294), "/home/kp167/chap-svn/modules/internal/Atomics.chpl");
  return;
}

/* Atomics.chpl:294 */
static void _local_wrapon_fn(_class_localson_fn2 c) {
  chpl____wide__ref_atomicflag _1_this = {CHPL_LOCALEID_T_INIT, NULL};
  memory_order _2_order;
  chpl____wide__ref_chpl_bool _3__tmp = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_check_nil(c, INT64(294), "/home/kp167/chap-svn/modules/internal/Atomics.chpl");
  _1_this = (c)->_1_this;
  chpl_check_nil(c, INT64(294), "/home/kp167/chap-svn/modules/internal/Atomics.chpl");
  _2_order = (c)->_2_order;
  chpl_check_nil(c, INT64(294), "/home/kp167/chap-svn/modules/internal/Atomics.chpl");
  _3__tmp = (c)->_3__tmp;
  _local_on_fn(&_1_this, _2_order, &_3__tmp);
  return;
}

/* Atomics.chpl:294 */
static void wrapon_fn2(_class_localson_fn2 c) {
  chpl____wide__ref_atomicflag _1_this = {CHPL_LOCALEID_T_INIT, NULL};
  memory_order _2_order;
  chpl____wide__ref_chpl_bool _3__tmp = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_check_nil(c, INT64(294), "/home/kp167/chap-svn/modules/internal/Atomics.chpl");
  _1_this = (c)->_1_this;
  chpl_check_nil(c, INT64(294), "/home/kp167/chap-svn/modules/internal/Atomics.chpl");
  _2_order = (c)->_2_order;
  chpl_check_nil(c, INT64(294), "/home/kp167/chap-svn/modules/internal/Atomics.chpl");
  _3__tmp = (c)->_3__tmp;
  on_fn2(&_1_this, _2_order, &_3__tmp);
  return;
}

/* Atomics.chpl:298 */
static void _local_on_fn2(chpl____wide__ref_atomicflag* const this8, memory_order order) {
  _ref_atomic_flag call_tmp = NULL;
  _ref_atomicflag local_this = NULL;
  _ref_atomic_flag T = NULL;
  chpl_check_local(chpl_nodeFromLocaleID(&((this8)->locale), INT64(0), NULL), INT64(298), "/home/kp167/chap-svn/modules/internal/Atomics.chpl", "cannot access remote data in local block");
  local_this = (this8)->addr;
  chpl_check_nil(local_this, INT64(298), "/home/kp167/chap-svn/modules/internal/Atomics.chpl");
  call_tmp = &((local_this)->_v);
  T = call_tmp;
  atomic_flag_clear_explicit(T, order);
  call_tmp = T;
  return;
}

/* Atomics.chpl:298 */
static void on_fn3(chpl____wide__ref_atomicflag* const this8, memory_order order) {
  chpl____wide__ref_atomic_flag call_tmp = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_atomic_flag T = NULL;
  chpl____wide__ref_atomic_flag chpl_macro_tmp_58;
  chpl____wide__ref_atomic_flag chpl_macro_tmp_59;
  chpl_macro_tmp_58.locale = (*(this8)).locale;
  chpl_macro_tmp_58.addr = &(((*(this8)).addr)->_v);
  call_tmp = chpl_macro_tmp_58;
  T = (&call_tmp)->addr;
  atomic_flag_clear_explicit(T, order);
  chpl_macro_tmp_59.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_59.addr = T;
  call_tmp = chpl_macro_tmp_59;
  return;
}

/* Atomics.chpl:298 */
static void _local_wrapon_fn2(_class_localson_fn3 c) {
  chpl____wide__ref_atomicflag _1_this = {CHPL_LOCALEID_T_INIT, NULL};
  memory_order _2_order;
  chpl_check_nil(c, INT64(298), "/home/kp167/chap-svn/modules/internal/Atomics.chpl");
  _1_this = (c)->_1_this;
  chpl_check_nil(c, INT64(298), "/home/kp167/chap-svn/modules/internal/Atomics.chpl");
  _2_order = (c)->_2_order;
  _local_on_fn2(&_1_this, _2_order);
  return;
}

/* Atomics.chpl:298 */
static void wrapon_fn3(_class_localson_fn3 c) {
  chpl____wide__ref_atomicflag _1_this = {CHPL_LOCALEID_T_INIT, NULL};
  memory_order _2_order;
  chpl_check_nil(c, INT64(298), "/home/kp167/chap-svn/modules/internal/Atomics.chpl");
  _1_this = (c)->_1_this;
  chpl_check_nil(c, INT64(298), "/home/kp167/chap-svn/modules/internal/Atomics.chpl");
  _2_order = (c)->_2_order;
  on_fn3(&_1_this, _2_order);
  return;
}

/* Atomics.chpl:303 */
static void on_fn4(chpl____wide__ref_atomicflag* const this8, chpl_bool val, memory_order order) {
  memory_order local_memory_order_relaxed;
  chpl_bool T;
  chpl_bool ret;
  chpl_bool ret2;
  chpl_localeID_t call_tmp;
  _ref_chpl_bool T2 = NULL;
  _class_localson_fn _args_foron_fn = NULL;
  int64_t chpl_here_alloc_size;
  chpl_opaque chpl_here_alloc_tmp;
  chpl____wide__ref_chpl_bool T3 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_chpl_bool _ref_tmp_ = NULL;
  chpl_bool call_tmp2;
  chpl_bool ret3;
  chpl_bool ret4;
  chpl_localeID_t call_tmp3;
  _ref_chpl_bool T4 = NULL;
  _class_localson_fn _args_foron_fn2 = NULL;
  int64_t chpl_here_alloc_size2;
  chpl_opaque chpl_here_alloc_tmp2;
  chpl____wide__ref_chpl_bool T5 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_chpl_bool _ref_tmp_2 = NULL;
  chpl_bool call_tmp4;
  chpl____wide__ref_chpl_bool chpl_macro_tmp_60;
  chpl____wide__ref_chpl_bool chpl_macro_tmp_61;
  local_memory_order_relaxed = memory_order_relaxed;
  ret = false;
  ret2 = false;
  call_tmp = (this8)->locale;
  T2 = &ret2;
  chpl_here_alloc_size = sizeof(chpl__class_localson_fn_object);
  chpl_here_alloc_tmp = chpl_here_alloc(chpl_here_alloc_size, INT16(36));
  _args_foron_fn = ((_class_localson_fn)(chpl_here_alloc_tmp));
  chpl_check_nil(_args_foron_fn, INT64(304), "/home/kp167/chap-svn/modules/internal/Atomics.chpl");
  (_args_foron_fn)->_0__tmp = call_tmp;
  chpl_check_nil(_args_foron_fn, INT64(304), "/home/kp167/chap-svn/modules/internal/Atomics.chpl");
  (_args_foron_fn)->_1_this = *(this8);
  chpl_check_nil(_args_foron_fn, INT64(304), "/home/kp167/chap-svn/modules/internal/Atomics.chpl");
  (_args_foron_fn)->_2_order = local_memory_order_relaxed;
  chpl_macro_tmp_60.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_60.addr = T2;
  T3 = chpl_macro_tmp_60;
  chpl_check_nil(_args_foron_fn, INT64(304), "/home/kp167/chap-svn/modules/internal/Atomics.chpl");
  (_args_foron_fn)->_3__tmp = T3;
  /*** wrapon_fn ***/ chpl_executeOn(&call_tmp, INT32(0), _args_foron_fn, sizeof(chpl__class_localson_fn_object), INT64(267), "/home/kp167/chap-svn/modules/internal/Atomics.chpl");
  chpl_here_free(((void*)(_args_foron_fn)));
  _ref_tmp_ = &ret;
  *(_ref_tmp_) = ret2;
  call_tmp2 = (ret != val);
  T = call_tmp2;
  while (T) {
    chpl_task_yield();
    ret3 = false;
    ret4 = false;
    call_tmp3 = (this8)->locale;
    T4 = &ret4;
    chpl_here_alloc_size2 = sizeof(chpl__class_localson_fn_object);
    chpl_here_alloc_tmp2 = chpl_here_alloc(chpl_here_alloc_size2, INT16(36));
    _args_foron_fn2 = ((_class_localson_fn)(chpl_here_alloc_tmp2));
    chpl_check_nil(_args_foron_fn2, INT64(304), "/home/kp167/chap-svn/modules/internal/Atomics.chpl");
    (_args_foron_fn2)->_0__tmp = call_tmp3;
    chpl_check_nil(_args_foron_fn2, INT64(304), "/home/kp167/chap-svn/modules/internal/Atomics.chpl");
    (_args_foron_fn2)->_1_this = *(this8);
    chpl_check_nil(_args_foron_fn2, INT64(304), "/home/kp167/chap-svn/modules/internal/Atomics.chpl");
    (_args_foron_fn2)->_2_order = local_memory_order_relaxed;
    chpl_macro_tmp_61.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_61.addr = T4;
    T5 = chpl_macro_tmp_61;
    chpl_check_nil(_args_foron_fn2, INT64(304), "/home/kp167/chap-svn/modules/internal/Atomics.chpl");
    (_args_foron_fn2)->_3__tmp = T5;
    /*** wrapon_fn ***/ chpl_executeOn(&call_tmp3, INT32(0), _args_foron_fn2, sizeof(chpl__class_localson_fn_object), INT64(267), "/home/kp167/chap-svn/modules/internal/Atomics.chpl");
    chpl_here_free(((void*)(_args_foron_fn2)));
    _ref_tmp_2 = &ret3;
    *(_ref_tmp_2) = ret4;
    call_tmp4 = (ret3 != val);
    T = call_tmp4;
  }
  atomic_thread_fence(order);
  return;
}

/* Atomics.chpl:303 */
static void wrapon_fn4(_class_localson_fn4 c) {
  chpl____wide__ref_atomicflag _1_this = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_bool _2_val;
  memory_order _3_order;
  chpl_check_nil(c, INT64(303), "/home/kp167/chap-svn/modules/internal/Atomics.chpl");
  _1_this = (c)->_1_this;
  chpl_check_nil(c, INT64(303), "/home/kp167/chap-svn/modules/internal/Atomics.chpl");
  _2_val = (c)->_2_val;
  chpl_check_nil(c, INT64(303), "/home/kp167/chap-svn/modules/internal/Atomics.chpl");
  _3_order = (c)->_3_order;
  on_fn4(&_1_this, _2_val, _3_order);
  return;
}

/* Atomics.chpl:1032 */
static atomic_int64 _construct_atomic_int64(atomic_int_least64_t _v, atomic_int64* const meme) {
  atomic_int64 this8;
  this8 = *(meme);
  (&this8)->_v = _v;
  return this8;
}

/* Atomics.chpl:1039 */
static void on_fn5(chpl____wide__ref_atomic_int64* const this8, memory_order order, chpl____wide__ref_int64_t* const ret) {
  chpl____wide__ref_atomic_int_least64_t call_tmp = {CHPL_LOCALEID_T_INIT, NULL};
  int64_t call_tmp2;
  _ref_atomic_int_least64_t T = NULL;
  chpl____wide__ref_atomic_int_least64_t chpl_macro_tmp_62;
  chpl____wide__ref_atomic_int_least64_t chpl_macro_tmp_63;
  chpl_macro_tmp_62.locale = (*(this8)).locale;
  chpl_macro_tmp_62.addr = &(((*(this8)).addr)->_v);
  call_tmp = chpl_macro_tmp_62;
  T = (&call_tmp)->addr;
  call_tmp2 = atomic_load_explicit_int_least64_t(T, order);
  chpl_macro_tmp_63.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_63.addr = T;
  call_tmp = chpl_macro_tmp_63;
  chpl_gen_comm_put(((void*)(&call_tmp2)), chpl_nodeFromLocaleID(&((*(ret)).locale), INT64(0), NULL), (*(ret)).addr, sizeof(int64_t), -1, INT64(1), INT64(1039), "/home/kp167/chap-svn/modules/internal/Atomics.chpl");
  return;
}

/* Atomics.chpl:1039 */
static void wrapon_fn5(_class_localson_fn5 c) {
  chpl____wide__ref_atomic_int64 _1_this = {CHPL_LOCALEID_T_INIT, NULL};
  memory_order _2_order;
  chpl____wide__ref_int64_t _3__tmp = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_check_nil(c, INT64(1039), "/home/kp167/chap-svn/modules/internal/Atomics.chpl");
  _1_this = (c)->_1_this;
  chpl_check_nil(c, INT64(1039), "/home/kp167/chap-svn/modules/internal/Atomics.chpl");
  _2_order = (c)->_2_order;
  chpl_check_nil(c, INT64(1039), "/home/kp167/chap-svn/modules/internal/Atomics.chpl");
  _3__tmp = (c)->_3__tmp;
  on_fn5(&_1_this, _2_order, &_3__tmp);
  return;
}

/* Atomics.chpl:1043 */
static void on_fn6(chpl____wide__ref_atomic_int64* const this8, int64_t value, memory_order order) {
  chpl____wide__ref_atomic_int_least64_t call_tmp = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_atomic_int_least64_t T = NULL;
  chpl____wide__ref_atomic_int_least64_t chpl_macro_tmp_64;
  chpl____wide__ref_atomic_int_least64_t chpl_macro_tmp_65;
  chpl_macro_tmp_64.locale = (*(this8)).locale;
  chpl_macro_tmp_64.addr = &(((*(this8)).addr)->_v);
  call_tmp = chpl_macro_tmp_64;
  T = (&call_tmp)->addr;
  atomic_store_explicit_int_least64_t(T, value, order);
  chpl_macro_tmp_65.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_65.addr = T;
  call_tmp = chpl_macro_tmp_65;
  return;
}

/* Atomics.chpl:1043 */
static void wrapon_fn6(_class_localson_fn6 c) {
  chpl____wide__ref_atomic_int64 _1_this = {CHPL_LOCALEID_T_INIT, NULL};
  int64_t _2_value;
  memory_order _3_order;
  chpl_check_nil(c, INT64(1043), "/home/kp167/chap-svn/modules/internal/Atomics.chpl");
  _1_this = (c)->_1_this;
  chpl_check_nil(c, INT64(1043), "/home/kp167/chap-svn/modules/internal/Atomics.chpl");
  _2_value = (c)->_2_value;
  chpl_check_nil(c, INT64(1043), "/home/kp167/chap-svn/modules/internal/Atomics.chpl");
  _3_order = (c)->_3_order;
  on_fn6(&_1_this, _2_value, _3_order);
  return;
}

/* Atomics.chpl:1069 */
static void on_fn7(chpl____wide__ref_atomic_int64* const this8, int64_t value, memory_order order) {
  chpl____wide__ref_atomic_int_least64_t call_tmp = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_atomic_int_least64_t T = NULL;
  chpl____wide__ref_atomic_int_least64_t chpl_macro_tmp_66;
  chpl____wide__ref_atomic_int_least64_t chpl_macro_tmp_67;
  chpl_macro_tmp_66.locale = (*(this8)).locale;
  chpl_macro_tmp_66.addr = &(((*(this8)).addr)->_v);
  call_tmp = chpl_macro_tmp_66;
  T = (&call_tmp)->addr;
  atomic_fetch_add_explicit_int_least64_t(T, value, order);
  chpl_macro_tmp_67.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_67.addr = T;
  call_tmp = chpl_macro_tmp_67;
  return;
}

/* Atomics.chpl:1069 */
static void wrapon_fn7(_class_localson_fn7 c) {
  chpl____wide__ref_atomic_int64 _1_this = {CHPL_LOCALEID_T_INIT, NULL};
  int64_t _2_value;
  memory_order _3_order;
  chpl_check_nil(c, INT64(1069), "/home/kp167/chap-svn/modules/internal/Atomics.chpl");
  _1_this = (c)->_1_this;
  chpl_check_nil(c, INT64(1069), "/home/kp167/chap-svn/modules/internal/Atomics.chpl");
  _2_value = (c)->_2_value;
  chpl_check_nil(c, INT64(1069), "/home/kp167/chap-svn/modules/internal/Atomics.chpl");
  _3_order = (c)->_3_order;
  on_fn7(&_1_this, _2_value, _3_order);
  return;
}

/* Atomics.chpl:1073 */
static void on_fn8(chpl____wide__ref_atomic_int64* const this8, int64_t value, memory_order order, chpl____wide__ref_int64_t* const ret) {
  chpl____wide__ref_atomic_int_least64_t call_tmp = {CHPL_LOCALEID_T_INIT, NULL};
  int64_t call_tmp2;
  _ref_atomic_int_least64_t T = NULL;
  chpl____wide__ref_atomic_int_least64_t chpl_macro_tmp_68;
  chpl____wide__ref_atomic_int_least64_t chpl_macro_tmp_69;
  chpl_macro_tmp_68.locale = (*(this8)).locale;
  chpl_macro_tmp_68.addr = &(((*(this8)).addr)->_v);
  call_tmp = chpl_macro_tmp_68;
  T = (&call_tmp)->addr;
  call_tmp2 = atomic_fetch_sub_explicit_int_least64_t(T, value, order);
  chpl_macro_tmp_69.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_69.addr = T;
  call_tmp = chpl_macro_tmp_69;
  chpl_gen_comm_put(((void*)(&call_tmp2)), chpl_nodeFromLocaleID(&((*(ret)).locale), INT64(0), NULL), (*(ret)).addr, sizeof(int64_t), -1, INT64(1), INT64(1073), "/home/kp167/chap-svn/modules/internal/Atomics.chpl");
  return;
}

/* Atomics.chpl:1073 */
static void wrapon_fn8(_class_localson_fn8 c) {
  chpl____wide__ref_atomic_int64 _1_this = {CHPL_LOCALEID_T_INIT, NULL};
  int64_t _2_value;
  memory_order _3_order;
  chpl____wide__ref_int64_t _4__tmp = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_check_nil(c, INT64(1073), "/home/kp167/chap-svn/modules/internal/Atomics.chpl");
  _1_this = (c)->_1_this;
  chpl_check_nil(c, INT64(1073), "/home/kp167/chap-svn/modules/internal/Atomics.chpl");
  _2_value = (c)->_2_value;
  chpl_check_nil(c, INT64(1073), "/home/kp167/chap-svn/modules/internal/Atomics.chpl");
  _3_order = (c)->_3_order;
  chpl_check_nil(c, INT64(1073), "/home/kp167/chap-svn/modules/internal/Atomics.chpl");
  _4__tmp = (c)->_4__tmp;
  on_fn8(&_1_this, _2_value, _3_order, &_4__tmp);
  return;
}

/* Atomics.chpl:1077 */
static void on_fn9(chpl____wide__ref_atomic_int64* const this8, int64_t value, memory_order order) {
  chpl____wide__ref_atomic_int_least64_t call_tmp = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_atomic_int_least64_t T = NULL;
  chpl____wide__ref_atomic_int_least64_t chpl_macro_tmp_70;
  chpl____wide__ref_atomic_int_least64_t chpl_macro_tmp_71;
  chpl_macro_tmp_70.locale = (*(this8)).locale;
  chpl_macro_tmp_70.addr = &(((*(this8)).addr)->_v);
  call_tmp = chpl_macro_tmp_70;
  T = (&call_tmp)->addr;
  atomic_fetch_sub_explicit_int_least64_t(T, value, order);
  chpl_macro_tmp_71.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_71.addr = T;
  call_tmp = chpl_macro_tmp_71;
  return;
}

/* Atomics.chpl:1077 */
static void wrapon_fn9(_class_localson_fn9 c) {
  chpl____wide__ref_atomic_int64 _1_this = {CHPL_LOCALEID_T_INIT, NULL};
  int64_t _2_value;
  memory_order _3_order;
  chpl_check_nil(c, INT64(1077), "/home/kp167/chap-svn/modules/internal/Atomics.chpl");
  _1_this = (c)->_1_this;
  chpl_check_nil(c, INT64(1077), "/home/kp167/chap-svn/modules/internal/Atomics.chpl");
  _2_value = (c)->_2_value;
  chpl_check_nil(c, INT64(1077), "/home/kp167/chap-svn/modules/internal/Atomics.chpl");
  _3_order = (c)->_3_order;
  on_fn9(&_1_this, _2_value, _3_order);
  return;
}

/* Atomics.chpl:1106 */
static void on_fn10(chpl____wide__ref_atomic_int64* const this8, int64_t val, memory_order order) {
  memory_order local_memory_order_relaxed;
  chpl_bool T;
  int64_t ret;
  int64_t ret2;
  chpl_localeID_t call_tmp;
  _ref_int64_t T2 = NULL;
  _class_localson_fn5 _args_foron_fn = NULL;
  int64_t chpl_here_alloc_size;
  chpl_opaque chpl_here_alloc_tmp;
  chpl____wide__ref_int64_t T3 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_int64_t _ref_tmp_ = NULL;
  chpl_bool call_tmp2;
  int64_t ret3;
  int64_t ret4;
  chpl_localeID_t call_tmp3;
  _ref_int64_t T4 = NULL;
  _class_localson_fn5 _args_foron_fn2 = NULL;
  int64_t chpl_here_alloc_size2;
  chpl_opaque chpl_here_alloc_tmp2;
  chpl____wide__ref_int64_t T5 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_int64_t _ref_tmp_2 = NULL;
  chpl_bool call_tmp4;
  chpl____wide__ref_int64_t chpl_macro_tmp_72;
  chpl____wide__ref_int64_t chpl_macro_tmp_73;
  local_memory_order_relaxed = memory_order_relaxed;
  ret = INT64(0);
  ret2 = INT64(0);
  call_tmp = (this8)->locale;
  T2 = &ret2;
  chpl_here_alloc_size = sizeof(chpl__class_localson_fn5_object);
  chpl_here_alloc_tmp = chpl_here_alloc(chpl_here_alloc_size, INT16(36));
  _args_foron_fn = ((_class_localson_fn5)(chpl_here_alloc_tmp));
  chpl_check_nil(_args_foron_fn, INT64(1107), "/home/kp167/chap-svn/modules/internal/Atomics.chpl");
  (_args_foron_fn)->_0__tmp = call_tmp;
  chpl_check_nil(_args_foron_fn, INT64(1107), "/home/kp167/chap-svn/modules/internal/Atomics.chpl");
  (_args_foron_fn)->_1_this = *(this8);
  chpl_check_nil(_args_foron_fn, INT64(1107), "/home/kp167/chap-svn/modules/internal/Atomics.chpl");
  (_args_foron_fn)->_2_order = local_memory_order_relaxed;
  chpl_macro_tmp_72.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_72.addr = T2;
  T3 = chpl_macro_tmp_72;
  chpl_check_nil(_args_foron_fn, INT64(1107), "/home/kp167/chap-svn/modules/internal/Atomics.chpl");
  (_args_foron_fn)->_3__tmp = T3;
  /*** wrapon_fn5 ***/ chpl_executeOn(&call_tmp, INT32(6), _args_foron_fn, sizeof(chpl__class_localson_fn5_object), INT64(1039), "/home/kp167/chap-svn/modules/internal/Atomics.chpl");
  chpl_here_free(((void*)(_args_foron_fn)));
  _ref_tmp_ = &ret;
  *(_ref_tmp_) = ret2;
  call_tmp2 = (ret != val);
  T = call_tmp2;
  while (T) {
    chpl_task_yield();
    ret3 = INT64(0);
    ret4 = INT64(0);
    call_tmp3 = (this8)->locale;
    T4 = &ret4;
    chpl_here_alloc_size2 = sizeof(chpl__class_localson_fn5_object);
    chpl_here_alloc_tmp2 = chpl_here_alloc(chpl_here_alloc_size2, INT16(36));
    _args_foron_fn2 = ((_class_localson_fn5)(chpl_here_alloc_tmp2));
    chpl_check_nil(_args_foron_fn2, INT64(1107), "/home/kp167/chap-svn/modules/internal/Atomics.chpl");
    (_args_foron_fn2)->_0__tmp = call_tmp3;
    chpl_check_nil(_args_foron_fn2, INT64(1107), "/home/kp167/chap-svn/modules/internal/Atomics.chpl");
    (_args_foron_fn2)->_1_this = *(this8);
    chpl_check_nil(_args_foron_fn2, INT64(1107), "/home/kp167/chap-svn/modules/internal/Atomics.chpl");
    (_args_foron_fn2)->_2_order = local_memory_order_relaxed;
    chpl_macro_tmp_73.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_73.addr = T4;
    T5 = chpl_macro_tmp_73;
    chpl_check_nil(_args_foron_fn2, INT64(1107), "/home/kp167/chap-svn/modules/internal/Atomics.chpl");
    (_args_foron_fn2)->_3__tmp = T5;
    /*** wrapon_fn5 ***/ chpl_executeOn(&call_tmp3, INT32(6), _args_foron_fn2, sizeof(chpl__class_localson_fn5_object), INT64(1039), "/home/kp167/chap-svn/modules/internal/Atomics.chpl");
    chpl_here_free(((void*)(_args_foron_fn2)));
    _ref_tmp_2 = &ret3;
    *(_ref_tmp_2) = ret4;
    call_tmp4 = (ret3 != val);
    T = call_tmp4;
  }
  atomic_thread_fence(order);
  return;
}

/* Atomics.chpl:1106 */
static void wrapon_fn10(_class_localson_fn10 c) {
  chpl____wide__ref_atomic_int64 _1_this = {CHPL_LOCALEID_T_INIT, NULL};
  int64_t _2_val;
  memory_order _3_order;
  chpl_check_nil(c, INT64(1106), "/home/kp167/chap-svn/modules/internal/Atomics.chpl");
  _1_this = (c)->_1_this;
  chpl_check_nil(c, INT64(1106), "/home/kp167/chap-svn/modules/internal/Atomics.chpl");
  _2_val = (c)->_2_val;
  chpl_check_nil(c, INT64(1106), "/home/kp167/chap-svn/modules/internal/Atomics.chpl");
  _3_order = (c)->_3_order;
  on_fn10(&_1_this, _2_val, _3_order);
  return;
}

