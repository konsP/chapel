/* ChapelBase.chpl:5 */
static void chpl__init_ChapelBase(int64_t _ln, c_string _fn) {
  c_string modFormatStr;
  c_string modStr;
  _ref_int32_t refIndentLevel = NULL;
  if (chpl__init_ChapelBase_p) {
    goto _exit_chpl__init_ChapelBase;
  }
  modFormatStr = "%*s\n";
  modStr = "ChapelBase";
  printModuleInit(modFormatStr, modStr, INT64(10));
  refIndentLevel = &moduleInitLevel;
  *(refIndentLevel) += INT64(1);
  chpl__init_ChapelBase_p = true;
  *(refIndentLevel) -= INT64(1);
  _exit_chpl__init_ChapelBase:;
  return;
}

/* ChapelTaskTable.chpl:35 */
static c_string _cast(taskState this8) {
  c_string ret;
  int64_t call_tmp;
  int64_t call_tmp2;
  chpl_bool call_tmp3;
  int64_t call_tmp4;
  int64_t call_tmp5;
  chpl_bool call_tmp6;
  int64_t call_tmp7;
  int64_t call_tmp8;
  chpl_bool call_tmp9;
  call_tmp = ((int64_t)(this8));
  call_tmp2 = ((int64_t)(taskState_pending));
  call_tmp3 = (call_tmp == call_tmp2);
  if (call_tmp3) {
    ret = "pending";
    goto _end__cast;
  }
  call_tmp4 = ((int64_t)(this8));
  call_tmp5 = ((int64_t)(taskState_active));
  call_tmp6 = (call_tmp4 == call_tmp5);
  if (call_tmp6) {
    ret = "active";
    goto _end__cast;
  }
  call_tmp7 = ((int64_t)(this8));
  call_tmp8 = ((int64_t)(taskState_suspended));
  call_tmp9 = (call_tmp7 == call_tmp8);
  if (call_tmp9) {
    ret = "suspended";
    goto _end__cast;
  }
  ret = "";
  _end__cast:;
  return ret;
}

/* ChapelBase.chpl:164 */
static void compilerAssert(void) {
  return;
}

/* ChapelBase.chpl:634 */
static void init_elts(chpl____wide__ddata_locale* const x, int64_t s) {
  range_int64_t_bounded_F call_tmp;
  _ref_range_int64_t_bounded_F ret_to_arg_ref_tmp_ = NULL;
  range_int64_t_bounded_F _ic__F0_this;
  rangeBase_int64_t_bounded_F T;
  rangeBase_int64_t_bounded_F _ic__F0_this2;
  int64_t i;
  int64_t ret;
  int64_t type_tmp;
  int64_t end;
  int64_t T2;
  int64_t ret2;
  int64_t ret3;
  chpl_bool call_tmp2;
  int64_t ret4;
  int64_t call_tmp3;
  _ref_int64_t _ref_tmp_ = NULL;
  chpl_bool T3;
  chpl_bool call_tmp4;
  chpl____wide_locale call_tmp5 = {CHPL_LOCALEID_T_INIT, NULL};
  locale T4 = NULL;
  int64_t call_tmp6;
  int64_t call_tmp7;
  _ref_int64_t _ref_tmp_2 = NULL;
  chpl_bool call_tmp8;
  chpl____wide_locale chpl_macro_tmp_16;
  chpl____wide__ref_locale chpl_macro_tmp_17;
  ret_to_arg_ref_tmp_ = &call_tmp;
  _build_range(INT64(1), s, ret_to_arg_ref_tmp_);
  _ic__F0_this = call_tmp;
  T = (&_ic__F0_this)->_base;
  _ic__F0_this2 = T;
  ret = (&_ic__F0_this2)->_low;
  i = ret;
  type_tmp = INT64(0);
  ret2 = (&_ic__F0_this2)->_low;
  ret3 = (&_ic__F0_this2)->_high;
  call_tmp2 = (ret2 > ret3);
  if (call_tmp2) {
    T2 = ret;
  } else {
    ret4 = (&_ic__F0_this2)->_high;
    call_tmp3 = (ret4 + INT64(1));
    T2 = call_tmp3;
  }
  _ref_tmp_ = &type_tmp;
  *(_ref_tmp_) = T2;
  end = type_tmp;
  call_tmp4 = (ret != type_tmp);
  T3 = call_tmp4;
  while (T3) {
    T4 = ((locale)(nil));
    chpl_macro_tmp_16.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_16.addr = T4;
    call_tmp5 = chpl_macro_tmp_16;
    call_tmp6 = (i - INT64(1));
    chpl_macro_tmp_17.locale = (x)->locale;
    chpl_macro_tmp_17.addr = ((x)->addr + call_tmp6);
    chpl_gen_comm_put(((void*)(&call_tmp5)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_17).locale), INT64(0), NULL), (chpl_macro_tmp_17).addr, sizeof(chpl____wide_locale), -1, INT64(1), INT64(646), "/home/kp167/chap-svn/modules/internal/ChapelBase.chpl");
    call_tmp7 = (i + INT64(1));
    _ref_tmp_2 = &i;
    *(_ref_tmp_2) = call_tmp7;
    call_tmp8 = (i != end);
    T3 = call_tmp8;
  }
  return;
}

/* ChapelBase.chpl:634 */
static void init_elts2(chpl____wide__ddata_localesSignal* const x, int64_t s) {
  range_int64_t_bounded_F call_tmp;
  _ref_range_int64_t_bounded_F ret_to_arg_ref_tmp_ = NULL;
  range_int64_t_bounded_F _ic__F0_this;
  rangeBase_int64_t_bounded_F T;
  rangeBase_int64_t_bounded_F _ic__F0_this2;
  int64_t i;
  int64_t ret;
  int64_t type_tmp;
  int64_t end;
  int64_t T2;
  int64_t ret2;
  int64_t ret3;
  chpl_bool call_tmp2;
  int64_t ret4;
  int64_t call_tmp3;
  _ref_int64_t _ref_tmp_ = NULL;
  chpl_bool T3;
  chpl_bool call_tmp4;
  chpl____wide_localesSignal call_tmp5 = {CHPL_LOCALEID_T_INIT, NULL};
  localesSignal T4 = NULL;
  int64_t call_tmp6;
  int64_t call_tmp7;
  _ref_int64_t _ref_tmp_2 = NULL;
  chpl_bool call_tmp8;
  chpl____wide_localesSignal chpl_macro_tmp_18;
  chpl____wide__ref_localesSignal chpl_macro_tmp_19;
  ret_to_arg_ref_tmp_ = &call_tmp;
  _build_range(INT64(1), s, ret_to_arg_ref_tmp_);
  _ic__F0_this = call_tmp;
  T = (&_ic__F0_this)->_base;
  _ic__F0_this2 = T;
  ret = (&_ic__F0_this2)->_low;
  i = ret;
  type_tmp = INT64(0);
  ret2 = (&_ic__F0_this2)->_low;
  ret3 = (&_ic__F0_this2)->_high;
  call_tmp2 = (ret2 > ret3);
  if (call_tmp2) {
    T2 = ret;
  } else {
    ret4 = (&_ic__F0_this2)->_high;
    call_tmp3 = (ret4 + INT64(1));
    T2 = call_tmp3;
  }
  _ref_tmp_ = &type_tmp;
  *(_ref_tmp_) = T2;
  end = type_tmp;
  call_tmp4 = (ret != type_tmp);
  T3 = call_tmp4;
  while (T3) {
    T4 = ((localesSignal)(nil));
    chpl_macro_tmp_18.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_18.addr = T4;
    call_tmp5 = chpl_macro_tmp_18;
    call_tmp6 = (i - INT64(1));
    chpl_macro_tmp_19.locale = (x)->locale;
    chpl_macro_tmp_19.addr = ((x)->addr + call_tmp6);
    chpl_gen_comm_put(((void*)(&call_tmp5)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_19).locale), INT64(0), NULL), (chpl_macro_tmp_19).addr, sizeof(chpl____wide_localesSignal), -1, INT64(1), INT64(646), "/home/kp167/chap-svn/modules/internal/ChapelBase.chpl");
    call_tmp7 = (i + INT64(1));
    _ref_tmp_2 = &i;
    *(_ref_tmp_2) = call_tmp7;
    call_tmp8 = (i != end);
    T3 = call_tmp8;
  }
  return;
}

/* ChapelBase.chpl:634 */
static void init_elts3(chpl____wide__ddata_chpl_TableEntry_chpl_taskID_t* const x, int64_t s) {
  range_int64_t_bounded_F call_tmp;
  _ref_range_int64_t_bounded_F ret_to_arg_ref_tmp_ = NULL;
  range_int64_t_bounded_F _ic__F0_this;
  rangeBase_int64_t_bounded_F T;
  rangeBase_int64_t_bounded_F _ic__F0_this2;
  int64_t i;
  int64_t ret;
  int64_t type_tmp;
  int64_t end;
  int64_t T2;
  int64_t ret2;
  int64_t ret3;
  chpl_bool call_tmp2;
  int64_t ret4;
  int64_t call_tmp3;
  _ref_int64_t _ref_tmp_ = NULL;
  chpl_bool T3;
  chpl_bool call_tmp4;
  chpl_TableEntry_chpl_taskID_t this8;
  chpl__hash_status type_tmp2;
  chpl__hash_status x2;
  _ref_chpl__hash_status _ref_tmp_2 = NULL;
  chpl_taskID_t default_argidx;
  chpl_TableEntry_chpl_taskID_t wrap_call_tmp;
  int64_t call_tmp5;
  int64_t call_tmp6;
  _ref_int64_t _ref_tmp_3 = NULL;
  chpl_bool call_tmp7;
  chpl____wide__ref_chpl_TableEntry_chpl_taskID_t chpl_macro_tmp_20;
  ret_to_arg_ref_tmp_ = &call_tmp;
  _build_range(INT64(1), s, ret_to_arg_ref_tmp_);
  _ic__F0_this = call_tmp;
  T = (&_ic__F0_this)->_base;
  _ic__F0_this2 = T;
  ret = (&_ic__F0_this2)->_low;
  i = ret;
  type_tmp = INT64(0);
  ret2 = (&_ic__F0_this2)->_low;
  ret3 = (&_ic__F0_this2)->_high;
  call_tmp2 = (ret2 > ret3);
  if (call_tmp2) {
    T2 = ret;
  } else {
    ret4 = (&_ic__F0_this2)->_high;
    call_tmp3 = (ret4 + INT64(1));
    T2 = call_tmp3;
  }
  _ref_tmp_ = &type_tmp;
  *(_ref_tmp_) = T2;
  end = type_tmp;
  call_tmp4 = (ret != type_tmp);
  T3 = call_tmp4;
  while (T3) {
    (&this8)->status = chpl__hash_status_empty;
    (&this8)->idx = chpl_nullTaskID;
    type_tmp2 = chpl__hash_status_empty;
    x2 = type_tmp2;
    _ref_tmp_2 = &x2;
    *(_ref_tmp_2) = chpl__hash_status_empty;
    (&this8)->status = x2;
    default_argidx = chpl_nullTaskID;
    (&this8)->idx = default_argidx;
    wrap_call_tmp = _construct_chpl_TableEntry(x2, default_argidx, &this8);
    call_tmp5 = (i - INT64(1));
    chpl_macro_tmp_20.locale = (x)->locale;
    chpl_macro_tmp_20.addr = ((x)->addr + call_tmp5);
    chpl_gen_comm_put(((void*)(&wrap_call_tmp)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_20).locale), INT64(0), NULL), (chpl_macro_tmp_20).addr, sizeof(chpl_TableEntry_chpl_taskID_t), -1, INT64(1), INT64(646), "/home/kp167/chap-svn/modules/internal/ChapelBase.chpl");
    call_tmp6 = (i + INT64(1));
    _ref_tmp_3 = &i;
    *(_ref_tmp_3) = call_tmp6;
    call_tmp7 = (i != end);
    T3 = call_tmp7;
  }
  return;
}

/* ChapelBase.chpl:634 */
static void init_elts4(chpl____wide__ddata_chpldev_Task* const x, int64_t s) {
  range_int64_t_bounded_F call_tmp;
  _ref_range_int64_t_bounded_F ret_to_arg_ref_tmp_ = NULL;
  range_int64_t_bounded_F _ic__F0_this;
  rangeBase_int64_t_bounded_F T;
  rangeBase_int64_t_bounded_F _ic__F0_this2;
  int64_t i;
  int64_t ret;
  int64_t type_tmp;
  int64_t end;
  int64_t T2;
  int64_t ret2;
  int64_t ret3;
  chpl_bool call_tmp2;
  int64_t ret4;
  int64_t call_tmp3;
  _ref_int64_t _ref_tmp_ = NULL;
  chpl_bool T3;
  chpl_bool call_tmp4;
  chpldev_Task this8;
  c_string T4;
  c_string T5;
  chpldev_Task wrap_call_tmp;
  c_string T6;
  int64_t call_tmp5;
  int64_t call_tmp6;
  _ref_int64_t _ref_tmp_2 = NULL;
  chpl_bool call_tmp7;
  chpl____wide__ref_chpldev_Task chpl_macro_tmp_21;
  ret_to_arg_ref_tmp_ = &call_tmp;
  _build_range(INT64(1), s, ret_to_arg_ref_tmp_);
  _ic__F0_this = call_tmp;
  T = (&_ic__F0_this)->_base;
  _ic__F0_this2 = T;
  ret = (&_ic__F0_this2)->_low;
  i = ret;
  type_tmp = INT64(0);
  ret2 = (&_ic__F0_this2)->_low;
  ret3 = (&_ic__F0_this2)->_high;
  call_tmp2 = (ret2 > ret3);
  if (call_tmp2) {
    T2 = ret;
  } else {
    ret4 = (&_ic__F0_this2)->_high;
    call_tmp3 = (ret4 + INT64(1));
    T2 = call_tmp3;
  }
  _ref_tmp_ = &type_tmp;
  *(_ref_tmp_) = T2;
  end = type_tmp;
  call_tmp4 = (ret != type_tmp);
  T3 = call_tmp4;
  T4 = "";
  T5 = "";
  while (T3) {
    (&this8)->state = taskState_pending;
    (&this8)->lineno = UINT32(0);
    (&this8)->filename = T4;
    (&this8)->tl_info = UINT64(0);
    (&this8)->state = taskState_pending;
    (&this8)->lineno = UINT32(0);
    (&this8)->filename = T5;
    (&this8)->tl_info = UINT64(0);
    T6 = "";
    wrap_call_tmp = _construct_chpldev_Task(taskState_pending, UINT32(0), T6, UINT64(0), &this8);
    call_tmp5 = (i - INT64(1));
    chpl_macro_tmp_21.locale = (x)->locale;
    chpl_macro_tmp_21.addr = ((x)->addr + call_tmp5);
    chpl_gen_comm_put(((void*)(&wrap_call_tmp)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_21).locale), INT64(0), NULL), (chpl_macro_tmp_21).addr, sizeof(chpldev_Task), -1, INT64(1), INT64(646), "/home/kp167/chap-svn/modules/internal/ChapelBase.chpl");
    call_tmp6 = (i + INT64(1));
    _ref_tmp_2 = &i;
    *(_ref_tmp_2) = call_tmp6;
    call_tmp7 = (i != end);
    T3 = call_tmp7;
  }
  return;
}

/* ChapelBase.chpl:747 */
static chpl___EndCount _construct__EndCount(atomic_int64* const i, int64_t taskCnt, chpl_task_list_p taskList, chpl___EndCount meme) {
  chpl___EndCount this8 = NULL;
  object T = NULL;
  this8 = meme;
  chpl_check_nil(this8, INT64(747), "/home/kp167/chap-svn/modules/internal/ChapelBase.chpl");
  T = &((this8)->super);
  _construct_object(T);
  chpl_check_nil(this8, INT64(748), "/home/kp167/chap-svn/modules/internal/ChapelBase.chpl");
  (this8)->i = *(i);
  chpl_check_nil(this8, INT64(749), "/home/kp167/chap-svn/modules/internal/ChapelBase.chpl");
  (this8)->taskCnt = taskCnt;
  chpl_check_nil(this8, INT64(750), "/home/kp167/chap-svn/modules/internal/ChapelBase.chpl");
  (this8)->taskList = taskList;
  return this8;
}

/* ChapelBase.chpl:747 */
static void chpl__auto_destroy__EndCount(chpl___EndCount this8) {
  _ref_atomic_int64 _field_destructor_tmp_ = NULL;
  _ref_atomic_int_least64_t call_tmp = NULL;
  _ref_atomic_int_least64_t T = NULL;
  chpl_check_nil(this8, INT64(748), "/home/kp167/chap-svn/modules/internal/ChapelBase.chpl");
  _field_destructor_tmp_ = &((this8)->i);
  chpl_check_nil(_field_destructor_tmp_, INT64(748), "/home/kp167/chap-svn/modules/internal/ChapelBase.chpl");
  call_tmp = &((_field_destructor_tmp_)->_v);
  T = call_tmp;
  atomic_destroy_int_least64_t(T);
  call_tmp = T;
  return;
}

/* ChapelBase.chpl:766 */
static void on_fn29(chpl____wide__EndCount* const delete_tmp) {
  chpl_opaque call_tmp;
  call_tmp = ((void*)((delete_tmp)->addr));
  chpl_here_free(call_tmp);
  return;
}

/* ChapelBase.chpl:766 */
static void wrapon_fn29(_class_localson_fn29 c) {
  chpl____wide__EndCount _1_rvfDerefTmp = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_check_nil(c, INT64(766), "/home/kp167/chap-svn/modules/internal/ChapelBase.chpl");
  _1_rvfDerefTmp = (c)->_1_rvfDerefTmp;
  on_fn29(&_1_rvfDerefTmp);
  return;
}

/* ChapelBase.chpl:774 */
static void _upEndCount(chpl____wide__EndCount* const e) {
  memory_order local_memory_order_seq_cst;
  memory_order local_memory_order_release;
  chpl_localeID_t call_tmp;
  _class_localson_fn30 _args_foron_fn = NULL;
  int64_t chpl_here_alloc_size;
  chpl_opaque chpl_here_alloc_tmp;
  chpl____wide_locale call_tmp2 = {CHPL_LOCALEID_T_INIT, NULL};
  int32_t call_tmp3;
  chpl_localeID_t call_tmp4;
  _ref_chpl_localeID_t ret_to_arg_ref_tmp_ = NULL;
  chpl_localeID_t call_tmp5;
  chpl____wide_locale call_tmp6 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_atomic_int64 call_tmp7 = {CHPL_LOCALEID_T_INIT, NULL};
  memory_order default_argorder;
  chpl_localeID_t call_tmp8;
  _class_localson_fn7 _args_foron_fn2 = NULL;
  int64_t chpl_here_alloc_size2;
  chpl_opaque chpl_here_alloc_tmp2;
  chpl____wide__ref_atomic_int64 chpl_macro_tmp_22;
  local_memory_order_seq_cst = memory_order_seq_cst;
  local_memory_order_release = memory_order_release;
  chpl_rmem_consist_fence(local_memory_order_release, INT64(782), "/home/kp167/chap-svn/modules/internal/ChapelBase.chpl");
  call_tmp = (e)->locale;
  chpl_here_alloc_size = sizeof(chpl__class_localson_fn30_object);
  chpl_here_alloc_tmp = chpl_here_alloc(chpl_here_alloc_size, INT16(36));
  _args_foron_fn = ((_class_localson_fn30)(chpl_here_alloc_tmp));
  chpl_check_nil(_args_foron_fn, INT64(783), "/home/kp167/chap-svn/modules/internal/ChapelBase.chpl");
  (_args_foron_fn)->_0__tmp = call_tmp;
  chpl_check_nil(_args_foron_fn, INT64(783), "/home/kp167/chap-svn/modules/internal/ChapelBase.chpl");
  (_args_foron_fn)->_1_e = *(e);
  /*** wrapon_fn30 ***/ chpl_executeOn(&call_tmp, INT32(33), _args_foron_fn, sizeof(chpl__class_localson_fn30_object), INT64(783), "/home/kp167/chap-svn/modules/internal/ChapelBase.chpl");
  chpl_here_free(((void*)(_args_foron_fn)));
  call_tmp3 = chpl_task_getRequestedSubloc();
  ret_to_arg_ref_tmp_ = &call_tmp4;
  chpl_buildLocaleID(chpl_nodeID, call_tmp3, ret_to_arg_ref_tmp_, INT64(788), "/home/kp167/chap-svn/modules/internal/ChapelBase.chpl");
  call_tmp5 = chpl__initCopy_chpl_rt_localeID_t(call_tmp4);
  call_tmp6 = chpl_localeID_to_locale(&call_tmp5);
  call_tmp2 = call_tmp6;
  chpl_check_nil((&call_tmp2)->addr, INT64(788), "/home/kp167/chap-svn/modules/internal/ChapelBase.chpl");
  chpl_macro_tmp_22.locale = (&call_tmp2)->locale;
  chpl_macro_tmp_22.addr = &(((&call_tmp2)->addr)->runningTaskCounter);
  call_tmp7 = chpl_macro_tmp_22;
  default_argorder = local_memory_order_seq_cst;
  call_tmp8 = (&call_tmp7)->locale;
  chpl_here_alloc_size2 = sizeof(chpl__class_localson_fn7_object);
  chpl_here_alloc_tmp2 = chpl_here_alloc(chpl_here_alloc_size2, INT16(36));
  _args_foron_fn2 = ((_class_localson_fn7)(chpl_here_alloc_tmp2));
  chpl_check_nil(_args_foron_fn2, INT64(788), "/home/kp167/chap-svn/modules/internal/ChapelBase.chpl");
  (_args_foron_fn2)->_0__tmp = call_tmp8;
  chpl_check_nil(_args_foron_fn2, INT64(788), "/home/kp167/chap-svn/modules/internal/ChapelBase.chpl");
  (_args_foron_fn2)->_1_this = call_tmp7;
  chpl_check_nil(_args_foron_fn2, INT64(788), "/home/kp167/chap-svn/modules/internal/ChapelBase.chpl");
  (_args_foron_fn2)->_2_value = INT64(1);
  chpl_check_nil(_args_foron_fn2, INT64(788), "/home/kp167/chap-svn/modules/internal/ChapelBase.chpl");
  (_args_foron_fn2)->_3_order = default_argorder;
  /*** wrapon_fn7 ***/ chpl_executeOn(&call_tmp8, INT32(8), _args_foron_fn2, sizeof(chpl__class_localson_fn7_object), INT64(1069), "/home/kp167/chap-svn/modules/internal/Atomics.chpl");
  chpl_here_free(((void*)(_args_foron_fn2)));
  return;
}

/* ChapelBase.chpl:783 */
static void on_fn30(chpl____wide__EndCount* const e) {
  memory_order local_memory_order_release;
  chpl____wide__ref_atomic_int64 call_tmp = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_localeID_t call_tmp2;
  _class_localson_fn7 _args_foron_fn = NULL;
  int64_t chpl_here_alloc_size;
  chpl_opaque chpl_here_alloc_tmp;
  chpl____wide__ref_int64_t call_tmp3 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_atomic_int64 chpl_macro_tmp_23;
  chpl____wide__ref_int64_t chpl_macro_tmp_24;
  int64_t chpl_macro_tmp_25;
  local_memory_order_release = memory_order_release;
  chpl_check_nil((e)->addr, INT64(784), "/home/kp167/chap-svn/modules/internal/ChapelBase.chpl");
  chpl_macro_tmp_23.locale = (e)->locale;
  chpl_macro_tmp_23.addr = &(((e)->addr)->i);
  call_tmp = chpl_macro_tmp_23;
  call_tmp2 = (&call_tmp)->locale;
  chpl_here_alloc_size = sizeof(chpl__class_localson_fn7_object);
  chpl_here_alloc_tmp = chpl_here_alloc(chpl_here_alloc_size, INT16(36));
  _args_foron_fn = ((_class_localson_fn7)(chpl_here_alloc_tmp));
  chpl_check_nil(_args_foron_fn, INT64(784), "/home/kp167/chap-svn/modules/internal/ChapelBase.chpl");
  (_args_foron_fn)->_0__tmp = call_tmp2;
  chpl_check_nil(_args_foron_fn, INT64(784), "/home/kp167/chap-svn/modules/internal/ChapelBase.chpl");
  (_args_foron_fn)->_1_this = call_tmp;
  chpl_check_nil(_args_foron_fn, INT64(784), "/home/kp167/chap-svn/modules/internal/ChapelBase.chpl");
  (_args_foron_fn)->_2_value = INT64(1);
  chpl_check_nil(_args_foron_fn, INT64(784), "/home/kp167/chap-svn/modules/internal/ChapelBase.chpl");
  (_args_foron_fn)->_3_order = local_memory_order_release;
  /*** wrapon_fn7 ***/ chpl_executeOn(&call_tmp2, INT32(8), _args_foron_fn, sizeof(chpl__class_localson_fn7_object), INT64(1069), "/home/kp167/chap-svn/modules/internal/Atomics.chpl");
  chpl_here_free(((void*)(_args_foron_fn)));
  chpl_check_nil((e)->addr, INT64(785), "/home/kp167/chap-svn/modules/internal/ChapelBase.chpl");
  chpl_macro_tmp_24.locale = (e)->locale;
  chpl_macro_tmp_24.addr = &(((e)->addr)->taskCnt);
  call_tmp3 = chpl_macro_tmp_24;
  chpl_gen_comm_get(((void*)(&chpl_macro_tmp_25)), chpl_nodeFromLocaleID(&((call_tmp3).locale), INT64(0), NULL), (call_tmp3).addr, sizeof(int64_t), -1, INT64(1), INT64(785), "/home/kp167/chap-svn/modules/internal/ChapelBase.chpl");
  chpl_macro_tmp_25 += INT64(1);
  chpl_gen_comm_put(((void*)(&chpl_macro_tmp_25)), chpl_nodeFromLocaleID(&((call_tmp3).locale), INT64(0), NULL), (call_tmp3).addr, sizeof(int64_t), -1, INT64(1), INT64(785), "/home/kp167/chap-svn/modules/internal/ChapelBase.chpl");
  return;
}

/* ChapelBase.chpl:783 */
static void wrapon_fn30(_class_localson_fn30 c) {
  chpl____wide__EndCount _1_e = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_check_nil(c, INT64(783), "/home/kp167/chap-svn/modules/internal/ChapelBase.chpl");
  _1_e = (c)->_1_e;
  on_fn30(&_1_e);
  return;
}

/* ChapelBase.chpl:795 */
static void _downEndCount(chpl____wide__EndCount* const e) {
  memory_order local_memory_order_release;
  chpl____wide__ref_atomic_int64 call_tmp = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_localeID_t call_tmp2;
  _class_localson_fn9 _args_foron_fn = NULL;
  int64_t chpl_here_alloc_size;
  chpl_opaque chpl_here_alloc_tmp;
  chpl____wide__ref_atomic_int64 chpl_macro_tmp_26;
  local_memory_order_release = memory_order_release;
  chpl_check_nil((e)->addr, INT64(796), "/home/kp167/chap-svn/modules/internal/ChapelBase.chpl");
  chpl_macro_tmp_26.locale = (e)->locale;
  chpl_macro_tmp_26.addr = &(((e)->addr)->i);
  call_tmp = chpl_macro_tmp_26;
  call_tmp2 = (&call_tmp)->locale;
  chpl_here_alloc_size = sizeof(chpl__class_localson_fn9_object);
  chpl_here_alloc_tmp = chpl_here_alloc(chpl_here_alloc_size, INT16(36));
  _args_foron_fn = ((_class_localson_fn9)(chpl_here_alloc_tmp));
  chpl_check_nil(_args_foron_fn, INT64(796), "/home/kp167/chap-svn/modules/internal/ChapelBase.chpl");
  (_args_foron_fn)->_0__tmp = call_tmp2;
  chpl_check_nil(_args_foron_fn, INT64(796), "/home/kp167/chap-svn/modules/internal/ChapelBase.chpl");
  (_args_foron_fn)->_1_this = call_tmp;
  chpl_check_nil(_args_foron_fn, INT64(796), "/home/kp167/chap-svn/modules/internal/ChapelBase.chpl");
  (_args_foron_fn)->_2_value = INT64(1);
  chpl_check_nil(_args_foron_fn, INT64(796), "/home/kp167/chap-svn/modules/internal/ChapelBase.chpl");
  (_args_foron_fn)->_3_order = local_memory_order_release;
  /*** wrapon_fn9 ***/ chpl_executeOn(&call_tmp2, INT32(10), _args_foron_fn, sizeof(chpl__class_localson_fn9_object), INT64(1077), "/home/kp167/chap-svn/modules/internal/Atomics.chpl");
  chpl_here_free(((void*)(_args_foron_fn)));
  return;
}

/* ChapelBase.chpl:802 */
static void _waitEndCount(chpl___EndCount e) {
  memory_order local_memory_order_seq_cst;
  memory_order local_memory_order_acquire;
  chpl_task_list_p ret;
  chpl____wide__ref_atomic_int64 call_tmp = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_localeID_t call_tmp2;
  _class_localson_fn10 _args_foron_fn = NULL;
  int64_t chpl_here_alloc_size;
  chpl_opaque chpl_here_alloc_tmp;
  int64_t ret2;
  chpl____wide_locale call_tmp3 = {CHPL_LOCALEID_T_INIT, NULL};
  int32_t call_tmp4;
  chpl_localeID_t call_tmp5;
  _ref_chpl_localeID_t ret_to_arg_ref_tmp_ = NULL;
  chpl_localeID_t call_tmp6;
  chpl____wide_locale call_tmp7 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_atomic_int64 call_tmp8 = {CHPL_LOCALEID_T_INIT, NULL};
  memory_order default_argorder;
  chpl_localeID_t call_tmp9;
  _class_localson_fn9 _args_foron_fn2 = NULL;
  int64_t chpl_here_alloc_size2;
  chpl_opaque chpl_here_alloc_tmp2;
  chpl_task_list_p ret3;
  chpl____wide__ref_atomic_int64 chpl_macro_tmp_27;
  chpl____wide__ref_atomic_int64 chpl_macro_tmp_28;
  local_memory_order_seq_cst = memory_order_seq_cst;
  local_memory_order_acquire = memory_order_acquire;
  chpl_check_nil(e, INT64(804), "/home/kp167/chap-svn/modules/internal/ChapelBase.chpl");
  ret = (e)->taskList;
  chpl_taskListExecute(ret, INT64(804), "/home/kp167/chap-svn/modules/internal/ChapelBase.chpl");
  chpl_check_nil(e, INT64(807), "/home/kp167/chap-svn/modules/internal/ChapelBase.chpl");
  chpl_macro_tmp_27.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_27.addr = &((e)->i);
  call_tmp = chpl_macro_tmp_27;
  chpl_rmem_consist_maybe_release(local_memory_order_acquire, INT64(807), "/home/kp167/chap-svn/modules/internal/ChapelBase.chpl");
  call_tmp2 = (&call_tmp)->locale;
  chpl_here_alloc_size = sizeof(chpl__class_localson_fn10_object);
  chpl_here_alloc_tmp = chpl_here_alloc(chpl_here_alloc_size, INT16(36));
  _args_foron_fn = ((_class_localson_fn10)(chpl_here_alloc_tmp));
  chpl_check_nil(_args_foron_fn, INT64(807), "/home/kp167/chap-svn/modules/internal/ChapelBase.chpl");
  (_args_foron_fn)->_0__tmp = call_tmp2;
  chpl_check_nil(_args_foron_fn, INT64(807), "/home/kp167/chap-svn/modules/internal/ChapelBase.chpl");
  (_args_foron_fn)->_1_this = call_tmp;
  chpl_check_nil(_args_foron_fn, INT64(807), "/home/kp167/chap-svn/modules/internal/ChapelBase.chpl");
  (_args_foron_fn)->_2_val = INT64(0);
  chpl_check_nil(_args_foron_fn, INT64(807), "/home/kp167/chap-svn/modules/internal/ChapelBase.chpl");
  (_args_foron_fn)->_3_order = local_memory_order_acquire;
  /*** wrapon_fn10 ***/ chpl_executeOn(&call_tmp2, INT32(11), _args_foron_fn, sizeof(chpl__class_localson_fn10_object), INT64(1106), "/home/kp167/chap-svn/modules/internal/Atomics.chpl");
  chpl_here_free(((void*)(_args_foron_fn)));
  chpl_rmem_consist_maybe_acquire(local_memory_order_acquire, INT64(807), "/home/kp167/chap-svn/modules/internal/ChapelBase.chpl");
  chpl_check_nil(e, INT64(809), "/home/kp167/chap-svn/modules/internal/ChapelBase.chpl");
  ret2 = (e)->taskCnt;
  call_tmp4 = chpl_task_getRequestedSubloc();
  ret_to_arg_ref_tmp_ = &call_tmp5;
  chpl_buildLocaleID(chpl_nodeID, call_tmp4, ret_to_arg_ref_tmp_, INT64(810), "/home/kp167/chap-svn/modules/internal/ChapelBase.chpl");
  call_tmp6 = chpl__initCopy_chpl_rt_localeID_t(call_tmp5);
  call_tmp7 = chpl_localeID_to_locale(&call_tmp6);
  call_tmp3 = call_tmp7;
  chpl_check_nil((&call_tmp3)->addr, INT64(810), "/home/kp167/chap-svn/modules/internal/ChapelBase.chpl");
  chpl_macro_tmp_28.locale = (&call_tmp3)->locale;
  chpl_macro_tmp_28.addr = &(((&call_tmp3)->addr)->runningTaskCounter);
  call_tmp8 = chpl_macro_tmp_28;
  default_argorder = local_memory_order_seq_cst;
  call_tmp9 = (&call_tmp8)->locale;
  chpl_here_alloc_size2 = sizeof(chpl__class_localson_fn9_object);
  chpl_here_alloc_tmp2 = chpl_here_alloc(chpl_here_alloc_size2, INT16(36));
  _args_foron_fn2 = ((_class_localson_fn9)(chpl_here_alloc_tmp2));
  chpl_check_nil(_args_foron_fn2, INT64(810), "/home/kp167/chap-svn/modules/internal/ChapelBase.chpl");
  (_args_foron_fn2)->_0__tmp = call_tmp9;
  chpl_check_nil(_args_foron_fn2, INT64(810), "/home/kp167/chap-svn/modules/internal/ChapelBase.chpl");
  (_args_foron_fn2)->_1_this = call_tmp8;
  chpl_check_nil(_args_foron_fn2, INT64(810), "/home/kp167/chap-svn/modules/internal/ChapelBase.chpl");
  (_args_foron_fn2)->_2_value = ret2;
  chpl_check_nil(_args_foron_fn2, INT64(810), "/home/kp167/chap-svn/modules/internal/ChapelBase.chpl");
  (_args_foron_fn2)->_3_order = default_argorder;
  /*** wrapon_fn9 ***/ chpl_executeOn(&call_tmp9, INT32(10), _args_foron_fn2, sizeof(chpl__class_localson_fn9_object), INT64(1077), "/home/kp167/chap-svn/modules/internal/Atomics.chpl");
  chpl_here_free(((void*)(_args_foron_fn2)));
  chpl_check_nil(e, INT64(820), "/home/kp167/chap-svn/modules/internal/ChapelBase.chpl");
  ret3 = (e)->taskList;
  chpl_taskListFree(ret3, INT64(820), "/home/kp167/chap-svn/modules/internal/ChapelBase.chpl");
  return;
}

/* ChapelBase.chpl:823 */
static void _upEndCount2(chpl___EndCount _endCount) {
  chpl____wide__EndCount T = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__EndCount chpl_macro_tmp_29;
  chpl_macro_tmp_29.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_29.addr = _endCount;
  T = chpl_macro_tmp_29;
  _upEndCount(&T);
  return;
}

/* ChapelBase.chpl:828 */
static void _downEndCount2(chpl____wide__EndCount* const _endCount) {
  _downEndCount(_endCount);
  return;
}

/* ChapelBase.chpl:833 */
static void _waitEndCount2(chpl___EndCount _endCount) {
  _waitEndCount(_endCount);
  return;
}

/* ChapelBase.chpl:839 */
static int64_t _command_line_cast(c_string x) {
  int64_t call_tmp;
  call_tmp = c_string_to_int64_t(x, INT64(839), "/home/kp167/chap-svn/modules/internal/ChapelBase.chpl");
  return call_tmp;
}

/* ChapelBase.chpl:839 */
static int64_t _command_line_cast2(c_string x) {
  int64_t call_tmp;
  call_tmp = c_string_to_int64_t(x, INT64(839), "/home/kp167/chap-svn/modules/internal/ChapelBase.chpl");
  return call_tmp;
}

/* ChapelBase.chpl:839 */
static chpl_bool _command_line_cast3(c_string x) {
  chpl_bool call_tmp;
  call_tmp = c_string_to_chpl_bool(x, INT64(839), "/home/kp167/chap-svn/modules/internal/ChapelBase.chpl");
  return call_tmp;
}

/* ChapelBase.chpl:839 */
static int64_t _command_line_cast4(c_string x) {
  int64_t call_tmp;
  call_tmp = c_string_to_int64_t(x, INT64(839), "/home/kp167/chap-svn/modules/internal/ChapelBase.chpl");
  return call_tmp;
}

/* ChapelBase.chpl:839 */
static chpl_bool _command_line_cast5(c_string x) {
  chpl_bool call_tmp;
  call_tmp = c_string_to_chpl_bool(x, INT64(839), "/home/kp167/chap-svn/modules/internal/ChapelBase.chpl");
  return call_tmp;
}

/* ChapelBase.chpl:839 */
static chpl_bool _command_line_cast6(c_string x) {
  chpl_bool call_tmp;
  call_tmp = c_string_to_chpl_bool(x, INT64(839), "/home/kp167/chap-svn/modules/internal/ChapelBase.chpl");
  return call_tmp;
}

/* ChapelBase.chpl:839 */
static chpl_bool _command_line_cast7(c_string x) {
  chpl_bool call_tmp;
  call_tmp = c_string_to_chpl_bool(x, INT64(839), "/home/kp167/chap-svn/modules/internal/ChapelBase.chpl");
  return call_tmp;
}

/* ChapelBase.chpl:839 */
static chpl_bool _command_line_cast8(c_string x) {
  chpl_bool call_tmp;
  call_tmp = c_string_to_chpl_bool(x, INT64(839), "/home/kp167/chap-svn/modules/internal/ChapelBase.chpl");
  return call_tmp;
}

/* ChapelBase.chpl:839 */
static uint64_t _command_line_cast9(c_string x) {
  uint64_t call_tmp;
  call_tmp = c_string_to_uint64_t(x, INT64(839), "/home/kp167/chap-svn/modules/internal/ChapelBase.chpl");
  return call_tmp;
}

/* ChapelBase.chpl:839 */
static uint64_t _command_line_cast10(c_string x) {
  uint64_t call_tmp;
  call_tmp = c_string_to_uint64_t(x, INT64(839), "/home/kp167/chap-svn/modules/internal/ChapelBase.chpl");
  return call_tmp;
}

/* ChapelBase.chpl:839 */
static c_string _command_line_cast11(c_string x) {
  return x;
}

/* ChapelBase.chpl:839 */
static c_string _command_line_cast12(c_string x) {
  return x;
}

/* ChapelBase.chpl:839 */
static chpl_bool _command_line_cast13(c_string x) {
  chpl_bool call_tmp;
  call_tmp = c_string_to_chpl_bool(x, INT64(839), "/home/kp167/chap-svn/modules/internal/ChapelBase.chpl");
  return call_tmp;
}

/* ChapelBase.chpl:985 */
static chpl____wide_DefaultDist chpl__autoCopy(chpl____wide_DefaultDist* const x) {
  memory_order local_memory_order_seq_cst;
  chpl____wide_DefaultDist ret = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_BaseDist call_tmp = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_BaseDist call_tmp2 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_atomic_refcnt call_tmp3 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_atomic_int64 call_tmp4 = {CHPL_LOCALEID_T_INIT, NULL};
  memory_order default_argorder;
  chpl_localeID_t call_tmp5;
  _class_localson_fn7 _args_foron_fn = NULL;
  int64_t chpl_here_alloc_size;
  chpl_opaque chpl_here_alloc_tmp;
  chpl____wide_BaseDist chpl_macro_tmp_30;
  chpl____wide__ref_atomic_refcnt chpl_macro_tmp_31;
  chpl____wide__ref_atomic_int64 chpl_macro_tmp_32;
  local_memory_order_seq_cst = memory_order_seq_cst;
  ret = *(x);
  chpl_macro_tmp_30.locale = (&ret)->locale;
  chpl_macro_tmp_30.addr = ((BaseDist)((&ret)->addr));
  call_tmp2 = chpl_macro_tmp_30;
  call_tmp = call_tmp2;
  compilerAssert();
  chpl_check_nil((&call_tmp)->addr, INT64(986), "/home/kp167/chap-svn/modules/internal/ChapelBase.chpl");
  chpl_macro_tmp_31.locale = (&call_tmp)->locale;
  chpl_macro_tmp_31.addr = &(((&call_tmp)->addr)->_distCnt);
  call_tmp3 = chpl_macro_tmp_31;
  chpl_macro_tmp_32.locale = (call_tmp3).locale;
  chpl_macro_tmp_32.addr = &(((call_tmp3).addr)->_cnt);
  call_tmp4 = chpl_macro_tmp_32;
  default_argorder = local_memory_order_seq_cst;
  call_tmp5 = (&call_tmp4)->locale;
  chpl_here_alloc_size = sizeof(chpl__class_localson_fn7_object);
  chpl_here_alloc_tmp = chpl_here_alloc(chpl_here_alloc_size, INT16(36));
  _args_foron_fn = ((_class_localson_fn7)(chpl_here_alloc_tmp));
  chpl_check_nil(_args_foron_fn, INT64(986), "/home/kp167/chap-svn/modules/internal/ChapelBase.chpl");
  (_args_foron_fn)->_0__tmp = call_tmp5;
  chpl_check_nil(_args_foron_fn, INT64(986), "/home/kp167/chap-svn/modules/internal/ChapelBase.chpl");
  (_args_foron_fn)->_1_this = call_tmp4;
  chpl_check_nil(_args_foron_fn, INT64(986), "/home/kp167/chap-svn/modules/internal/ChapelBase.chpl");
  (_args_foron_fn)->_2_value = INT64(1);
  chpl_check_nil(_args_foron_fn, INT64(986), "/home/kp167/chap-svn/modules/internal/ChapelBase.chpl");
  (_args_foron_fn)->_3_order = default_argorder;
  /*** wrapon_fn7 ***/ chpl_executeOn(&call_tmp5, INT32(8), _args_foron_fn, sizeof(chpl__class_localson_fn7_object), INT64(1069), "/home/kp167/chap-svn/modules/internal/Atomics.chpl");
  chpl_here_free(((void*)(_args_foron_fn)));
  return *(x);
}

/* ChapelBase.chpl:993 */
static chpl____wide_DefaultRectangularDom_1_int64_t_F chpl__autoCopy2(chpl____wide_DefaultRectangularDom_1_int64_t_F* const x) {
  memory_order local_memory_order_seq_cst;
  chpl____wide_DefaultRectangularDom_1_int64_t_F ret = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_BaseDom call_tmp = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_BaseDom call_tmp2 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_atomic_refcnt call_tmp3 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_atomic_int64 call_tmp4 = {CHPL_LOCALEID_T_INIT, NULL};
  memory_order default_argorder;
  chpl_localeID_t call_tmp5;
  _class_localson_fn7 _args_foron_fn = NULL;
  int64_t chpl_here_alloc_size;
  chpl_opaque chpl_here_alloc_tmp;
  chpl____wide_BaseDom chpl_macro_tmp_33;
  chpl____wide__ref_atomic_refcnt chpl_macro_tmp_34;
  chpl____wide__ref_atomic_int64 chpl_macro_tmp_35;
  local_memory_order_seq_cst = memory_order_seq_cst;
  ret = *(x);
  chpl_macro_tmp_33.locale = (&ret)->locale;
  chpl_macro_tmp_33.addr = ((BaseDom)((&ret)->addr));
  call_tmp2 = chpl_macro_tmp_33;
  call_tmp = call_tmp2;
  compilerAssert();
  chpl_check_nil((&call_tmp)->addr, INT64(994), "/home/kp167/chap-svn/modules/internal/ChapelBase.chpl");
  chpl_macro_tmp_34.locale = (&call_tmp)->locale;
  chpl_macro_tmp_34.addr = &(((&call_tmp)->addr)->_domCnt);
  call_tmp3 = chpl_macro_tmp_34;
  chpl_macro_tmp_35.locale = (call_tmp3).locale;
  chpl_macro_tmp_35.addr = &(((call_tmp3).addr)->_cnt);
  call_tmp4 = chpl_macro_tmp_35;
  default_argorder = local_memory_order_seq_cst;
  call_tmp5 = (&call_tmp4)->locale;
  chpl_here_alloc_size = sizeof(chpl__class_localson_fn7_object);
  chpl_here_alloc_tmp = chpl_here_alloc(chpl_here_alloc_size, INT16(36));
  _args_foron_fn = ((_class_localson_fn7)(chpl_here_alloc_tmp));
  chpl_check_nil(_args_foron_fn, INT64(994), "/home/kp167/chap-svn/modules/internal/ChapelBase.chpl");
  (_args_foron_fn)->_0__tmp = call_tmp5;
  chpl_check_nil(_args_foron_fn, INT64(994), "/home/kp167/chap-svn/modules/internal/ChapelBase.chpl");
  (_args_foron_fn)->_1_this = call_tmp4;
  chpl_check_nil(_args_foron_fn, INT64(994), "/home/kp167/chap-svn/modules/internal/ChapelBase.chpl");
  (_args_foron_fn)->_2_value = INT64(1);
  chpl_check_nil(_args_foron_fn, INT64(994), "/home/kp167/chap-svn/modules/internal/ChapelBase.chpl");
  (_args_foron_fn)->_3_order = default_argorder;
  /*** wrapon_fn7 ***/ chpl_executeOn(&call_tmp5, INT32(8), _args_foron_fn, sizeof(chpl__class_localson_fn7_object), INT64(1069), "/home/kp167/chap-svn/modules/internal/Atomics.chpl");
  chpl_here_free(((void*)(_args_foron_fn)));
  return *(x);
}

/* ChapelBase.chpl:993 */
static chpl____wide_DefaultAssociativeDom_chpl_taskID_t_F chpl__autoCopy3(chpl____wide_DefaultAssociativeDom_chpl_taskID_t_F* const x) {
  memory_order local_memory_order_seq_cst;
  chpl____wide_DefaultAssociativeDom_chpl_taskID_t_F ret = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_BaseDom call_tmp = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_BaseDom call_tmp2 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_atomic_refcnt call_tmp3 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_atomic_int64 call_tmp4 = {CHPL_LOCALEID_T_INIT, NULL};
  memory_order default_argorder;
  chpl_localeID_t call_tmp5;
  _class_localson_fn7 _args_foron_fn = NULL;
  int64_t chpl_here_alloc_size;
  chpl_opaque chpl_here_alloc_tmp;
  chpl____wide_BaseDom chpl_macro_tmp_36;
  chpl____wide__ref_atomic_refcnt chpl_macro_tmp_37;
  chpl____wide__ref_atomic_int64 chpl_macro_tmp_38;
  local_memory_order_seq_cst = memory_order_seq_cst;
  ret = *(x);
  chpl_macro_tmp_36.locale = (&ret)->locale;
  chpl_macro_tmp_36.addr = ((BaseDom)((&ret)->addr));
  call_tmp2 = chpl_macro_tmp_36;
  call_tmp = call_tmp2;
  compilerAssert();
  chpl_check_nil((&call_tmp)->addr, INT64(994), "/home/kp167/chap-svn/modules/internal/ChapelBase.chpl");
  chpl_macro_tmp_37.locale = (&call_tmp)->locale;
  chpl_macro_tmp_37.addr = &(((&call_tmp)->addr)->_domCnt);
  call_tmp3 = chpl_macro_tmp_37;
  chpl_macro_tmp_38.locale = (call_tmp3).locale;
  chpl_macro_tmp_38.addr = &(((call_tmp3).addr)->_cnt);
  call_tmp4 = chpl_macro_tmp_38;
  default_argorder = local_memory_order_seq_cst;
  call_tmp5 = (&call_tmp4)->locale;
  chpl_here_alloc_size = sizeof(chpl__class_localson_fn7_object);
  chpl_here_alloc_tmp = chpl_here_alloc(chpl_here_alloc_size, INT16(36));
  _args_foron_fn = ((_class_localson_fn7)(chpl_here_alloc_tmp));
  chpl_check_nil(_args_foron_fn, INT64(994), "/home/kp167/chap-svn/modules/internal/ChapelBase.chpl");
  (_args_foron_fn)->_0__tmp = call_tmp5;
  chpl_check_nil(_args_foron_fn, INT64(994), "/home/kp167/chap-svn/modules/internal/ChapelBase.chpl");
  (_args_foron_fn)->_1_this = call_tmp4;
  chpl_check_nil(_args_foron_fn, INT64(994), "/home/kp167/chap-svn/modules/internal/ChapelBase.chpl");
  (_args_foron_fn)->_2_value = INT64(1);
  chpl_check_nil(_args_foron_fn, INT64(994), "/home/kp167/chap-svn/modules/internal/ChapelBase.chpl");
  (_args_foron_fn)->_3_order = default_argorder;
  /*** wrapon_fn7 ***/ chpl_executeOn(&call_tmp5, INT32(8), _args_foron_fn, sizeof(chpl__class_localson_fn7_object), INT64(1069), "/home/kp167/chap-svn/modules/internal/Atomics.chpl");
  chpl_here_free(((void*)(_args_foron_fn)));
  return *(x);
}

/* ChapelBase.chpl:1001 */
static chpl____wide_DefaultRectangularArr_locale_1_int64_t_F chpl__autoCopy4(chpl____wide_DefaultRectangularArr_locale_1_int64_t_F* const x) {
  memory_order local_memory_order_seq_cst;
  chpl____wide_DefaultRectangularArr_locale_1_int64_t_F ret = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_BaseArr call_tmp = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_BaseArr call_tmp2 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_atomic_refcnt call_tmp3 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_atomic_int64 call_tmp4 = {CHPL_LOCALEID_T_INIT, NULL};
  memory_order default_argorder;
  chpl_localeID_t call_tmp5;
  _class_localson_fn7 _args_foron_fn = NULL;
  int64_t chpl_here_alloc_size;
  chpl_opaque chpl_here_alloc_tmp;
  chpl____wide_BaseArr chpl_macro_tmp_39;
  chpl____wide__ref_atomic_refcnt chpl_macro_tmp_40;
  chpl____wide__ref_atomic_int64 chpl_macro_tmp_41;
  local_memory_order_seq_cst = memory_order_seq_cst;
  ret = *(x);
  chpl_macro_tmp_39.locale = (&ret)->locale;
  chpl_macro_tmp_39.addr = ((BaseArr)((&ret)->addr));
  call_tmp2 = chpl_macro_tmp_39;
  call_tmp = call_tmp2;
  compilerAssert();
  chpl_check_nil((&call_tmp)->addr, INT64(1002), "/home/kp167/chap-svn/modules/internal/ChapelBase.chpl");
  chpl_macro_tmp_40.locale = (&call_tmp)->locale;
  chpl_macro_tmp_40.addr = &(((&call_tmp)->addr)->_arrCnt);
  call_tmp3 = chpl_macro_tmp_40;
  chpl_macro_tmp_41.locale = (call_tmp3).locale;
  chpl_macro_tmp_41.addr = &(((call_tmp3).addr)->_cnt);
  call_tmp4 = chpl_macro_tmp_41;
  default_argorder = local_memory_order_seq_cst;
  call_tmp5 = (&call_tmp4)->locale;
  chpl_here_alloc_size = sizeof(chpl__class_localson_fn7_object);
  chpl_here_alloc_tmp = chpl_here_alloc(chpl_here_alloc_size, INT16(36));
  _args_foron_fn = ((_class_localson_fn7)(chpl_here_alloc_tmp));
  chpl_check_nil(_args_foron_fn, INT64(1002), "/home/kp167/chap-svn/modules/internal/ChapelBase.chpl");
  (_args_foron_fn)->_0__tmp = call_tmp5;
  chpl_check_nil(_args_foron_fn, INT64(1002), "/home/kp167/chap-svn/modules/internal/ChapelBase.chpl");
  (_args_foron_fn)->_1_this = call_tmp4;
  chpl_check_nil(_args_foron_fn, INT64(1002), "/home/kp167/chap-svn/modules/internal/ChapelBase.chpl");
  (_args_foron_fn)->_2_value = INT64(1);
  chpl_check_nil(_args_foron_fn, INT64(1002), "/home/kp167/chap-svn/modules/internal/ChapelBase.chpl");
  (_args_foron_fn)->_3_order = default_argorder;
  /*** wrapon_fn7 ***/ chpl_executeOn(&call_tmp5, INT32(8), _args_foron_fn, sizeof(chpl__class_localson_fn7_object), INT64(1069), "/home/kp167/chap-svn/modules/internal/Atomics.chpl");
  chpl_here_free(((void*)(_args_foron_fn)));
  return *(x);
}

/* ChapelBase.chpl:1001 */
static chpl____wide_DefaultRectangularArr_localesSignal_1_int64_t_F chpl__autoCopy5(chpl____wide_DefaultRectangularArr_localesSignal_1_int64_t_F* const x) {
  memory_order local_memory_order_seq_cst;
  chpl____wide_DefaultRectangularArr_localesSignal_1_int64_t_F ret = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_BaseArr call_tmp = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_BaseArr call_tmp2 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_atomic_refcnt call_tmp3 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_atomic_int64 call_tmp4 = {CHPL_LOCALEID_T_INIT, NULL};
  memory_order default_argorder;
  chpl_localeID_t call_tmp5;
  _class_localson_fn7 _args_foron_fn = NULL;
  int64_t chpl_here_alloc_size;
  chpl_opaque chpl_here_alloc_tmp;
  chpl____wide_BaseArr chpl_macro_tmp_42;
  chpl____wide__ref_atomic_refcnt chpl_macro_tmp_43;
  chpl____wide__ref_atomic_int64 chpl_macro_tmp_44;
  local_memory_order_seq_cst = memory_order_seq_cst;
  ret = *(x);
  chpl_macro_tmp_42.locale = (&ret)->locale;
  chpl_macro_tmp_42.addr = ((BaseArr)((&ret)->addr));
  call_tmp2 = chpl_macro_tmp_42;
  call_tmp = call_tmp2;
  compilerAssert();
  chpl_check_nil((&call_tmp)->addr, INT64(1002), "/home/kp167/chap-svn/modules/internal/ChapelBase.chpl");
  chpl_macro_tmp_43.locale = (&call_tmp)->locale;
  chpl_macro_tmp_43.addr = &(((&call_tmp)->addr)->_arrCnt);
  call_tmp3 = chpl_macro_tmp_43;
  chpl_macro_tmp_44.locale = (call_tmp3).locale;
  chpl_macro_tmp_44.addr = &(((call_tmp3).addr)->_cnt);
  call_tmp4 = chpl_macro_tmp_44;
  default_argorder = local_memory_order_seq_cst;
  call_tmp5 = (&call_tmp4)->locale;
  chpl_here_alloc_size = sizeof(chpl__class_localson_fn7_object);
  chpl_here_alloc_tmp = chpl_here_alloc(chpl_here_alloc_size, INT16(36));
  _args_foron_fn = ((_class_localson_fn7)(chpl_here_alloc_tmp));
  chpl_check_nil(_args_foron_fn, INT64(1002), "/home/kp167/chap-svn/modules/internal/ChapelBase.chpl");
  (_args_foron_fn)->_0__tmp = call_tmp5;
  chpl_check_nil(_args_foron_fn, INT64(1002), "/home/kp167/chap-svn/modules/internal/ChapelBase.chpl");
  (_args_foron_fn)->_1_this = call_tmp4;
  chpl_check_nil(_args_foron_fn, INT64(1002), "/home/kp167/chap-svn/modules/internal/ChapelBase.chpl");
  (_args_foron_fn)->_2_value = INT64(1);
  chpl_check_nil(_args_foron_fn, INT64(1002), "/home/kp167/chap-svn/modules/internal/ChapelBase.chpl");
  (_args_foron_fn)->_3_order = default_argorder;
  /*** wrapon_fn7 ***/ chpl_executeOn(&call_tmp5, INT32(8), _args_foron_fn, sizeof(chpl__class_localson_fn7_object), INT64(1069), "/home/kp167/chap-svn/modules/internal/Atomics.chpl");
  chpl_here_free(((void*)(_args_foron_fn)));
  return *(x);
}

/* ChapelBase.chpl:1001 */
static chpl____wide_DefaultRectangularArr_chpl_TableEntry_chpl_taskID_t_1_int64_t_F chpl__autoCopy6(chpl____wide_DefaultRectangularArr_chpl_TableEntry_chpl_taskID_t_1_int64_t_F* const x) {
  memory_order local_memory_order_seq_cst;
  chpl____wide_DefaultRectangularArr_chpl_TableEntry_chpl_taskID_t_1_int64_t_F ret = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_BaseArr call_tmp = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_BaseArr call_tmp2 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_atomic_refcnt call_tmp3 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_atomic_int64 call_tmp4 = {CHPL_LOCALEID_T_INIT, NULL};
  memory_order default_argorder;
  chpl_localeID_t call_tmp5;
  _class_localson_fn7 _args_foron_fn = NULL;
  int64_t chpl_here_alloc_size;
  chpl_opaque chpl_here_alloc_tmp;
  chpl____wide_BaseArr chpl_macro_tmp_45;
  chpl____wide__ref_atomic_refcnt chpl_macro_tmp_46;
  chpl____wide__ref_atomic_int64 chpl_macro_tmp_47;
  local_memory_order_seq_cst = memory_order_seq_cst;
  ret = *(x);
  chpl_macro_tmp_45.locale = (&ret)->locale;
  chpl_macro_tmp_45.addr = ((BaseArr)((&ret)->addr));
  call_tmp2 = chpl_macro_tmp_45;
  call_tmp = call_tmp2;
  compilerAssert();
  chpl_check_nil((&call_tmp)->addr, INT64(1002), "/home/kp167/chap-svn/modules/internal/ChapelBase.chpl");
  chpl_macro_tmp_46.locale = (&call_tmp)->locale;
  chpl_macro_tmp_46.addr = &(((&call_tmp)->addr)->_arrCnt);
  call_tmp3 = chpl_macro_tmp_46;
  chpl_macro_tmp_47.locale = (call_tmp3).locale;
  chpl_macro_tmp_47.addr = &(((call_tmp3).addr)->_cnt);
  call_tmp4 = chpl_macro_tmp_47;
  default_argorder = local_memory_order_seq_cst;
  call_tmp5 = (&call_tmp4)->locale;
  chpl_here_alloc_size = sizeof(chpl__class_localson_fn7_object);
  chpl_here_alloc_tmp = chpl_here_alloc(chpl_here_alloc_size, INT16(36));
  _args_foron_fn = ((_class_localson_fn7)(chpl_here_alloc_tmp));
  chpl_check_nil(_args_foron_fn, INT64(1002), "/home/kp167/chap-svn/modules/internal/ChapelBase.chpl");
  (_args_foron_fn)->_0__tmp = call_tmp5;
  chpl_check_nil(_args_foron_fn, INT64(1002), "/home/kp167/chap-svn/modules/internal/ChapelBase.chpl");
  (_args_foron_fn)->_1_this = call_tmp4;
  chpl_check_nil(_args_foron_fn, INT64(1002), "/home/kp167/chap-svn/modules/internal/ChapelBase.chpl");
  (_args_foron_fn)->_2_value = INT64(1);
  chpl_check_nil(_args_foron_fn, INT64(1002), "/home/kp167/chap-svn/modules/internal/ChapelBase.chpl");
  (_args_foron_fn)->_3_order = default_argorder;
  /*** wrapon_fn7 ***/ chpl_executeOn(&call_tmp5, INT32(8), _args_foron_fn, sizeof(chpl__class_localson_fn7_object), INT64(1069), "/home/kp167/chap-svn/modules/internal/Atomics.chpl");
  chpl_here_free(((void*)(_args_foron_fn)));
  return *(x);
}

/* ChapelBase.chpl:1001 */
static chpl____wide_DefaultRectangularArr_chpldev_Task_1_int64_t_F chpl__autoCopy7(chpl____wide_DefaultRectangularArr_chpldev_Task_1_int64_t_F* const x) {
  memory_order local_memory_order_seq_cst;
  chpl____wide_DefaultRectangularArr_chpldev_Task_1_int64_t_F ret = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_BaseArr call_tmp = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_BaseArr call_tmp2 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_atomic_refcnt call_tmp3 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_atomic_int64 call_tmp4 = {CHPL_LOCALEID_T_INIT, NULL};
  memory_order default_argorder;
  chpl_localeID_t call_tmp5;
  _class_localson_fn7 _args_foron_fn = NULL;
  int64_t chpl_here_alloc_size;
  chpl_opaque chpl_here_alloc_tmp;
  chpl____wide_BaseArr chpl_macro_tmp_48;
  chpl____wide__ref_atomic_refcnt chpl_macro_tmp_49;
  chpl____wide__ref_atomic_int64 chpl_macro_tmp_50;
  local_memory_order_seq_cst = memory_order_seq_cst;
  ret = *(x);
  chpl_macro_tmp_48.locale = (&ret)->locale;
  chpl_macro_tmp_48.addr = ((BaseArr)((&ret)->addr));
  call_tmp2 = chpl_macro_tmp_48;
  call_tmp = call_tmp2;
  compilerAssert();
  chpl_check_nil((&call_tmp)->addr, INT64(1002), "/home/kp167/chap-svn/modules/internal/ChapelBase.chpl");
  chpl_macro_tmp_49.locale = (&call_tmp)->locale;
  chpl_macro_tmp_49.addr = &(((&call_tmp)->addr)->_arrCnt);
  call_tmp3 = chpl_macro_tmp_49;
  chpl_macro_tmp_50.locale = (call_tmp3).locale;
  chpl_macro_tmp_50.addr = &(((call_tmp3).addr)->_cnt);
  call_tmp4 = chpl_macro_tmp_50;
  default_argorder = local_memory_order_seq_cst;
  call_tmp5 = (&call_tmp4)->locale;
  chpl_here_alloc_size = sizeof(chpl__class_localson_fn7_object);
  chpl_here_alloc_tmp = chpl_here_alloc(chpl_here_alloc_size, INT16(36));
  _args_foron_fn = ((_class_localson_fn7)(chpl_here_alloc_tmp));
  chpl_check_nil(_args_foron_fn, INT64(1002), "/home/kp167/chap-svn/modules/internal/ChapelBase.chpl");
  (_args_foron_fn)->_0__tmp = call_tmp5;
  chpl_check_nil(_args_foron_fn, INT64(1002), "/home/kp167/chap-svn/modules/internal/ChapelBase.chpl");
  (_args_foron_fn)->_1_this = call_tmp4;
  chpl_check_nil(_args_foron_fn, INT64(1002), "/home/kp167/chap-svn/modules/internal/ChapelBase.chpl");
  (_args_foron_fn)->_2_value = INT64(1);
  chpl_check_nil(_args_foron_fn, INT64(1002), "/home/kp167/chap-svn/modules/internal/ChapelBase.chpl");
  (_args_foron_fn)->_3_order = default_argorder;
  /*** wrapon_fn7 ***/ chpl_executeOn(&call_tmp5, INT32(8), _args_foron_fn, sizeof(chpl__class_localson_fn7_object), INT64(1069), "/home/kp167/chap-svn/modules/internal/Atomics.chpl");
  chpl_here_free(((void*)(_args_foron_fn)));
  return *(x);
}

/* ChapelBase.chpl:1001 */
static chpl____wide_DefaultAssociativeArr_chpldev_Task_chpl_taskID_t_F chpl__autoCopy8(chpl____wide_DefaultAssociativeArr_chpldev_Task_chpl_taskID_t_F* const x) {
  memory_order local_memory_order_seq_cst;
  chpl____wide_DefaultAssociativeArr_chpldev_Task_chpl_taskID_t_F ret = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_BaseArr call_tmp = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_BaseArr call_tmp2 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_atomic_refcnt call_tmp3 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_atomic_int64 call_tmp4 = {CHPL_LOCALEID_T_INIT, NULL};
  memory_order default_argorder;
  chpl_localeID_t call_tmp5;
  _class_localson_fn7 _args_foron_fn = NULL;
  int64_t chpl_here_alloc_size;
  chpl_opaque chpl_here_alloc_tmp;
  chpl____wide_BaseArr chpl_macro_tmp_51;
  chpl____wide__ref_atomic_refcnt chpl_macro_tmp_52;
  chpl____wide__ref_atomic_int64 chpl_macro_tmp_53;
  local_memory_order_seq_cst = memory_order_seq_cst;
  ret = *(x);
  chpl_macro_tmp_51.locale = (&ret)->locale;
  chpl_macro_tmp_51.addr = ((BaseArr)((&ret)->addr));
  call_tmp2 = chpl_macro_tmp_51;
  call_tmp = call_tmp2;
  compilerAssert();
  chpl_check_nil((&call_tmp)->addr, INT64(1002), "/home/kp167/chap-svn/modules/internal/ChapelBase.chpl");
  chpl_macro_tmp_52.locale = (&call_tmp)->locale;
  chpl_macro_tmp_52.addr = &(((&call_tmp)->addr)->_arrCnt);
  call_tmp3 = chpl_macro_tmp_52;
  chpl_macro_tmp_53.locale = (call_tmp3).locale;
  chpl_macro_tmp_53.addr = &(((call_tmp3).addr)->_cnt);
  call_tmp4 = chpl_macro_tmp_53;
  default_argorder = local_memory_order_seq_cst;
  call_tmp5 = (&call_tmp4)->locale;
  chpl_here_alloc_size = sizeof(chpl__class_localson_fn7_object);
  chpl_here_alloc_tmp = chpl_here_alloc(chpl_here_alloc_size, INT16(36));
  _args_foron_fn = ((_class_localson_fn7)(chpl_here_alloc_tmp));
  chpl_check_nil(_args_foron_fn, INT64(1002), "/home/kp167/chap-svn/modules/internal/ChapelBase.chpl");
  (_args_foron_fn)->_0__tmp = call_tmp5;
  chpl_check_nil(_args_foron_fn, INT64(1002), "/home/kp167/chap-svn/modules/internal/ChapelBase.chpl");
  (_args_foron_fn)->_1_this = call_tmp4;
  chpl_check_nil(_args_foron_fn, INT64(1002), "/home/kp167/chap-svn/modules/internal/ChapelBase.chpl");
  (_args_foron_fn)->_2_value = INT64(1);
  chpl_check_nil(_args_foron_fn, INT64(1002), "/home/kp167/chap-svn/modules/internal/ChapelBase.chpl");
  (_args_foron_fn)->_3_order = default_argorder;
  /*** wrapon_fn7 ***/ chpl_executeOn(&call_tmp5, INT32(8), _args_foron_fn, sizeof(chpl__class_localson_fn7_object), INT64(1069), "/home/kp167/chap-svn/modules/internal/Atomics.chpl");
  chpl_here_free(((void*)(_args_foron_fn)));
  return *(x);
}

/* ChapelBase.chpl:1046 */
static void chpl__autoDestroy(chpl____wide_DefaultDist* const x) {
  chpl_check_nil((x)->addr, INT64(1047), "/home/kp167/chap-svn/modules/internal/ChapelBase.chpl");
  chpl___TILDE__distribution(x);
  return;
}

/* ChapelBase.chpl:1051 */
static void chpl__autoDestroy2(chpl____wide_DefaultRectangularDom_1_int64_t_F* const x) {
  chpl_check_nil((x)->addr, INT64(1052), "/home/kp167/chap-svn/modules/internal/ChapelBase.chpl");
  chpl___TILDE__domain(x);
  return;
}

/* ChapelBase.chpl:1051 */
static void chpl__autoDestroy3(chpl____wide_DefaultAssociativeDom_chpl_taskID_t_F* const x) {
  chpl_check_nil((x)->addr, INT64(1052), "/home/kp167/chap-svn/modules/internal/ChapelBase.chpl");
  chpl___TILDE__domain2(x);
  return;
}

/* ChapelBase.chpl:1056 */
static void chpl__autoDestroy4(chpl____wide_DefaultRectangularArr_locale_1_int64_t_F* const x) {
  chpl_check_nil((x)->addr, INT64(1057), "/home/kp167/chap-svn/modules/internal/ChapelBase.chpl");
  chpl___TILDE__array(x);
  return;
}

/* ChapelBase.chpl:1056 */
static void chpl__autoDestroy5(chpl____wide_DefaultRectangularArr_localesSignal_1_int64_t_F* const x) {
  chpl_check_nil((x)->addr, INT64(1057), "/home/kp167/chap-svn/modules/internal/ChapelBase.chpl");
  chpl___TILDE__array2(x);
  return;
}

/* ChapelBase.chpl:1056 */
static void chpl__autoDestroy6(chpl____wide_DefaultRectangularArr_chpl_TableEntry_chpl_taskID_t_1_int64_t_F* const x) {
  chpl_check_nil((x)->addr, INT64(1057), "/home/kp167/chap-svn/modules/internal/ChapelBase.chpl");
  chpl___TILDE__array3(x);
  return;
}

/* ChapelBase.chpl:1056 */
static void chpl__autoDestroy7(chpl____wide_DefaultRectangularArr_chpldev_Task_1_int64_t_F* const x) {
  chpl_check_nil((x)->addr, INT64(1057), "/home/kp167/chap-svn/modules/internal/ChapelBase.chpl");
  chpl___TILDE__array4(x);
  return;
}

/* ChapelBase.chpl:1056 */
static void chpl__autoDestroy8(chpl____wide_DefaultAssociativeArr_chpldev_Task_chpl_taskID_t_F* const x) {
  chpl_check_nil((x)->addr, INT64(1057), "/home/kp167/chap-svn/modules/internal/ChapelBase.chpl");
  chpl___TILDE__array5(x);
  return;
}

