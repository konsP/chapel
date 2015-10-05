/* MemTracking.chpl:4 */
static void chpl__init_MemTracking(int64_t _ln, c_string _fn) {
  c_string modFormatStr;
  c_string modStr;
  _ref_int32_t refIndentLevel = NULL;
  chpl_bool const_tmp;
  chpl_bool call_tmp;
  chpl_bool call_tmp2;
  chpl_bool type_tmp;
  _ref_chpl_bool _ref_tmp_ = NULL;
  c_string call_tmp3;
  chpl_bool const_tmp2;
  chpl_bool call_tmp4;
  chpl_bool call_tmp5;
  chpl_bool type_tmp2;
  _ref_chpl_bool _ref_tmp_2 = NULL;
  c_string call_tmp6;
  chpl_bool const_tmp3;
  chpl_bool call_tmp7;
  chpl_bool call_tmp8;
  chpl_bool type_tmp3;
  _ref_chpl_bool _ref_tmp_3 = NULL;
  c_string call_tmp9;
  chpl_bool const_tmp4;
  chpl_bool call_tmp10;
  chpl_bool call_tmp11;
  chpl_bool type_tmp4;
  _ref_chpl_bool _ref_tmp_4 = NULL;
  c_string call_tmp12;
  uint64_t const_tmp5;
  chpl_bool call_tmp13;
  chpl_bool call_tmp14;
  uint64_t type_tmp5;
  _ref_uint64_t _ref_tmp_5 = NULL;
  uint64_t call_tmp15;
  c_string call_tmp16;
  uint64_t const_tmp6;
  chpl_bool call_tmp17;
  chpl_bool call_tmp18;
  uint64_t type_tmp6;
  _ref_uint64_t _ref_tmp_6 = NULL;
  uint64_t call_tmp19;
  c_string call_tmp20;
  c_string const_tmp7;
  chpl_bool call_tmp21;
  chpl_bool call_tmp22;
  c_string type_tmp7;
  _ref_c_string _ref_tmp_7 = NULL;
  c_string call_tmp23;
  c_string T;
  chpl____wide_chpl_string call_tmp24 = {CHPL_LOCALEID_T_INIT, NULL};
  c_string const_tmp8;
  chpl_bool call_tmp25;
  chpl_bool call_tmp26;
  c_string type_tmp8;
  _ref_c_string _ref_tmp_8 = NULL;
  c_string call_tmp27;
  c_string T2;
  chpl____wide_chpl_string call_tmp28 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_c_string chpl_macro_tmp_1399;
  chpl____wide__ref_c_string chpl_macro_tmp_1400;
  chpl____wide__ref_chpl_string chpl_macro_tmp_1401;
  chpl____wide__ref_c_string chpl_macro_tmp_1402;
  chpl____wide__ref_c_string chpl_macro_tmp_1403;
  chpl____wide__ref_chpl_string chpl_macro_tmp_1404;
  if (chpl__init_MemTracking_p) {
    goto _exit_chpl__init_MemTracking;
  }
  modFormatStr = "%*s\n";
  modStr = "MemTracking";
  printModuleInit(modFormatStr, modStr, INT64(11));
  refIndentLevel = &moduleInitLevel;
  *(refIndentLevel) += INT64(1);
  chpl__init_MemTracking_p = true;
  call_tmp = chpl_config_has_value("memTrack", "Built-in");
  call_tmp2 = (! call_tmp);
  if (call_tmp2) {
    type_tmp = false;
    _ref_tmp_ = &type_tmp;
    *(_ref_tmp_) = false;
    const_tmp = type_tmp;
  } else {
    call_tmp3 = chpl_config_get_value("memTrack", "Built-in");
    const_tmp = _command_line_cast5(call_tmp3);
  }
  memTrack = const_tmp;
  chpl_comm_broadcast_private(INT64(13), sizeof(chpl_bool), -1);
  call_tmp4 = chpl_config_has_value("memStats", "Built-in");
  call_tmp5 = (! call_tmp4);
  if (call_tmp5) {
    type_tmp2 = false;
    _ref_tmp_2 = &type_tmp2;
    *(_ref_tmp_2) = false;
    const_tmp2 = type_tmp2;
  } else {
    call_tmp6 = chpl_config_get_value("memStats", "Built-in");
    const_tmp2 = _command_line_cast6(call_tmp6);
  }
  memStats = const_tmp2;
  chpl_comm_broadcast_private(INT64(14), sizeof(chpl_bool), -1);
  call_tmp7 = chpl_config_has_value("memLeaks", "Built-in");
  call_tmp8 = (! call_tmp7);
  if (call_tmp8) {
    type_tmp3 = false;
    _ref_tmp_3 = &type_tmp3;
    *(_ref_tmp_3) = false;
    const_tmp3 = type_tmp3;
  } else {
    call_tmp9 = chpl_config_get_value("memLeaks", "Built-in");
    const_tmp3 = _command_line_cast7(call_tmp9);
  }
  memLeaks = const_tmp3;
  chpl_comm_broadcast_private(INT64(15), sizeof(chpl_bool), -1);
  call_tmp10 = chpl_config_has_value("memLeaksTable", "Built-in");
  call_tmp11 = (! call_tmp10);
  if (call_tmp11) {
    type_tmp4 = false;
    _ref_tmp_4 = &type_tmp4;
    *(_ref_tmp_4) = false;
    const_tmp4 = type_tmp4;
  } else {
    call_tmp12 = chpl_config_get_value("memLeaksTable", "Built-in");
    const_tmp4 = _command_line_cast8(call_tmp12);
  }
  memLeaksTable = const_tmp4;
  chpl_comm_broadcast_private(INT64(16), sizeof(chpl_bool), -1);
  call_tmp13 = chpl_config_has_value("memMax", "Built-in");
  call_tmp14 = (! call_tmp13);
  if (call_tmp14) {
    type_tmp5 = UINT64(0);
    _ref_tmp_5 = &type_tmp5;
    call_tmp15 = ((uint64_t)(INT64(0)));
    *(_ref_tmp_5) = call_tmp15;
    const_tmp5 = type_tmp5;
  } else {
    call_tmp16 = chpl_config_get_value("memMax", "Built-in");
    const_tmp5 = _command_line_cast9(call_tmp16);
  }
  memMax = const_tmp5;
  chpl_comm_broadcast_private(INT64(17), sizeof(uint64_t), -1);
  call_tmp17 = chpl_config_has_value("memThreshold", "Built-in");
  call_tmp18 = (! call_tmp17);
  if (call_tmp18) {
    type_tmp6 = UINT64(0);
    _ref_tmp_6 = &type_tmp6;
    call_tmp19 = ((uint64_t)(INT64(0)));
    *(_ref_tmp_6) = call_tmp19;
    const_tmp6 = type_tmp6;
  } else {
    call_tmp20 = chpl_config_get_value("memThreshold", "Built-in");
    const_tmp6 = _command_line_cast10(call_tmp20);
  }
  memThreshold = const_tmp6;
  chpl_comm_broadcast_private(INT64(18), sizeof(uint64_t), -1);
  call_tmp21 = chpl_config_has_value("memLog", "Built-in");
  call_tmp22 = (! call_tmp21);
  if (call_tmp22) {
    type_tmp7 = "";
    _ref_tmp_7 = &type_tmp7;
    *(_ref_tmp_7) = "";
    const_tmp7 = type_tmp7;
  } else {
    call_tmp23 = chpl_config_get_value("memLog", "Built-in");
    const_tmp7 = _command_line_cast11(call_tmp23);
  }
  chpl_check_nil((&memLog)->addr, INT64(13), "/home/kp167/chap-svn/modules/internal/MemTracking.chpl");
  chpl_macro_tmp_1399.locale = (&memLog)->locale;
  chpl_macro_tmp_1399.addr = &(((&memLog)->addr)->value);
  chpl_gen_comm_put(((void*)(&const_tmp7)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_1399).locale), INT64(0), NULL), (chpl_macro_tmp_1399).addr, sizeof(c_string), -1, INT64(1), INT64(13), "/home/kp167/chap-svn/modules/internal/MemTracking.chpl");
  chpl_check_nil((&memLog)->addr, INT64(13), "/home/kp167/chap-svn/modules/internal/MemTracking.chpl");
  chpl_macro_tmp_1400.locale = (&memLog)->locale;
  chpl_macro_tmp_1400.addr = &(((&memLog)->addr)->value);
  chpl_gen_comm_get(((void*)(&T)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_1400).locale), INT64(0), NULL), (chpl_macro_tmp_1400).addr, sizeof(c_string), -1, INT64(1), INT64(13), "/home/kp167/chap-svn/modules/internal/MemTracking.chpl");
  wide_string_from_c_string(&call_tmp24, T, INT64(0), INT64(0), INT64(14), "/home/kp167/chap-svn/modules/internal/MemTracking.chpl");
  chpl_check_nil((&s_memLog)->addr, INT64(14), "/home/kp167/chap-svn/modules/internal/MemTracking.chpl");
  chpl_macro_tmp_1401.locale = (&s_memLog)->locale;
  chpl_macro_tmp_1401.addr = &(((&s_memLog)->addr)->value);
  chpl_gen_comm_put(((void*)(&call_tmp24)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_1401).locale), INT64(0), NULL), (chpl_macro_tmp_1401).addr, sizeof(chpl____wide_chpl_string), -1, INT64(1), INT64(14), "/home/kp167/chap-svn/modules/internal/MemTracking.chpl");
  call_tmp25 = chpl_config_has_value("memLeaksLog", "Built-in");
  call_tmp26 = (! call_tmp25);
  if (call_tmp26) {
    type_tmp8 = "";
    _ref_tmp_8 = &type_tmp8;
    *(_ref_tmp_8) = "";
    const_tmp8 = type_tmp8;
  } else {
    call_tmp27 = chpl_config_get_value("memLeaksLog", "Built-in");
    const_tmp8 = _command_line_cast12(call_tmp27);
  }
  chpl_check_nil((&memLeaksLog)->addr, INT64(18), "/home/kp167/chap-svn/modules/internal/MemTracking.chpl");
  chpl_macro_tmp_1402.locale = (&memLeaksLog)->locale;
  chpl_macro_tmp_1402.addr = &(((&memLeaksLog)->addr)->value);
  chpl_gen_comm_put(((void*)(&const_tmp8)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_1402).locale), INT64(0), NULL), (chpl_macro_tmp_1402).addr, sizeof(c_string), -1, INT64(1), INT64(18), "/home/kp167/chap-svn/modules/internal/MemTracking.chpl");
  chpl_check_nil((&memLeaksLog)->addr, INT64(18), "/home/kp167/chap-svn/modules/internal/MemTracking.chpl");
  chpl_macro_tmp_1403.locale = (&memLeaksLog)->locale;
  chpl_macro_tmp_1403.addr = &(((&memLeaksLog)->addr)->value);
  chpl_gen_comm_get(((void*)(&T2)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_1403).locale), INT64(0), NULL), (chpl_macro_tmp_1403).addr, sizeof(c_string), -1, INT64(1), INT64(18), "/home/kp167/chap-svn/modules/internal/MemTracking.chpl");
  wide_string_from_c_string(&call_tmp28, T2, INT64(0), INT64(0), INT64(19), "/home/kp167/chap-svn/modules/internal/MemTracking.chpl");
  chpl_check_nil((&s_memLeaksLog)->addr, INT64(19), "/home/kp167/chap-svn/modules/internal/MemTracking.chpl");
  chpl_macro_tmp_1404.locale = (&s_memLeaksLog)->locale;
  chpl_macro_tmp_1404.addr = &(((&s_memLeaksLog)->addr)->value);
  chpl_gen_comm_put(((void*)(&call_tmp28)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_1404).locale), INT64(0), NULL), (chpl_macro_tmp_1404).addr, sizeof(chpl____wide_chpl_string), -1, INT64(1), INT64(19), "/home/kp167/chap-svn/modules/internal/MemTracking.chpl");
  *(refIndentLevel) -= INT64(1);
  _exit_chpl__init_MemTracking:;
  return;
}

/* MemTracking.chpl:27 */
void chpl_memTracking_returnConfigVals(_ref_chpl_bool ret_memTrack, _ref_chpl_bool ret_memStats, _ref_chpl_bool ret_memLeaks, _ref_chpl_bool ret_memLeaksTable, _ref_uint64_t ret_memMax, _ref_uint64_t ret_memThreshold, _ref_c_string ret_memLog, _ref_c_string ret_memLeaksLog) {
  chpl____wide_heap_c_string local_memLeaksLog = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_heap_chpl_string local_s_memLeaksLog = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_heap_c_string local_memLog = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_heap_chpl_string local_s_memLog = {CHPL_LOCALEID_T_INIT, NULL};
  uint64_t local_memThreshold;
  uint64_t local_memMax;
  chpl_bool local_memLeaksTable;
  chpl_bool local_memLeaks;
  chpl_bool local_memStats;
  chpl_bool local_memTrack;
  int32_t call_tmp;
  chpl____wide__ref_chpl_string T = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_chpl_string T2 = {CHPL_LOCALEID_T_INIT, NULL};
  int32_t call_tmp2;
  chpl_bool call_tmp3;
  chpl____wide_chpl_string T3 = {CHPL_LOCALEID_T_INIT, NULL};
  c_string ret;
  c_string call_tmp4;
  _ref_c_string _ref_tmp_ = NULL;
  c_string T4;
  int32_t call_tmp5;
  chpl____wide__ref_chpl_string T5 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_chpl_string T6 = {CHPL_LOCALEID_T_INIT, NULL};
  int32_t call_tmp6;
  chpl_bool call_tmp7;
  chpl____wide_chpl_string T7 = {CHPL_LOCALEID_T_INIT, NULL};
  c_string ret2;
  c_string call_tmp8;
  _ref_c_string _ref_tmp_2 = NULL;
  c_string T8;
  chpl____wide__ref_chpl_string chpl_macro_tmp_1405;
  chpl____wide__ref_chpl_string chpl_macro_tmp_1406;
  chpl____wide__ref_c_string chpl_macro_tmp_1407;
  chpl____wide__ref_chpl_string chpl_macro_tmp_1408;
  chpl____wide__ref_chpl_string chpl_macro_tmp_1409;
  chpl____wide__ref_c_string chpl_macro_tmp_1410;
  local_memLeaksLog = memLeaksLog;
  local_s_memLeaksLog = s_memLeaksLog;
  local_memLog = memLog;
  local_s_memLog = s_memLog;
  local_memThreshold = memThreshold;
  local_memMax = memMax;
  local_memLeaksTable = memLeaksTable;
  local_memLeaks = memLeaks;
  local_memStats = memStats;
  local_memTrack = memTrack;
  *(ret_memTrack) = local_memTrack;
  *(ret_memStats) = local_memStats;
  *(ret_memLeaks) = local_memLeaks;
  *(ret_memLeaksTable) = local_memLeaksTable;
  *(ret_memMax) = local_memMax;
  *(ret_memThreshold) = local_memThreshold;
  chpl_check_nil((&local_s_memLog)->addr, INT64(14), "/home/kp167/chap-svn/modules/internal/MemTracking.chpl");
  chpl_macro_tmp_1405.locale = (&local_s_memLog)->locale;
  chpl_macro_tmp_1405.addr = &(((&local_s_memLog)->addr)->value);
  T = chpl_macro_tmp_1405;
  chpl_gen_comm_wide_string_get(((void*)(&T2)), chpl_nodeFromLocaleID(&((T).locale), INT64(0), NULL), (T).addr, sizeof(chpl____wide_chpl_string), -1, INT64(1), INT64(50), "/home/kp167/chap-svn/modules/internal/MemTracking.chpl");
  call_tmp = chpl_nodeFromLocaleID(&((&T2)->locale), INT64(0), NULL);
  call_tmp2 = ((int32_t)(INT64(0)));
  call_tmp3 = (call_tmp != call_tmp2);
  if (call_tmp3) {
    chpl_check_nil((&local_s_memLog)->addr, INT64(14), "/home/kp167/chap-svn/modules/internal/MemTracking.chpl");
    chpl_macro_tmp_1406.locale = (&local_s_memLog)->locale;
    chpl_macro_tmp_1406.addr = &(((&local_s_memLog)->addr)->value);
    chpl_gen_comm_wide_string_get(((void*)(&T3)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_1406).locale), INT64(0), NULL), (chpl_macro_tmp_1406).addr, sizeof(chpl____wide_chpl_string), -1, INT64(1), INT64(14), "/home/kp167/chap-svn/modules/internal/MemTracking.chpl");
    ret = "";
    c_string_from_wide_string(&call_tmp4, &T3, INT64(53), "/home/kp167/chap-svn/modules/internal/MemTracking.chpl");
    _ref_tmp_ = &ret;
    *(_ref_tmp_) = call_tmp4;
    *(ret_memLog) = ret;
  } else {
    chpl_check_nil((&local_memLog)->addr, INT64(13), "/home/kp167/chap-svn/modules/internal/MemTracking.chpl");
    chpl_macro_tmp_1407.locale = (&local_memLog)->locale;
    chpl_macro_tmp_1407.addr = &(((&local_memLog)->addr)->value);
    chpl_gen_comm_get(((void*)(&T4)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_1407).locale), INT64(0), NULL), (chpl_macro_tmp_1407).addr, sizeof(c_string), -1, INT64(1), INT64(13), "/home/kp167/chap-svn/modules/internal/MemTracking.chpl");
    *(ret_memLog) = T4;
  }
  chpl_check_nil((&local_s_memLeaksLog)->addr, INT64(19), "/home/kp167/chap-svn/modules/internal/MemTracking.chpl");
  chpl_macro_tmp_1408.locale = (&local_s_memLeaksLog)->locale;
  chpl_macro_tmp_1408.addr = &(((&local_s_memLeaksLog)->addr)->value);
  T5 = chpl_macro_tmp_1408;
  chpl_gen_comm_wide_string_get(((void*)(&T6)), chpl_nodeFromLocaleID(&((T5).locale), INT64(0), NULL), (T5).addr, sizeof(chpl____wide_chpl_string), -1, INT64(1), INT64(57), "/home/kp167/chap-svn/modules/internal/MemTracking.chpl");
  call_tmp5 = chpl_nodeFromLocaleID(&((&T6)->locale), INT64(0), NULL);
  call_tmp6 = ((int32_t)(INT64(0)));
  call_tmp7 = (call_tmp5 != call_tmp6);
  if (call_tmp7) {
    chpl_check_nil((&local_s_memLeaksLog)->addr, INT64(19), "/home/kp167/chap-svn/modules/internal/MemTracking.chpl");
    chpl_macro_tmp_1409.locale = (&local_s_memLeaksLog)->locale;
    chpl_macro_tmp_1409.addr = &(((&local_s_memLeaksLog)->addr)->value);
    chpl_gen_comm_wide_string_get(((void*)(&T7)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_1409).locale), INT64(0), NULL), (chpl_macro_tmp_1409).addr, sizeof(chpl____wide_chpl_string), -1, INT64(1), INT64(19), "/home/kp167/chap-svn/modules/internal/MemTracking.chpl");
    ret2 = "";
    c_string_from_wide_string(&call_tmp8, &T7, INT64(60), "/home/kp167/chap-svn/modules/internal/MemTracking.chpl");
    _ref_tmp_2 = &ret2;
    *(_ref_tmp_2) = call_tmp8;
    *(ret_memLeaksLog) = ret2;
  } else {
    chpl_check_nil((&local_memLeaksLog)->addr, INT64(18), "/home/kp167/chap-svn/modules/internal/MemTracking.chpl");
    chpl_macro_tmp_1410.locale = (&local_memLeaksLog)->locale;
    chpl_macro_tmp_1410.addr = &(((&local_memLeaksLog)->addr)->value);
    chpl_gen_comm_get(((void*)(&T8)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_1410).locale), INT64(0), NULL), (chpl_macro_tmp_1410).addr, sizeof(c_string), -1, INT64(1), INT64(18), "/home/kp167/chap-svn/modules/internal/MemTracking.chpl");
    *(ret_memLeaksLog) = T8;
  }
  return;
}

