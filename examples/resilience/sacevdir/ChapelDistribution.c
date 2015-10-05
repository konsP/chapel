/* ChapelDistribution.chpl:2 */
static void chpl__init_ChapelDistribution(int64_t _ln, c_string _fn) {
  c_string modFormatStr;
  c_string modStr;
  _ref_int32_t refIndentLevel = NULL;
  if (chpl__init_ChapelDistribution_p) {
    goto _exit_chpl__init_ChapelDistribution;
  }
  modFormatStr = "%*s\n";
  modStr = "ChapelDistribution";
  printModuleInit(modFormatStr, modStr, INT64(18));
  refIndentLevel = &moduleInitLevel;
  *(refIndentLevel) += INT64(1);
  chpl__init_ChapelDistribution_p = true;
  {
    chpl__init_List(INT64(2), "/home/kp167/chap-svn/modules/internal/ChapelDistribution.chpl");
  }
  *(refIndentLevel) -= INT64(1);
  _exit_chpl__init_ChapelDistribution:;
  return;
}

/* ChapelDistribution.chpl:12 */
static BaseDist _construct_BaseDist(atomic_refcnt* const _distCnt, list_BaseDom* const _doms, atomicflag* const _domsLock, BaseDist meme) {
  BaseDist this8 = NULL;
  object T = NULL;
  this8 = meme;
  chpl_check_nil(this8, INT64(12), "/home/kp167/chap-svn/modules/internal/ChapelDistribution.chpl");
  T = &((this8)->super);
  _construct_object(T);
  chpl_check_nil(this8, INT64(16), "/home/kp167/chap-svn/modules/internal/ChapelDistribution.chpl");
  (this8)->_distCnt = *(_distCnt);
  chpl_check_nil(this8, INT64(17), "/home/kp167/chap-svn/modules/internal/ChapelDistribution.chpl");
  (this8)->_doms = *(_doms);
  chpl_check_nil(this8, INT64(18), "/home/kp167/chap-svn/modules/internal/ChapelDistribution.chpl");
  (this8)->_domsLock = *(_domsLock);
  return this8;
}

/* ChapelDistribution.chpl:12 */
static void chpl__auto_destroy_BaseDist(BaseDist this8) {
  _ref_atomicflag _field_destructor_tmp_ = NULL;
  _ref_atomic_flag call_tmp = NULL;
  _ref_atomic_flag T = NULL;
  _ref_atomic_refcnt _field_destructor_tmp_2 = NULL;
  _ref_atomic_int64 _field_destructor_tmp_3 = NULL;
  _ref_atomic_int_least64_t call_tmp2 = NULL;
  _ref_atomic_int_least64_t T2 = NULL;
  chpl_check_nil(this8, INT64(18), "/home/kp167/chap-svn/modules/internal/ChapelDistribution.chpl");
  _field_destructor_tmp_ = &((this8)->_domsLock);
  chpl_check_nil(_field_destructor_tmp_, INT64(18), "/home/kp167/chap-svn/modules/internal/ChapelDistribution.chpl");
  call_tmp = &((_field_destructor_tmp_)->_v);
  T = call_tmp;
  atomic_destroy_flag(T);
  call_tmp = T;
  chpl_check_nil(this8, INT64(16), "/home/kp167/chap-svn/modules/internal/ChapelDistribution.chpl");
  _field_destructor_tmp_2 = &((this8)->_distCnt);
  chpl_check_nil(_field_destructor_tmp_2, INT64(16), "/home/kp167/chap-svn/modules/internal/ChapelDistribution.chpl");
  _field_destructor_tmp_3 = &((_field_destructor_tmp_2)->_cnt);
  chpl_check_nil(_field_destructor_tmp_3, INT64(16), "/home/kp167/chap-svn/modules/internal/ChapelDistribution.chpl");
  call_tmp2 = &((_field_destructor_tmp_3)->_v);
  T2 = call_tmp2;
  atomic_destroy_int_least64_t(T2);
  call_tmp2 = T2;
  return;
}

/* ChapelDistribution.chpl:21 */
static int64_t destroyDist(chpl____wide_BaseDist* const this8) {
  memory_order local_memory_order_seq_cst;
  int64_t ret;
  chpl____wide__ref_atomic_refcnt call_tmp = {CHPL_LOCALEID_T_INIT, NULL};
  int64_t ret2;
  int64_t got;
  chpl____wide__ref_atomic_int64 call_tmp2 = {CHPL_LOCALEID_T_INIT, NULL};
  memory_order default_argorder;
  int64_t ret3;
  int64_t ret4;
  chpl_localeID_t call_tmp3;
  _ref_int64_t T = NULL;
  _class_localson_fn8 _args_foron_fn = NULL;
  int64_t chpl_here_alloc_size;
  chpl_opaque chpl_here_alloc_tmp;
  chpl____wide__ref_int64_t T2 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_int64_t _ref_tmp_ = NULL;
  _ref_int64_t _ref_tmp_2 = NULL;
  int64_t call_tmp4;
  _ref_int64_t _ref_tmp_3 = NULL;
  chpl_bool call_tmp5;
  c_string T3;
  _ref_int64_t _ref_tmp_4 = NULL;
  chpl____wide__ref_atomic_refcnt chpl_macro_tmp_745;
  chpl____wide__ref_atomic_int64 chpl_macro_tmp_746;
  chpl____wide__ref_int64_t chpl_macro_tmp_747;
  local_memory_order_seq_cst = memory_order_seq_cst;
  ret = INT64(0);
  compilerAssert();
  compilerAssert();
  chpl_check_nil((this8)->addr, INT64(23), "/home/kp167/chap-svn/modules/internal/ChapelDistribution.chpl");
  chpl_macro_tmp_745.locale = (this8)->locale;
  chpl_macro_tmp_745.addr = &(((this8)->addr)->_distCnt);
  call_tmp = chpl_macro_tmp_745;
  ret2 = INT64(0);
  got = INT64(0);
  chpl_macro_tmp_746.locale = (call_tmp).locale;
  chpl_macro_tmp_746.addr = &(((call_tmp).addr)->_cnt);
  call_tmp2 = chpl_macro_tmp_746;
  default_argorder = local_memory_order_seq_cst;
  ret3 = INT64(0);
  ret4 = INT64(0);
  call_tmp3 = (&call_tmp2)->locale;
  T = &ret4;
  chpl_here_alloc_size = sizeof(chpl__class_localson_fn8_object);
  chpl_here_alloc_tmp = chpl_here_alloc(chpl_here_alloc_size, INT16(36));
  _args_foron_fn = ((_class_localson_fn8)(chpl_here_alloc_tmp));
  chpl_check_nil(_args_foron_fn, INT64(23), "/home/kp167/chap-svn/modules/internal/ChapelDistribution.chpl");
  (_args_foron_fn)->_0__tmp = call_tmp3;
  chpl_check_nil(_args_foron_fn, INT64(23), "/home/kp167/chap-svn/modules/internal/ChapelDistribution.chpl");
  (_args_foron_fn)->_1_this = call_tmp2;
  chpl_check_nil(_args_foron_fn, INT64(23), "/home/kp167/chap-svn/modules/internal/ChapelDistribution.chpl");
  (_args_foron_fn)->_2_value = INT64(1);
  chpl_check_nil(_args_foron_fn, INT64(23), "/home/kp167/chap-svn/modules/internal/ChapelDistribution.chpl");
  (_args_foron_fn)->_3_order = default_argorder;
  chpl_macro_tmp_747.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_747.addr = T;
  T2 = chpl_macro_tmp_747;
  chpl_check_nil(_args_foron_fn, INT64(23), "/home/kp167/chap-svn/modules/internal/ChapelDistribution.chpl");
  (_args_foron_fn)->_4__tmp = T2;
  /*** wrapon_fn8 ***/ chpl_executeOn(&call_tmp3, INT32(9), _args_foron_fn, sizeof(chpl__class_localson_fn8_object), INT64(1073), "/home/kp167/chap-svn/modules/internal/Atomics.chpl");
  chpl_here_free(((void*)(_args_foron_fn)));
  _ref_tmp_ = &ret3;
  *(_ref_tmp_) = ret4;
  _ref_tmp_2 = &got;
  *(_ref_tmp_2) = ret3;
  call_tmp4 = (got - INT64(1));
  _ref_tmp_3 = &ret2;
  *(_ref_tmp_3) = call_tmp4;
  call_tmp5 = (ret2 < INT64(0));
  if (call_tmp5) {
    T3 = "distribution reference count is negative!";
    halt(T3, INT64(23), "/home/kp167/chap-svn/modules/internal/ChapelDistribution.chpl");
  }
  _ref_tmp_4 = &ret;
  *(_ref_tmp_4) = ret2;
  return ret;
}

/* ChapelDistribution.chpl:27 */
static void _local_on_fn3(chpl____wide_BaseDist* const this8, chpl____wide_BaseDom* const x) {
  memory_order local_memory_order_seq_cst;
  chpl_bool T;
  chpl____wide__ref_atomicflag call_tmp = {CHPL_LOCALEID_T_INIT, NULL};
  BaseDist local_this = NULL;
  memory_order default_argorder;
  chpl_bool ret;
  chpl_localeID_t call_tmp2;
  _ref_chpl_bool T2 = NULL;
  _class_localson_fn2 _args_foron_fn = NULL;
  int64_t chpl_here_alloc_size;
  chpl_opaque chpl_here_alloc_tmp;
  chpl____wide__ref_chpl_bool T3 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_atomicflag call_tmp3 = {CHPL_LOCALEID_T_INIT, NULL};
  BaseDist local_this2 = NULL;
  memory_order default_argorder2;
  chpl_bool ret2;
  chpl_localeID_t call_tmp4;
  _ref_chpl_bool T4 = NULL;
  _class_localson_fn2 _args_foron_fn2 = NULL;
  int64_t chpl_here_alloc_size2;
  chpl_opaque chpl_here_alloc_tmp2;
  chpl____wide__ref_chpl_bool T5 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_list_BaseDom call_tmp5 = NULL;
  BaseDist local_this3 = NULL;
  chpl____wide__ref_atomicflag call_tmp6 = {CHPL_LOCALEID_T_INIT, NULL};
  BaseDist local_this4 = NULL;
  memory_order default_argorder3;
  chpl_localeID_t call_tmp7;
  _class_localson_fn3 _args_foron_fn3 = NULL;
  int64_t chpl_here_alloc_size3;
  chpl_opaque chpl_here_alloc_tmp3;
  chpl____wide__ref_atomicflag chpl_macro_tmp_748;
  chpl____wide__ref_chpl_bool chpl_macro_tmp_749;
  chpl____wide__ref_atomicflag chpl_macro_tmp_750;
  chpl____wide__ref_chpl_bool chpl_macro_tmp_751;
  chpl____wide__ref_atomicflag chpl_macro_tmp_752;
  local_memory_order_seq_cst = memory_order_seq_cst;
  chpl_check_local(chpl_nodeFromLocaleID(&((this8)->locale), INT64(0), NULL), INT64(28), "/home/kp167/chap-svn/modules/internal/ChapelDistribution.chpl", "cannot access remote data in local block");
  local_this = (this8)->addr;
  chpl_check_nil(local_this, INT64(28), "/home/kp167/chap-svn/modules/internal/ChapelDistribution.chpl");
  chpl_macro_tmp_748.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_748.addr = &((local_this)->_domsLock);
  call_tmp = chpl_macro_tmp_748;
  default_argorder = local_memory_order_seq_cst;
  ret = false;
  call_tmp2 = (&call_tmp)->locale;
  T2 = &ret;
  chpl_here_alloc_size = sizeof(chpl__class_localson_fn2_object);
  chpl_here_alloc_tmp = _local_chpl_here_alloc(chpl_here_alloc_size, INT16(36));
  _args_foron_fn = ((_class_localson_fn2)(chpl_here_alloc_tmp));
  chpl_check_nil(_args_foron_fn, INT64(28), "/home/kp167/chap-svn/modules/internal/ChapelDistribution.chpl");
  (_args_foron_fn)->_0__tmp = call_tmp2;
  chpl_check_nil(_args_foron_fn, INT64(28), "/home/kp167/chap-svn/modules/internal/ChapelDistribution.chpl");
  (_args_foron_fn)->_1_this = call_tmp;
  chpl_check_nil(_args_foron_fn, INT64(28), "/home/kp167/chap-svn/modules/internal/ChapelDistribution.chpl");
  (_args_foron_fn)->_2_order = default_argorder;
  chpl_macro_tmp_749.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_749.addr = T2;
  T3 = chpl_macro_tmp_749;
  chpl_check_nil(_args_foron_fn, INT64(28), "/home/kp167/chap-svn/modules/internal/ChapelDistribution.chpl");
  (_args_foron_fn)->_3__tmp = T3;
  /*** _local_wrapon_fn ***/ chpl_executeOn(&call_tmp2, INT32(1), _args_foron_fn, sizeof(chpl__class_localson_fn2_object), INT64(294), "/home/kp167/chap-svn/modules/internal/Atomics.chpl");
  _local_chpl_here_free(((void*)(_args_foron_fn)));
  T = ret;
  while (T) {
    chpl_task_yield();
    chpl_check_local(chpl_nodeFromLocaleID(&((this8)->locale), INT64(0), NULL), INT64(28), "/home/kp167/chap-svn/modules/internal/ChapelDistribution.chpl", "cannot access remote data in local block");
    local_this2 = (this8)->addr;
    chpl_check_nil(local_this2, INT64(28), "/home/kp167/chap-svn/modules/internal/ChapelDistribution.chpl");
    chpl_macro_tmp_750.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_750.addr = &((local_this2)->_domsLock);
    call_tmp3 = chpl_macro_tmp_750;
    default_argorder2 = local_memory_order_seq_cst;
    ret2 = false;
    call_tmp4 = (&call_tmp3)->locale;
    T4 = &ret2;
    chpl_here_alloc_size2 = sizeof(chpl__class_localson_fn2_object);
    chpl_here_alloc_tmp2 = _local_chpl_here_alloc(chpl_here_alloc_size2, INT16(36));
    _args_foron_fn2 = ((_class_localson_fn2)(chpl_here_alloc_tmp2));
    chpl_check_nil(_args_foron_fn2, INT64(28), "/home/kp167/chap-svn/modules/internal/ChapelDistribution.chpl");
    (_args_foron_fn2)->_0__tmp = call_tmp4;
    chpl_check_nil(_args_foron_fn2, INT64(28), "/home/kp167/chap-svn/modules/internal/ChapelDistribution.chpl");
    (_args_foron_fn2)->_1_this = call_tmp3;
    chpl_check_nil(_args_foron_fn2, INT64(28), "/home/kp167/chap-svn/modules/internal/ChapelDistribution.chpl");
    (_args_foron_fn2)->_2_order = default_argorder2;
    chpl_macro_tmp_751.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_751.addr = T4;
    T5 = chpl_macro_tmp_751;
    chpl_check_nil(_args_foron_fn2, INT64(28), "/home/kp167/chap-svn/modules/internal/ChapelDistribution.chpl");
    (_args_foron_fn2)->_3__tmp = T5;
    /*** _local_wrapon_fn ***/ chpl_executeOn(&call_tmp4, INT32(1), _args_foron_fn2, sizeof(chpl__class_localson_fn2_object), INT64(294), "/home/kp167/chap-svn/modules/internal/Atomics.chpl");
    _local_chpl_here_free(((void*)(_args_foron_fn2)));
    T = ret2;
  }
  chpl_check_local(chpl_nodeFromLocaleID(&((this8)->locale), INT64(0), NULL), INT64(29), "/home/kp167/chap-svn/modules/internal/ChapelDistribution.chpl", "cannot access remote data in local block");
  local_this3 = (this8)->addr;
  chpl_check_nil(local_this3, INT64(29), "/home/kp167/chap-svn/modules/internal/ChapelDistribution.chpl");
  call_tmp5 = &((local_this3)->_doms);
  chpl_check_nil(call_tmp5, INT64(29), "/home/kp167/chap-svn/modules/internal/ChapelDistribution.chpl");
  _local_remove(call_tmp5, x);
  chpl_check_local(chpl_nodeFromLocaleID(&((this8)->locale), INT64(0), NULL), INT64(30), "/home/kp167/chap-svn/modules/internal/ChapelDistribution.chpl", "cannot access remote data in local block");
  local_this4 = (this8)->addr;
  chpl_check_nil(local_this4, INT64(30), "/home/kp167/chap-svn/modules/internal/ChapelDistribution.chpl");
  chpl_macro_tmp_752.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_752.addr = &((local_this4)->_domsLock);
  call_tmp6 = chpl_macro_tmp_752;
  default_argorder3 = local_memory_order_seq_cst;
  call_tmp7 = (&call_tmp6)->locale;
  chpl_here_alloc_size3 = sizeof(chpl__class_localson_fn3_object);
  chpl_here_alloc_tmp3 = _local_chpl_here_alloc(chpl_here_alloc_size3, INT16(36));
  _args_foron_fn3 = ((_class_localson_fn3)(chpl_here_alloc_tmp3));
  chpl_check_nil(_args_foron_fn3, INT64(30), "/home/kp167/chap-svn/modules/internal/ChapelDistribution.chpl");
  (_args_foron_fn3)->_0__tmp = call_tmp7;
  chpl_check_nil(_args_foron_fn3, INT64(30), "/home/kp167/chap-svn/modules/internal/ChapelDistribution.chpl");
  (_args_foron_fn3)->_1_this = call_tmp6;
  chpl_check_nil(_args_foron_fn3, INT64(30), "/home/kp167/chap-svn/modules/internal/ChapelDistribution.chpl");
  (_args_foron_fn3)->_2_order = default_argorder3;
  /*** _local_wrapon_fn2 ***/ chpl_executeOn(&call_tmp7, INT32(3), _args_foron_fn3, sizeof(chpl__class_localson_fn3_object), INT64(298), "/home/kp167/chap-svn/modules/internal/Atomics.chpl");
  _local_chpl_here_free(((void*)(_args_foron_fn3)));
  return;
}

/* ChapelDistribution.chpl:27 */
static void on_fn31(chpl____wide_BaseDist* const this8, chpl____wide_BaseDom* const x) {
  memory_order local_memory_order_seq_cst;
  chpl_bool T;
  chpl____wide__ref_atomicflag call_tmp = {CHPL_LOCALEID_T_INIT, NULL};
  memory_order default_argorder;
  chpl_bool ret;
  chpl_localeID_t call_tmp2;
  _ref_chpl_bool T2 = NULL;
  _class_localson_fn2 _args_foron_fn = NULL;
  int64_t chpl_here_alloc_size;
  chpl_opaque chpl_here_alloc_tmp;
  chpl____wide__ref_chpl_bool T3 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_atomicflag call_tmp3 = {CHPL_LOCALEID_T_INIT, NULL};
  memory_order default_argorder2;
  chpl_bool ret2;
  chpl_localeID_t call_tmp4;
  _ref_chpl_bool T4 = NULL;
  _class_localson_fn2 _args_foron_fn2 = NULL;
  int64_t chpl_here_alloc_size2;
  chpl_opaque chpl_here_alloc_tmp2;
  chpl____wide__ref_chpl_bool T5 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_list_BaseDom call_tmp5 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_atomicflag call_tmp6 = {CHPL_LOCALEID_T_INIT, NULL};
  memory_order default_argorder3;
  chpl_localeID_t call_tmp7;
  _class_localson_fn3 _args_foron_fn3 = NULL;
  int64_t chpl_here_alloc_size3;
  chpl_opaque chpl_here_alloc_tmp3;
  chpl____wide__ref_atomicflag chpl_macro_tmp_753;
  chpl____wide__ref_chpl_bool chpl_macro_tmp_754;
  chpl____wide__ref_atomicflag chpl_macro_tmp_755;
  chpl____wide__ref_chpl_bool chpl_macro_tmp_756;
  chpl____wide__ref_list_BaseDom chpl_macro_tmp_757;
  chpl____wide__ref_atomicflag chpl_macro_tmp_758;
  local_memory_order_seq_cst = memory_order_seq_cst;
  chpl_check_nil((this8)->addr, INT64(28), "/home/kp167/chap-svn/modules/internal/ChapelDistribution.chpl");
  chpl_macro_tmp_753.locale = (this8)->locale;
  chpl_macro_tmp_753.addr = &(((this8)->addr)->_domsLock);
  call_tmp = chpl_macro_tmp_753;
  default_argorder = local_memory_order_seq_cst;
  ret = false;
  call_tmp2 = (&call_tmp)->locale;
  T2 = &ret;
  chpl_here_alloc_size = sizeof(chpl__class_localson_fn2_object);
  chpl_here_alloc_tmp = chpl_here_alloc(chpl_here_alloc_size, INT16(36));
  _args_foron_fn = ((_class_localson_fn2)(chpl_here_alloc_tmp));
  chpl_check_nil(_args_foron_fn, INT64(28), "/home/kp167/chap-svn/modules/internal/ChapelDistribution.chpl");
  (_args_foron_fn)->_0__tmp = call_tmp2;
  chpl_check_nil(_args_foron_fn, INT64(28), "/home/kp167/chap-svn/modules/internal/ChapelDistribution.chpl");
  (_args_foron_fn)->_1_this = call_tmp;
  chpl_check_nil(_args_foron_fn, INT64(28), "/home/kp167/chap-svn/modules/internal/ChapelDistribution.chpl");
  (_args_foron_fn)->_2_order = default_argorder;
  chpl_macro_tmp_754.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_754.addr = T2;
  T3 = chpl_macro_tmp_754;
  chpl_check_nil(_args_foron_fn, INT64(28), "/home/kp167/chap-svn/modules/internal/ChapelDistribution.chpl");
  (_args_foron_fn)->_3__tmp = T3;
  /*** wrapon_fn2 ***/ chpl_executeOn(&call_tmp2, INT32(2), _args_foron_fn, sizeof(chpl__class_localson_fn2_object), INT64(294), "/home/kp167/chap-svn/modules/internal/Atomics.chpl");
  chpl_here_free(((void*)(_args_foron_fn)));
  T = ret;
  while (T) {
    chpl_task_yield();
    chpl_check_nil((this8)->addr, INT64(28), "/home/kp167/chap-svn/modules/internal/ChapelDistribution.chpl");
    chpl_macro_tmp_755.locale = (this8)->locale;
    chpl_macro_tmp_755.addr = &(((this8)->addr)->_domsLock);
    call_tmp3 = chpl_macro_tmp_755;
    default_argorder2 = local_memory_order_seq_cst;
    ret2 = false;
    call_tmp4 = (&call_tmp3)->locale;
    T4 = &ret2;
    chpl_here_alloc_size2 = sizeof(chpl__class_localson_fn2_object);
    chpl_here_alloc_tmp2 = chpl_here_alloc(chpl_here_alloc_size2, INT16(36));
    _args_foron_fn2 = ((_class_localson_fn2)(chpl_here_alloc_tmp2));
    chpl_check_nil(_args_foron_fn2, INT64(28), "/home/kp167/chap-svn/modules/internal/ChapelDistribution.chpl");
    (_args_foron_fn2)->_0__tmp = call_tmp4;
    chpl_check_nil(_args_foron_fn2, INT64(28), "/home/kp167/chap-svn/modules/internal/ChapelDistribution.chpl");
    (_args_foron_fn2)->_1_this = call_tmp3;
    chpl_check_nil(_args_foron_fn2, INT64(28), "/home/kp167/chap-svn/modules/internal/ChapelDistribution.chpl");
    (_args_foron_fn2)->_2_order = default_argorder2;
    chpl_macro_tmp_756.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_756.addr = T4;
    T5 = chpl_macro_tmp_756;
    chpl_check_nil(_args_foron_fn2, INT64(28), "/home/kp167/chap-svn/modules/internal/ChapelDistribution.chpl");
    (_args_foron_fn2)->_3__tmp = T5;
    /*** wrapon_fn2 ***/ chpl_executeOn(&call_tmp4, INT32(2), _args_foron_fn2, sizeof(chpl__class_localson_fn2_object), INT64(294), "/home/kp167/chap-svn/modules/internal/Atomics.chpl");
    chpl_here_free(((void*)(_args_foron_fn2)));
    T = ret2;
  }
  chpl_check_nil((this8)->addr, INT64(29), "/home/kp167/chap-svn/modules/internal/ChapelDistribution.chpl");
  chpl_macro_tmp_757.locale = (this8)->locale;
  chpl_macro_tmp_757.addr = &(((this8)->addr)->_doms);
  call_tmp5 = chpl_macro_tmp_757;
  remove3(&call_tmp5, x);
  chpl_check_nil((this8)->addr, INT64(30), "/home/kp167/chap-svn/modules/internal/ChapelDistribution.chpl");
  chpl_macro_tmp_758.locale = (this8)->locale;
  chpl_macro_tmp_758.addr = &(((this8)->addr)->_domsLock);
  call_tmp6 = chpl_macro_tmp_758;
  default_argorder3 = local_memory_order_seq_cst;
  call_tmp7 = (&call_tmp6)->locale;
  chpl_here_alloc_size3 = sizeof(chpl__class_localson_fn3_object);
  chpl_here_alloc_tmp3 = chpl_here_alloc(chpl_here_alloc_size3, INT16(36));
  _args_foron_fn3 = ((_class_localson_fn3)(chpl_here_alloc_tmp3));
  chpl_check_nil(_args_foron_fn3, INT64(30), "/home/kp167/chap-svn/modules/internal/ChapelDistribution.chpl");
  (_args_foron_fn3)->_0__tmp = call_tmp7;
  chpl_check_nil(_args_foron_fn3, INT64(30), "/home/kp167/chap-svn/modules/internal/ChapelDistribution.chpl");
  (_args_foron_fn3)->_1_this = call_tmp6;
  chpl_check_nil(_args_foron_fn3, INT64(30), "/home/kp167/chap-svn/modules/internal/ChapelDistribution.chpl");
  (_args_foron_fn3)->_2_order = default_argorder3;
  /*** wrapon_fn3 ***/ chpl_executeOn(&call_tmp7, INT32(4), _args_foron_fn3, sizeof(chpl__class_localson_fn3_object), INT64(298), "/home/kp167/chap-svn/modules/internal/Atomics.chpl");
  chpl_here_free(((void*)(_args_foron_fn3)));
  return;
}

/* ChapelDistribution.chpl:27 */
static void _local_wrapon_fn3(_class_localson_fn31 c) {
  chpl____wide_BaseDist _1_this = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_BaseDom _2_x = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_check_nil(c, INT64(27), "/home/kp167/chap-svn/modules/internal/ChapelDistribution.chpl");
  _1_this = (c)->_1_this;
  chpl_check_nil(c, INT64(27), "/home/kp167/chap-svn/modules/internal/ChapelDistribution.chpl");
  _2_x = (c)->_2_x;
  _local_on_fn3(&_1_this, &_2_x);
  return;
}

/* ChapelDistribution.chpl:27 */
static void wrapon_fn31(_class_localson_fn31 c) {
  chpl____wide_BaseDist _1_this = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_BaseDom _2_x = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_check_nil(c, INT64(27), "/home/kp167/chap-svn/modules/internal/ChapelDistribution.chpl");
  _1_this = (c)->_1_this;
  chpl_check_nil(c, INT64(27), "/home/kp167/chap-svn/modules/internal/ChapelDistribution.chpl");
  _2_x = (c)->_2_x;
  on_fn31(&_1_this, &_2_x);
  return;
}

/* ChapelDistribution.chpl:91 */
static void dsiDestroyDistClass(chpl____wide_BaseDist* const this8) {
  return;
}

/* ChapelDistribution.chpl:100 */
static BaseDom _construct_BaseDom(atomic_refcnt* const _domCnt, list_BaseArr* const _arrs, atomicflag* const _arrsLock, BaseDom meme) {
  BaseDom this8 = NULL;
  object T = NULL;
  this8 = meme;
  chpl_check_nil(this8, INT64(100), "/home/kp167/chap-svn/modules/internal/ChapelDistribution.chpl");
  T = &((this8)->super);
  _construct_object(T);
  chpl_check_nil(this8, INT64(104), "/home/kp167/chap-svn/modules/internal/ChapelDistribution.chpl");
  (this8)->_domCnt = *(_domCnt);
  chpl_check_nil(this8, INT64(105), "/home/kp167/chap-svn/modules/internal/ChapelDistribution.chpl");
  (this8)->_arrs = *(_arrs);
  chpl_check_nil(this8, INT64(106), "/home/kp167/chap-svn/modules/internal/ChapelDistribution.chpl");
  (this8)->_arrsLock = *(_arrsLock);
  return this8;
}

/* ChapelDistribution.chpl:100 */
static void chpl__auto_destroy_BaseDom(BaseDom this8) {
  _ref_atomicflag _field_destructor_tmp_ = NULL;
  _ref_atomic_flag call_tmp = NULL;
  _ref_atomic_flag T = NULL;
  _ref_atomic_refcnt _field_destructor_tmp_2 = NULL;
  _ref_atomic_int64 _field_destructor_tmp_3 = NULL;
  _ref_atomic_int_least64_t call_tmp2 = NULL;
  _ref_atomic_int_least64_t T2 = NULL;
  chpl_check_nil(this8, INT64(106), "/home/kp167/chap-svn/modules/internal/ChapelDistribution.chpl");
  _field_destructor_tmp_ = &((this8)->_arrsLock);
  chpl_check_nil(_field_destructor_tmp_, INT64(106), "/home/kp167/chap-svn/modules/internal/ChapelDistribution.chpl");
  call_tmp = &((_field_destructor_tmp_)->_v);
  T = call_tmp;
  atomic_destroy_flag(T);
  call_tmp = T;
  chpl_check_nil(this8, INT64(104), "/home/kp167/chap-svn/modules/internal/ChapelDistribution.chpl");
  _field_destructor_tmp_2 = &((this8)->_domCnt);
  chpl_check_nil(_field_destructor_tmp_2, INT64(104), "/home/kp167/chap-svn/modules/internal/ChapelDistribution.chpl");
  _field_destructor_tmp_3 = &((_field_destructor_tmp_2)->_cnt);
  chpl_check_nil(_field_destructor_tmp_3, INT64(104), "/home/kp167/chap-svn/modules/internal/ChapelDistribution.chpl");
  call_tmp2 = &((_field_destructor_tmp_3)->_v);
  T2 = call_tmp2;
  atomic_destroy_int_least64_t(T2);
  call_tmp2 = T2;
  return;
}

/* ChapelDistribution.chpl:108 */
static chpl____wide_BaseDist dsiMyDist(chpl____wide_BaseDom* const this8) {
  chpl____wide_BaseDist ret = {CHPL_LOCALEID_T_INIT, NULL};
  BaseDist call_tmp = NULL;
  BaseDist T = NULL;
  c_string T2;
  _ref_BaseDist _ref_tmp_ = NULL;
  chpl____wide_BaseDist chpl_macro_tmp_759;
  chpl____wide_BaseDist chpl_macro_tmp_760;
  T = ((BaseDist)(nil));
  call_tmp = T;
  chpl_macro_tmp_759.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_759.addr = call_tmp;
  ret = chpl_macro_tmp_759;
  T2 = "internal error: dsiMyDist is not implemented";
  halt(T2, INT64(109), "/home/kp167/chap-svn/modules/internal/ChapelDistribution.chpl");
  _ref_tmp_ = &ret;
  chpl_macro_tmp_760.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_760.addr = NULL;
  *(_ref_tmp_) = chpl_macro_tmp_760;
  return ret;
}

/* ChapelDistribution.chpl:114 */
static int64_t destroyDom(chpl____wide_BaseDom* const this8) {
  memory_order local_memory_order_seq_cst;
  int64_t ret;
  chpl____wide__ref_atomic_refcnt call_tmp = {CHPL_LOCALEID_T_INIT, NULL};
  int64_t ret2;
  int64_t got;
  chpl____wide__ref_atomic_int64 call_tmp2 = {CHPL_LOCALEID_T_INIT, NULL};
  memory_order default_argorder;
  int64_t ret3;
  int64_t ret4;
  chpl_localeID_t call_tmp3;
  _ref_int64_t T = NULL;
  _class_localson_fn8 _args_foron_fn = NULL;
  int64_t chpl_here_alloc_size;
  chpl_opaque chpl_here_alloc_tmp;
  chpl____wide__ref_int64_t T2 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_int64_t _ref_tmp_ = NULL;
  _ref_int64_t _ref_tmp_2 = NULL;
  int64_t call_tmp4;
  _ref_int64_t _ref_tmp_3 = NULL;
  chpl_bool call_tmp5;
  c_string T3;
  chpl_bool call_tmp6;
  chpl_bool T4;
  chpl_bool call_tmp7;
  int32_t _virtual_method_tmp_;
  chpl____wide_BaseDist call_tmp8 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_localeID_t call_tmp9;
  chpl____wide_BaseDist rvfDerefTmp = {CHPL_LOCALEID_T_INIT, NULL};
  _class_localson_fn32 _args_foron_fn2 = NULL;
  int64_t chpl_here_alloc_size2;
  chpl_opaque chpl_here_alloc_tmp2;
  _ref_int64_t _ref_tmp_4 = NULL;
  chpl____wide__ref_atomic_refcnt chpl_macro_tmp_761;
  chpl____wide__ref_atomic_int64 chpl_macro_tmp_762;
  chpl____wide__ref_int64_t chpl_macro_tmp_763;
  chpl____wide__ref_int32_t chpl_macro_tmp_764;
  local_memory_order_seq_cst = memory_order_seq_cst;
  ret = INT64(0);
  compilerAssert();
  compilerAssert();
  chpl_check_nil((this8)->addr, INT64(116), "/home/kp167/chap-svn/modules/internal/ChapelDistribution.chpl");
  chpl_macro_tmp_761.locale = (this8)->locale;
  chpl_macro_tmp_761.addr = &(((this8)->addr)->_domCnt);
  call_tmp = chpl_macro_tmp_761;
  ret2 = INT64(0);
  got = INT64(0);
  chpl_macro_tmp_762.locale = (call_tmp).locale;
  chpl_macro_tmp_762.addr = &(((call_tmp).addr)->_cnt);
  call_tmp2 = chpl_macro_tmp_762;
  default_argorder = local_memory_order_seq_cst;
  ret3 = INT64(0);
  ret4 = INT64(0);
  call_tmp3 = (&call_tmp2)->locale;
  T = &ret4;
  chpl_here_alloc_size = sizeof(chpl__class_localson_fn8_object);
  chpl_here_alloc_tmp = chpl_here_alloc(chpl_here_alloc_size, INT16(36));
  _args_foron_fn = ((_class_localson_fn8)(chpl_here_alloc_tmp));
  chpl_check_nil(_args_foron_fn, INT64(116), "/home/kp167/chap-svn/modules/internal/ChapelDistribution.chpl");
  (_args_foron_fn)->_0__tmp = call_tmp3;
  chpl_check_nil(_args_foron_fn, INT64(116), "/home/kp167/chap-svn/modules/internal/ChapelDistribution.chpl");
  (_args_foron_fn)->_1_this = call_tmp2;
  chpl_check_nil(_args_foron_fn, INT64(116), "/home/kp167/chap-svn/modules/internal/ChapelDistribution.chpl");
  (_args_foron_fn)->_2_value = INT64(1);
  chpl_check_nil(_args_foron_fn, INT64(116), "/home/kp167/chap-svn/modules/internal/ChapelDistribution.chpl");
  (_args_foron_fn)->_3_order = default_argorder;
  chpl_macro_tmp_763.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_763.addr = T;
  T2 = chpl_macro_tmp_763;
  chpl_check_nil(_args_foron_fn, INT64(116), "/home/kp167/chap-svn/modules/internal/ChapelDistribution.chpl");
  (_args_foron_fn)->_4__tmp = T2;
  /*** wrapon_fn8 ***/ chpl_executeOn(&call_tmp3, INT32(9), _args_foron_fn, sizeof(chpl__class_localson_fn8_object), INT64(1073), "/home/kp167/chap-svn/modules/internal/Atomics.chpl");
  chpl_here_free(((void*)(_args_foron_fn)));
  _ref_tmp_ = &ret3;
  *(_ref_tmp_) = ret4;
  _ref_tmp_2 = &got;
  *(_ref_tmp_2) = ret3;
  call_tmp4 = (got - INT64(1));
  _ref_tmp_3 = &ret2;
  *(_ref_tmp_3) = call_tmp4;
  call_tmp5 = (ret2 < INT64(0));
  if (call_tmp5) {
    T3 = "domain reference count is negative!";
    halt(T3, INT64(116), "/home/kp167/chap-svn/modules/internal/ChapelDistribution.chpl");
  }
  call_tmp6 = (ret2 == INT64(0));
  if (call_tmp6) {
    chpl_check_nil((this8)->addr, INT64(117), "/home/kp167/chap-svn/modules/internal/ChapelDistribution.chpl");
    chpl_macro_tmp_764.locale = (this8)->locale;
    chpl_macro_tmp_764.addr = &(((object)((this8)->addr))->chpl__cid);
    chpl_gen_comm_get(((void*)(&_virtual_method_tmp_)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_764).locale), INT64(0), NULL), (chpl_macro_tmp_764).addr, sizeof(int32_t), -1, INT64(1), INT64(117), "/home/kp167/chap-svn/modules/internal/ChapelDistribution.chpl");
    call_tmp7 = ((chpl_bool(*)(chpl____wide_BaseDom* const))chpl_vmtable[((INT64(8) * _virtual_method_tmp_) + INT64(1))])(this8);
    T4 = call_tmp7;
  } else {
    T4 = false;
  }
  if (T4) {
    chpl_check_nil((this8)->addr, INT64(118), "/home/kp167/chap-svn/modules/internal/ChapelDistribution.chpl");
    call_tmp8 = dsiMyDist(this8);
    call_tmp9 = (&call_tmp8)->locale;
    rvfDerefTmp = call_tmp8;
    chpl_here_alloc_size2 = sizeof(chpl__class_localson_fn32_object);
    chpl_here_alloc_tmp2 = chpl_here_alloc(chpl_here_alloc_size2, INT16(36));
    _args_foron_fn2 = ((_class_localson_fn32)(chpl_here_alloc_tmp2));
    chpl_check_nil(_args_foron_fn2, INT64(119), "/home/kp167/chap-svn/modules/internal/ChapelDistribution.chpl");
    (_args_foron_fn2)->_0__tmp = call_tmp9;
    chpl_check_nil(_args_foron_fn2, INT64(119), "/home/kp167/chap-svn/modules/internal/ChapelDistribution.chpl");
    (_args_foron_fn2)->_1_rvfDerefTmp = rvfDerefTmp;
    chpl_check_nil(_args_foron_fn2, INT64(119), "/home/kp167/chap-svn/modules/internal/ChapelDistribution.chpl");
    (_args_foron_fn2)->_2_this = *(this8);
    /*** wrapon_fn32 ***/ chpl_executeOn(&call_tmp9, INT32(36), _args_foron_fn2, sizeof(chpl__class_localson_fn32_object), INT64(119), "/home/kp167/chap-svn/modules/internal/ChapelDistribution.chpl");
    chpl_here_free(((void*)(_args_foron_fn2)));
  }
  _ref_tmp_4 = &ret;
  *(_ref_tmp_4) = ret2;
  return ret;
}

/* ChapelDistribution.chpl:119 */
static void on_fn32(chpl____wide_BaseDist* const dist2, chpl____wide_BaseDom* const this8) {
  chpl_localeID_t call_tmp;
  _class_localson_fn31 _args_foron_fn = NULL;
  int64_t chpl_here_alloc_size;
  chpl_opaque chpl_here_alloc_tmp;
  int64_t call_tmp2;
  chpl_bool call_tmp3;
  chpl____wide_BaseDist delete_tmp = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_bool _dynamic_dispatch_tmp_;
  chpl____wide_DefaultDist _cast_tmp_ = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_BaseDist _parent_destructor_tmp_ = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_atomicflag _field_destructor_tmp_ = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_atomic_flag call_tmp4 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_atomic_flag T = NULL;
  chpl____wide__ref_atomic_refcnt _field_destructor_tmp_2 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_atomic_int64 _field_destructor_tmp_3 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_atomic_int_least64_t call_tmp5 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_atomic_int_least64_t T2 = NULL;
  chpl____wide__ref_atomicflag _field_destructor_tmp_4 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_atomic_flag call_tmp6 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_atomic_flag T3 = NULL;
  chpl____wide__ref_atomic_refcnt _field_destructor_tmp_5 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_atomic_int64 _field_destructor_tmp_6 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_atomic_int_least64_t call_tmp7 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_atomic_int_least64_t T4 = NULL;
  chpl_localeID_t call_tmp8;
  chpl____wide_BaseDist rvfDerefTmp = {CHPL_LOCALEID_T_INIT, NULL};
  _class_localson_fn33 _args_foron_fn2 = NULL;
  int64_t chpl_here_alloc_size2;
  chpl_opaque chpl_here_alloc_tmp2;
  chpl____wide__ref_int32_t chpl_macro_tmp_765;
  int32_t chpl_macro_tmp_766;
  chpl____wide_DefaultDist chpl_macro_tmp_767;
  chpl____wide_BaseDist chpl_macro_tmp_768;
  chpl____wide__ref_atomicflag chpl_macro_tmp_769;
  chpl____wide__ref_atomic_flag chpl_macro_tmp_770;
  chpl____wide__ref_atomic_flag chpl_macro_tmp_771;
  chpl____wide__ref_atomic_refcnt chpl_macro_tmp_772;
  chpl____wide__ref_atomic_int64 chpl_macro_tmp_773;
  chpl____wide__ref_atomic_int_least64_t chpl_macro_tmp_774;
  chpl____wide__ref_atomic_int_least64_t chpl_macro_tmp_775;
  chpl____wide__ref_atomicflag chpl_macro_tmp_776;
  chpl____wide__ref_atomic_flag chpl_macro_tmp_777;
  chpl____wide__ref_atomic_flag chpl_macro_tmp_778;
  chpl____wide__ref_atomic_refcnt chpl_macro_tmp_779;
  chpl____wide__ref_atomic_int64 chpl_macro_tmp_780;
  chpl____wide__ref_atomic_int_least64_t chpl_macro_tmp_781;
  chpl____wide__ref_atomic_int_least64_t chpl_macro_tmp_782;
  {
    call_tmp = (dist2)->locale;
    chpl_here_alloc_size = sizeof(chpl__class_localson_fn31_object);
    chpl_here_alloc_tmp = _local_chpl_here_alloc(chpl_here_alloc_size, INT16(36));
    _args_foron_fn = ((_class_localson_fn31)(chpl_here_alloc_tmp));
    chpl_check_nil(_args_foron_fn, INT64(120), "/home/kp167/chap-svn/modules/internal/ChapelDistribution.chpl");
    (_args_foron_fn)->_0__tmp = call_tmp;
    chpl_check_nil(_args_foron_fn, INT64(120), "/home/kp167/chap-svn/modules/internal/ChapelDistribution.chpl");
    (_args_foron_fn)->_1_this = *(dist2);
    chpl_check_nil(_args_foron_fn, INT64(120), "/home/kp167/chap-svn/modules/internal/ChapelDistribution.chpl");
    (_args_foron_fn)->_2_x = *(this8);
    /*** _local_wrapon_fn3 ***/ chpl_executeOn(&call_tmp, INT32(34), _args_foron_fn, sizeof(chpl__class_localson_fn31_object), INT64(27), "/home/kp167/chap-svn/modules/internal/ChapelDistribution.chpl");
    _local_chpl_here_free(((void*)(_args_foron_fn)));
  }
  chpl_check_nil((dist2)->addr, INT64(121), "/home/kp167/chap-svn/modules/internal/ChapelDistribution.chpl");
  call_tmp2 = destroyDist(dist2);
  call_tmp3 = (call_tmp2 == INT64(0));
  if (call_tmp3) {
    delete_tmp = *(dist2);
    chpl_check_nil((dist2)->addr, INT64(123), "/home/kp167/chap-svn/modules/internal/ChapelDistribution.chpl");
    chpl_macro_tmp_765.locale = (dist2)->locale;
    chpl_macro_tmp_765.addr = &(((object)((dist2)->addr))->chpl__cid);
    chpl_gen_comm_get(((void*)(&chpl_macro_tmp_766)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_765).locale), INT64(0), NULL), (chpl_macro_tmp_765).addr, sizeof(int32_t), -1, INT64(1), INT64(123), "/home/kp167/chap-svn/modules/internal/ChapelDistribution.chpl");
    _dynamic_dispatch_tmp_ = (chpl_macro_tmp_766 == chpl__cid_DefaultDist);
    if (_dynamic_dispatch_tmp_) {
      chpl_macro_tmp_767.locale = (dist2)->locale;
      chpl_macro_tmp_767.addr = ((DefaultDist)((dist2)->addr));
      _cast_tmp_ = chpl_macro_tmp_767;
      chpl_macro_tmp_768.locale = (&_cast_tmp_)->locale;
      chpl_macro_tmp_768.addr = ((BaseDist)((&_cast_tmp_)->addr));
      _parent_destructor_tmp_ = chpl_macro_tmp_768;
      chpl_check_nil((&_parent_destructor_tmp_)->addr, INT64(123), "/home/kp167/chap-svn/modules/internal/ChapelDistribution.chpl");
      chpl_macro_tmp_769.locale = (&_parent_destructor_tmp_)->locale;
      chpl_macro_tmp_769.addr = &(((&_parent_destructor_tmp_)->addr)->_domsLock);
      _field_destructor_tmp_ = chpl_macro_tmp_769;
      chpl_macro_tmp_770.locale = (_field_destructor_tmp_).locale;
      chpl_macro_tmp_770.addr = &(((_field_destructor_tmp_).addr)->_v);
      call_tmp4 = chpl_macro_tmp_770;
      T = (&call_tmp4)->addr;
      atomic_destroy_flag(T);
      chpl_macro_tmp_771.locale = chpl_gen_getLocaleID();
      chpl_macro_tmp_771.addr = T;
      call_tmp4 = chpl_macro_tmp_771;
      chpl_check_nil((&_parent_destructor_tmp_)->addr, INT64(123), "/home/kp167/chap-svn/modules/internal/ChapelDistribution.chpl");
      chpl_macro_tmp_772.locale = (&_parent_destructor_tmp_)->locale;
      chpl_macro_tmp_772.addr = &(((&_parent_destructor_tmp_)->addr)->_distCnt);
      _field_destructor_tmp_2 = chpl_macro_tmp_772;
      chpl_macro_tmp_773.locale = (_field_destructor_tmp_2).locale;
      chpl_macro_tmp_773.addr = &(((_field_destructor_tmp_2).addr)->_cnt);
      _field_destructor_tmp_3 = chpl_macro_tmp_773;
      chpl_macro_tmp_774.locale = (_field_destructor_tmp_3).locale;
      chpl_macro_tmp_774.addr = &(((_field_destructor_tmp_3).addr)->_v);
      call_tmp5 = chpl_macro_tmp_774;
      T2 = (&call_tmp5)->addr;
      atomic_destroy_int_least64_t(T2);
      chpl_macro_tmp_775.locale = chpl_gen_getLocaleID();
      chpl_macro_tmp_775.addr = T2;
      call_tmp5 = chpl_macro_tmp_775;
    } else {
      chpl_check_nil((&delete_tmp)->addr, INT64(123), "/home/kp167/chap-svn/modules/internal/ChapelDistribution.chpl");
      chpl_macro_tmp_776.locale = (&delete_tmp)->locale;
      chpl_macro_tmp_776.addr = &(((&delete_tmp)->addr)->_domsLock);
      _field_destructor_tmp_4 = chpl_macro_tmp_776;
      chpl_macro_tmp_777.locale = (_field_destructor_tmp_4).locale;
      chpl_macro_tmp_777.addr = &(((_field_destructor_tmp_4).addr)->_v);
      call_tmp6 = chpl_macro_tmp_777;
      T3 = (&call_tmp6)->addr;
      atomic_destroy_flag(T3);
      chpl_macro_tmp_778.locale = chpl_gen_getLocaleID();
      chpl_macro_tmp_778.addr = T3;
      call_tmp6 = chpl_macro_tmp_778;
      chpl_check_nil((&delete_tmp)->addr, INT64(123), "/home/kp167/chap-svn/modules/internal/ChapelDistribution.chpl");
      chpl_macro_tmp_779.locale = (&delete_tmp)->locale;
      chpl_macro_tmp_779.addr = &(((&delete_tmp)->addr)->_distCnt);
      _field_destructor_tmp_5 = chpl_macro_tmp_779;
      chpl_macro_tmp_780.locale = (_field_destructor_tmp_5).locale;
      chpl_macro_tmp_780.addr = &(((_field_destructor_tmp_5).addr)->_cnt);
      _field_destructor_tmp_6 = chpl_macro_tmp_780;
      chpl_macro_tmp_781.locale = (_field_destructor_tmp_6).locale;
      chpl_macro_tmp_781.addr = &(((_field_destructor_tmp_6).addr)->_v);
      call_tmp7 = chpl_macro_tmp_781;
      T4 = (&call_tmp7)->addr;
      atomic_destroy_int_least64_t(T4);
      chpl_macro_tmp_782.locale = chpl_gen_getLocaleID();
      chpl_macro_tmp_782.addr = T4;
      call_tmp7 = chpl_macro_tmp_782;
    }
    call_tmp8 = (&delete_tmp)->locale;
    rvfDerefTmp = delete_tmp;
    chpl_here_alloc_size2 = sizeof(chpl__class_localson_fn33_object);
    chpl_here_alloc_tmp2 = chpl_here_alloc(chpl_here_alloc_size2, INT16(36));
    _args_foron_fn2 = ((_class_localson_fn33)(chpl_here_alloc_tmp2));
    chpl_check_nil(_args_foron_fn2, INT64(123), "/home/kp167/chap-svn/modules/internal/ChapelDistribution.chpl");
    (_args_foron_fn2)->_0__tmp = call_tmp8;
    chpl_check_nil(_args_foron_fn2, INT64(123), "/home/kp167/chap-svn/modules/internal/ChapelDistribution.chpl");
    (_args_foron_fn2)->_1_rvfDerefTmp = rvfDerefTmp;
    /*** wrapon_fn33 ***/ chpl_executeOn(&call_tmp8, INT32(37), _args_foron_fn2, sizeof(chpl__class_localson_fn33_object), INT64(123), "/home/kp167/chap-svn/modules/internal/ChapelDistribution.chpl");
    chpl_here_free(((void*)(_args_foron_fn2)));
  }
  return;
}

/* ChapelDistribution.chpl:119 */
static void wrapon_fn32(_class_localson_fn32 c) {
  chpl____wide_BaseDist _1_rvfDerefTmp = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_BaseDom _2_this = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_check_nil(c, INT64(119), "/home/kp167/chap-svn/modules/internal/ChapelDistribution.chpl");
  _1_rvfDerefTmp = (c)->_1_rvfDerefTmp;
  chpl_check_nil(c, INT64(119), "/home/kp167/chap-svn/modules/internal/ChapelDistribution.chpl");
  _2_this = (c)->_2_this;
  on_fn32(&_1_rvfDerefTmp, &_2_this);
  return;
}

/* ChapelDistribution.chpl:123 */
static void on_fn33(chpl____wide_BaseDist* const delete_tmp) {
  chpl_opaque call_tmp;
  call_tmp = ((void*)((delete_tmp)->addr));
  chpl_here_free(call_tmp);
  return;
}

/* ChapelDistribution.chpl:123 */
static void wrapon_fn33(_class_localson_fn33 c) {
  chpl____wide_BaseDist _1_rvfDerefTmp = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_check_nil(c, INT64(123), "/home/kp167/chap-svn/modules/internal/ChapelDistribution.chpl");
  _1_rvfDerefTmp = (c)->_1_rvfDerefTmp;
  on_fn33(&_1_rvfDerefTmp);
  return;
}

/* ChapelDistribution.chpl:130 */
static void _local_on_fn4(chpl____wide_BaseDom* const this8, chpl____wide_BaseArr* const x) {
  memory_order local_memory_order_seq_cst;
  chpl_bool T;
  chpl____wide__ref_atomicflag call_tmp = {CHPL_LOCALEID_T_INIT, NULL};
  BaseDom local_this = NULL;
  memory_order default_argorder;
  chpl_bool ret;
  chpl_localeID_t call_tmp2;
  _ref_chpl_bool T2 = NULL;
  _class_localson_fn2 _args_foron_fn = NULL;
  int64_t chpl_here_alloc_size;
  chpl_opaque chpl_here_alloc_tmp;
  chpl____wide__ref_chpl_bool T3 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_atomicflag call_tmp3 = {CHPL_LOCALEID_T_INIT, NULL};
  BaseDom local_this2 = NULL;
  memory_order default_argorder2;
  chpl_bool ret2;
  chpl_localeID_t call_tmp4;
  _ref_chpl_bool T4 = NULL;
  _class_localson_fn2 _args_foron_fn2 = NULL;
  int64_t chpl_here_alloc_size2;
  chpl_opaque chpl_here_alloc_tmp2;
  chpl____wide__ref_chpl_bool T5 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_list_BaseArr call_tmp5 = NULL;
  BaseDom local_this3 = NULL;
  chpl____wide__ref_atomicflag call_tmp6 = {CHPL_LOCALEID_T_INIT, NULL};
  BaseDom local_this4 = NULL;
  memory_order default_argorder3;
  chpl_localeID_t call_tmp7;
  _class_localson_fn3 _args_foron_fn3 = NULL;
  int64_t chpl_here_alloc_size3;
  chpl_opaque chpl_here_alloc_tmp3;
  chpl____wide__ref_atomicflag chpl_macro_tmp_783;
  chpl____wide__ref_chpl_bool chpl_macro_tmp_784;
  chpl____wide__ref_atomicflag chpl_macro_tmp_785;
  chpl____wide__ref_chpl_bool chpl_macro_tmp_786;
  chpl____wide__ref_atomicflag chpl_macro_tmp_787;
  local_memory_order_seq_cst = memory_order_seq_cst;
  chpl_check_local(chpl_nodeFromLocaleID(&((this8)->locale), INT64(0), NULL), INT64(131), "/home/kp167/chap-svn/modules/internal/ChapelDistribution.chpl", "cannot access remote data in local block");
  local_this = (this8)->addr;
  chpl_check_nil(local_this, INT64(131), "/home/kp167/chap-svn/modules/internal/ChapelDistribution.chpl");
  chpl_macro_tmp_783.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_783.addr = &((local_this)->_arrsLock);
  call_tmp = chpl_macro_tmp_783;
  default_argorder = local_memory_order_seq_cst;
  ret = false;
  call_tmp2 = (&call_tmp)->locale;
  T2 = &ret;
  chpl_here_alloc_size = sizeof(chpl__class_localson_fn2_object);
  chpl_here_alloc_tmp = _local_chpl_here_alloc(chpl_here_alloc_size, INT16(36));
  _args_foron_fn = ((_class_localson_fn2)(chpl_here_alloc_tmp));
  chpl_check_nil(_args_foron_fn, INT64(131), "/home/kp167/chap-svn/modules/internal/ChapelDistribution.chpl");
  (_args_foron_fn)->_0__tmp = call_tmp2;
  chpl_check_nil(_args_foron_fn, INT64(131), "/home/kp167/chap-svn/modules/internal/ChapelDistribution.chpl");
  (_args_foron_fn)->_1_this = call_tmp;
  chpl_check_nil(_args_foron_fn, INT64(131), "/home/kp167/chap-svn/modules/internal/ChapelDistribution.chpl");
  (_args_foron_fn)->_2_order = default_argorder;
  chpl_macro_tmp_784.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_784.addr = T2;
  T3 = chpl_macro_tmp_784;
  chpl_check_nil(_args_foron_fn, INT64(131), "/home/kp167/chap-svn/modules/internal/ChapelDistribution.chpl");
  (_args_foron_fn)->_3__tmp = T3;
  /*** _local_wrapon_fn ***/ chpl_executeOn(&call_tmp2, INT32(1), _args_foron_fn, sizeof(chpl__class_localson_fn2_object), INT64(294), "/home/kp167/chap-svn/modules/internal/Atomics.chpl");
  _local_chpl_here_free(((void*)(_args_foron_fn)));
  T = ret;
  while (T) {
    chpl_task_yield();
    chpl_check_local(chpl_nodeFromLocaleID(&((this8)->locale), INT64(0), NULL), INT64(131), "/home/kp167/chap-svn/modules/internal/ChapelDistribution.chpl", "cannot access remote data in local block");
    local_this2 = (this8)->addr;
    chpl_check_nil(local_this2, INT64(131), "/home/kp167/chap-svn/modules/internal/ChapelDistribution.chpl");
    chpl_macro_tmp_785.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_785.addr = &((local_this2)->_arrsLock);
    call_tmp3 = chpl_macro_tmp_785;
    default_argorder2 = local_memory_order_seq_cst;
    ret2 = false;
    call_tmp4 = (&call_tmp3)->locale;
    T4 = &ret2;
    chpl_here_alloc_size2 = sizeof(chpl__class_localson_fn2_object);
    chpl_here_alloc_tmp2 = _local_chpl_here_alloc(chpl_here_alloc_size2, INT16(36));
    _args_foron_fn2 = ((_class_localson_fn2)(chpl_here_alloc_tmp2));
    chpl_check_nil(_args_foron_fn2, INT64(131), "/home/kp167/chap-svn/modules/internal/ChapelDistribution.chpl");
    (_args_foron_fn2)->_0__tmp = call_tmp4;
    chpl_check_nil(_args_foron_fn2, INT64(131), "/home/kp167/chap-svn/modules/internal/ChapelDistribution.chpl");
    (_args_foron_fn2)->_1_this = call_tmp3;
    chpl_check_nil(_args_foron_fn2, INT64(131), "/home/kp167/chap-svn/modules/internal/ChapelDistribution.chpl");
    (_args_foron_fn2)->_2_order = default_argorder2;
    chpl_macro_tmp_786.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_786.addr = T4;
    T5 = chpl_macro_tmp_786;
    chpl_check_nil(_args_foron_fn2, INT64(131), "/home/kp167/chap-svn/modules/internal/ChapelDistribution.chpl");
    (_args_foron_fn2)->_3__tmp = T5;
    /*** _local_wrapon_fn ***/ chpl_executeOn(&call_tmp4, INT32(1), _args_foron_fn2, sizeof(chpl__class_localson_fn2_object), INT64(294), "/home/kp167/chap-svn/modules/internal/Atomics.chpl");
    _local_chpl_here_free(((void*)(_args_foron_fn2)));
    T = ret2;
  }
  chpl_check_local(chpl_nodeFromLocaleID(&((this8)->locale), INT64(0), NULL), INT64(132), "/home/kp167/chap-svn/modules/internal/ChapelDistribution.chpl", "cannot access remote data in local block");
  local_this3 = (this8)->addr;
  chpl_check_nil(local_this3, INT64(132), "/home/kp167/chap-svn/modules/internal/ChapelDistribution.chpl");
  call_tmp5 = &((local_this3)->_arrs);
  chpl_check_nil(call_tmp5, INT64(132), "/home/kp167/chap-svn/modules/internal/ChapelDistribution.chpl");
  _local_remove2(call_tmp5, x);
  chpl_check_local(chpl_nodeFromLocaleID(&((this8)->locale), INT64(0), NULL), INT64(133), "/home/kp167/chap-svn/modules/internal/ChapelDistribution.chpl", "cannot access remote data in local block");
  local_this4 = (this8)->addr;
  chpl_check_nil(local_this4, INT64(133), "/home/kp167/chap-svn/modules/internal/ChapelDistribution.chpl");
  chpl_macro_tmp_787.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_787.addr = &((local_this4)->_arrsLock);
  call_tmp6 = chpl_macro_tmp_787;
  default_argorder3 = local_memory_order_seq_cst;
  call_tmp7 = (&call_tmp6)->locale;
  chpl_here_alloc_size3 = sizeof(chpl__class_localson_fn3_object);
  chpl_here_alloc_tmp3 = _local_chpl_here_alloc(chpl_here_alloc_size3, INT16(36));
  _args_foron_fn3 = ((_class_localson_fn3)(chpl_here_alloc_tmp3));
  chpl_check_nil(_args_foron_fn3, INT64(133), "/home/kp167/chap-svn/modules/internal/ChapelDistribution.chpl");
  (_args_foron_fn3)->_0__tmp = call_tmp7;
  chpl_check_nil(_args_foron_fn3, INT64(133), "/home/kp167/chap-svn/modules/internal/ChapelDistribution.chpl");
  (_args_foron_fn3)->_1_this = call_tmp6;
  chpl_check_nil(_args_foron_fn3, INT64(133), "/home/kp167/chap-svn/modules/internal/ChapelDistribution.chpl");
  (_args_foron_fn3)->_2_order = default_argorder3;
  /*** _local_wrapon_fn2 ***/ chpl_executeOn(&call_tmp7, INT32(3), _args_foron_fn3, sizeof(chpl__class_localson_fn3_object), INT64(298), "/home/kp167/chap-svn/modules/internal/Atomics.chpl");
  _local_chpl_here_free(((void*)(_args_foron_fn3)));
  return;
}

/* ChapelDistribution.chpl:130 */
static void on_fn34(chpl____wide_BaseDom* const this8, chpl____wide_BaseArr* const x) {
  memory_order local_memory_order_seq_cst;
  chpl_bool T;
  chpl____wide__ref_atomicflag call_tmp = {CHPL_LOCALEID_T_INIT, NULL};
  memory_order default_argorder;
  chpl_bool ret;
  chpl_localeID_t call_tmp2;
  _ref_chpl_bool T2 = NULL;
  _class_localson_fn2 _args_foron_fn = NULL;
  int64_t chpl_here_alloc_size;
  chpl_opaque chpl_here_alloc_tmp;
  chpl____wide__ref_chpl_bool T3 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_atomicflag call_tmp3 = {CHPL_LOCALEID_T_INIT, NULL};
  memory_order default_argorder2;
  chpl_bool ret2;
  chpl_localeID_t call_tmp4;
  _ref_chpl_bool T4 = NULL;
  _class_localson_fn2 _args_foron_fn2 = NULL;
  int64_t chpl_here_alloc_size2;
  chpl_opaque chpl_here_alloc_tmp2;
  chpl____wide__ref_chpl_bool T5 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_list_BaseArr call_tmp5 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_atomicflag call_tmp6 = {CHPL_LOCALEID_T_INIT, NULL};
  memory_order default_argorder3;
  chpl_localeID_t call_tmp7;
  _class_localson_fn3 _args_foron_fn3 = NULL;
  int64_t chpl_here_alloc_size3;
  chpl_opaque chpl_here_alloc_tmp3;
  chpl____wide__ref_atomicflag chpl_macro_tmp_788;
  chpl____wide__ref_chpl_bool chpl_macro_tmp_789;
  chpl____wide__ref_atomicflag chpl_macro_tmp_790;
  chpl____wide__ref_chpl_bool chpl_macro_tmp_791;
  chpl____wide__ref_list_BaseArr chpl_macro_tmp_792;
  chpl____wide__ref_atomicflag chpl_macro_tmp_793;
  local_memory_order_seq_cst = memory_order_seq_cst;
  chpl_check_nil((this8)->addr, INT64(131), "/home/kp167/chap-svn/modules/internal/ChapelDistribution.chpl");
  chpl_macro_tmp_788.locale = (this8)->locale;
  chpl_macro_tmp_788.addr = &(((this8)->addr)->_arrsLock);
  call_tmp = chpl_macro_tmp_788;
  default_argorder = local_memory_order_seq_cst;
  ret = false;
  call_tmp2 = (&call_tmp)->locale;
  T2 = &ret;
  chpl_here_alloc_size = sizeof(chpl__class_localson_fn2_object);
  chpl_here_alloc_tmp = chpl_here_alloc(chpl_here_alloc_size, INT16(36));
  _args_foron_fn = ((_class_localson_fn2)(chpl_here_alloc_tmp));
  chpl_check_nil(_args_foron_fn, INT64(131), "/home/kp167/chap-svn/modules/internal/ChapelDistribution.chpl");
  (_args_foron_fn)->_0__tmp = call_tmp2;
  chpl_check_nil(_args_foron_fn, INT64(131), "/home/kp167/chap-svn/modules/internal/ChapelDistribution.chpl");
  (_args_foron_fn)->_1_this = call_tmp;
  chpl_check_nil(_args_foron_fn, INT64(131), "/home/kp167/chap-svn/modules/internal/ChapelDistribution.chpl");
  (_args_foron_fn)->_2_order = default_argorder;
  chpl_macro_tmp_789.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_789.addr = T2;
  T3 = chpl_macro_tmp_789;
  chpl_check_nil(_args_foron_fn, INT64(131), "/home/kp167/chap-svn/modules/internal/ChapelDistribution.chpl");
  (_args_foron_fn)->_3__tmp = T3;
  /*** wrapon_fn2 ***/ chpl_executeOn(&call_tmp2, INT32(2), _args_foron_fn, sizeof(chpl__class_localson_fn2_object), INT64(294), "/home/kp167/chap-svn/modules/internal/Atomics.chpl");
  chpl_here_free(((void*)(_args_foron_fn)));
  T = ret;
  while (T) {
    chpl_task_yield();
    chpl_check_nil((this8)->addr, INT64(131), "/home/kp167/chap-svn/modules/internal/ChapelDistribution.chpl");
    chpl_macro_tmp_790.locale = (this8)->locale;
    chpl_macro_tmp_790.addr = &(((this8)->addr)->_arrsLock);
    call_tmp3 = chpl_macro_tmp_790;
    default_argorder2 = local_memory_order_seq_cst;
    ret2 = false;
    call_tmp4 = (&call_tmp3)->locale;
    T4 = &ret2;
    chpl_here_alloc_size2 = sizeof(chpl__class_localson_fn2_object);
    chpl_here_alloc_tmp2 = chpl_here_alloc(chpl_here_alloc_size2, INT16(36));
    _args_foron_fn2 = ((_class_localson_fn2)(chpl_here_alloc_tmp2));
    chpl_check_nil(_args_foron_fn2, INT64(131), "/home/kp167/chap-svn/modules/internal/ChapelDistribution.chpl");
    (_args_foron_fn2)->_0__tmp = call_tmp4;
    chpl_check_nil(_args_foron_fn2, INT64(131), "/home/kp167/chap-svn/modules/internal/ChapelDistribution.chpl");
    (_args_foron_fn2)->_1_this = call_tmp3;
    chpl_check_nil(_args_foron_fn2, INT64(131), "/home/kp167/chap-svn/modules/internal/ChapelDistribution.chpl");
    (_args_foron_fn2)->_2_order = default_argorder2;
    chpl_macro_tmp_791.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_791.addr = T4;
    T5 = chpl_macro_tmp_791;
    chpl_check_nil(_args_foron_fn2, INT64(131), "/home/kp167/chap-svn/modules/internal/ChapelDistribution.chpl");
    (_args_foron_fn2)->_3__tmp = T5;
    /*** wrapon_fn2 ***/ chpl_executeOn(&call_tmp4, INT32(2), _args_foron_fn2, sizeof(chpl__class_localson_fn2_object), INT64(294), "/home/kp167/chap-svn/modules/internal/Atomics.chpl");
    chpl_here_free(((void*)(_args_foron_fn2)));
    T = ret2;
  }
  chpl_check_nil((this8)->addr, INT64(132), "/home/kp167/chap-svn/modules/internal/ChapelDistribution.chpl");
  chpl_macro_tmp_792.locale = (this8)->locale;
  chpl_macro_tmp_792.addr = &(((this8)->addr)->_arrs);
  call_tmp5 = chpl_macro_tmp_792;
  remove4(&call_tmp5, x);
  chpl_check_nil((this8)->addr, INT64(133), "/home/kp167/chap-svn/modules/internal/ChapelDistribution.chpl");
  chpl_macro_tmp_793.locale = (this8)->locale;
  chpl_macro_tmp_793.addr = &(((this8)->addr)->_arrsLock);
  call_tmp6 = chpl_macro_tmp_793;
  default_argorder3 = local_memory_order_seq_cst;
  call_tmp7 = (&call_tmp6)->locale;
  chpl_here_alloc_size3 = sizeof(chpl__class_localson_fn3_object);
  chpl_here_alloc_tmp3 = chpl_here_alloc(chpl_here_alloc_size3, INT16(36));
  _args_foron_fn3 = ((_class_localson_fn3)(chpl_here_alloc_tmp3));
  chpl_check_nil(_args_foron_fn3, INT64(133), "/home/kp167/chap-svn/modules/internal/ChapelDistribution.chpl");
  (_args_foron_fn3)->_0__tmp = call_tmp7;
  chpl_check_nil(_args_foron_fn3, INT64(133), "/home/kp167/chap-svn/modules/internal/ChapelDistribution.chpl");
  (_args_foron_fn3)->_1_this = call_tmp6;
  chpl_check_nil(_args_foron_fn3, INT64(133), "/home/kp167/chap-svn/modules/internal/ChapelDistribution.chpl");
  (_args_foron_fn3)->_2_order = default_argorder3;
  /*** wrapon_fn3 ***/ chpl_executeOn(&call_tmp7, INT32(4), _args_foron_fn3, sizeof(chpl__class_localson_fn3_object), INT64(298), "/home/kp167/chap-svn/modules/internal/Atomics.chpl");
  chpl_here_free(((void*)(_args_foron_fn3)));
  return;
}

/* ChapelDistribution.chpl:130 */
static void _local_wrapon_fn4(_class_localson_fn34 c) {
  chpl____wide_BaseDom _1_this = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_BaseArr _2_x = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_check_nil(c, INT64(130), "/home/kp167/chap-svn/modules/internal/ChapelDistribution.chpl");
  _1_this = (c)->_1_this;
  chpl_check_nil(c, INT64(130), "/home/kp167/chap-svn/modules/internal/ChapelDistribution.chpl");
  _2_x = (c)->_2_x;
  _local_on_fn4(&_1_this, &_2_x);
  return;
}

/* ChapelDistribution.chpl:130 */
static void wrapon_fn34(_class_localson_fn34 c) {
  chpl____wide_BaseDom _1_this = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_BaseArr _2_x = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_check_nil(c, INT64(130), "/home/kp167/chap-svn/modules/internal/ChapelDistribution.chpl");
  _1_this = (c)->_1_this;
  chpl_check_nil(c, INT64(130), "/home/kp167/chap-svn/modules/internal/ChapelDistribution.chpl");
  _2_x = (c)->_2_x;
  on_fn34(&_1_this, &_2_x);
  return;
}

/* ChapelDistribution.chpl:138 */
static void on_fn35(chpl____wide_BaseDom* const this8, chpl____wide_DefaultRectangularArr_locale_1_int64_t_F* const x) {
  memory_order local_memory_order_seq_cst;
  chpl_bool T;
  chpl____wide__ref_atomicflag call_tmp = {CHPL_LOCALEID_T_INIT, NULL};
  memory_order default_argorder;
  chpl_bool ret;
  chpl_localeID_t call_tmp2;
  _ref_chpl_bool T2 = NULL;
  _class_localson_fn2 _args_foron_fn = NULL;
  int64_t chpl_here_alloc_size;
  chpl_opaque chpl_here_alloc_tmp;
  chpl____wide__ref_chpl_bool T3 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_atomicflag call_tmp3 = {CHPL_LOCALEID_T_INIT, NULL};
  memory_order default_argorder2;
  chpl_bool ret2;
  chpl_localeID_t call_tmp4;
  _ref_chpl_bool T4 = NULL;
  _class_localson_fn2 _args_foron_fn2 = NULL;
  int64_t chpl_here_alloc_size2;
  chpl_opaque chpl_here_alloc_tmp2;
  chpl____wide__ref_chpl_bool T5 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_list_BaseArr call_tmp5 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_BaseArr call_tmp6 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_atomicflag call_tmp7 = {CHPL_LOCALEID_T_INIT, NULL};
  memory_order default_argorder3;
  chpl_localeID_t call_tmp8;
  _class_localson_fn3 _args_foron_fn3 = NULL;
  int64_t chpl_here_alloc_size3;
  chpl_opaque chpl_here_alloc_tmp3;
  chpl____wide__ref_atomicflag chpl_macro_tmp_794;
  chpl____wide__ref_chpl_bool chpl_macro_tmp_795;
  chpl____wide__ref_atomicflag chpl_macro_tmp_796;
  chpl____wide__ref_chpl_bool chpl_macro_tmp_797;
  chpl____wide__ref_list_BaseArr chpl_macro_tmp_798;
  chpl____wide_BaseArr chpl_macro_tmp_799;
  chpl____wide__ref_atomicflag chpl_macro_tmp_800;
  local_memory_order_seq_cst = memory_order_seq_cst;
  chpl_check_nil((this8)->addr, INT64(139), "/home/kp167/chap-svn/modules/internal/ChapelDistribution.chpl");
  chpl_macro_tmp_794.locale = (this8)->locale;
  chpl_macro_tmp_794.addr = &(((this8)->addr)->_arrsLock);
  call_tmp = chpl_macro_tmp_794;
  default_argorder = local_memory_order_seq_cst;
  ret = false;
  call_tmp2 = (&call_tmp)->locale;
  T2 = &ret;
  chpl_here_alloc_size = sizeof(chpl__class_localson_fn2_object);
  chpl_here_alloc_tmp = chpl_here_alloc(chpl_here_alloc_size, INT16(36));
  _args_foron_fn = ((_class_localson_fn2)(chpl_here_alloc_tmp));
  chpl_check_nil(_args_foron_fn, INT64(139), "/home/kp167/chap-svn/modules/internal/ChapelDistribution.chpl");
  (_args_foron_fn)->_0__tmp = call_tmp2;
  chpl_check_nil(_args_foron_fn, INT64(139), "/home/kp167/chap-svn/modules/internal/ChapelDistribution.chpl");
  (_args_foron_fn)->_1_this = call_tmp;
  chpl_check_nil(_args_foron_fn, INT64(139), "/home/kp167/chap-svn/modules/internal/ChapelDistribution.chpl");
  (_args_foron_fn)->_2_order = default_argorder;
  chpl_macro_tmp_795.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_795.addr = T2;
  T3 = chpl_macro_tmp_795;
  chpl_check_nil(_args_foron_fn, INT64(139), "/home/kp167/chap-svn/modules/internal/ChapelDistribution.chpl");
  (_args_foron_fn)->_3__tmp = T3;
  /*** wrapon_fn2 ***/ chpl_executeOn(&call_tmp2, INT32(2), _args_foron_fn, sizeof(chpl__class_localson_fn2_object), INT64(294), "/home/kp167/chap-svn/modules/internal/Atomics.chpl");
  chpl_here_free(((void*)(_args_foron_fn)));
  T = ret;
  while (T) {
    chpl_task_yield();
    chpl_check_nil((this8)->addr, INT64(139), "/home/kp167/chap-svn/modules/internal/ChapelDistribution.chpl");
    chpl_macro_tmp_796.locale = (this8)->locale;
    chpl_macro_tmp_796.addr = &(((this8)->addr)->_arrsLock);
    call_tmp3 = chpl_macro_tmp_796;
    default_argorder2 = local_memory_order_seq_cst;
    ret2 = false;
    call_tmp4 = (&call_tmp3)->locale;
    T4 = &ret2;
    chpl_here_alloc_size2 = sizeof(chpl__class_localson_fn2_object);
    chpl_here_alloc_tmp2 = chpl_here_alloc(chpl_here_alloc_size2, INT16(36));
    _args_foron_fn2 = ((_class_localson_fn2)(chpl_here_alloc_tmp2));
    chpl_check_nil(_args_foron_fn2, INT64(139), "/home/kp167/chap-svn/modules/internal/ChapelDistribution.chpl");
    (_args_foron_fn2)->_0__tmp = call_tmp4;
    chpl_check_nil(_args_foron_fn2, INT64(139), "/home/kp167/chap-svn/modules/internal/ChapelDistribution.chpl");
    (_args_foron_fn2)->_1_this = call_tmp3;
    chpl_check_nil(_args_foron_fn2, INT64(139), "/home/kp167/chap-svn/modules/internal/ChapelDistribution.chpl");
    (_args_foron_fn2)->_2_order = default_argorder2;
    chpl_macro_tmp_797.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_797.addr = T4;
    T5 = chpl_macro_tmp_797;
    chpl_check_nil(_args_foron_fn2, INT64(139), "/home/kp167/chap-svn/modules/internal/ChapelDistribution.chpl");
    (_args_foron_fn2)->_3__tmp = T5;
    /*** wrapon_fn2 ***/ chpl_executeOn(&call_tmp4, INT32(2), _args_foron_fn2, sizeof(chpl__class_localson_fn2_object), INT64(294), "/home/kp167/chap-svn/modules/internal/Atomics.chpl");
    chpl_here_free(((void*)(_args_foron_fn2)));
    T = ret2;
  }
  chpl_check_nil((this8)->addr, INT64(140), "/home/kp167/chap-svn/modules/internal/ChapelDistribution.chpl");
  chpl_macro_tmp_798.locale = (this8)->locale;
  chpl_macro_tmp_798.addr = &(((this8)->addr)->_arrs);
  call_tmp5 = chpl_macro_tmp_798;
  chpl_macro_tmp_799.locale = (x)->locale;
  chpl_macro_tmp_799.addr = ((BaseArr)((x)->addr));
  call_tmp6 = chpl_macro_tmp_799;
  append(&call_tmp5, &call_tmp6);
  chpl_check_nil((this8)->addr, INT64(141), "/home/kp167/chap-svn/modules/internal/ChapelDistribution.chpl");
  chpl_macro_tmp_800.locale = (this8)->locale;
  chpl_macro_tmp_800.addr = &(((this8)->addr)->_arrsLock);
  call_tmp7 = chpl_macro_tmp_800;
  default_argorder3 = local_memory_order_seq_cst;
  call_tmp8 = (&call_tmp7)->locale;
  chpl_here_alloc_size3 = sizeof(chpl__class_localson_fn3_object);
  chpl_here_alloc_tmp3 = chpl_here_alloc(chpl_here_alloc_size3, INT16(36));
  _args_foron_fn3 = ((_class_localson_fn3)(chpl_here_alloc_tmp3));
  chpl_check_nil(_args_foron_fn3, INT64(141), "/home/kp167/chap-svn/modules/internal/ChapelDistribution.chpl");
  (_args_foron_fn3)->_0__tmp = call_tmp8;
  chpl_check_nil(_args_foron_fn3, INT64(141), "/home/kp167/chap-svn/modules/internal/ChapelDistribution.chpl");
  (_args_foron_fn3)->_1_this = call_tmp7;
  chpl_check_nil(_args_foron_fn3, INT64(141), "/home/kp167/chap-svn/modules/internal/ChapelDistribution.chpl");
  (_args_foron_fn3)->_2_order = default_argorder3;
  /*** wrapon_fn3 ***/ chpl_executeOn(&call_tmp8, INT32(4), _args_foron_fn3, sizeof(chpl__class_localson_fn3_object), INT64(298), "/home/kp167/chap-svn/modules/internal/Atomics.chpl");
  chpl_here_free(((void*)(_args_foron_fn3)));
  return;
}

/* ChapelDistribution.chpl:138 */
static void on_fn36(chpl____wide_BaseDom* const this8, chpl____wide_DefaultRectangularArr_localesSignal_1_int64_t_F* const x) {
  memory_order local_memory_order_seq_cst;
  chpl_bool T;
  chpl____wide__ref_atomicflag call_tmp = {CHPL_LOCALEID_T_INIT, NULL};
  memory_order default_argorder;
  chpl_bool ret;
  chpl_localeID_t call_tmp2;
  _ref_chpl_bool T2 = NULL;
  _class_localson_fn2 _args_foron_fn = NULL;
  int64_t chpl_here_alloc_size;
  chpl_opaque chpl_here_alloc_tmp;
  chpl____wide__ref_chpl_bool T3 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_atomicflag call_tmp3 = {CHPL_LOCALEID_T_INIT, NULL};
  memory_order default_argorder2;
  chpl_bool ret2;
  chpl_localeID_t call_tmp4;
  _ref_chpl_bool T4 = NULL;
  _class_localson_fn2 _args_foron_fn2 = NULL;
  int64_t chpl_here_alloc_size2;
  chpl_opaque chpl_here_alloc_tmp2;
  chpl____wide__ref_chpl_bool T5 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_list_BaseArr call_tmp5 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_BaseArr call_tmp6 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_atomicflag call_tmp7 = {CHPL_LOCALEID_T_INIT, NULL};
  memory_order default_argorder3;
  chpl_localeID_t call_tmp8;
  _class_localson_fn3 _args_foron_fn3 = NULL;
  int64_t chpl_here_alloc_size3;
  chpl_opaque chpl_here_alloc_tmp3;
  chpl____wide__ref_atomicflag chpl_macro_tmp_801;
  chpl____wide__ref_chpl_bool chpl_macro_tmp_802;
  chpl____wide__ref_atomicflag chpl_macro_tmp_803;
  chpl____wide__ref_chpl_bool chpl_macro_tmp_804;
  chpl____wide__ref_list_BaseArr chpl_macro_tmp_805;
  chpl____wide_BaseArr chpl_macro_tmp_806;
  chpl____wide__ref_atomicflag chpl_macro_tmp_807;
  local_memory_order_seq_cst = memory_order_seq_cst;
  chpl_check_nil((this8)->addr, INT64(139), "/home/kp167/chap-svn/modules/internal/ChapelDistribution.chpl");
  chpl_macro_tmp_801.locale = (this8)->locale;
  chpl_macro_tmp_801.addr = &(((this8)->addr)->_arrsLock);
  call_tmp = chpl_macro_tmp_801;
  default_argorder = local_memory_order_seq_cst;
  ret = false;
  call_tmp2 = (&call_tmp)->locale;
  T2 = &ret;
  chpl_here_alloc_size = sizeof(chpl__class_localson_fn2_object);
  chpl_here_alloc_tmp = chpl_here_alloc(chpl_here_alloc_size, INT16(36));
  _args_foron_fn = ((_class_localson_fn2)(chpl_here_alloc_tmp));
  chpl_check_nil(_args_foron_fn, INT64(139), "/home/kp167/chap-svn/modules/internal/ChapelDistribution.chpl");
  (_args_foron_fn)->_0__tmp = call_tmp2;
  chpl_check_nil(_args_foron_fn, INT64(139), "/home/kp167/chap-svn/modules/internal/ChapelDistribution.chpl");
  (_args_foron_fn)->_1_this = call_tmp;
  chpl_check_nil(_args_foron_fn, INT64(139), "/home/kp167/chap-svn/modules/internal/ChapelDistribution.chpl");
  (_args_foron_fn)->_2_order = default_argorder;
  chpl_macro_tmp_802.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_802.addr = T2;
  T3 = chpl_macro_tmp_802;
  chpl_check_nil(_args_foron_fn, INT64(139), "/home/kp167/chap-svn/modules/internal/ChapelDistribution.chpl");
  (_args_foron_fn)->_3__tmp = T3;
  /*** wrapon_fn2 ***/ chpl_executeOn(&call_tmp2, INT32(2), _args_foron_fn, sizeof(chpl__class_localson_fn2_object), INT64(294), "/home/kp167/chap-svn/modules/internal/Atomics.chpl");
  chpl_here_free(((void*)(_args_foron_fn)));
  T = ret;
  while (T) {
    chpl_task_yield();
    chpl_check_nil((this8)->addr, INT64(139), "/home/kp167/chap-svn/modules/internal/ChapelDistribution.chpl");
    chpl_macro_tmp_803.locale = (this8)->locale;
    chpl_macro_tmp_803.addr = &(((this8)->addr)->_arrsLock);
    call_tmp3 = chpl_macro_tmp_803;
    default_argorder2 = local_memory_order_seq_cst;
    ret2 = false;
    call_tmp4 = (&call_tmp3)->locale;
    T4 = &ret2;
    chpl_here_alloc_size2 = sizeof(chpl__class_localson_fn2_object);
    chpl_here_alloc_tmp2 = chpl_here_alloc(chpl_here_alloc_size2, INT16(36));
    _args_foron_fn2 = ((_class_localson_fn2)(chpl_here_alloc_tmp2));
    chpl_check_nil(_args_foron_fn2, INT64(139), "/home/kp167/chap-svn/modules/internal/ChapelDistribution.chpl");
    (_args_foron_fn2)->_0__tmp = call_tmp4;
    chpl_check_nil(_args_foron_fn2, INT64(139), "/home/kp167/chap-svn/modules/internal/ChapelDistribution.chpl");
    (_args_foron_fn2)->_1_this = call_tmp3;
    chpl_check_nil(_args_foron_fn2, INT64(139), "/home/kp167/chap-svn/modules/internal/ChapelDistribution.chpl");
    (_args_foron_fn2)->_2_order = default_argorder2;
    chpl_macro_tmp_804.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_804.addr = T4;
    T5 = chpl_macro_tmp_804;
    chpl_check_nil(_args_foron_fn2, INT64(139), "/home/kp167/chap-svn/modules/internal/ChapelDistribution.chpl");
    (_args_foron_fn2)->_3__tmp = T5;
    /*** wrapon_fn2 ***/ chpl_executeOn(&call_tmp4, INT32(2), _args_foron_fn2, sizeof(chpl__class_localson_fn2_object), INT64(294), "/home/kp167/chap-svn/modules/internal/Atomics.chpl");
    chpl_here_free(((void*)(_args_foron_fn2)));
    T = ret2;
  }
  chpl_check_nil((this8)->addr, INT64(140), "/home/kp167/chap-svn/modules/internal/ChapelDistribution.chpl");
  chpl_macro_tmp_805.locale = (this8)->locale;
  chpl_macro_tmp_805.addr = &(((this8)->addr)->_arrs);
  call_tmp5 = chpl_macro_tmp_805;
  chpl_macro_tmp_806.locale = (x)->locale;
  chpl_macro_tmp_806.addr = ((BaseArr)((x)->addr));
  call_tmp6 = chpl_macro_tmp_806;
  append(&call_tmp5, &call_tmp6);
  chpl_check_nil((this8)->addr, INT64(141), "/home/kp167/chap-svn/modules/internal/ChapelDistribution.chpl");
  chpl_macro_tmp_807.locale = (this8)->locale;
  chpl_macro_tmp_807.addr = &(((this8)->addr)->_arrsLock);
  call_tmp7 = chpl_macro_tmp_807;
  default_argorder3 = local_memory_order_seq_cst;
  call_tmp8 = (&call_tmp7)->locale;
  chpl_here_alloc_size3 = sizeof(chpl__class_localson_fn3_object);
  chpl_here_alloc_tmp3 = chpl_here_alloc(chpl_here_alloc_size3, INT16(36));
  _args_foron_fn3 = ((_class_localson_fn3)(chpl_here_alloc_tmp3));
  chpl_check_nil(_args_foron_fn3, INT64(141), "/home/kp167/chap-svn/modules/internal/ChapelDistribution.chpl");
  (_args_foron_fn3)->_0__tmp = call_tmp8;
  chpl_check_nil(_args_foron_fn3, INT64(141), "/home/kp167/chap-svn/modules/internal/ChapelDistribution.chpl");
  (_args_foron_fn3)->_1_this = call_tmp7;
  chpl_check_nil(_args_foron_fn3, INT64(141), "/home/kp167/chap-svn/modules/internal/ChapelDistribution.chpl");
  (_args_foron_fn3)->_2_order = default_argorder3;
  /*** wrapon_fn3 ***/ chpl_executeOn(&call_tmp8, INT32(4), _args_foron_fn3, sizeof(chpl__class_localson_fn3_object), INT64(298), "/home/kp167/chap-svn/modules/internal/Atomics.chpl");
  chpl_here_free(((void*)(_args_foron_fn3)));
  return;
}

/* ChapelDistribution.chpl:138 */
static void on_fn37(chpl____wide_BaseDom* const this8, chpl____wide_DefaultRectangularArr_chpl_TableEntry_chpl_taskID_t_1_int64_t_F* const x) {
  memory_order local_memory_order_seq_cst;
  chpl_bool T;
  chpl____wide__ref_atomicflag call_tmp = {CHPL_LOCALEID_T_INIT, NULL};
  memory_order default_argorder;
  chpl_bool ret;
  chpl_localeID_t call_tmp2;
  _ref_chpl_bool T2 = NULL;
  _class_localson_fn2 _args_foron_fn = NULL;
  int64_t chpl_here_alloc_size;
  chpl_opaque chpl_here_alloc_tmp;
  chpl____wide__ref_chpl_bool T3 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_atomicflag call_tmp3 = {CHPL_LOCALEID_T_INIT, NULL};
  memory_order default_argorder2;
  chpl_bool ret2;
  chpl_localeID_t call_tmp4;
  _ref_chpl_bool T4 = NULL;
  _class_localson_fn2 _args_foron_fn2 = NULL;
  int64_t chpl_here_alloc_size2;
  chpl_opaque chpl_here_alloc_tmp2;
  chpl____wide__ref_chpl_bool T5 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_list_BaseArr call_tmp5 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_BaseArr call_tmp6 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_atomicflag call_tmp7 = {CHPL_LOCALEID_T_INIT, NULL};
  memory_order default_argorder3;
  chpl_localeID_t call_tmp8;
  _class_localson_fn3 _args_foron_fn3 = NULL;
  int64_t chpl_here_alloc_size3;
  chpl_opaque chpl_here_alloc_tmp3;
  chpl____wide__ref_atomicflag chpl_macro_tmp_808;
  chpl____wide__ref_chpl_bool chpl_macro_tmp_809;
  chpl____wide__ref_atomicflag chpl_macro_tmp_810;
  chpl____wide__ref_chpl_bool chpl_macro_tmp_811;
  chpl____wide__ref_list_BaseArr chpl_macro_tmp_812;
  chpl____wide_BaseArr chpl_macro_tmp_813;
  chpl____wide__ref_atomicflag chpl_macro_tmp_814;
  local_memory_order_seq_cst = memory_order_seq_cst;
  chpl_check_nil((this8)->addr, INT64(139), "/home/kp167/chap-svn/modules/internal/ChapelDistribution.chpl");
  chpl_macro_tmp_808.locale = (this8)->locale;
  chpl_macro_tmp_808.addr = &(((this8)->addr)->_arrsLock);
  call_tmp = chpl_macro_tmp_808;
  default_argorder = local_memory_order_seq_cst;
  ret = false;
  call_tmp2 = (&call_tmp)->locale;
  T2 = &ret;
  chpl_here_alloc_size = sizeof(chpl__class_localson_fn2_object);
  chpl_here_alloc_tmp = chpl_here_alloc(chpl_here_alloc_size, INT16(36));
  _args_foron_fn = ((_class_localson_fn2)(chpl_here_alloc_tmp));
  chpl_check_nil(_args_foron_fn, INT64(139), "/home/kp167/chap-svn/modules/internal/ChapelDistribution.chpl");
  (_args_foron_fn)->_0__tmp = call_tmp2;
  chpl_check_nil(_args_foron_fn, INT64(139), "/home/kp167/chap-svn/modules/internal/ChapelDistribution.chpl");
  (_args_foron_fn)->_1_this = call_tmp;
  chpl_check_nil(_args_foron_fn, INT64(139), "/home/kp167/chap-svn/modules/internal/ChapelDistribution.chpl");
  (_args_foron_fn)->_2_order = default_argorder;
  chpl_macro_tmp_809.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_809.addr = T2;
  T3 = chpl_macro_tmp_809;
  chpl_check_nil(_args_foron_fn, INT64(139), "/home/kp167/chap-svn/modules/internal/ChapelDistribution.chpl");
  (_args_foron_fn)->_3__tmp = T3;
  /*** wrapon_fn2 ***/ chpl_executeOn(&call_tmp2, INT32(2), _args_foron_fn, sizeof(chpl__class_localson_fn2_object), INT64(294), "/home/kp167/chap-svn/modules/internal/Atomics.chpl");
  chpl_here_free(((void*)(_args_foron_fn)));
  T = ret;
  while (T) {
    chpl_task_yield();
    chpl_check_nil((this8)->addr, INT64(139), "/home/kp167/chap-svn/modules/internal/ChapelDistribution.chpl");
    chpl_macro_tmp_810.locale = (this8)->locale;
    chpl_macro_tmp_810.addr = &(((this8)->addr)->_arrsLock);
    call_tmp3 = chpl_macro_tmp_810;
    default_argorder2 = local_memory_order_seq_cst;
    ret2 = false;
    call_tmp4 = (&call_tmp3)->locale;
    T4 = &ret2;
    chpl_here_alloc_size2 = sizeof(chpl__class_localson_fn2_object);
    chpl_here_alloc_tmp2 = chpl_here_alloc(chpl_here_alloc_size2, INT16(36));
    _args_foron_fn2 = ((_class_localson_fn2)(chpl_here_alloc_tmp2));
    chpl_check_nil(_args_foron_fn2, INT64(139), "/home/kp167/chap-svn/modules/internal/ChapelDistribution.chpl");
    (_args_foron_fn2)->_0__tmp = call_tmp4;
    chpl_check_nil(_args_foron_fn2, INT64(139), "/home/kp167/chap-svn/modules/internal/ChapelDistribution.chpl");
    (_args_foron_fn2)->_1_this = call_tmp3;
    chpl_check_nil(_args_foron_fn2, INT64(139), "/home/kp167/chap-svn/modules/internal/ChapelDistribution.chpl");
    (_args_foron_fn2)->_2_order = default_argorder2;
    chpl_macro_tmp_811.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_811.addr = T4;
    T5 = chpl_macro_tmp_811;
    chpl_check_nil(_args_foron_fn2, INT64(139), "/home/kp167/chap-svn/modules/internal/ChapelDistribution.chpl");
    (_args_foron_fn2)->_3__tmp = T5;
    /*** wrapon_fn2 ***/ chpl_executeOn(&call_tmp4, INT32(2), _args_foron_fn2, sizeof(chpl__class_localson_fn2_object), INT64(294), "/home/kp167/chap-svn/modules/internal/Atomics.chpl");
    chpl_here_free(((void*)(_args_foron_fn2)));
    T = ret2;
  }
  chpl_check_nil((this8)->addr, INT64(140), "/home/kp167/chap-svn/modules/internal/ChapelDistribution.chpl");
  chpl_macro_tmp_812.locale = (this8)->locale;
  chpl_macro_tmp_812.addr = &(((this8)->addr)->_arrs);
  call_tmp5 = chpl_macro_tmp_812;
  chpl_macro_tmp_813.locale = (x)->locale;
  chpl_macro_tmp_813.addr = ((BaseArr)((x)->addr));
  call_tmp6 = chpl_macro_tmp_813;
  append(&call_tmp5, &call_tmp6);
  chpl_check_nil((this8)->addr, INT64(141), "/home/kp167/chap-svn/modules/internal/ChapelDistribution.chpl");
  chpl_macro_tmp_814.locale = (this8)->locale;
  chpl_macro_tmp_814.addr = &(((this8)->addr)->_arrsLock);
  call_tmp7 = chpl_macro_tmp_814;
  default_argorder3 = local_memory_order_seq_cst;
  call_tmp8 = (&call_tmp7)->locale;
  chpl_here_alloc_size3 = sizeof(chpl__class_localson_fn3_object);
  chpl_here_alloc_tmp3 = chpl_here_alloc(chpl_here_alloc_size3, INT16(36));
  _args_foron_fn3 = ((_class_localson_fn3)(chpl_here_alloc_tmp3));
  chpl_check_nil(_args_foron_fn3, INT64(141), "/home/kp167/chap-svn/modules/internal/ChapelDistribution.chpl");
  (_args_foron_fn3)->_0__tmp = call_tmp8;
  chpl_check_nil(_args_foron_fn3, INT64(141), "/home/kp167/chap-svn/modules/internal/ChapelDistribution.chpl");
  (_args_foron_fn3)->_1_this = call_tmp7;
  chpl_check_nil(_args_foron_fn3, INT64(141), "/home/kp167/chap-svn/modules/internal/ChapelDistribution.chpl");
  (_args_foron_fn3)->_2_order = default_argorder3;
  /*** wrapon_fn3 ***/ chpl_executeOn(&call_tmp8, INT32(4), _args_foron_fn3, sizeof(chpl__class_localson_fn3_object), INT64(298), "/home/kp167/chap-svn/modules/internal/Atomics.chpl");
  chpl_here_free(((void*)(_args_foron_fn3)));
  return;
}

/* ChapelDistribution.chpl:138 */
static void on_fn38(chpl____wide_BaseDom* const this8, chpl____wide_DefaultRectangularArr_chpldev_Task_1_int64_t_F* const x) {
  memory_order local_memory_order_seq_cst;
  chpl_bool T;
  chpl____wide__ref_atomicflag call_tmp = {CHPL_LOCALEID_T_INIT, NULL};
  memory_order default_argorder;
  chpl_bool ret;
  chpl_localeID_t call_tmp2;
  _ref_chpl_bool T2 = NULL;
  _class_localson_fn2 _args_foron_fn = NULL;
  int64_t chpl_here_alloc_size;
  chpl_opaque chpl_here_alloc_tmp;
  chpl____wide__ref_chpl_bool T3 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_atomicflag call_tmp3 = {CHPL_LOCALEID_T_INIT, NULL};
  memory_order default_argorder2;
  chpl_bool ret2;
  chpl_localeID_t call_tmp4;
  _ref_chpl_bool T4 = NULL;
  _class_localson_fn2 _args_foron_fn2 = NULL;
  int64_t chpl_here_alloc_size2;
  chpl_opaque chpl_here_alloc_tmp2;
  chpl____wide__ref_chpl_bool T5 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_list_BaseArr call_tmp5 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_BaseArr call_tmp6 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_atomicflag call_tmp7 = {CHPL_LOCALEID_T_INIT, NULL};
  memory_order default_argorder3;
  chpl_localeID_t call_tmp8;
  _class_localson_fn3 _args_foron_fn3 = NULL;
  int64_t chpl_here_alloc_size3;
  chpl_opaque chpl_here_alloc_tmp3;
  chpl____wide__ref_atomicflag chpl_macro_tmp_815;
  chpl____wide__ref_chpl_bool chpl_macro_tmp_816;
  chpl____wide__ref_atomicflag chpl_macro_tmp_817;
  chpl____wide__ref_chpl_bool chpl_macro_tmp_818;
  chpl____wide__ref_list_BaseArr chpl_macro_tmp_819;
  chpl____wide_BaseArr chpl_macro_tmp_820;
  chpl____wide__ref_atomicflag chpl_macro_tmp_821;
  local_memory_order_seq_cst = memory_order_seq_cst;
  chpl_check_nil((this8)->addr, INT64(139), "/home/kp167/chap-svn/modules/internal/ChapelDistribution.chpl");
  chpl_macro_tmp_815.locale = (this8)->locale;
  chpl_macro_tmp_815.addr = &(((this8)->addr)->_arrsLock);
  call_tmp = chpl_macro_tmp_815;
  default_argorder = local_memory_order_seq_cst;
  ret = false;
  call_tmp2 = (&call_tmp)->locale;
  T2 = &ret;
  chpl_here_alloc_size = sizeof(chpl__class_localson_fn2_object);
  chpl_here_alloc_tmp = chpl_here_alloc(chpl_here_alloc_size, INT16(36));
  _args_foron_fn = ((_class_localson_fn2)(chpl_here_alloc_tmp));
  chpl_check_nil(_args_foron_fn, INT64(139), "/home/kp167/chap-svn/modules/internal/ChapelDistribution.chpl");
  (_args_foron_fn)->_0__tmp = call_tmp2;
  chpl_check_nil(_args_foron_fn, INT64(139), "/home/kp167/chap-svn/modules/internal/ChapelDistribution.chpl");
  (_args_foron_fn)->_1_this = call_tmp;
  chpl_check_nil(_args_foron_fn, INT64(139), "/home/kp167/chap-svn/modules/internal/ChapelDistribution.chpl");
  (_args_foron_fn)->_2_order = default_argorder;
  chpl_macro_tmp_816.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_816.addr = T2;
  T3 = chpl_macro_tmp_816;
  chpl_check_nil(_args_foron_fn, INT64(139), "/home/kp167/chap-svn/modules/internal/ChapelDistribution.chpl");
  (_args_foron_fn)->_3__tmp = T3;
  /*** wrapon_fn2 ***/ chpl_executeOn(&call_tmp2, INT32(2), _args_foron_fn, sizeof(chpl__class_localson_fn2_object), INT64(294), "/home/kp167/chap-svn/modules/internal/Atomics.chpl");
  chpl_here_free(((void*)(_args_foron_fn)));
  T = ret;
  while (T) {
    chpl_task_yield();
    chpl_check_nil((this8)->addr, INT64(139), "/home/kp167/chap-svn/modules/internal/ChapelDistribution.chpl");
    chpl_macro_tmp_817.locale = (this8)->locale;
    chpl_macro_tmp_817.addr = &(((this8)->addr)->_arrsLock);
    call_tmp3 = chpl_macro_tmp_817;
    default_argorder2 = local_memory_order_seq_cst;
    ret2 = false;
    call_tmp4 = (&call_tmp3)->locale;
    T4 = &ret2;
    chpl_here_alloc_size2 = sizeof(chpl__class_localson_fn2_object);
    chpl_here_alloc_tmp2 = chpl_here_alloc(chpl_here_alloc_size2, INT16(36));
    _args_foron_fn2 = ((_class_localson_fn2)(chpl_here_alloc_tmp2));
    chpl_check_nil(_args_foron_fn2, INT64(139), "/home/kp167/chap-svn/modules/internal/ChapelDistribution.chpl");
    (_args_foron_fn2)->_0__tmp = call_tmp4;
    chpl_check_nil(_args_foron_fn2, INT64(139), "/home/kp167/chap-svn/modules/internal/ChapelDistribution.chpl");
    (_args_foron_fn2)->_1_this = call_tmp3;
    chpl_check_nil(_args_foron_fn2, INT64(139), "/home/kp167/chap-svn/modules/internal/ChapelDistribution.chpl");
    (_args_foron_fn2)->_2_order = default_argorder2;
    chpl_macro_tmp_818.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_818.addr = T4;
    T5 = chpl_macro_tmp_818;
    chpl_check_nil(_args_foron_fn2, INT64(139), "/home/kp167/chap-svn/modules/internal/ChapelDistribution.chpl");
    (_args_foron_fn2)->_3__tmp = T5;
    /*** wrapon_fn2 ***/ chpl_executeOn(&call_tmp4, INT32(2), _args_foron_fn2, sizeof(chpl__class_localson_fn2_object), INT64(294), "/home/kp167/chap-svn/modules/internal/Atomics.chpl");
    chpl_here_free(((void*)(_args_foron_fn2)));
    T = ret2;
  }
  chpl_check_nil((this8)->addr, INT64(140), "/home/kp167/chap-svn/modules/internal/ChapelDistribution.chpl");
  chpl_macro_tmp_819.locale = (this8)->locale;
  chpl_macro_tmp_819.addr = &(((this8)->addr)->_arrs);
  call_tmp5 = chpl_macro_tmp_819;
  chpl_macro_tmp_820.locale = (x)->locale;
  chpl_macro_tmp_820.addr = ((BaseArr)((x)->addr));
  call_tmp6 = chpl_macro_tmp_820;
  append(&call_tmp5, &call_tmp6);
  chpl_check_nil((this8)->addr, INT64(141), "/home/kp167/chap-svn/modules/internal/ChapelDistribution.chpl");
  chpl_macro_tmp_821.locale = (this8)->locale;
  chpl_macro_tmp_821.addr = &(((this8)->addr)->_arrsLock);
  call_tmp7 = chpl_macro_tmp_821;
  default_argorder3 = local_memory_order_seq_cst;
  call_tmp8 = (&call_tmp7)->locale;
  chpl_here_alloc_size3 = sizeof(chpl__class_localson_fn3_object);
  chpl_here_alloc_tmp3 = chpl_here_alloc(chpl_here_alloc_size3, INT16(36));
  _args_foron_fn3 = ((_class_localson_fn3)(chpl_here_alloc_tmp3));
  chpl_check_nil(_args_foron_fn3, INT64(141), "/home/kp167/chap-svn/modules/internal/ChapelDistribution.chpl");
  (_args_foron_fn3)->_0__tmp = call_tmp8;
  chpl_check_nil(_args_foron_fn3, INT64(141), "/home/kp167/chap-svn/modules/internal/ChapelDistribution.chpl");
  (_args_foron_fn3)->_1_this = call_tmp7;
  chpl_check_nil(_args_foron_fn3, INT64(141), "/home/kp167/chap-svn/modules/internal/ChapelDistribution.chpl");
  (_args_foron_fn3)->_2_order = default_argorder3;
  /*** wrapon_fn3 ***/ chpl_executeOn(&call_tmp8, INT32(4), _args_foron_fn3, sizeof(chpl__class_localson_fn3_object), INT64(298), "/home/kp167/chap-svn/modules/internal/Atomics.chpl");
  chpl_here_free(((void*)(_args_foron_fn3)));
  return;
}

/* ChapelDistribution.chpl:138 */
static void on_fn39(chpl____wide_BaseDom* const this8, chpl____wide_DefaultAssociativeArr_chpldev_Task_chpl_taskID_t_F* const x) {
  memory_order local_memory_order_seq_cst;
  chpl_bool T;
  chpl____wide__ref_atomicflag call_tmp = {CHPL_LOCALEID_T_INIT, NULL};
  memory_order default_argorder;
  chpl_bool ret;
  chpl_localeID_t call_tmp2;
  _ref_chpl_bool T2 = NULL;
  _class_localson_fn2 _args_foron_fn = NULL;
  int64_t chpl_here_alloc_size;
  chpl_opaque chpl_here_alloc_tmp;
  chpl____wide__ref_chpl_bool T3 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_atomicflag call_tmp3 = {CHPL_LOCALEID_T_INIT, NULL};
  memory_order default_argorder2;
  chpl_bool ret2;
  chpl_localeID_t call_tmp4;
  _ref_chpl_bool T4 = NULL;
  _class_localson_fn2 _args_foron_fn2 = NULL;
  int64_t chpl_here_alloc_size2;
  chpl_opaque chpl_here_alloc_tmp2;
  chpl____wide__ref_chpl_bool T5 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_list_BaseArr call_tmp5 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_BaseArr call_tmp6 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_atomicflag call_tmp7 = {CHPL_LOCALEID_T_INIT, NULL};
  memory_order default_argorder3;
  chpl_localeID_t call_tmp8;
  _class_localson_fn3 _args_foron_fn3 = NULL;
  int64_t chpl_here_alloc_size3;
  chpl_opaque chpl_here_alloc_tmp3;
  chpl____wide__ref_atomicflag chpl_macro_tmp_822;
  chpl____wide__ref_chpl_bool chpl_macro_tmp_823;
  chpl____wide__ref_atomicflag chpl_macro_tmp_824;
  chpl____wide__ref_chpl_bool chpl_macro_tmp_825;
  chpl____wide__ref_list_BaseArr chpl_macro_tmp_826;
  chpl____wide_BaseArr chpl_macro_tmp_827;
  chpl____wide__ref_atomicflag chpl_macro_tmp_828;
  local_memory_order_seq_cst = memory_order_seq_cst;
  chpl_check_nil((this8)->addr, INT64(139), "/home/kp167/chap-svn/modules/internal/ChapelDistribution.chpl");
  chpl_macro_tmp_822.locale = (this8)->locale;
  chpl_macro_tmp_822.addr = &(((this8)->addr)->_arrsLock);
  call_tmp = chpl_macro_tmp_822;
  default_argorder = local_memory_order_seq_cst;
  ret = false;
  call_tmp2 = (&call_tmp)->locale;
  T2 = &ret;
  chpl_here_alloc_size = sizeof(chpl__class_localson_fn2_object);
  chpl_here_alloc_tmp = chpl_here_alloc(chpl_here_alloc_size, INT16(36));
  _args_foron_fn = ((_class_localson_fn2)(chpl_here_alloc_tmp));
  chpl_check_nil(_args_foron_fn, INT64(139), "/home/kp167/chap-svn/modules/internal/ChapelDistribution.chpl");
  (_args_foron_fn)->_0__tmp = call_tmp2;
  chpl_check_nil(_args_foron_fn, INT64(139), "/home/kp167/chap-svn/modules/internal/ChapelDistribution.chpl");
  (_args_foron_fn)->_1_this = call_tmp;
  chpl_check_nil(_args_foron_fn, INT64(139), "/home/kp167/chap-svn/modules/internal/ChapelDistribution.chpl");
  (_args_foron_fn)->_2_order = default_argorder;
  chpl_macro_tmp_823.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_823.addr = T2;
  T3 = chpl_macro_tmp_823;
  chpl_check_nil(_args_foron_fn, INT64(139), "/home/kp167/chap-svn/modules/internal/ChapelDistribution.chpl");
  (_args_foron_fn)->_3__tmp = T3;
  /*** wrapon_fn2 ***/ chpl_executeOn(&call_tmp2, INT32(2), _args_foron_fn, sizeof(chpl__class_localson_fn2_object), INT64(294), "/home/kp167/chap-svn/modules/internal/Atomics.chpl");
  chpl_here_free(((void*)(_args_foron_fn)));
  T = ret;
  while (T) {
    chpl_task_yield();
    chpl_check_nil((this8)->addr, INT64(139), "/home/kp167/chap-svn/modules/internal/ChapelDistribution.chpl");
    chpl_macro_tmp_824.locale = (this8)->locale;
    chpl_macro_tmp_824.addr = &(((this8)->addr)->_arrsLock);
    call_tmp3 = chpl_macro_tmp_824;
    default_argorder2 = local_memory_order_seq_cst;
    ret2 = false;
    call_tmp4 = (&call_tmp3)->locale;
    T4 = &ret2;
    chpl_here_alloc_size2 = sizeof(chpl__class_localson_fn2_object);
    chpl_here_alloc_tmp2 = chpl_here_alloc(chpl_here_alloc_size2, INT16(36));
    _args_foron_fn2 = ((_class_localson_fn2)(chpl_here_alloc_tmp2));
    chpl_check_nil(_args_foron_fn2, INT64(139), "/home/kp167/chap-svn/modules/internal/ChapelDistribution.chpl");
    (_args_foron_fn2)->_0__tmp = call_tmp4;
    chpl_check_nil(_args_foron_fn2, INT64(139), "/home/kp167/chap-svn/modules/internal/ChapelDistribution.chpl");
    (_args_foron_fn2)->_1_this = call_tmp3;
    chpl_check_nil(_args_foron_fn2, INT64(139), "/home/kp167/chap-svn/modules/internal/ChapelDistribution.chpl");
    (_args_foron_fn2)->_2_order = default_argorder2;
    chpl_macro_tmp_825.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_825.addr = T4;
    T5 = chpl_macro_tmp_825;
    chpl_check_nil(_args_foron_fn2, INT64(139), "/home/kp167/chap-svn/modules/internal/ChapelDistribution.chpl");
    (_args_foron_fn2)->_3__tmp = T5;
    /*** wrapon_fn2 ***/ chpl_executeOn(&call_tmp4, INT32(2), _args_foron_fn2, sizeof(chpl__class_localson_fn2_object), INT64(294), "/home/kp167/chap-svn/modules/internal/Atomics.chpl");
    chpl_here_free(((void*)(_args_foron_fn2)));
    T = ret2;
  }
  chpl_check_nil((this8)->addr, INT64(140), "/home/kp167/chap-svn/modules/internal/ChapelDistribution.chpl");
  chpl_macro_tmp_826.locale = (this8)->locale;
  chpl_macro_tmp_826.addr = &(((this8)->addr)->_arrs);
  call_tmp5 = chpl_macro_tmp_826;
  chpl_macro_tmp_827.locale = (x)->locale;
  chpl_macro_tmp_827.addr = ((BaseArr)((x)->addr));
  call_tmp6 = chpl_macro_tmp_827;
  append(&call_tmp5, &call_tmp6);
  chpl_check_nil((this8)->addr, INT64(141), "/home/kp167/chap-svn/modules/internal/ChapelDistribution.chpl");
  chpl_macro_tmp_828.locale = (this8)->locale;
  chpl_macro_tmp_828.addr = &(((this8)->addr)->_arrsLock);
  call_tmp7 = chpl_macro_tmp_828;
  default_argorder3 = local_memory_order_seq_cst;
  call_tmp8 = (&call_tmp7)->locale;
  chpl_here_alloc_size3 = sizeof(chpl__class_localson_fn3_object);
  chpl_here_alloc_tmp3 = chpl_here_alloc(chpl_here_alloc_size3, INT16(36));
  _args_foron_fn3 = ((_class_localson_fn3)(chpl_here_alloc_tmp3));
  chpl_check_nil(_args_foron_fn3, INT64(141), "/home/kp167/chap-svn/modules/internal/ChapelDistribution.chpl");
  (_args_foron_fn3)->_0__tmp = call_tmp8;
  chpl_check_nil(_args_foron_fn3, INT64(141), "/home/kp167/chap-svn/modules/internal/ChapelDistribution.chpl");
  (_args_foron_fn3)->_1_this = call_tmp7;
  chpl_check_nil(_args_foron_fn3, INT64(141), "/home/kp167/chap-svn/modules/internal/ChapelDistribution.chpl");
  (_args_foron_fn3)->_2_order = default_argorder3;
  /*** wrapon_fn3 ***/ chpl_executeOn(&call_tmp8, INT32(4), _args_foron_fn3, sizeof(chpl__class_localson_fn3_object), INT64(298), "/home/kp167/chap-svn/modules/internal/Atomics.chpl");
  chpl_here_free(((void*)(_args_foron_fn3)));
  return;
}

/* ChapelDistribution.chpl:138 */
static void wrapon_fn35(_class_localson_fn35 c) {
  chpl____wide_BaseDom _1_this = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_DefaultRectangularArr_locale_1_int64_t_F _2_x = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_check_nil(c, INT64(138), "/home/kp167/chap-svn/modules/internal/ChapelDistribution.chpl");
  _1_this = (c)->_1_this;
  chpl_check_nil(c, INT64(138), "/home/kp167/chap-svn/modules/internal/ChapelDistribution.chpl");
  _2_x = (c)->_2_x;
  on_fn35(&_1_this, &_2_x);
  return;
}

/* ChapelDistribution.chpl:138 */
static void wrapon_fn36(_class_localson_fn36 c) {
  chpl____wide_BaseDom _1_this = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_DefaultRectangularArr_localesSignal_1_int64_t_F _2_x = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_check_nil(c, INT64(138), "/home/kp167/chap-svn/modules/internal/ChapelDistribution.chpl");
  _1_this = (c)->_1_this;
  chpl_check_nil(c, INT64(138), "/home/kp167/chap-svn/modules/internal/ChapelDistribution.chpl");
  _2_x = (c)->_2_x;
  on_fn36(&_1_this, &_2_x);
  return;
}

/* ChapelDistribution.chpl:138 */
static void wrapon_fn37(_class_localson_fn37 c) {
  chpl____wide_BaseDom _1_this = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_DefaultRectangularArr_chpl_TableEntry_chpl_taskID_t_1_int64_t_F _2_x = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_check_nil(c, INT64(138), "/home/kp167/chap-svn/modules/internal/ChapelDistribution.chpl");
  _1_this = (c)->_1_this;
  chpl_check_nil(c, INT64(138), "/home/kp167/chap-svn/modules/internal/ChapelDistribution.chpl");
  _2_x = (c)->_2_x;
  on_fn37(&_1_this, &_2_x);
  return;
}

/* ChapelDistribution.chpl:138 */
static void wrapon_fn38(_class_localson_fn38 c) {
  chpl____wide_BaseDom _1_this = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_DefaultRectangularArr_chpldev_Task_1_int64_t_F _2_x = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_check_nil(c, INT64(138), "/home/kp167/chap-svn/modules/internal/ChapelDistribution.chpl");
  _1_this = (c)->_1_this;
  chpl_check_nil(c, INT64(138), "/home/kp167/chap-svn/modules/internal/ChapelDistribution.chpl");
  _2_x = (c)->_2_x;
  on_fn38(&_1_this, &_2_x);
  return;
}

/* ChapelDistribution.chpl:138 */
static void wrapon_fn39(_class_localson_fn39 c) {
  chpl____wide_BaseDom _1_this = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_DefaultAssociativeArr_chpldev_Task_chpl_taskID_t_F _2_x = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_check_nil(c, INT64(138), "/home/kp167/chap-svn/modules/internal/ChapelDistribution.chpl");
  _1_this = (c)->_1_this;
  chpl_check_nil(c, INT64(138), "/home/kp167/chap-svn/modules/internal/ChapelDistribution.chpl");
  _2_x = (c)->_2_x;
  on_fn39(&_1_this, &_2_x);
  return;
}

/* ChapelDistribution.chpl:158 */
static void _backupArrays(chpl____wide_BaseDom* const this8) {
  list_BaseArr ret;
  list_BaseArr _ic__F0_this;
  chpl____wide_listNode_BaseArr tmp = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_listNode_BaseArr ret2 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_bool T;
  chpl____wide_object call_tmp = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_bool call_tmp2;
  chpl____wide_BaseArr ret3 = {CHPL_LOCALEID_T_INIT, NULL};
  int32_t _virtual_method_tmp_;
  chpl____wide_listNode_BaseArr ret4 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_listNode_BaseArr _ref_tmp_ = NULL;
  chpl____wide_object call_tmp3 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_bool call_tmp4;
  chpl____wide__ref_list_BaseArr chpl_macro_tmp_829;
  chpl____wide_object chpl_macro_tmp_830;
  chpl____wide__ref_BaseArr chpl_macro_tmp_831;
  chpl____wide__ref_int32_t chpl_macro_tmp_832;
  chpl____wide__ref_listNode_BaseArr chpl_macro_tmp_833;
  chpl____wide_object chpl_macro_tmp_834;
  chpl_check_nil((this8)->addr, INT64(159), "/home/kp167/chap-svn/modules/internal/ChapelDistribution.chpl");
  chpl_macro_tmp_829.locale = (this8)->locale;
  chpl_macro_tmp_829.addr = &(((this8)->addr)->_arrs);
  chpl_gen_comm_get(((void*)(&ret)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_829).locale), INT64(0), NULL), (chpl_macro_tmp_829).addr, sizeof(list_BaseArr), -1, INT64(1), INT64(159), "/home/kp167/chap-svn/modules/internal/ChapelDistribution.chpl");
  _ic__F0_this = ret;
  ret2 = (&_ic__F0_this)->first;
  tmp = ret2;
  chpl_macro_tmp_830.locale = (&ret2)->locale;
  chpl_macro_tmp_830.addr = ((object)((&ret2)->addr));
  call_tmp = chpl_macro_tmp_830;
  call_tmp2 = (&call_tmp)->addr != nil;
  T = call_tmp2;
  while (T) {
    chpl_check_nil((&tmp)->addr, INT64(159), "/home/kp167/chap-svn/modules/internal/ChapelDistribution.chpl");
    chpl_macro_tmp_831.locale = (&tmp)->locale;
    chpl_macro_tmp_831.addr = &(((&tmp)->addr)->data);
    chpl_gen_comm_get(((void*)(&ret3)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_831).locale), INT64(0), NULL), (chpl_macro_tmp_831).addr, sizeof(chpl____wide_BaseArr), -1, INT64(1), INT64(159), "/home/kp167/chap-svn/modules/internal/ChapelDistribution.chpl");
    chpl_check_nil((&ret3)->addr, INT64(160), "/home/kp167/chap-svn/modules/internal/ChapelDistribution.chpl");
    chpl_macro_tmp_832.locale = (&ret3)->locale;
    chpl_macro_tmp_832.addr = &(((object)((&ret3)->addr))->chpl__cid);
    chpl_gen_comm_get(((void*)(&_virtual_method_tmp_)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_832).locale), INT64(0), NULL), (chpl_macro_tmp_832).addr, sizeof(int32_t), -1, INT64(1), INT64(160), "/home/kp167/chap-svn/modules/internal/ChapelDistribution.chpl");
    ((void(*)(chpl____wide_BaseArr* const))chpl_vmtable[((INT64(8) * _virtual_method_tmp_) + INT64(6))])(&ret3);
    chpl_check_nil((&tmp)->addr, INT64(159), "/home/kp167/chap-svn/modules/internal/ChapelDistribution.chpl");
    chpl_macro_tmp_833.locale = (&tmp)->locale;
    chpl_macro_tmp_833.addr = &(((&tmp)->addr)->next);
    chpl_gen_comm_get(((void*)(&ret4)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_833).locale), INT64(0), NULL), (chpl_macro_tmp_833).addr, sizeof(chpl____wide_listNode_BaseArr), -1, INT64(1), INT64(159), "/home/kp167/chap-svn/modules/internal/ChapelDistribution.chpl");
    _ref_tmp_ = &tmp;
    *(_ref_tmp_) = ret4;
    chpl_macro_tmp_834.locale = (&tmp)->locale;
    chpl_macro_tmp_834.addr = ((object)((&tmp)->addr));
    call_tmp3 = chpl_macro_tmp_834;
    call_tmp4 = (&call_tmp3)->addr != nil;
    T = call_tmp4;
  }
  return;
}

/* ChapelDistribution.chpl:163 */
static void _removeArrayBackups(chpl____wide_BaseDom* const this8) {
  list_BaseArr ret;
  list_BaseArr _ic__F0_this;
  chpl____wide_listNode_BaseArr tmp = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_listNode_BaseArr ret2 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_bool T;
  chpl____wide_object call_tmp = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_bool call_tmp2;
  chpl____wide_BaseArr ret3 = {CHPL_LOCALEID_T_INIT, NULL};
  int32_t _virtual_method_tmp_;
  chpl____wide_listNode_BaseArr ret4 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_listNode_BaseArr _ref_tmp_ = NULL;
  chpl____wide_object call_tmp3 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_bool call_tmp4;
  chpl____wide__ref_list_BaseArr chpl_macro_tmp_835;
  chpl____wide_object chpl_macro_tmp_836;
  chpl____wide__ref_BaseArr chpl_macro_tmp_837;
  chpl____wide__ref_int32_t chpl_macro_tmp_838;
  chpl____wide__ref_listNode_BaseArr chpl_macro_tmp_839;
  chpl____wide_object chpl_macro_tmp_840;
  chpl_check_nil((this8)->addr, INT64(164), "/home/kp167/chap-svn/modules/internal/ChapelDistribution.chpl");
  chpl_macro_tmp_835.locale = (this8)->locale;
  chpl_macro_tmp_835.addr = &(((this8)->addr)->_arrs);
  chpl_gen_comm_get(((void*)(&ret)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_835).locale), INT64(0), NULL), (chpl_macro_tmp_835).addr, sizeof(list_BaseArr), -1, INT64(1), INT64(164), "/home/kp167/chap-svn/modules/internal/ChapelDistribution.chpl");
  _ic__F0_this = ret;
  ret2 = (&_ic__F0_this)->first;
  tmp = ret2;
  chpl_macro_tmp_836.locale = (&ret2)->locale;
  chpl_macro_tmp_836.addr = ((object)((&ret2)->addr));
  call_tmp = chpl_macro_tmp_836;
  call_tmp2 = (&call_tmp)->addr != nil;
  T = call_tmp2;
  while (T) {
    chpl_check_nil((&tmp)->addr, INT64(164), "/home/kp167/chap-svn/modules/internal/ChapelDistribution.chpl");
    chpl_macro_tmp_837.locale = (&tmp)->locale;
    chpl_macro_tmp_837.addr = &(((&tmp)->addr)->data);
    chpl_gen_comm_get(((void*)(&ret3)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_837).locale), INT64(0), NULL), (chpl_macro_tmp_837).addr, sizeof(chpl____wide_BaseArr), -1, INT64(1), INT64(164), "/home/kp167/chap-svn/modules/internal/ChapelDistribution.chpl");
    chpl_check_nil((&ret3)->addr, INT64(165), "/home/kp167/chap-svn/modules/internal/ChapelDistribution.chpl");
    chpl_macro_tmp_838.locale = (&ret3)->locale;
    chpl_macro_tmp_838.addr = &(((object)((&ret3)->addr))->chpl__cid);
    chpl_gen_comm_get(((void*)(&_virtual_method_tmp_)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_838).locale), INT64(0), NULL), (chpl_macro_tmp_838).addr, sizeof(int32_t), -1, INT64(1), INT64(165), "/home/kp167/chap-svn/modules/internal/ChapelDistribution.chpl");
    ((void(*)(chpl____wide_BaseArr* const))chpl_vmtable[((INT64(8) * _virtual_method_tmp_) + INT64(3))])(&ret3);
    chpl_check_nil((&tmp)->addr, INT64(164), "/home/kp167/chap-svn/modules/internal/ChapelDistribution.chpl");
    chpl_macro_tmp_839.locale = (&tmp)->locale;
    chpl_macro_tmp_839.addr = &(((&tmp)->addr)->next);
    chpl_gen_comm_get(((void*)(&ret4)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_839).locale), INT64(0), NULL), (chpl_macro_tmp_839).addr, sizeof(chpl____wide_listNode_BaseArr), -1, INT64(1), INT64(164), "/home/kp167/chap-svn/modules/internal/ChapelDistribution.chpl");
    _ref_tmp_ = &tmp;
    *(_ref_tmp_) = ret4;
    chpl_macro_tmp_840.locale = (&tmp)->locale;
    chpl_macro_tmp_840.addr = ((object)((&tmp)->addr));
    call_tmp3 = chpl_macro_tmp_840;
    call_tmp4 = (&call_tmp3)->addr != nil;
    T = call_tmp4;
  }
  return;
}

/* ChapelDistribution.chpl:168 */
static void _preserveArrayElements(chpl____wide_BaseDom* const this8, int64_t oldslot, int64_t newslot) {
  list_BaseArr ret;
  list_BaseArr _ic__F0_this;
  chpl____wide_listNode_BaseArr tmp = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_listNode_BaseArr ret2 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_bool T;
  chpl____wide_object call_tmp = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_bool call_tmp2;
  chpl____wide_BaseArr ret3 = {CHPL_LOCALEID_T_INIT, NULL};
  int32_t _virtual_method_tmp_;
  chpl____wide_listNode_BaseArr ret4 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_listNode_BaseArr _ref_tmp_ = NULL;
  chpl____wide_object call_tmp3 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_bool call_tmp4;
  chpl____wide__ref_list_BaseArr chpl_macro_tmp_841;
  chpl____wide_object chpl_macro_tmp_842;
  chpl____wide__ref_BaseArr chpl_macro_tmp_843;
  chpl____wide__ref_int32_t chpl_macro_tmp_844;
  chpl____wide__ref_listNode_BaseArr chpl_macro_tmp_845;
  chpl____wide_object chpl_macro_tmp_846;
  chpl_check_nil((this8)->addr, INT64(169), "/home/kp167/chap-svn/modules/internal/ChapelDistribution.chpl");
  chpl_macro_tmp_841.locale = (this8)->locale;
  chpl_macro_tmp_841.addr = &(((this8)->addr)->_arrs);
  chpl_gen_comm_get(((void*)(&ret)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_841).locale), INT64(0), NULL), (chpl_macro_tmp_841).addr, sizeof(list_BaseArr), -1, INT64(1), INT64(169), "/home/kp167/chap-svn/modules/internal/ChapelDistribution.chpl");
  _ic__F0_this = ret;
  ret2 = (&_ic__F0_this)->first;
  tmp = ret2;
  chpl_macro_tmp_842.locale = (&ret2)->locale;
  chpl_macro_tmp_842.addr = ((object)((&ret2)->addr));
  call_tmp = chpl_macro_tmp_842;
  call_tmp2 = (&call_tmp)->addr != nil;
  T = call_tmp2;
  while (T) {
    chpl_check_nil((&tmp)->addr, INT64(169), "/home/kp167/chap-svn/modules/internal/ChapelDistribution.chpl");
    chpl_macro_tmp_843.locale = (&tmp)->locale;
    chpl_macro_tmp_843.addr = &(((&tmp)->addr)->data);
    chpl_gen_comm_get(((void*)(&ret3)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_843).locale), INT64(0), NULL), (chpl_macro_tmp_843).addr, sizeof(chpl____wide_BaseArr), -1, INT64(1), INT64(169), "/home/kp167/chap-svn/modules/internal/ChapelDistribution.chpl");
    chpl_check_nil((&ret3)->addr, INT64(170), "/home/kp167/chap-svn/modules/internal/ChapelDistribution.chpl");
    chpl_macro_tmp_844.locale = (&ret3)->locale;
    chpl_macro_tmp_844.addr = &(((object)((&ret3)->addr))->chpl__cid);
    chpl_gen_comm_get(((void*)(&_virtual_method_tmp_)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_844).locale), INT64(0), NULL), (chpl_macro_tmp_844).addr, sizeof(int32_t), -1, INT64(1), INT64(170), "/home/kp167/chap-svn/modules/internal/ChapelDistribution.chpl");
    ((void(*)(chpl____wide_BaseArr* const, int64_t, int64_t))chpl_vmtable[((INT64(8) * _virtual_method_tmp_) + INT64(2))])(&ret3, oldslot, newslot);
    chpl_check_nil((&tmp)->addr, INT64(169), "/home/kp167/chap-svn/modules/internal/ChapelDistribution.chpl");
    chpl_macro_tmp_845.locale = (&tmp)->locale;
    chpl_macro_tmp_845.addr = &(((&tmp)->addr)->next);
    chpl_gen_comm_get(((void*)(&ret4)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_845).locale), INT64(0), NULL), (chpl_macro_tmp_845).addr, sizeof(chpl____wide_listNode_BaseArr), -1, INT64(1), INT64(169), "/home/kp167/chap-svn/modules/internal/ChapelDistribution.chpl");
    _ref_tmp_ = &tmp;
    *(_ref_tmp_) = ret4;
    chpl_macro_tmp_846.locale = (&tmp)->locale;
    chpl_macro_tmp_846.addr = ((object)((&tmp)->addr));
    call_tmp3 = chpl_macro_tmp_846;
    call_tmp4 = (&call_tmp3)->addr != nil;
    T = call_tmp4;
  }
  return;
}

/* ChapelDistribution.chpl:195 */
static chpl_bool dsiLinksDistribution(chpl____wide_BaseDom* const this8) {
  return true;
}

/* ChapelDistribution.chpl:200 */
static BaseRectangularDom _construct_BaseRectangularDom(atomic_refcnt* const _domCnt, list_BaseArr* const _arrs, atomicflag* const _arrsLock, BaseRectangularDom meme) {
  BaseRectangularDom this8 = NULL;
  BaseDom T = NULL;
  this8 = meme;
  chpl_check_nil(this8, INT64(200), "/home/kp167/chap-svn/modules/internal/ChapelDistribution.chpl");
  T = &((this8)->super);
  _construct_BaseDom(_domCnt, _arrs, _arrsLock, T);
  return meme;
}

/* ChapelDistribution.chpl:200 */
static void chpl__auto_destroy_BaseRectangularDom(BaseRectangularDom this8) {
  BaseDom _parent_destructor_tmp_ = NULL;
  _ref_atomicflag _field_destructor_tmp_ = NULL;
  _ref_atomic_flag call_tmp = NULL;
  _ref_atomic_flag T = NULL;
  _ref_atomic_refcnt _field_destructor_tmp_2 = NULL;
  _ref_atomic_int64 _field_destructor_tmp_3 = NULL;
  _ref_atomic_int_least64_t call_tmp2 = NULL;
  _ref_atomic_int_least64_t T2 = NULL;
  _parent_destructor_tmp_ = ((BaseDom)(this8));
  chpl_check_nil(_parent_destructor_tmp_, INT64(200), "/home/kp167/chap-svn/modules/internal/ChapelDistribution.chpl");
  _field_destructor_tmp_ = &((_parent_destructor_tmp_)->_arrsLock);
  chpl_check_nil(_field_destructor_tmp_, INT64(200), "/home/kp167/chap-svn/modules/internal/ChapelDistribution.chpl");
  call_tmp = &((_field_destructor_tmp_)->_v);
  T = call_tmp;
  atomic_destroy_flag(T);
  call_tmp = T;
  chpl_check_nil(_parent_destructor_tmp_, INT64(200), "/home/kp167/chap-svn/modules/internal/ChapelDistribution.chpl");
  _field_destructor_tmp_2 = &((_parent_destructor_tmp_)->_domCnt);
  chpl_check_nil(_field_destructor_tmp_2, INT64(200), "/home/kp167/chap-svn/modules/internal/ChapelDistribution.chpl");
  _field_destructor_tmp_3 = &((_field_destructor_tmp_2)->_cnt);
  chpl_check_nil(_field_destructor_tmp_3, INT64(200), "/home/kp167/chap-svn/modules/internal/ChapelDistribution.chpl");
  call_tmp2 = &((_field_destructor_tmp_3)->_v);
  T2 = call_tmp2;
  atomic_destroy_int_least64_t(T2);
  call_tmp2 = T2;
  return;
}

/* ChapelDistribution.chpl:228 */
static BaseAssociativeDom _construct_BaseAssociativeDom(atomic_refcnt* const _domCnt, list_BaseArr* const _arrs, atomicflag* const _arrsLock, BaseAssociativeDom meme) {
  BaseAssociativeDom this8 = NULL;
  BaseDom T = NULL;
  this8 = meme;
  chpl_check_nil(this8, INT64(228), "/home/kp167/chap-svn/modules/internal/ChapelDistribution.chpl");
  T = &((this8)->super);
  _construct_BaseDom(_domCnt, _arrs, _arrsLock, T);
  return meme;
}

/* ChapelDistribution.chpl:228 */
static void chpl__auto_destroy_BaseAssociativeDom(BaseAssociativeDom this8) {
  BaseDom _parent_destructor_tmp_ = NULL;
  _ref_atomicflag _field_destructor_tmp_ = NULL;
  _ref_atomic_flag call_tmp = NULL;
  _ref_atomic_flag T = NULL;
  _ref_atomic_refcnt _field_destructor_tmp_2 = NULL;
  _ref_atomic_int64 _field_destructor_tmp_3 = NULL;
  _ref_atomic_int_least64_t call_tmp2 = NULL;
  _ref_atomic_int_least64_t T2 = NULL;
  _parent_destructor_tmp_ = ((BaseDom)(this8));
  chpl_check_nil(_parent_destructor_tmp_, INT64(228), "/home/kp167/chap-svn/modules/internal/ChapelDistribution.chpl");
  _field_destructor_tmp_ = &((_parent_destructor_tmp_)->_arrsLock);
  chpl_check_nil(_field_destructor_tmp_, INT64(228), "/home/kp167/chap-svn/modules/internal/ChapelDistribution.chpl");
  call_tmp = &((_field_destructor_tmp_)->_v);
  T = call_tmp;
  atomic_destroy_flag(T);
  call_tmp = T;
  chpl_check_nil(_parent_destructor_tmp_, INT64(228), "/home/kp167/chap-svn/modules/internal/ChapelDistribution.chpl");
  _field_destructor_tmp_2 = &((_parent_destructor_tmp_)->_domCnt);
  chpl_check_nil(_field_destructor_tmp_2, INT64(228), "/home/kp167/chap-svn/modules/internal/ChapelDistribution.chpl");
  _field_destructor_tmp_3 = &((_field_destructor_tmp_2)->_cnt);
  chpl_check_nil(_field_destructor_tmp_3, INT64(228), "/home/kp167/chap-svn/modules/internal/ChapelDistribution.chpl");
  call_tmp2 = &((_field_destructor_tmp_3)->_v);
  T2 = call_tmp2;
  atomic_destroy_int_least64_t(T2);
  call_tmp2 = T2;
  return;
}

/* ChapelDistribution.chpl:252 */
static BaseArr _construct_BaseArr(atomic_refcnt* const _arrCnt, BaseArr _arrAlias, BaseArr meme) {
  BaseArr this8 = NULL;
  object T = NULL;
  chpl____wide_BaseArr T2 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_BaseArr chpl_macro_tmp_847;
  this8 = meme;
  chpl_check_nil(this8, INT64(252), "/home/kp167/chap-svn/modules/internal/ChapelDistribution.chpl");
  T = &((this8)->super);
  _construct_object(T);
  chpl_check_nil(this8, INT64(256), "/home/kp167/chap-svn/modules/internal/ChapelDistribution.chpl");
  (this8)->_arrCnt = *(_arrCnt);
  chpl_macro_tmp_847.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_847.addr = _arrAlias;
  T2 = chpl_macro_tmp_847;
  chpl_check_nil(this8, INT64(257), "/home/kp167/chap-svn/modules/internal/ChapelDistribution.chpl");
  (this8)->_arrAlias = T2;
  return this8;
}

/* ChapelDistribution.chpl:252 */
static void chpl__auto_destroy_BaseArr(BaseArr this8) {
  _ref_atomic_refcnt _field_destructor_tmp_ = NULL;
  _ref_atomic_int64 _field_destructor_tmp_2 = NULL;
  _ref_atomic_int_least64_t call_tmp = NULL;
  _ref_atomic_int_least64_t T = NULL;
  chpl_check_nil(this8, INT64(256), "/home/kp167/chap-svn/modules/internal/ChapelDistribution.chpl");
  _field_destructor_tmp_ = &((this8)->_arrCnt);
  chpl_check_nil(_field_destructor_tmp_, INT64(256), "/home/kp167/chap-svn/modules/internal/ChapelDistribution.chpl");
  _field_destructor_tmp_2 = &((_field_destructor_tmp_)->_cnt);
  chpl_check_nil(_field_destructor_tmp_2, INT64(256), "/home/kp167/chap-svn/modules/internal/ChapelDistribution.chpl");
  call_tmp = &((_field_destructor_tmp_2)->_v);
  T = call_tmp;
  atomic_destroy_int_least64_t(T);
  call_tmp = T;
  return;
}

/* ChapelDistribution.chpl:261 */
static chpl____wide_BaseDom dsiGetBaseDom(chpl____wide_BaseArr* const this8) {
  chpl____wide_BaseDom ret = {CHPL_LOCALEID_T_INIT, NULL};
  BaseDom call_tmp = NULL;
  BaseDom T = NULL;
  c_string T2;
  _ref_BaseDom _ref_tmp_ = NULL;
  chpl____wide_BaseDom chpl_macro_tmp_848;
  chpl____wide_BaseDom chpl_macro_tmp_849;
  T = ((BaseDom)(nil));
  call_tmp = T;
  chpl_macro_tmp_848.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_848.addr = call_tmp;
  ret = chpl_macro_tmp_848;
  T2 = "internal error: dsiGetBaseDom is not implemented";
  halt(T2, INT64(262), "/home/kp167/chap-svn/modules/internal/ChapelDistribution.chpl");
  _ref_tmp_ = &ret;
  chpl_macro_tmp_849.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_849.addr = NULL;
  *(_ref_tmp_) = chpl_macro_tmp_849;
  return ret;
}

/* ChapelDistribution.chpl:267 */
static int64_t destroyArr(chpl____wide_BaseArr* const this8) {
  memory_order local_memory_order_seq_cst;
  int64_t ret;
  chpl____wide__ref_atomic_refcnt call_tmp = {CHPL_LOCALEID_T_INIT, NULL};
  int64_t ret2;
  int64_t got;
  chpl____wide__ref_atomic_int64 call_tmp2 = {CHPL_LOCALEID_T_INIT, NULL};
  memory_order default_argorder;
  int64_t ret3;
  int64_t ret4;
  chpl_localeID_t call_tmp3;
  _ref_int64_t T = NULL;
  _class_localson_fn8 _args_foron_fn = NULL;
  int64_t chpl_here_alloc_size;
  chpl_opaque chpl_here_alloc_tmp;
  chpl____wide__ref_int64_t T2 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_int64_t _ref_tmp_ = NULL;
  _ref_int64_t _ref_tmp_2 = NULL;
  int64_t call_tmp4;
  _ref_int64_t _ref_tmp_3 = NULL;
  chpl_bool call_tmp5;
  c_string T3;
  chpl_bool call_tmp6;
  chpl____wide_BaseArr ret5 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_object call_tmp7 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_bool call_tmp8;
  chpl____wide__ref_BaseArr call_tmp9 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_localeID_t call_tmp10;
  chpl____wide_BaseArr T4 = {CHPL_LOCALEID_T_INIT, NULL};
  _class_localson_fn40 _args_foron_fn2 = NULL;
  int64_t chpl_here_alloc_size2;
  chpl_opaque chpl_here_alloc_tmp2;
  int32_t _virtual_method_tmp_;
  chpl_bool call_tmp11;
  chpl____wide_BaseDom call_tmp12 = {CHPL_LOCALEID_T_INIT, NULL};
  int32_t _virtual_method_tmp_2;
  chpl_localeID_t call_tmp13;
  chpl____wide_BaseDom rvfDerefTmp = {CHPL_LOCALEID_T_INIT, NULL};
  _class_localson_fn42 _args_foron_fn3 = NULL;
  int64_t chpl_here_alloc_size3;
  chpl_opaque chpl_here_alloc_tmp3;
  _ref_int64_t _ref_tmp_4 = NULL;
  chpl____wide__ref_atomic_refcnt chpl_macro_tmp_850;
  chpl____wide__ref_atomic_int64 chpl_macro_tmp_851;
  chpl____wide__ref_int64_t chpl_macro_tmp_852;
  chpl____wide__ref_BaseArr chpl_macro_tmp_853;
  chpl____wide_object chpl_macro_tmp_854;
  chpl____wide__ref_BaseArr chpl_macro_tmp_855;
  chpl____wide__ref_int32_t chpl_macro_tmp_856;
  chpl____wide__ref_int32_t chpl_macro_tmp_857;
  local_memory_order_seq_cst = memory_order_seq_cst;
  ret = INT64(0);
  compilerAssert();
  compilerAssert();
  chpl_check_nil((this8)->addr, INT64(269), "/home/kp167/chap-svn/modules/internal/ChapelDistribution.chpl");
  chpl_macro_tmp_850.locale = (this8)->locale;
  chpl_macro_tmp_850.addr = &(((this8)->addr)->_arrCnt);
  call_tmp = chpl_macro_tmp_850;
  ret2 = INT64(0);
  got = INT64(0);
  chpl_macro_tmp_851.locale = (call_tmp).locale;
  chpl_macro_tmp_851.addr = &(((call_tmp).addr)->_cnt);
  call_tmp2 = chpl_macro_tmp_851;
  default_argorder = local_memory_order_seq_cst;
  ret3 = INT64(0);
  ret4 = INT64(0);
  call_tmp3 = (&call_tmp2)->locale;
  T = &ret4;
  chpl_here_alloc_size = sizeof(chpl__class_localson_fn8_object);
  chpl_here_alloc_tmp = chpl_here_alloc(chpl_here_alloc_size, INT16(36));
  _args_foron_fn = ((_class_localson_fn8)(chpl_here_alloc_tmp));
  chpl_check_nil(_args_foron_fn, INT64(269), "/home/kp167/chap-svn/modules/internal/ChapelDistribution.chpl");
  (_args_foron_fn)->_0__tmp = call_tmp3;
  chpl_check_nil(_args_foron_fn, INT64(269), "/home/kp167/chap-svn/modules/internal/ChapelDistribution.chpl");
  (_args_foron_fn)->_1_this = call_tmp2;
  chpl_check_nil(_args_foron_fn, INT64(269), "/home/kp167/chap-svn/modules/internal/ChapelDistribution.chpl");
  (_args_foron_fn)->_2_value = INT64(1);
  chpl_check_nil(_args_foron_fn, INT64(269), "/home/kp167/chap-svn/modules/internal/ChapelDistribution.chpl");
  (_args_foron_fn)->_3_order = default_argorder;
  chpl_macro_tmp_852.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_852.addr = T;
  T2 = chpl_macro_tmp_852;
  chpl_check_nil(_args_foron_fn, INT64(269), "/home/kp167/chap-svn/modules/internal/ChapelDistribution.chpl");
  (_args_foron_fn)->_4__tmp = T2;
  /*** wrapon_fn8 ***/ chpl_executeOn(&call_tmp3, INT32(9), _args_foron_fn, sizeof(chpl__class_localson_fn8_object), INT64(1073), "/home/kp167/chap-svn/modules/internal/Atomics.chpl");
  chpl_here_free(((void*)(_args_foron_fn)));
  _ref_tmp_ = &ret3;
  *(_ref_tmp_) = ret4;
  _ref_tmp_2 = &got;
  *(_ref_tmp_2) = ret3;
  call_tmp4 = (got - INT64(1));
  _ref_tmp_3 = &ret2;
  *(_ref_tmp_3) = call_tmp4;
  call_tmp5 = (ret2 < INT64(0));
  if (call_tmp5) {
    T3 = "array reference count is negative!";
    halt(T3, INT64(269), "/home/kp167/chap-svn/modules/internal/ChapelDistribution.chpl");
  }
  call_tmp6 = (ret2 == INT64(0));
  if (call_tmp6) {
    chpl_check_nil((this8)->addr, INT64(271), "/home/kp167/chap-svn/modules/internal/ChapelDistribution.chpl");
    chpl_macro_tmp_853.locale = (this8)->locale;
    chpl_macro_tmp_853.addr = &(((this8)->addr)->_arrAlias);
    chpl_gen_comm_get(((void*)(&ret5)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_853).locale), INT64(0), NULL), (chpl_macro_tmp_853).addr, sizeof(chpl____wide_BaseArr), -1, INT64(1), INT64(271), "/home/kp167/chap-svn/modules/internal/ChapelDistribution.chpl");
    chpl_macro_tmp_854.locale = (&ret5)->locale;
    chpl_macro_tmp_854.addr = ((object)((&ret5)->addr));
    call_tmp7 = chpl_macro_tmp_854;
    call_tmp8 = (&call_tmp7)->addr != nil;
    if (call_tmp8) {
      chpl_check_nil((this8)->addr, INT64(272), "/home/kp167/chap-svn/modules/internal/ChapelDistribution.chpl");
      chpl_macro_tmp_855.locale = (this8)->locale;
      chpl_macro_tmp_855.addr = &(((this8)->addr)->_arrAlias);
      call_tmp9 = chpl_macro_tmp_855;
      chpl_gen_comm_get(((void*)(&T4)), chpl_nodeFromLocaleID(&((call_tmp9).locale), INT64(0), NULL), (call_tmp9).addr, sizeof(chpl____wide_BaseArr), -1, INT64(1), INT64(272), "/home/kp167/chap-svn/modules/internal/ChapelDistribution.chpl");
      call_tmp10 = (&T4)->locale;
      chpl_here_alloc_size2 = sizeof(chpl__class_localson_fn40_object);
      chpl_here_alloc_tmp2 = chpl_here_alloc(chpl_here_alloc_size2, INT16(36));
      _args_foron_fn2 = ((_class_localson_fn40)(chpl_here_alloc_tmp2));
      chpl_check_nil(_args_foron_fn2, INT64(272), "/home/kp167/chap-svn/modules/internal/ChapelDistribution.chpl");
      (_args_foron_fn2)->_0__tmp = call_tmp10;
      chpl_check_nil(_args_foron_fn2, INT64(272), "/home/kp167/chap-svn/modules/internal/ChapelDistribution.chpl");
      (_args_foron_fn2)->_1_this = *(this8);
      /*** wrapon_fn40 ***/ chpl_executeOn(&call_tmp10, INT32(45), _args_foron_fn2, sizeof(chpl__class_localson_fn40_object), INT64(272), "/home/kp167/chap-svn/modules/internal/ChapelDistribution.chpl");
      chpl_here_free(((void*)(_args_foron_fn2)));
    } else {
      chpl_check_nil((this8)->addr, INT64(278), "/home/kp167/chap-svn/modules/internal/ChapelDistribution.chpl");
      chpl_macro_tmp_856.locale = (this8)->locale;
      chpl_macro_tmp_856.addr = &(((object)((this8)->addr))->chpl__cid);
      chpl_gen_comm_get(((void*)(&_virtual_method_tmp_)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_856).locale), INT64(0), NULL), (chpl_macro_tmp_856).addr, sizeof(int32_t), -1, INT64(1), INT64(278), "/home/kp167/chap-svn/modules/internal/ChapelDistribution.chpl");
      ((void(*)(chpl____wide_BaseArr* const))chpl_vmtable[((INT64(8) * _virtual_method_tmp_) + INT64(7))])(this8);
    }
  }
  call_tmp11 = (ret2 == INT64(0));
  if (call_tmp11) {
    chpl_check_nil((this8)->addr, INT64(282), "/home/kp167/chap-svn/modules/internal/ChapelDistribution.chpl");
    chpl_macro_tmp_857.locale = (this8)->locale;
    chpl_macro_tmp_857.addr = &(((object)((this8)->addr))->chpl__cid);
    chpl_gen_comm_get(((void*)(&_virtual_method_tmp_2)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_857).locale), INT64(0), NULL), (chpl_macro_tmp_857).addr, sizeof(int32_t), -1, INT64(1), INT64(282), "/home/kp167/chap-svn/modules/internal/ChapelDistribution.chpl");
    call_tmp12 = ((chpl____wide_BaseDom(*)(chpl____wide_BaseArr* const))chpl_vmtable[((INT64(8) * _virtual_method_tmp_2) + INT64(5))])(this8);
    call_tmp13 = (&call_tmp12)->locale;
    rvfDerefTmp = call_tmp12;
    chpl_here_alloc_size3 = sizeof(chpl__class_localson_fn42_object);
    chpl_here_alloc_tmp3 = chpl_here_alloc(chpl_here_alloc_size3, INT16(36));
    _args_foron_fn3 = ((_class_localson_fn42)(chpl_here_alloc_tmp3));
    chpl_check_nil(_args_foron_fn3, INT64(283), "/home/kp167/chap-svn/modules/internal/ChapelDistribution.chpl");
    (_args_foron_fn3)->_0__tmp = call_tmp13;
    chpl_check_nil(_args_foron_fn3, INT64(283), "/home/kp167/chap-svn/modules/internal/ChapelDistribution.chpl");
    (_args_foron_fn3)->_1_rvfDerefTmp = rvfDerefTmp;
    chpl_check_nil(_args_foron_fn3, INT64(283), "/home/kp167/chap-svn/modules/internal/ChapelDistribution.chpl");
    (_args_foron_fn3)->_2_this = *(this8);
    /*** wrapon_fn42 ***/ chpl_executeOn(&call_tmp13, INT32(47), _args_foron_fn3, sizeof(chpl__class_localson_fn42_object), INT64(283), "/home/kp167/chap-svn/modules/internal/ChapelDistribution.chpl");
    chpl_here_free(((void*)(_args_foron_fn3)));
  }
  _ref_tmp_4 = &ret;
  *(_ref_tmp_4) = ret2;
  return ret;
}

/* ChapelDistribution.chpl:272 */
static void on_fn40(chpl____wide_BaseArr* const this8) {
  int64_t wrap_call_tmp;
  chpl____wide_BaseArr call_tmp = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_bool call_tmp2;
  chpl____wide__ref_BaseArr call_tmp3 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_BaseArr call_tmp4 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_bool _dynamic_dispatch_tmp_;
  chpl____wide_DefaultRectangularArr_locale_1_int64_t_F _cast_tmp_ = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_BaseArr _parent_destructor_tmp_ = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_atomic_refcnt _field_destructor_tmp_ = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_atomic_int64 _field_destructor_tmp_2 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_atomic_int_least64_t call_tmp5 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_atomic_int_least64_t T = NULL;
  chpl_bool _dynamic_dispatch_tmp_2;
  chpl____wide_DefaultRectangularArr_localesSignal_1_int64_t_F _cast_tmp_2 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_BaseArr _parent_destructor_tmp_2 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_atomic_refcnt _field_destructor_tmp_3 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_atomic_int64 _field_destructor_tmp_4 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_atomic_int_least64_t call_tmp6 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_atomic_int_least64_t T2 = NULL;
  chpl_bool _dynamic_dispatch_tmp_3;
  chpl____wide_DefaultRectangularArr_chpl_TableEntry_chpl_taskID_t_1_int64_t_F _cast_tmp_3 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_BaseArr _parent_destructor_tmp_3 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_atomic_refcnt _field_destructor_tmp_5 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_atomic_int64 _field_destructor_tmp_6 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_atomic_int_least64_t call_tmp7 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_atomic_int_least64_t T3 = NULL;
  chpl_bool _dynamic_dispatch_tmp_4;
  chpl____wide_DefaultRectangularArr_chpldev_Task_1_int64_t_F _cast_tmp_4 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_BaseArr _parent_destructor_tmp_4 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_atomic_refcnt _field_destructor_tmp_7 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_atomic_int64 _field_destructor_tmp_8 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_atomic_int_least64_t call_tmp8 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_atomic_int_least64_t T4 = NULL;
  chpl_bool _dynamic_dispatch_tmp_5;
  chpl____wide_DefaultAssociativeArr_chpldev_Task_chpl_taskID_t_F _cast_tmp_5 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_DefaultRectangularArr_chpldev_Task_1_int64_t_F _field_destructor_tmp_9 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_DefaultRectangularDom_1_int64_t_F _field_destructor_tmp_10 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_DefaultRectangularArr_chpldev_Task_1_int64_t_F _field_destructor_tmp_11 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_BaseArr _parent_destructor_tmp_5 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_atomic_refcnt _field_destructor_tmp_12 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_atomic_int64 _field_destructor_tmp_13 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_atomic_int_least64_t call_tmp9 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_atomic_int_least64_t T5 = NULL;
  chpl____wide__ref_atomic_refcnt _field_destructor_tmp_14 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_atomic_int64 _field_destructor_tmp_15 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_atomic_int_least64_t call_tmp10 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_atomic_int_least64_t T6 = NULL;
  chpl_localeID_t call_tmp11;
  chpl____wide_BaseArr T7 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_BaseArr rvfDerefTmp = {CHPL_LOCALEID_T_INIT, NULL};
  _class_localson_fn41 _args_foron_fn = NULL;
  int64_t chpl_here_alloc_size;
  chpl_opaque chpl_here_alloc_tmp;
  chpl____wide__ref_BaseArr chpl_macro_tmp_858;
  chpl____wide__ref_BaseArr chpl_macro_tmp_859;
  chpl____wide__ref_BaseArr chpl_macro_tmp_860;
  chpl____wide__ref_int32_t chpl_macro_tmp_861;
  int32_t chpl_macro_tmp_862;
  chpl____wide_DefaultRectangularArr_locale_1_int64_t_F chpl_macro_tmp_863;
  chpl____wide_BaseArr chpl_macro_tmp_864;
  chpl____wide__ref_atomic_refcnt chpl_macro_tmp_865;
  chpl____wide__ref_atomic_int64 chpl_macro_tmp_866;
  chpl____wide__ref_atomic_int_least64_t chpl_macro_tmp_867;
  chpl____wide__ref_atomic_int_least64_t chpl_macro_tmp_868;
  chpl____wide__ref_int32_t chpl_macro_tmp_869;
  int32_t chpl_macro_tmp_870;
  chpl____wide_DefaultRectangularArr_localesSignal_1_int64_t_F chpl_macro_tmp_871;
  chpl____wide_BaseArr chpl_macro_tmp_872;
  chpl____wide__ref_atomic_refcnt chpl_macro_tmp_873;
  chpl____wide__ref_atomic_int64 chpl_macro_tmp_874;
  chpl____wide__ref_atomic_int_least64_t chpl_macro_tmp_875;
  chpl____wide__ref_atomic_int_least64_t chpl_macro_tmp_876;
  chpl____wide__ref_int32_t chpl_macro_tmp_877;
  int32_t chpl_macro_tmp_878;
  chpl____wide_DefaultRectangularArr_chpl_TableEntry_chpl_taskID_t_1_int64_t_F chpl_macro_tmp_879;
  chpl____wide_BaseArr chpl_macro_tmp_880;
  chpl____wide__ref_atomic_refcnt chpl_macro_tmp_881;
  chpl____wide__ref_atomic_int64 chpl_macro_tmp_882;
  chpl____wide__ref_atomic_int_least64_t chpl_macro_tmp_883;
  chpl____wide__ref_atomic_int_least64_t chpl_macro_tmp_884;
  chpl____wide__ref_int32_t chpl_macro_tmp_885;
  int32_t chpl_macro_tmp_886;
  chpl____wide_DefaultRectangularArr_chpldev_Task_1_int64_t_F chpl_macro_tmp_887;
  chpl____wide_BaseArr chpl_macro_tmp_888;
  chpl____wide__ref_atomic_refcnt chpl_macro_tmp_889;
  chpl____wide__ref_atomic_int64 chpl_macro_tmp_890;
  chpl____wide__ref_atomic_int_least64_t chpl_macro_tmp_891;
  chpl____wide__ref_atomic_int_least64_t chpl_macro_tmp_892;
  chpl____wide__ref_int32_t chpl_macro_tmp_893;
  int32_t chpl_macro_tmp_894;
  chpl____wide_DefaultAssociativeArr_chpldev_Task_chpl_taskID_t_F chpl_macro_tmp_895;
  chpl____wide__ref_DefaultRectangularArr_chpldev_Task_1_int64_t_F chpl_macro_tmp_896;
  chpl____wide__ref_DefaultRectangularDom_1_int64_t_F chpl_macro_tmp_897;
  chpl____wide__ref_DefaultRectangularArr_chpldev_Task_1_int64_t_F chpl_macro_tmp_898;
  chpl____wide_BaseArr chpl_macro_tmp_899;
  chpl____wide__ref_atomic_refcnt chpl_macro_tmp_900;
  chpl____wide__ref_atomic_int64 chpl_macro_tmp_901;
  chpl____wide__ref_atomic_int_least64_t chpl_macro_tmp_902;
  chpl____wide__ref_atomic_int_least64_t chpl_macro_tmp_903;
  chpl____wide__ref_atomic_refcnt chpl_macro_tmp_904;
  chpl____wide__ref_atomic_int64 chpl_macro_tmp_905;
  chpl____wide__ref_atomic_int_least64_t chpl_macro_tmp_906;
  chpl____wide__ref_atomic_int_least64_t chpl_macro_tmp_907;
  chpl____wide__ref_BaseArr chpl_macro_tmp_908;
  chpl_check_nil((this8)->addr, INT64(273), "/home/kp167/chap-svn/modules/internal/ChapelDistribution.chpl");
  chpl_macro_tmp_858.locale = (this8)->locale;
  chpl_macro_tmp_858.addr = &(((this8)->addr)->_arrAlias);
  chpl_gen_comm_get(((void*)(&call_tmp)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_858).locale), INT64(0), NULL), (chpl_macro_tmp_858).addr, sizeof(chpl____wide_BaseArr), -1, INT64(1), INT64(273), "/home/kp167/chap-svn/modules/internal/ChapelDistribution.chpl");
  chpl_check_nil((&call_tmp)->addr, INT64(273), "/home/kp167/chap-svn/modules/internal/ChapelDistribution.chpl");
  wrap_call_tmp = destroyArr(&call_tmp);
  call_tmp2 = (wrap_call_tmp == INT64(0));
  if (call_tmp2) {
    chpl_check_nil((this8)->addr, INT64(275), "/home/kp167/chap-svn/modules/internal/ChapelDistribution.chpl");
    chpl_macro_tmp_859.locale = (this8)->locale;
    chpl_macro_tmp_859.addr = &(((this8)->addr)->_arrAlias);
    call_tmp3 = chpl_macro_tmp_859;
    chpl_check_nil((this8)->addr, INT64(275), "/home/kp167/chap-svn/modules/internal/ChapelDistribution.chpl");
    chpl_macro_tmp_860.locale = (this8)->locale;
    chpl_macro_tmp_860.addr = &(((this8)->addr)->_arrAlias);
    chpl_gen_comm_get(((void*)(&call_tmp4)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_860).locale), INT64(0), NULL), (chpl_macro_tmp_860).addr, sizeof(chpl____wide_BaseArr), -1, INT64(1), INT64(275), "/home/kp167/chap-svn/modules/internal/ChapelDistribution.chpl");
    chpl_check_nil((&call_tmp4)->addr, INT64(275), "/home/kp167/chap-svn/modules/internal/ChapelDistribution.chpl");
    chpl_macro_tmp_861.locale = (&call_tmp4)->locale;
    chpl_macro_tmp_861.addr = &(((object)((&call_tmp4)->addr))->chpl__cid);
    chpl_gen_comm_get(((void*)(&chpl_macro_tmp_862)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_861).locale), INT64(0), NULL), (chpl_macro_tmp_861).addr, sizeof(int32_t), -1, INT64(1), INT64(275), "/home/kp167/chap-svn/modules/internal/ChapelDistribution.chpl");
    _dynamic_dispatch_tmp_ = (chpl_macro_tmp_862 == chpl__cid_DefaultRectangularArr_locale_1_int64_t_F);
    if (_dynamic_dispatch_tmp_) {
      chpl_macro_tmp_863.locale = (&call_tmp4)->locale;
      chpl_macro_tmp_863.addr = ((DefaultRectangularArr_locale_1_int64_t_F)((&call_tmp4)->addr));
      _cast_tmp_ = chpl_macro_tmp_863;
      chpl_macro_tmp_864.locale = (&_cast_tmp_)->locale;
      chpl_macro_tmp_864.addr = ((BaseArr)((&_cast_tmp_)->addr));
      _parent_destructor_tmp_ = chpl_macro_tmp_864;
      chpl_check_nil((&_parent_destructor_tmp_)->addr, INT64(275), "/home/kp167/chap-svn/modules/internal/ChapelDistribution.chpl");
      chpl_macro_tmp_865.locale = (&_parent_destructor_tmp_)->locale;
      chpl_macro_tmp_865.addr = &(((&_parent_destructor_tmp_)->addr)->_arrCnt);
      _field_destructor_tmp_ = chpl_macro_tmp_865;
      chpl_macro_tmp_866.locale = (_field_destructor_tmp_).locale;
      chpl_macro_tmp_866.addr = &(((_field_destructor_tmp_).addr)->_cnt);
      _field_destructor_tmp_2 = chpl_macro_tmp_866;
      chpl_macro_tmp_867.locale = (_field_destructor_tmp_2).locale;
      chpl_macro_tmp_867.addr = &(((_field_destructor_tmp_2).addr)->_v);
      call_tmp5 = chpl_macro_tmp_867;
      T = (&call_tmp5)->addr;
      atomic_destroy_int_least64_t(T);
      chpl_macro_tmp_868.locale = chpl_gen_getLocaleID();
      chpl_macro_tmp_868.addr = T;
      call_tmp5 = chpl_macro_tmp_868;
    } else {
      chpl_check_nil((&call_tmp4)->addr, INT64(275), "/home/kp167/chap-svn/modules/internal/ChapelDistribution.chpl");
      chpl_macro_tmp_869.locale = (&call_tmp4)->locale;
      chpl_macro_tmp_869.addr = &(((object)((&call_tmp4)->addr))->chpl__cid);
      chpl_gen_comm_get(((void*)(&chpl_macro_tmp_870)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_869).locale), INT64(0), NULL), (chpl_macro_tmp_869).addr, sizeof(int32_t), -1, INT64(1), INT64(275), "/home/kp167/chap-svn/modules/internal/ChapelDistribution.chpl");
      _dynamic_dispatch_tmp_2 = (chpl_macro_tmp_870 == chpl__cid_DefaultRectangularArr_localesSignal_1_int64_t_F);
      if (_dynamic_dispatch_tmp_2) {
        chpl_macro_tmp_871.locale = (&call_tmp4)->locale;
        chpl_macro_tmp_871.addr = ((DefaultRectangularArr_localesSignal_1_int64_t_F)((&call_tmp4)->addr));
        _cast_tmp_2 = chpl_macro_tmp_871;
        chpl_macro_tmp_872.locale = (&_cast_tmp_2)->locale;
        chpl_macro_tmp_872.addr = ((BaseArr)((&_cast_tmp_2)->addr));
        _parent_destructor_tmp_2 = chpl_macro_tmp_872;
        chpl_check_nil((&_parent_destructor_tmp_2)->addr, INT64(275), "/home/kp167/chap-svn/modules/internal/ChapelDistribution.chpl");
        chpl_macro_tmp_873.locale = (&_parent_destructor_tmp_2)->locale;
        chpl_macro_tmp_873.addr = &(((&_parent_destructor_tmp_2)->addr)->_arrCnt);
        _field_destructor_tmp_3 = chpl_macro_tmp_873;
        chpl_macro_tmp_874.locale = (_field_destructor_tmp_3).locale;
        chpl_macro_tmp_874.addr = &(((_field_destructor_tmp_3).addr)->_cnt);
        _field_destructor_tmp_4 = chpl_macro_tmp_874;
        chpl_macro_tmp_875.locale = (_field_destructor_tmp_4).locale;
        chpl_macro_tmp_875.addr = &(((_field_destructor_tmp_4).addr)->_v);
        call_tmp6 = chpl_macro_tmp_875;
        T2 = (&call_tmp6)->addr;
        atomic_destroy_int_least64_t(T2);
        chpl_macro_tmp_876.locale = chpl_gen_getLocaleID();
        chpl_macro_tmp_876.addr = T2;
        call_tmp6 = chpl_macro_tmp_876;
      } else {
        chpl_check_nil((&call_tmp4)->addr, INT64(275), "/home/kp167/chap-svn/modules/internal/ChapelDistribution.chpl");
        chpl_macro_tmp_877.locale = (&call_tmp4)->locale;
        chpl_macro_tmp_877.addr = &(((object)((&call_tmp4)->addr))->chpl__cid);
        chpl_gen_comm_get(((void*)(&chpl_macro_tmp_878)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_877).locale), INT64(0), NULL), (chpl_macro_tmp_877).addr, sizeof(int32_t), -1, INT64(1), INT64(275), "/home/kp167/chap-svn/modules/internal/ChapelDistribution.chpl");
        _dynamic_dispatch_tmp_3 = (chpl_macro_tmp_878 == chpl__cid_DefaultRectangularArr_chpl_TableEntry_chpl_taskID_t_1_int64_t_F);
        if (_dynamic_dispatch_tmp_3) {
          chpl_macro_tmp_879.locale = (&call_tmp4)->locale;
          chpl_macro_tmp_879.addr = ((DefaultRectangularArr_chpl_TableEntry_chpl_taskID_t_1_int64_t_F)((&call_tmp4)->addr));
          _cast_tmp_3 = chpl_macro_tmp_879;
          chpl_macro_tmp_880.locale = (&_cast_tmp_3)->locale;
          chpl_macro_tmp_880.addr = ((BaseArr)((&_cast_tmp_3)->addr));
          _parent_destructor_tmp_3 = chpl_macro_tmp_880;
          chpl_check_nil((&_parent_destructor_tmp_3)->addr, INT64(275), "/home/kp167/chap-svn/modules/internal/ChapelDistribution.chpl");
          chpl_macro_tmp_881.locale = (&_parent_destructor_tmp_3)->locale;
          chpl_macro_tmp_881.addr = &(((&_parent_destructor_tmp_3)->addr)->_arrCnt);
          _field_destructor_tmp_5 = chpl_macro_tmp_881;
          chpl_macro_tmp_882.locale = (_field_destructor_tmp_5).locale;
          chpl_macro_tmp_882.addr = &(((_field_destructor_tmp_5).addr)->_cnt);
          _field_destructor_tmp_6 = chpl_macro_tmp_882;
          chpl_macro_tmp_883.locale = (_field_destructor_tmp_6).locale;
          chpl_macro_tmp_883.addr = &(((_field_destructor_tmp_6).addr)->_v);
          call_tmp7 = chpl_macro_tmp_883;
          T3 = (&call_tmp7)->addr;
          atomic_destroy_int_least64_t(T3);
          chpl_macro_tmp_884.locale = chpl_gen_getLocaleID();
          chpl_macro_tmp_884.addr = T3;
          call_tmp7 = chpl_macro_tmp_884;
        } else {
          chpl_check_nil((&call_tmp4)->addr, INT64(275), "/home/kp167/chap-svn/modules/internal/ChapelDistribution.chpl");
          chpl_macro_tmp_885.locale = (&call_tmp4)->locale;
          chpl_macro_tmp_885.addr = &(((object)((&call_tmp4)->addr))->chpl__cid);
          chpl_gen_comm_get(((void*)(&chpl_macro_tmp_886)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_885).locale), INT64(0), NULL), (chpl_macro_tmp_885).addr, sizeof(int32_t), -1, INT64(1), INT64(275), "/home/kp167/chap-svn/modules/internal/ChapelDistribution.chpl");
          _dynamic_dispatch_tmp_4 = (chpl_macro_tmp_886 == chpl__cid_DefaultRectangularArr_chpldev_Task_1_int64_t_F);
          if (_dynamic_dispatch_tmp_4) {
            chpl_macro_tmp_887.locale = (&call_tmp4)->locale;
            chpl_macro_tmp_887.addr = ((DefaultRectangularArr_chpldev_Task_1_int64_t_F)((&call_tmp4)->addr));
            _cast_tmp_4 = chpl_macro_tmp_887;
            chpl_macro_tmp_888.locale = (&_cast_tmp_4)->locale;
            chpl_macro_tmp_888.addr = ((BaseArr)((&_cast_tmp_4)->addr));
            _parent_destructor_tmp_4 = chpl_macro_tmp_888;
            chpl_check_nil((&_parent_destructor_tmp_4)->addr, INT64(275), "/home/kp167/chap-svn/modules/internal/ChapelDistribution.chpl");
            chpl_macro_tmp_889.locale = (&_parent_destructor_tmp_4)->locale;
            chpl_macro_tmp_889.addr = &(((&_parent_destructor_tmp_4)->addr)->_arrCnt);
            _field_destructor_tmp_7 = chpl_macro_tmp_889;
            chpl_macro_tmp_890.locale = (_field_destructor_tmp_7).locale;
            chpl_macro_tmp_890.addr = &(((_field_destructor_tmp_7).addr)->_cnt);
            _field_destructor_tmp_8 = chpl_macro_tmp_890;
            chpl_macro_tmp_891.locale = (_field_destructor_tmp_8).locale;
            chpl_macro_tmp_891.addr = &(((_field_destructor_tmp_8).addr)->_v);
            call_tmp8 = chpl_macro_tmp_891;
            T4 = (&call_tmp8)->addr;
            atomic_destroy_int_least64_t(T4);
            chpl_macro_tmp_892.locale = chpl_gen_getLocaleID();
            chpl_macro_tmp_892.addr = T4;
            call_tmp8 = chpl_macro_tmp_892;
          } else {
            chpl_check_nil((&call_tmp4)->addr, INT64(275), "/home/kp167/chap-svn/modules/internal/ChapelDistribution.chpl");
            chpl_macro_tmp_893.locale = (&call_tmp4)->locale;
            chpl_macro_tmp_893.addr = &(((object)((&call_tmp4)->addr))->chpl__cid);
            chpl_gen_comm_get(((void*)(&chpl_macro_tmp_894)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_893).locale), INT64(0), NULL), (chpl_macro_tmp_893).addr, sizeof(int32_t), -1, INT64(1), INT64(275), "/home/kp167/chap-svn/modules/internal/ChapelDistribution.chpl");
            _dynamic_dispatch_tmp_5 = (chpl_macro_tmp_894 == chpl__cid_DefaultAssociativeArr_chpldev_Task_chpl_taskID_t_F);
            if (_dynamic_dispatch_tmp_5) {
              chpl_macro_tmp_895.locale = (&call_tmp4)->locale;
              chpl_macro_tmp_895.addr = ((DefaultAssociativeArr_chpldev_Task_chpl_taskID_t_F)((&call_tmp4)->addr));
              _cast_tmp_5 = chpl_macro_tmp_895;
              chpl_check_nil((&_cast_tmp_5)->addr, INT64(275), "/home/kp167/chap-svn/modules/internal/ChapelDistribution.chpl");
              chpl_macro_tmp_896.locale = (&_cast_tmp_5)->locale;
              chpl_macro_tmp_896.addr = &(((&_cast_tmp_5)->addr)->tmpTable);
              chpl_gen_comm_get(((void*)(&_field_destructor_tmp_9)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_896).locale), INT64(0), NULL), (chpl_macro_tmp_896).addr, sizeof(chpl____wide_DefaultRectangularArr_chpldev_Task_1_int64_t_F), -1, INT64(1), INT64(275), "/home/kp167/chap-svn/modules/internal/ChapelDistribution.chpl");
              chpl__autoDestroy7(&_field_destructor_tmp_9);
              chpl_check_nil((&_cast_tmp_5)->addr, INT64(275), "/home/kp167/chap-svn/modules/internal/ChapelDistribution.chpl");
              chpl_macro_tmp_897.locale = (&_cast_tmp_5)->locale;
              chpl_macro_tmp_897.addr = &(((&_cast_tmp_5)->addr)->tmpDom);
              chpl_gen_comm_get(((void*)(&_field_destructor_tmp_10)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_897).locale), INT64(0), NULL), (chpl_macro_tmp_897).addr, sizeof(chpl____wide_DefaultRectangularDom_1_int64_t_F), -1, INT64(1), INT64(275), "/home/kp167/chap-svn/modules/internal/ChapelDistribution.chpl");
              chpl__autoDestroy2(&_field_destructor_tmp_10);
              chpl_check_nil((&_cast_tmp_5)->addr, INT64(275), "/home/kp167/chap-svn/modules/internal/ChapelDistribution.chpl");
              chpl_macro_tmp_898.locale = (&_cast_tmp_5)->locale;
              chpl_macro_tmp_898.addr = &(((&_cast_tmp_5)->addr)->data);
              chpl_gen_comm_get(((void*)(&_field_destructor_tmp_11)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_898).locale), INT64(0), NULL), (chpl_macro_tmp_898).addr, sizeof(chpl____wide_DefaultRectangularArr_chpldev_Task_1_int64_t_F), -1, INT64(1), INT64(275), "/home/kp167/chap-svn/modules/internal/ChapelDistribution.chpl");
              chpl__autoDestroy7(&_field_destructor_tmp_11);
              chpl_macro_tmp_899.locale = (&_cast_tmp_5)->locale;
              chpl_macro_tmp_899.addr = ((BaseArr)((&_cast_tmp_5)->addr));
              _parent_destructor_tmp_5 = chpl_macro_tmp_899;
              chpl_check_nil((&_parent_destructor_tmp_5)->addr, INT64(275), "/home/kp167/chap-svn/modules/internal/ChapelDistribution.chpl");
              chpl_macro_tmp_900.locale = (&_parent_destructor_tmp_5)->locale;
              chpl_macro_tmp_900.addr = &(((&_parent_destructor_tmp_5)->addr)->_arrCnt);
              _field_destructor_tmp_12 = chpl_macro_tmp_900;
              chpl_macro_tmp_901.locale = (_field_destructor_tmp_12).locale;
              chpl_macro_tmp_901.addr = &(((_field_destructor_tmp_12).addr)->_cnt);
              _field_destructor_tmp_13 = chpl_macro_tmp_901;
              chpl_macro_tmp_902.locale = (_field_destructor_tmp_13).locale;
              chpl_macro_tmp_902.addr = &(((_field_destructor_tmp_13).addr)->_v);
              call_tmp9 = chpl_macro_tmp_902;
              T5 = (&call_tmp9)->addr;
              atomic_destroy_int_least64_t(T5);
              chpl_macro_tmp_903.locale = chpl_gen_getLocaleID();
              chpl_macro_tmp_903.addr = T5;
              call_tmp9 = chpl_macro_tmp_903;
            } else {
              chpl_check_nil((&call_tmp4)->addr, INT64(275), "/home/kp167/chap-svn/modules/internal/ChapelDistribution.chpl");
              chpl_macro_tmp_904.locale = (&call_tmp4)->locale;
              chpl_macro_tmp_904.addr = &(((&call_tmp4)->addr)->_arrCnt);
              _field_destructor_tmp_14 = chpl_macro_tmp_904;
              chpl_macro_tmp_905.locale = (_field_destructor_tmp_14).locale;
              chpl_macro_tmp_905.addr = &(((_field_destructor_tmp_14).addr)->_cnt);
              _field_destructor_tmp_15 = chpl_macro_tmp_905;
              chpl_macro_tmp_906.locale = (_field_destructor_tmp_15).locale;
              chpl_macro_tmp_906.addr = &(((_field_destructor_tmp_15).addr)->_v);
              call_tmp10 = chpl_macro_tmp_906;
              T6 = (&call_tmp10)->addr;
              atomic_destroy_int_least64_t(T6);
              chpl_macro_tmp_907.locale = chpl_gen_getLocaleID();
              chpl_macro_tmp_907.addr = T6;
              call_tmp10 = chpl_macro_tmp_907;
            }
          }
        }
      }
    }
    chpl_gen_comm_get(((void*)(&T7)), chpl_nodeFromLocaleID(&((call_tmp3).locale), INT64(0), NULL), (call_tmp3).addr, sizeof(chpl____wide_BaseArr), -1, INT64(1), INT64(275), "/home/kp167/chap-svn/modules/internal/ChapelDistribution.chpl");
    call_tmp11 = (&T7)->locale;
    chpl_check_nil((this8)->addr, INT64(275), "/home/kp167/chap-svn/modules/internal/ChapelDistribution.chpl");
    chpl_macro_tmp_908.locale = (this8)->locale;
    chpl_macro_tmp_908.addr = &(((this8)->addr)->_arrAlias);
    chpl_gen_comm_get(((void*)(&rvfDerefTmp)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_908).locale), INT64(0), NULL), (chpl_macro_tmp_908).addr, sizeof(chpl____wide_BaseArr), -1, INT64(1), INT64(275), "/home/kp167/chap-svn/modules/internal/ChapelDistribution.chpl");
    chpl_here_alloc_size = sizeof(chpl__class_localson_fn41_object);
    chpl_here_alloc_tmp = chpl_here_alloc(chpl_here_alloc_size, INT16(36));
    _args_foron_fn = ((_class_localson_fn41)(chpl_here_alloc_tmp));
    chpl_check_nil(_args_foron_fn, INT64(275), "/home/kp167/chap-svn/modules/internal/ChapelDistribution.chpl");
    (_args_foron_fn)->_0__tmp = call_tmp11;
    chpl_check_nil(_args_foron_fn, INT64(275), "/home/kp167/chap-svn/modules/internal/ChapelDistribution.chpl");
    (_args_foron_fn)->_1_rvfDerefTmp = rvfDerefTmp;
    /*** wrapon_fn41 ***/ chpl_executeOn(&call_tmp11, INT32(46), _args_foron_fn, sizeof(chpl__class_localson_fn41_object), INT64(275), "/home/kp167/chap-svn/modules/internal/ChapelDistribution.chpl");
    chpl_here_free(((void*)(_args_foron_fn)));
  }
  return;
}

/* ChapelDistribution.chpl:272 */
static void wrapon_fn40(_class_localson_fn40 c) {
  chpl____wide_BaseArr _1_this = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_check_nil(c, INT64(272), "/home/kp167/chap-svn/modules/internal/ChapelDistribution.chpl");
  _1_this = (c)->_1_this;
  on_fn40(&_1_this);
  return;
}

/* ChapelDistribution.chpl:275 */
static void on_fn41(chpl____wide_BaseArr* const delete_tmp) {
  chpl_opaque call_tmp;
  call_tmp = ((void*)((delete_tmp)->addr));
  chpl_here_free(call_tmp);
  return;
}

/* ChapelDistribution.chpl:275 */
static void wrapon_fn41(_class_localson_fn41 c) {
  chpl____wide_BaseArr _1_rvfDerefTmp = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_check_nil(c, INT64(275), "/home/kp167/chap-svn/modules/internal/ChapelDistribution.chpl");
  _1_rvfDerefTmp = (c)->_1_rvfDerefTmp;
  on_fn41(&_1_rvfDerefTmp);
  return;
}

/* ChapelDistribution.chpl:283 */
static void on_fn42(chpl____wide_BaseDom* const dom, chpl____wide_BaseArr* const this8) {
  chpl_localeID_t call_tmp;
  _class_localson_fn34 _args_foron_fn = NULL;
  int64_t chpl_here_alloc_size;
  chpl_opaque chpl_here_alloc_tmp;
  int64_t call_tmp2;
  chpl_bool call_tmp3;
  chpl____wide_BaseDom delete_tmp = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_bool _dynamic_dispatch_tmp_;
  chpl____wide_BaseRectangularDom _cast_tmp_ = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_bool _dynamic_dispatch_tmp_2;
  chpl____wide_DefaultRectangularDom_1_int64_t_F _cast_tmp_2 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_BaseRectangularDom _parent_destructor_tmp_ = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_BaseDom _parent_destructor_tmp_2 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_atomicflag _field_destructor_tmp_ = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_atomic_flag call_tmp4 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_atomic_flag T = NULL;
  chpl____wide__ref_atomic_refcnt _field_destructor_tmp_2 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_atomic_int64 _field_destructor_tmp_3 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_atomic_int_least64_t call_tmp5 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_atomic_int_least64_t T2 = NULL;
  chpl____wide_BaseDom _parent_destructor_tmp_3 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_atomicflag _field_destructor_tmp_4 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_atomic_flag call_tmp6 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_atomic_flag T3 = NULL;
  chpl____wide__ref_atomic_refcnt _field_destructor_tmp_5 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_atomic_int64 _field_destructor_tmp_6 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_atomic_int_least64_t call_tmp7 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_atomic_int_least64_t T4 = NULL;
  chpl_bool _dynamic_dispatch_tmp_3;
  chpl____wide_DefaultRectangularDom_1_int64_t_F _cast_tmp_3 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_BaseRectangularDom _parent_destructor_tmp_4 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_BaseDom _parent_destructor_tmp_5 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_atomicflag _field_destructor_tmp_7 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_atomic_flag call_tmp8 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_atomic_flag T5 = NULL;
  chpl____wide__ref_atomic_refcnt _field_destructor_tmp_8 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_atomic_int64 _field_destructor_tmp_9 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_atomic_int_least64_t call_tmp9 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_atomic_int_least64_t T6 = NULL;
  chpl_bool _dynamic_dispatch_tmp_4;
  chpl____wide_BaseAssociativeDom _cast_tmp_4 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_bool _dynamic_dispatch_tmp_5;
  chpl____wide_DefaultAssociativeDom_chpl_taskID_t_F _cast_tmp_5 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_DefaultRectangularArr_chpl_TableEntry_chpl_taskID_t_1_int64_t_F _field_destructor_tmp_10 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_DefaultRectangularDom_1_int64_t_F _field_destructor_tmp_11 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_atomicflag _field_destructor_tmp_12 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_atomic_flag call_tmp10 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_atomic_flag T7 = NULL;
  chpl____wide__ref_atomic_int64 _field_destructor_tmp_13 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_atomic_int_least64_t call_tmp11 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_atomic_int_least64_t T8 = NULL;
  chpl____wide_BaseAssociativeDom _parent_destructor_tmp_6 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_BaseDom _parent_destructor_tmp_7 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_atomicflag _field_destructor_tmp_14 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_atomic_flag call_tmp12 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_atomic_flag T9 = NULL;
  chpl____wide__ref_atomic_refcnt _field_destructor_tmp_15 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_atomic_int64 _field_destructor_tmp_16 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_atomic_int_least64_t call_tmp13 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_atomic_int_least64_t T10 = NULL;
  chpl____wide_BaseDom _parent_destructor_tmp_8 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_atomicflag _field_destructor_tmp_17 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_atomic_flag call_tmp14 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_atomic_flag T11 = NULL;
  chpl____wide__ref_atomic_refcnt _field_destructor_tmp_18 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_atomic_int64 _field_destructor_tmp_19 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_atomic_int_least64_t call_tmp15 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_atomic_int_least64_t T12 = NULL;
  chpl_bool _dynamic_dispatch_tmp_6;
  chpl____wide_DefaultAssociativeDom_chpl_taskID_t_F _cast_tmp_6 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_DefaultRectangularArr_chpl_TableEntry_chpl_taskID_t_1_int64_t_F _field_destructor_tmp_20 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_DefaultRectangularDom_1_int64_t_F _field_destructor_tmp_21 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_atomicflag _field_destructor_tmp_22 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_atomic_flag call_tmp16 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_atomic_flag T13 = NULL;
  chpl____wide__ref_atomic_int64 _field_destructor_tmp_23 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_atomic_int_least64_t call_tmp17 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_atomic_int_least64_t T14 = NULL;
  chpl____wide_BaseAssociativeDom _parent_destructor_tmp_9 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_BaseDom _parent_destructor_tmp_10 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_atomicflag _field_destructor_tmp_24 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_atomic_flag call_tmp18 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_atomic_flag T15 = NULL;
  chpl____wide__ref_atomic_refcnt _field_destructor_tmp_25 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_atomic_int64 _field_destructor_tmp_26 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_atomic_int_least64_t call_tmp19 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_atomic_int_least64_t T16 = NULL;
  chpl____wide__ref_atomicflag _field_destructor_tmp_27 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_atomic_flag call_tmp20 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_atomic_flag T17 = NULL;
  chpl____wide__ref_atomic_refcnt _field_destructor_tmp_28 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_atomic_int64 _field_destructor_tmp_29 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_atomic_int_least64_t call_tmp21 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_atomic_int_least64_t T18 = NULL;
  chpl_localeID_t call_tmp22;
  chpl____wide_BaseDom rvfDerefTmp = {CHPL_LOCALEID_T_INIT, NULL};
  _class_localson_fn43 _args_foron_fn2 = NULL;
  int64_t chpl_here_alloc_size2;
  chpl_opaque chpl_here_alloc_tmp2;
  chpl____wide__ref_int32_t chpl_macro_tmp_909;
  int32_t chpl_macro_tmp_910;
  chpl____wide_BaseRectangularDom chpl_macro_tmp_911;
  chpl____wide__ref_int32_t chpl_macro_tmp_912;
  int32_t chpl_macro_tmp_913;
  chpl____wide_DefaultRectangularDom_1_int64_t_F chpl_macro_tmp_914;
  chpl____wide_BaseRectangularDom chpl_macro_tmp_915;
  chpl____wide_BaseDom chpl_macro_tmp_916;
  chpl____wide__ref_atomicflag chpl_macro_tmp_917;
  chpl____wide__ref_atomic_flag chpl_macro_tmp_918;
  chpl____wide__ref_atomic_flag chpl_macro_tmp_919;
  chpl____wide__ref_atomic_refcnt chpl_macro_tmp_920;
  chpl____wide__ref_atomic_int64 chpl_macro_tmp_921;
  chpl____wide__ref_atomic_int_least64_t chpl_macro_tmp_922;
  chpl____wide__ref_atomic_int_least64_t chpl_macro_tmp_923;
  chpl____wide_BaseDom chpl_macro_tmp_924;
  chpl____wide__ref_atomicflag chpl_macro_tmp_925;
  chpl____wide__ref_atomic_flag chpl_macro_tmp_926;
  chpl____wide__ref_atomic_flag chpl_macro_tmp_927;
  chpl____wide__ref_atomic_refcnt chpl_macro_tmp_928;
  chpl____wide__ref_atomic_int64 chpl_macro_tmp_929;
  chpl____wide__ref_atomic_int_least64_t chpl_macro_tmp_930;
  chpl____wide__ref_atomic_int_least64_t chpl_macro_tmp_931;
  chpl____wide__ref_int32_t chpl_macro_tmp_932;
  int32_t chpl_macro_tmp_933;
  chpl____wide_DefaultRectangularDom_1_int64_t_F chpl_macro_tmp_934;
  chpl____wide_BaseRectangularDom chpl_macro_tmp_935;
  chpl____wide_BaseDom chpl_macro_tmp_936;
  chpl____wide__ref_atomicflag chpl_macro_tmp_937;
  chpl____wide__ref_atomic_flag chpl_macro_tmp_938;
  chpl____wide__ref_atomic_flag chpl_macro_tmp_939;
  chpl____wide__ref_atomic_refcnt chpl_macro_tmp_940;
  chpl____wide__ref_atomic_int64 chpl_macro_tmp_941;
  chpl____wide__ref_atomic_int_least64_t chpl_macro_tmp_942;
  chpl____wide__ref_atomic_int_least64_t chpl_macro_tmp_943;
  chpl____wide__ref_int32_t chpl_macro_tmp_944;
  int32_t chpl_macro_tmp_945;
  chpl____wide_BaseAssociativeDom chpl_macro_tmp_946;
  chpl____wide__ref_int32_t chpl_macro_tmp_947;
  int32_t chpl_macro_tmp_948;
  chpl____wide_DefaultAssociativeDom_chpl_taskID_t_F chpl_macro_tmp_949;
  chpl____wide__ref_DefaultRectangularArr_chpl_TableEntry_chpl_taskID_t_1_int64_t_F chpl_macro_tmp_950;
  chpl____wide__ref_DefaultRectangularDom_1_int64_t_F chpl_macro_tmp_951;
  chpl____wide__ref_atomicflag chpl_macro_tmp_952;
  chpl____wide__ref_atomic_flag chpl_macro_tmp_953;
  chpl____wide__ref_atomic_flag chpl_macro_tmp_954;
  chpl____wide__ref_atomic_int64 chpl_macro_tmp_955;
  chpl____wide__ref_atomic_int_least64_t chpl_macro_tmp_956;
  chpl____wide__ref_atomic_int_least64_t chpl_macro_tmp_957;
  chpl____wide_BaseAssociativeDom chpl_macro_tmp_958;
  chpl____wide_BaseDom chpl_macro_tmp_959;
  chpl____wide__ref_atomicflag chpl_macro_tmp_960;
  chpl____wide__ref_atomic_flag chpl_macro_tmp_961;
  chpl____wide__ref_atomic_flag chpl_macro_tmp_962;
  chpl____wide__ref_atomic_refcnt chpl_macro_tmp_963;
  chpl____wide__ref_atomic_int64 chpl_macro_tmp_964;
  chpl____wide__ref_atomic_int_least64_t chpl_macro_tmp_965;
  chpl____wide__ref_atomic_int_least64_t chpl_macro_tmp_966;
  chpl____wide_BaseDom chpl_macro_tmp_967;
  chpl____wide__ref_atomicflag chpl_macro_tmp_968;
  chpl____wide__ref_atomic_flag chpl_macro_tmp_969;
  chpl____wide__ref_atomic_flag chpl_macro_tmp_970;
  chpl____wide__ref_atomic_refcnt chpl_macro_tmp_971;
  chpl____wide__ref_atomic_int64 chpl_macro_tmp_972;
  chpl____wide__ref_atomic_int_least64_t chpl_macro_tmp_973;
  chpl____wide__ref_atomic_int_least64_t chpl_macro_tmp_974;
  chpl____wide__ref_int32_t chpl_macro_tmp_975;
  int32_t chpl_macro_tmp_976;
  chpl____wide_DefaultAssociativeDom_chpl_taskID_t_F chpl_macro_tmp_977;
  chpl____wide__ref_DefaultRectangularArr_chpl_TableEntry_chpl_taskID_t_1_int64_t_F chpl_macro_tmp_978;
  chpl____wide__ref_DefaultRectangularDom_1_int64_t_F chpl_macro_tmp_979;
  chpl____wide__ref_atomicflag chpl_macro_tmp_980;
  chpl____wide__ref_atomic_flag chpl_macro_tmp_981;
  chpl____wide__ref_atomic_flag chpl_macro_tmp_982;
  chpl____wide__ref_atomic_int64 chpl_macro_tmp_983;
  chpl____wide__ref_atomic_int_least64_t chpl_macro_tmp_984;
  chpl____wide__ref_atomic_int_least64_t chpl_macro_tmp_985;
  chpl____wide_BaseAssociativeDom chpl_macro_tmp_986;
  chpl____wide_BaseDom chpl_macro_tmp_987;
  chpl____wide__ref_atomicflag chpl_macro_tmp_988;
  chpl____wide__ref_atomic_flag chpl_macro_tmp_989;
  chpl____wide__ref_atomic_flag chpl_macro_tmp_990;
  chpl____wide__ref_atomic_refcnt chpl_macro_tmp_991;
  chpl____wide__ref_atomic_int64 chpl_macro_tmp_992;
  chpl____wide__ref_atomic_int_least64_t chpl_macro_tmp_993;
  chpl____wide__ref_atomic_int_least64_t chpl_macro_tmp_994;
  chpl____wide__ref_atomicflag chpl_macro_tmp_995;
  chpl____wide__ref_atomic_flag chpl_macro_tmp_996;
  chpl____wide__ref_atomic_flag chpl_macro_tmp_997;
  chpl____wide__ref_atomic_refcnt chpl_macro_tmp_998;
  chpl____wide__ref_atomic_int64 chpl_macro_tmp_999;
  chpl____wide__ref_atomic_int_least64_t chpl_macro_tmp_1000;
  chpl____wide__ref_atomic_int_least64_t chpl_macro_tmp_1001;
  {
    call_tmp = (dom)->locale;
    chpl_here_alloc_size = sizeof(chpl__class_localson_fn34_object);
    chpl_here_alloc_tmp = _local_chpl_here_alloc(chpl_here_alloc_size, INT16(36));
    _args_foron_fn = ((_class_localson_fn34)(chpl_here_alloc_tmp));
    chpl_check_nil(_args_foron_fn, INT64(284), "/home/kp167/chap-svn/modules/internal/ChapelDistribution.chpl");
    (_args_foron_fn)->_0__tmp = call_tmp;
    chpl_check_nil(_args_foron_fn, INT64(284), "/home/kp167/chap-svn/modules/internal/ChapelDistribution.chpl");
    (_args_foron_fn)->_1_this = *(dom);
    chpl_check_nil(_args_foron_fn, INT64(284), "/home/kp167/chap-svn/modules/internal/ChapelDistribution.chpl");
    (_args_foron_fn)->_2_x = *(this8);
    /*** _local_wrapon_fn4 ***/ chpl_executeOn(&call_tmp, INT32(38), _args_foron_fn, sizeof(chpl__class_localson_fn34_object), INT64(130), "/home/kp167/chap-svn/modules/internal/ChapelDistribution.chpl");
    _local_chpl_here_free(((void*)(_args_foron_fn)));
  }
  chpl_check_nil((dom)->addr, INT64(285), "/home/kp167/chap-svn/modules/internal/ChapelDistribution.chpl");
  call_tmp2 = destroyDom(dom);
  call_tmp3 = (call_tmp2 == INT64(0));
  if (call_tmp3) {
    delete_tmp = *(dom);
    chpl_check_nil((dom)->addr, INT64(287), "/home/kp167/chap-svn/modules/internal/ChapelDistribution.chpl");
    chpl_macro_tmp_909.locale = (dom)->locale;
    chpl_macro_tmp_909.addr = &(((object)((dom)->addr))->chpl__cid);
    chpl_gen_comm_get(((void*)(&chpl_macro_tmp_910)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_909).locale), INT64(0), NULL), (chpl_macro_tmp_909).addr, sizeof(int32_t), -1, INT64(1), INT64(287), "/home/kp167/chap-svn/modules/internal/ChapelDistribution.chpl");
    _dynamic_dispatch_tmp_ = (chpl_macro_tmp_910 == chpl__cid_BaseRectangularDom);
    if (_dynamic_dispatch_tmp_) {
      chpl_macro_tmp_911.locale = (dom)->locale;
      chpl_macro_tmp_911.addr = ((BaseRectangularDom)((dom)->addr));
      _cast_tmp_ = chpl_macro_tmp_911;
      chpl_check_nil((&_cast_tmp_)->addr, INT64(287), "/home/kp167/chap-svn/modules/internal/ChapelDistribution.chpl");
      chpl_macro_tmp_912.locale = (&_cast_tmp_)->locale;
      chpl_macro_tmp_912.addr = &(((object)((&_cast_tmp_)->addr))->chpl__cid);
      chpl_gen_comm_get(((void*)(&chpl_macro_tmp_913)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_912).locale), INT64(0), NULL), (chpl_macro_tmp_912).addr, sizeof(int32_t), -1, INT64(1), INT64(287), "/home/kp167/chap-svn/modules/internal/ChapelDistribution.chpl");
      _dynamic_dispatch_tmp_2 = (chpl_macro_tmp_913 == chpl__cid_DefaultRectangularDom_1_int64_t_F);
      if (_dynamic_dispatch_tmp_2) {
        chpl_macro_tmp_914.locale = (&_cast_tmp_)->locale;
        chpl_macro_tmp_914.addr = ((DefaultRectangularDom_1_int64_t_F)((&_cast_tmp_)->addr));
        _cast_tmp_2 = chpl_macro_tmp_914;
        chpl_macro_tmp_915.locale = (&_cast_tmp_2)->locale;
        chpl_macro_tmp_915.addr = ((BaseRectangularDom)((&_cast_tmp_2)->addr));
        _parent_destructor_tmp_ = chpl_macro_tmp_915;
        chpl_macro_tmp_916.locale = (&_parent_destructor_tmp_)->locale;
        chpl_macro_tmp_916.addr = ((BaseDom)((&_parent_destructor_tmp_)->addr));
        _parent_destructor_tmp_2 = chpl_macro_tmp_916;
        chpl_check_nil((&_parent_destructor_tmp_2)->addr, INT64(287), "/home/kp167/chap-svn/modules/internal/ChapelDistribution.chpl");
        chpl_macro_tmp_917.locale = (&_parent_destructor_tmp_2)->locale;
        chpl_macro_tmp_917.addr = &(((&_parent_destructor_tmp_2)->addr)->_arrsLock);
        _field_destructor_tmp_ = chpl_macro_tmp_917;
        chpl_macro_tmp_918.locale = (_field_destructor_tmp_).locale;
        chpl_macro_tmp_918.addr = &(((_field_destructor_tmp_).addr)->_v);
        call_tmp4 = chpl_macro_tmp_918;
        T = (&call_tmp4)->addr;
        atomic_destroy_flag(T);
        chpl_macro_tmp_919.locale = chpl_gen_getLocaleID();
        chpl_macro_tmp_919.addr = T;
        call_tmp4 = chpl_macro_tmp_919;
        chpl_check_nil((&_parent_destructor_tmp_2)->addr, INT64(287), "/home/kp167/chap-svn/modules/internal/ChapelDistribution.chpl");
        chpl_macro_tmp_920.locale = (&_parent_destructor_tmp_2)->locale;
        chpl_macro_tmp_920.addr = &(((&_parent_destructor_tmp_2)->addr)->_domCnt);
        _field_destructor_tmp_2 = chpl_macro_tmp_920;
        chpl_macro_tmp_921.locale = (_field_destructor_tmp_2).locale;
        chpl_macro_tmp_921.addr = &(((_field_destructor_tmp_2).addr)->_cnt);
        _field_destructor_tmp_3 = chpl_macro_tmp_921;
        chpl_macro_tmp_922.locale = (_field_destructor_tmp_3).locale;
        chpl_macro_tmp_922.addr = &(((_field_destructor_tmp_3).addr)->_v);
        call_tmp5 = chpl_macro_tmp_922;
        T2 = (&call_tmp5)->addr;
        atomic_destroy_int_least64_t(T2);
        chpl_macro_tmp_923.locale = chpl_gen_getLocaleID();
        chpl_macro_tmp_923.addr = T2;
        call_tmp5 = chpl_macro_tmp_923;
      } else {
        chpl_macro_tmp_924.locale = (&_cast_tmp_)->locale;
        chpl_macro_tmp_924.addr = ((BaseDom)((&_cast_tmp_)->addr));
        _parent_destructor_tmp_3 = chpl_macro_tmp_924;
        chpl_check_nil((&_parent_destructor_tmp_3)->addr, INT64(287), "/home/kp167/chap-svn/modules/internal/ChapelDistribution.chpl");
        chpl_macro_tmp_925.locale = (&_parent_destructor_tmp_3)->locale;
        chpl_macro_tmp_925.addr = &(((&_parent_destructor_tmp_3)->addr)->_arrsLock);
        _field_destructor_tmp_4 = chpl_macro_tmp_925;
        chpl_macro_tmp_926.locale = (_field_destructor_tmp_4).locale;
        chpl_macro_tmp_926.addr = &(((_field_destructor_tmp_4).addr)->_v);
        call_tmp6 = chpl_macro_tmp_926;
        T3 = (&call_tmp6)->addr;
        atomic_destroy_flag(T3);
        chpl_macro_tmp_927.locale = chpl_gen_getLocaleID();
        chpl_macro_tmp_927.addr = T3;
        call_tmp6 = chpl_macro_tmp_927;
        chpl_check_nil((&_parent_destructor_tmp_3)->addr, INT64(287), "/home/kp167/chap-svn/modules/internal/ChapelDistribution.chpl");
        chpl_macro_tmp_928.locale = (&_parent_destructor_tmp_3)->locale;
        chpl_macro_tmp_928.addr = &(((&_parent_destructor_tmp_3)->addr)->_domCnt);
        _field_destructor_tmp_5 = chpl_macro_tmp_928;
        chpl_macro_tmp_929.locale = (_field_destructor_tmp_5).locale;
        chpl_macro_tmp_929.addr = &(((_field_destructor_tmp_5).addr)->_cnt);
        _field_destructor_tmp_6 = chpl_macro_tmp_929;
        chpl_macro_tmp_930.locale = (_field_destructor_tmp_6).locale;
        chpl_macro_tmp_930.addr = &(((_field_destructor_tmp_6).addr)->_v);
        call_tmp7 = chpl_macro_tmp_930;
        T4 = (&call_tmp7)->addr;
        atomic_destroy_int_least64_t(T4);
        chpl_macro_tmp_931.locale = chpl_gen_getLocaleID();
        chpl_macro_tmp_931.addr = T4;
        call_tmp7 = chpl_macro_tmp_931;
      }
    } else {
      chpl_check_nil((dom)->addr, INT64(287), "/home/kp167/chap-svn/modules/internal/ChapelDistribution.chpl");
      chpl_macro_tmp_932.locale = (dom)->locale;
      chpl_macro_tmp_932.addr = &(((object)((dom)->addr))->chpl__cid);
      chpl_gen_comm_get(((void*)(&chpl_macro_tmp_933)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_932).locale), INT64(0), NULL), (chpl_macro_tmp_932).addr, sizeof(int32_t), -1, INT64(1), INT64(287), "/home/kp167/chap-svn/modules/internal/ChapelDistribution.chpl");
      _dynamic_dispatch_tmp_3 = (chpl_macro_tmp_933 == chpl__cid_DefaultRectangularDom_1_int64_t_F);
      if (_dynamic_dispatch_tmp_3) {
        chpl_macro_tmp_934.locale = (dom)->locale;
        chpl_macro_tmp_934.addr = ((DefaultRectangularDom_1_int64_t_F)((dom)->addr));
        _cast_tmp_3 = chpl_macro_tmp_934;
        chpl_macro_tmp_935.locale = (&_cast_tmp_3)->locale;
        chpl_macro_tmp_935.addr = ((BaseRectangularDom)((&_cast_tmp_3)->addr));
        _parent_destructor_tmp_4 = chpl_macro_tmp_935;
        chpl_macro_tmp_936.locale = (&_parent_destructor_tmp_4)->locale;
        chpl_macro_tmp_936.addr = ((BaseDom)((&_parent_destructor_tmp_4)->addr));
        _parent_destructor_tmp_5 = chpl_macro_tmp_936;
        chpl_check_nil((&_parent_destructor_tmp_5)->addr, INT64(287), "/home/kp167/chap-svn/modules/internal/ChapelDistribution.chpl");
        chpl_macro_tmp_937.locale = (&_parent_destructor_tmp_5)->locale;
        chpl_macro_tmp_937.addr = &(((&_parent_destructor_tmp_5)->addr)->_arrsLock);
        _field_destructor_tmp_7 = chpl_macro_tmp_937;
        chpl_macro_tmp_938.locale = (_field_destructor_tmp_7).locale;
        chpl_macro_tmp_938.addr = &(((_field_destructor_tmp_7).addr)->_v);
        call_tmp8 = chpl_macro_tmp_938;
        T5 = (&call_tmp8)->addr;
        atomic_destroy_flag(T5);
        chpl_macro_tmp_939.locale = chpl_gen_getLocaleID();
        chpl_macro_tmp_939.addr = T5;
        call_tmp8 = chpl_macro_tmp_939;
        chpl_check_nil((&_parent_destructor_tmp_5)->addr, INT64(287), "/home/kp167/chap-svn/modules/internal/ChapelDistribution.chpl");
        chpl_macro_tmp_940.locale = (&_parent_destructor_tmp_5)->locale;
        chpl_macro_tmp_940.addr = &(((&_parent_destructor_tmp_5)->addr)->_domCnt);
        _field_destructor_tmp_8 = chpl_macro_tmp_940;
        chpl_macro_tmp_941.locale = (_field_destructor_tmp_8).locale;
        chpl_macro_tmp_941.addr = &(((_field_destructor_tmp_8).addr)->_cnt);
        _field_destructor_tmp_9 = chpl_macro_tmp_941;
        chpl_macro_tmp_942.locale = (_field_destructor_tmp_9).locale;
        chpl_macro_tmp_942.addr = &(((_field_destructor_tmp_9).addr)->_v);
        call_tmp9 = chpl_macro_tmp_942;
        T6 = (&call_tmp9)->addr;
        atomic_destroy_int_least64_t(T6);
        chpl_macro_tmp_943.locale = chpl_gen_getLocaleID();
        chpl_macro_tmp_943.addr = T6;
        call_tmp9 = chpl_macro_tmp_943;
      } else {
        chpl_check_nil((dom)->addr, INT64(287), "/home/kp167/chap-svn/modules/internal/ChapelDistribution.chpl");
        chpl_macro_tmp_944.locale = (dom)->locale;
        chpl_macro_tmp_944.addr = &(((object)((dom)->addr))->chpl__cid);
        chpl_gen_comm_get(((void*)(&chpl_macro_tmp_945)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_944).locale), INT64(0), NULL), (chpl_macro_tmp_944).addr, sizeof(int32_t), -1, INT64(1), INT64(287), "/home/kp167/chap-svn/modules/internal/ChapelDistribution.chpl");
        _dynamic_dispatch_tmp_4 = (chpl_macro_tmp_945 == chpl__cid_BaseAssociativeDom);
        if (_dynamic_dispatch_tmp_4) {
          chpl_macro_tmp_946.locale = (dom)->locale;
          chpl_macro_tmp_946.addr = ((BaseAssociativeDom)((dom)->addr));
          _cast_tmp_4 = chpl_macro_tmp_946;
          chpl_check_nil((&_cast_tmp_4)->addr, INT64(287), "/home/kp167/chap-svn/modules/internal/ChapelDistribution.chpl");
          chpl_macro_tmp_947.locale = (&_cast_tmp_4)->locale;
          chpl_macro_tmp_947.addr = &(((object)((&_cast_tmp_4)->addr))->chpl__cid);
          chpl_gen_comm_get(((void*)(&chpl_macro_tmp_948)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_947).locale), INT64(0), NULL), (chpl_macro_tmp_947).addr, sizeof(int32_t), -1, INT64(1), INT64(287), "/home/kp167/chap-svn/modules/internal/ChapelDistribution.chpl");
          _dynamic_dispatch_tmp_5 = (chpl_macro_tmp_948 == chpl__cid_DefaultAssociativeDom_chpl_taskID_t_F);
          if (_dynamic_dispatch_tmp_5) {
            chpl_macro_tmp_949.locale = (&_cast_tmp_4)->locale;
            chpl_macro_tmp_949.addr = ((DefaultAssociativeDom_chpl_taskID_t_F)((&_cast_tmp_4)->addr));
            _cast_tmp_5 = chpl_macro_tmp_949;
            chpl_check_nil((&_cast_tmp_5)->addr, INT64(287), "/home/kp167/chap-svn/modules/internal/ChapelDistribution.chpl");
            chpl_macro_tmp_950.locale = (&_cast_tmp_5)->locale;
            chpl_macro_tmp_950.addr = &(((&_cast_tmp_5)->addr)->table);
            chpl_gen_comm_get(((void*)(&_field_destructor_tmp_10)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_950).locale), INT64(0), NULL), (chpl_macro_tmp_950).addr, sizeof(chpl____wide_DefaultRectangularArr_chpl_TableEntry_chpl_taskID_t_1_int64_t_F), -1, INT64(1), INT64(287), "/home/kp167/chap-svn/modules/internal/ChapelDistribution.chpl");
            chpl__autoDestroy6(&_field_destructor_tmp_10);
            chpl_check_nil((&_cast_tmp_5)->addr, INT64(287), "/home/kp167/chap-svn/modules/internal/ChapelDistribution.chpl");
            chpl_macro_tmp_951.locale = (&_cast_tmp_5)->locale;
            chpl_macro_tmp_951.addr = &(((&_cast_tmp_5)->addr)->tableDom);
            chpl_gen_comm_get(((void*)(&_field_destructor_tmp_11)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_951).locale), INT64(0), NULL), (chpl_macro_tmp_951).addr, sizeof(chpl____wide_DefaultRectangularDom_1_int64_t_F), -1, INT64(1), INT64(287), "/home/kp167/chap-svn/modules/internal/ChapelDistribution.chpl");
            chpl__autoDestroy2(&_field_destructor_tmp_11);
            chpl_check_nil((&_cast_tmp_5)->addr, INT64(287), "/home/kp167/chap-svn/modules/internal/ChapelDistribution.chpl");
            chpl_macro_tmp_952.locale = (&_cast_tmp_5)->locale;
            chpl_macro_tmp_952.addr = &(((&_cast_tmp_5)->addr)->tableLock);
            _field_destructor_tmp_12 = chpl_macro_tmp_952;
            chpl_macro_tmp_953.locale = (_field_destructor_tmp_12).locale;
            chpl_macro_tmp_953.addr = &(((_field_destructor_tmp_12).addr)->_v);
            call_tmp10 = chpl_macro_tmp_953;
            T7 = (&call_tmp10)->addr;
            atomic_destroy_flag(T7);
            chpl_macro_tmp_954.locale = chpl_gen_getLocaleID();
            chpl_macro_tmp_954.addr = T7;
            call_tmp10 = chpl_macro_tmp_954;
            chpl_check_nil((&_cast_tmp_5)->addr, INT64(287), "/home/kp167/chap-svn/modules/internal/ChapelDistribution.chpl");
            chpl_macro_tmp_955.locale = (&_cast_tmp_5)->locale;
            chpl_macro_tmp_955.addr = &(((&_cast_tmp_5)->addr)->numEntries);
            _field_destructor_tmp_13 = chpl_macro_tmp_955;
            chpl_macro_tmp_956.locale = (_field_destructor_tmp_13).locale;
            chpl_macro_tmp_956.addr = &(((_field_destructor_tmp_13).addr)->_v);
            call_tmp11 = chpl_macro_tmp_956;
            T8 = (&call_tmp11)->addr;
            atomic_destroy_int_least64_t(T8);
            chpl_macro_tmp_957.locale = chpl_gen_getLocaleID();
            chpl_macro_tmp_957.addr = T8;
            call_tmp11 = chpl_macro_tmp_957;
            chpl_macro_tmp_958.locale = (&_cast_tmp_5)->locale;
            chpl_macro_tmp_958.addr = ((BaseAssociativeDom)((&_cast_tmp_5)->addr));
            _parent_destructor_tmp_6 = chpl_macro_tmp_958;
            chpl_macro_tmp_959.locale = (&_parent_destructor_tmp_6)->locale;
            chpl_macro_tmp_959.addr = ((BaseDom)((&_parent_destructor_tmp_6)->addr));
            _parent_destructor_tmp_7 = chpl_macro_tmp_959;
            chpl_check_nil((&_parent_destructor_tmp_7)->addr, INT64(287), "/home/kp167/chap-svn/modules/internal/ChapelDistribution.chpl");
            chpl_macro_tmp_960.locale = (&_parent_destructor_tmp_7)->locale;
            chpl_macro_tmp_960.addr = &(((&_parent_destructor_tmp_7)->addr)->_arrsLock);
            _field_destructor_tmp_14 = chpl_macro_tmp_960;
            chpl_macro_tmp_961.locale = (_field_destructor_tmp_14).locale;
            chpl_macro_tmp_961.addr = &(((_field_destructor_tmp_14).addr)->_v);
            call_tmp12 = chpl_macro_tmp_961;
            T9 = (&call_tmp12)->addr;
            atomic_destroy_flag(T9);
            chpl_macro_tmp_962.locale = chpl_gen_getLocaleID();
            chpl_macro_tmp_962.addr = T9;
            call_tmp12 = chpl_macro_tmp_962;
            chpl_check_nil((&_parent_destructor_tmp_7)->addr, INT64(287), "/home/kp167/chap-svn/modules/internal/ChapelDistribution.chpl");
            chpl_macro_tmp_963.locale = (&_parent_destructor_tmp_7)->locale;
            chpl_macro_tmp_963.addr = &(((&_parent_destructor_tmp_7)->addr)->_domCnt);
            _field_destructor_tmp_15 = chpl_macro_tmp_963;
            chpl_macro_tmp_964.locale = (_field_destructor_tmp_15).locale;
            chpl_macro_tmp_964.addr = &(((_field_destructor_tmp_15).addr)->_cnt);
            _field_destructor_tmp_16 = chpl_macro_tmp_964;
            chpl_macro_tmp_965.locale = (_field_destructor_tmp_16).locale;
            chpl_macro_tmp_965.addr = &(((_field_destructor_tmp_16).addr)->_v);
            call_tmp13 = chpl_macro_tmp_965;
            T10 = (&call_tmp13)->addr;
            atomic_destroy_int_least64_t(T10);
            chpl_macro_tmp_966.locale = chpl_gen_getLocaleID();
            chpl_macro_tmp_966.addr = T10;
            call_tmp13 = chpl_macro_tmp_966;
          } else {
            chpl_macro_tmp_967.locale = (&_cast_tmp_4)->locale;
            chpl_macro_tmp_967.addr = ((BaseDom)((&_cast_tmp_4)->addr));
            _parent_destructor_tmp_8 = chpl_macro_tmp_967;
            chpl_check_nil((&_parent_destructor_tmp_8)->addr, INT64(287), "/home/kp167/chap-svn/modules/internal/ChapelDistribution.chpl");
            chpl_macro_tmp_968.locale = (&_parent_destructor_tmp_8)->locale;
            chpl_macro_tmp_968.addr = &(((&_parent_destructor_tmp_8)->addr)->_arrsLock);
            _field_destructor_tmp_17 = chpl_macro_tmp_968;
            chpl_macro_tmp_969.locale = (_field_destructor_tmp_17).locale;
            chpl_macro_tmp_969.addr = &(((_field_destructor_tmp_17).addr)->_v);
            call_tmp14 = chpl_macro_tmp_969;
            T11 = (&call_tmp14)->addr;
            atomic_destroy_flag(T11);
            chpl_macro_tmp_970.locale = chpl_gen_getLocaleID();
            chpl_macro_tmp_970.addr = T11;
            call_tmp14 = chpl_macro_tmp_970;
            chpl_check_nil((&_parent_destructor_tmp_8)->addr, INT64(287), "/home/kp167/chap-svn/modules/internal/ChapelDistribution.chpl");
            chpl_macro_tmp_971.locale = (&_parent_destructor_tmp_8)->locale;
            chpl_macro_tmp_971.addr = &(((&_parent_destructor_tmp_8)->addr)->_domCnt);
            _field_destructor_tmp_18 = chpl_macro_tmp_971;
            chpl_macro_tmp_972.locale = (_field_destructor_tmp_18).locale;
            chpl_macro_tmp_972.addr = &(((_field_destructor_tmp_18).addr)->_cnt);
            _field_destructor_tmp_19 = chpl_macro_tmp_972;
            chpl_macro_tmp_973.locale = (_field_destructor_tmp_19).locale;
            chpl_macro_tmp_973.addr = &(((_field_destructor_tmp_19).addr)->_v);
            call_tmp15 = chpl_macro_tmp_973;
            T12 = (&call_tmp15)->addr;
            atomic_destroy_int_least64_t(T12);
            chpl_macro_tmp_974.locale = chpl_gen_getLocaleID();
            chpl_macro_tmp_974.addr = T12;
            call_tmp15 = chpl_macro_tmp_974;
          }
        } else {
          chpl_check_nil((dom)->addr, INT64(287), "/home/kp167/chap-svn/modules/internal/ChapelDistribution.chpl");
          chpl_macro_tmp_975.locale = (dom)->locale;
          chpl_macro_tmp_975.addr = &(((object)((dom)->addr))->chpl__cid);
          chpl_gen_comm_get(((void*)(&chpl_macro_tmp_976)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_975).locale), INT64(0), NULL), (chpl_macro_tmp_975).addr, sizeof(int32_t), -1, INT64(1), INT64(287), "/home/kp167/chap-svn/modules/internal/ChapelDistribution.chpl");
          _dynamic_dispatch_tmp_6 = (chpl_macro_tmp_976 == chpl__cid_DefaultAssociativeDom_chpl_taskID_t_F);
          if (_dynamic_dispatch_tmp_6) {
            chpl_macro_tmp_977.locale = (dom)->locale;
            chpl_macro_tmp_977.addr = ((DefaultAssociativeDom_chpl_taskID_t_F)((dom)->addr));
            _cast_tmp_6 = chpl_macro_tmp_977;
            chpl_check_nil((&_cast_tmp_6)->addr, INT64(287), "/home/kp167/chap-svn/modules/internal/ChapelDistribution.chpl");
            chpl_macro_tmp_978.locale = (&_cast_tmp_6)->locale;
            chpl_macro_tmp_978.addr = &(((&_cast_tmp_6)->addr)->table);
            chpl_gen_comm_get(((void*)(&_field_destructor_tmp_20)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_978).locale), INT64(0), NULL), (chpl_macro_tmp_978).addr, sizeof(chpl____wide_DefaultRectangularArr_chpl_TableEntry_chpl_taskID_t_1_int64_t_F), -1, INT64(1), INT64(287), "/home/kp167/chap-svn/modules/internal/ChapelDistribution.chpl");
            chpl__autoDestroy6(&_field_destructor_tmp_20);
            chpl_check_nil((&_cast_tmp_6)->addr, INT64(287), "/home/kp167/chap-svn/modules/internal/ChapelDistribution.chpl");
            chpl_macro_tmp_979.locale = (&_cast_tmp_6)->locale;
            chpl_macro_tmp_979.addr = &(((&_cast_tmp_6)->addr)->tableDom);
            chpl_gen_comm_get(((void*)(&_field_destructor_tmp_21)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_979).locale), INT64(0), NULL), (chpl_macro_tmp_979).addr, sizeof(chpl____wide_DefaultRectangularDom_1_int64_t_F), -1, INT64(1), INT64(287), "/home/kp167/chap-svn/modules/internal/ChapelDistribution.chpl");
            chpl__autoDestroy2(&_field_destructor_tmp_21);
            chpl_check_nil((&_cast_tmp_6)->addr, INT64(287), "/home/kp167/chap-svn/modules/internal/ChapelDistribution.chpl");
            chpl_macro_tmp_980.locale = (&_cast_tmp_6)->locale;
            chpl_macro_tmp_980.addr = &(((&_cast_tmp_6)->addr)->tableLock);
            _field_destructor_tmp_22 = chpl_macro_tmp_980;
            chpl_macro_tmp_981.locale = (_field_destructor_tmp_22).locale;
            chpl_macro_tmp_981.addr = &(((_field_destructor_tmp_22).addr)->_v);
            call_tmp16 = chpl_macro_tmp_981;
            T13 = (&call_tmp16)->addr;
            atomic_destroy_flag(T13);
            chpl_macro_tmp_982.locale = chpl_gen_getLocaleID();
            chpl_macro_tmp_982.addr = T13;
            call_tmp16 = chpl_macro_tmp_982;
            chpl_check_nil((&_cast_tmp_6)->addr, INT64(287), "/home/kp167/chap-svn/modules/internal/ChapelDistribution.chpl");
            chpl_macro_tmp_983.locale = (&_cast_tmp_6)->locale;
            chpl_macro_tmp_983.addr = &(((&_cast_tmp_6)->addr)->numEntries);
            _field_destructor_tmp_23 = chpl_macro_tmp_983;
            chpl_macro_tmp_984.locale = (_field_destructor_tmp_23).locale;
            chpl_macro_tmp_984.addr = &(((_field_destructor_tmp_23).addr)->_v);
            call_tmp17 = chpl_macro_tmp_984;
            T14 = (&call_tmp17)->addr;
            atomic_destroy_int_least64_t(T14);
            chpl_macro_tmp_985.locale = chpl_gen_getLocaleID();
            chpl_macro_tmp_985.addr = T14;
            call_tmp17 = chpl_macro_tmp_985;
            chpl_macro_tmp_986.locale = (&_cast_tmp_6)->locale;
            chpl_macro_tmp_986.addr = ((BaseAssociativeDom)((&_cast_tmp_6)->addr));
            _parent_destructor_tmp_9 = chpl_macro_tmp_986;
            chpl_macro_tmp_987.locale = (&_parent_destructor_tmp_9)->locale;
            chpl_macro_tmp_987.addr = ((BaseDom)((&_parent_destructor_tmp_9)->addr));
            _parent_destructor_tmp_10 = chpl_macro_tmp_987;
            chpl_check_nil((&_parent_destructor_tmp_10)->addr, INT64(287), "/home/kp167/chap-svn/modules/internal/ChapelDistribution.chpl");
            chpl_macro_tmp_988.locale = (&_parent_destructor_tmp_10)->locale;
            chpl_macro_tmp_988.addr = &(((&_parent_destructor_tmp_10)->addr)->_arrsLock);
            _field_destructor_tmp_24 = chpl_macro_tmp_988;
            chpl_macro_tmp_989.locale = (_field_destructor_tmp_24).locale;
            chpl_macro_tmp_989.addr = &(((_field_destructor_tmp_24).addr)->_v);
            call_tmp18 = chpl_macro_tmp_989;
            T15 = (&call_tmp18)->addr;
            atomic_destroy_flag(T15);
            chpl_macro_tmp_990.locale = chpl_gen_getLocaleID();
            chpl_macro_tmp_990.addr = T15;
            call_tmp18 = chpl_macro_tmp_990;
            chpl_check_nil((&_parent_destructor_tmp_10)->addr, INT64(287), "/home/kp167/chap-svn/modules/internal/ChapelDistribution.chpl");
            chpl_macro_tmp_991.locale = (&_parent_destructor_tmp_10)->locale;
            chpl_macro_tmp_991.addr = &(((&_parent_destructor_tmp_10)->addr)->_domCnt);
            _field_destructor_tmp_25 = chpl_macro_tmp_991;
            chpl_macro_tmp_992.locale = (_field_destructor_tmp_25).locale;
            chpl_macro_tmp_992.addr = &(((_field_destructor_tmp_25).addr)->_cnt);
            _field_destructor_tmp_26 = chpl_macro_tmp_992;
            chpl_macro_tmp_993.locale = (_field_destructor_tmp_26).locale;
            chpl_macro_tmp_993.addr = &(((_field_destructor_tmp_26).addr)->_v);
            call_tmp19 = chpl_macro_tmp_993;
            T16 = (&call_tmp19)->addr;
            atomic_destroy_int_least64_t(T16);
            chpl_macro_tmp_994.locale = chpl_gen_getLocaleID();
            chpl_macro_tmp_994.addr = T16;
            call_tmp19 = chpl_macro_tmp_994;
          } else {
            chpl_check_nil((&delete_tmp)->addr, INT64(287), "/home/kp167/chap-svn/modules/internal/ChapelDistribution.chpl");
            chpl_macro_tmp_995.locale = (&delete_tmp)->locale;
            chpl_macro_tmp_995.addr = &(((&delete_tmp)->addr)->_arrsLock);
            _field_destructor_tmp_27 = chpl_macro_tmp_995;
            chpl_macro_tmp_996.locale = (_field_destructor_tmp_27).locale;
            chpl_macro_tmp_996.addr = &(((_field_destructor_tmp_27).addr)->_v);
            call_tmp20 = chpl_macro_tmp_996;
            T17 = (&call_tmp20)->addr;
            atomic_destroy_flag(T17);
            chpl_macro_tmp_997.locale = chpl_gen_getLocaleID();
            chpl_macro_tmp_997.addr = T17;
            call_tmp20 = chpl_macro_tmp_997;
            chpl_check_nil((&delete_tmp)->addr, INT64(287), "/home/kp167/chap-svn/modules/internal/ChapelDistribution.chpl");
            chpl_macro_tmp_998.locale = (&delete_tmp)->locale;
            chpl_macro_tmp_998.addr = &(((&delete_tmp)->addr)->_domCnt);
            _field_destructor_tmp_28 = chpl_macro_tmp_998;
            chpl_macro_tmp_999.locale = (_field_destructor_tmp_28).locale;
            chpl_macro_tmp_999.addr = &(((_field_destructor_tmp_28).addr)->_cnt);
            _field_destructor_tmp_29 = chpl_macro_tmp_999;
            chpl_macro_tmp_1000.locale = (_field_destructor_tmp_29).locale;
            chpl_macro_tmp_1000.addr = &(((_field_destructor_tmp_29).addr)->_v);
            call_tmp21 = chpl_macro_tmp_1000;
            T18 = (&call_tmp21)->addr;
            atomic_destroy_int_least64_t(T18);
            chpl_macro_tmp_1001.locale = chpl_gen_getLocaleID();
            chpl_macro_tmp_1001.addr = T18;
            call_tmp21 = chpl_macro_tmp_1001;
          }
        }
      }
    }
    call_tmp22 = (&delete_tmp)->locale;
    rvfDerefTmp = delete_tmp;
    chpl_here_alloc_size2 = sizeof(chpl__class_localson_fn43_object);
    chpl_here_alloc_tmp2 = chpl_here_alloc(chpl_here_alloc_size2, INT16(36));
    _args_foron_fn2 = ((_class_localson_fn43)(chpl_here_alloc_tmp2));
    chpl_check_nil(_args_foron_fn2, INT64(287), "/home/kp167/chap-svn/modules/internal/ChapelDistribution.chpl");
    (_args_foron_fn2)->_0__tmp = call_tmp22;
    chpl_check_nil(_args_foron_fn2, INT64(287), "/home/kp167/chap-svn/modules/internal/ChapelDistribution.chpl");
    (_args_foron_fn2)->_1_rvfDerefTmp = rvfDerefTmp;
    /*** wrapon_fn43 ***/ chpl_executeOn(&call_tmp22, INT32(48), _args_foron_fn2, sizeof(chpl__class_localson_fn43_object), INT64(287), "/home/kp167/chap-svn/modules/internal/ChapelDistribution.chpl");
    chpl_here_free(((void*)(_args_foron_fn2)));
  }
  return;
}

/* ChapelDistribution.chpl:283 */
static void wrapon_fn42(_class_localson_fn42 c) {
  chpl____wide_BaseDom _1_rvfDerefTmp = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_BaseArr _2_this = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_check_nil(c, INT64(283), "/home/kp167/chap-svn/modules/internal/ChapelDistribution.chpl");
  _1_rvfDerefTmp = (c)->_1_rvfDerefTmp;
  chpl_check_nil(c, INT64(283), "/home/kp167/chap-svn/modules/internal/ChapelDistribution.chpl");
  _2_this = (c)->_2_this;
  on_fn42(&_1_rvfDerefTmp, &_2_this);
  return;
}

/* ChapelDistribution.chpl:287 */
static void on_fn43(chpl____wide_BaseDom* const delete_tmp) {
  chpl_opaque call_tmp;
  call_tmp = ((void*)((delete_tmp)->addr));
  chpl_here_free(call_tmp);
  return;
}

/* ChapelDistribution.chpl:287 */
static void wrapon_fn43(_class_localson_fn43 c) {
  chpl____wide_BaseDom _1_rvfDerefTmp = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_check_nil(c, INT64(287), "/home/kp167/chap-svn/modules/internal/ChapelDistribution.chpl");
  _1_rvfDerefTmp = (c)->_1_rvfDerefTmp;
  on_fn43(&_1_rvfDerefTmp);
  return;
}

/* ChapelDistribution.chpl:293 */
static void dsiDestroyData(chpl____wide_BaseArr* const this8) {
  return;
}

/* ChapelDistribution.chpl:295 */
static void dsiReallocate(chpl____wide_BaseArr* const this8, chpl____wide_DefaultRectangularDom_1_int64_t_F* const d) {
  c_string T;
  T = "reallocating not supported for this array type";
  halt(T, INT64(296), "/home/kp167/chap-svn/modules/internal/ChapelDistribution.chpl");
  return;
}

/* ChapelDistribution.chpl:299 */
static void dsiPostReallocate(chpl____wide_BaseArr* const this8) {
  return;
}

/* ChapelDistribution.chpl:330 */
static void clearEntry(chpl____wide_BaseArr* const this8, chpl_taskID_t idx) {
  c_string T;
  T = "clearEntry() not supported for non-associative arrays";
  halt(T, INT64(331), "/home/kp167/chap-svn/modules/internal/ChapelDistribution.chpl");
  return;
}

/* ChapelDistribution.chpl:334 */
static void _backupArray(chpl____wide_BaseArr* const this8) {
  c_string T;
  T = "_backupArray() not supported for non-associative arrays";
  halt(T, INT64(335), "/home/kp167/chap-svn/modules/internal/ChapelDistribution.chpl");
  return;
}

/* ChapelDistribution.chpl:338 */
static void _removeArrayBackup(chpl____wide_BaseArr* const this8) {
  c_string T;
  T = "_removeArrayBackup() not supported for non-associative arrays";
  halt(T, INT64(339), "/home/kp167/chap-svn/modules/internal/ChapelDistribution.chpl");
  return;
}

/* ChapelDistribution.chpl:342 */
static void _preserveArrayElement(chpl____wide_BaseArr* const this8, int64_t oldslot, int64_t newslot) {
  c_string T;
  T = "_preserveArrayElement() not supported for non-associative arrays";
  halt(T, INT64(343), "/home/kp167/chap-svn/modules/internal/ChapelDistribution.chpl");
  return;
}

