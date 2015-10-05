/* List.chpl:1 */
static void chpl__init_List(int64_t _ln, c_string _fn) {
  c_string modFormatStr;
  c_string modStr;
  _ref_int32_t refIndentLevel = NULL;
  if (chpl__init_List_p) {
    goto _exit_chpl__init_List;
  }
  modFormatStr = "%*s\n";
  modStr = "List";
  printModuleInit(modFormatStr, modStr, INT64(4));
  refIndentLevel = &moduleInitLevel;
  *(refIndentLevel) += INT64(1);
  chpl__init_List_p = true;
  *(refIndentLevel) -= INT64(1);
  _exit_chpl__init_List:;
  return;
}

/* List.chpl:1 */
static listNode_BaseArr _construct_listNode(chpl____wide_BaseArr* const data, listNode_BaseArr next, listNode_BaseArr meme) {
  listNode_BaseArr this8 = NULL;
  object T = NULL;
  chpl____wide_listNode_BaseArr T2 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_listNode_BaseArr chpl_macro_tmp_1433;
  this8 = meme;
  chpl_check_nil(this8, INT64(1), "/home/kp167/chap-svn/modules/standard/List.chpl");
  T = &((this8)->super);
  _construct_object(T);
  chpl_check_nil(this8, INT64(3), "/home/kp167/chap-svn/modules/standard/List.chpl");
  (this8)->data = *(data);
  chpl_macro_tmp_1433.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_1433.addr = next;
  T2 = chpl_macro_tmp_1433;
  chpl_check_nil(this8, INT64(4), "/home/kp167/chap-svn/modules/standard/List.chpl");
  (this8)->next = T2;
  return this8;
}

/* List.chpl:1 */
static void chpl__auto_destroy_listNode(listNode_BaseArr this8) {
  return;
}

/* List.chpl:1 */
static void chpl__auto_destroy_listNode2(listNode_BaseDom this8) {
  return;
}

/* List.chpl:7 */
static list_BaseArr _construct_list(listNode_BaseArr first, listNode_BaseArr last, int64_t length2, list_BaseArr* const meme) {
  list_BaseArr this8;
  chpl____wide_listNode_BaseArr T = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_listNode_BaseArr T2 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_listNode_BaseArr chpl_macro_tmp_1434;
  chpl____wide_listNode_BaseArr chpl_macro_tmp_1435;
  this8 = *(meme);
  chpl_macro_tmp_1434.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_1434.addr = first;
  T = chpl_macro_tmp_1434;
  (&this8)->first = T;
  chpl_macro_tmp_1435.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_1435.addr = last;
  T2 = chpl_macro_tmp_1435;
  (&this8)->last = T2;
  (&this8)->length = length2;
  return this8;
}

/* List.chpl:7 */
static list_BaseDom _construct_list2(listNode_BaseDom first, listNode_BaseDom last, int64_t length2, list_BaseDom* const meme) {
  list_BaseDom this8;
  chpl____wide_listNode_BaseDom T = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_listNode_BaseDom T2 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_listNode_BaseDom chpl_macro_tmp_1436;
  chpl____wide_listNode_BaseDom chpl_macro_tmp_1437;
  this8 = *(meme);
  chpl_macro_tmp_1436.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_1436.addr = first;
  T = chpl_macro_tmp_1436;
  (&this8)->first = T;
  chpl_macro_tmp_1437.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_1437.addr = last;
  T2 = chpl_macro_tmp_1437;
  (&this8)->last = T2;
  (&this8)->length = length2;
  return this8;
}

/* List.chpl:22 */
static void _local_remove(_ref_list_BaseDom this8, chpl____wide_BaseDom* const x) {
  chpl____wide_listNode_BaseDom tmp = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_listNode_BaseDom ret = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_list_BaseDom local_this = NULL;
  chpl____wide_listNode_BaseDom type_tmp = {CHPL_LOCALEID_T_INIT, NULL};
  listNode_BaseDom call_tmp = NULL;
  listNode_BaseDom T = NULL;
  chpl____wide_listNode_BaseDom prev = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_listNode_BaseDom _ref_tmp_ = NULL;
  _ref_listNode_BaseDom local__ref_tmp_ = NULL;
  chpl_bool T2;
  chpl____wide_object call_tmp2 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_bool call_tmp3;
  chpl_bool T3;
  chpl____wide_listNode_BaseDom T4 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_BaseDom ret2 = {CHPL_LOCALEID_T_INIT, NULL};
  listNode_BaseDom local__tmp = NULL;
  chpl____wide_object call_tmp4 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_object call_tmp5 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_bool call_tmp6;
  _ref_listNode_BaseDom _ref_tmp_2 = NULL;
  _ref_listNode_BaseDom local__ref_tmp_2 = NULL;
  chpl____wide_listNode_BaseDom ret3 = {CHPL_LOCALEID_T_INIT, NULL};
  listNode_BaseDom local_tmp = NULL;
  _ref_listNode_BaseDom _ref_tmp_3 = NULL;
  _ref_listNode_BaseDom local__ref_tmp_3 = NULL;
  chpl____wide_object call_tmp7 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_bool call_tmp8;
  chpl_bool T5;
  chpl____wide_listNode_BaseDom T6 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_BaseDom ret4 = {CHPL_LOCALEID_T_INIT, NULL};
  listNode_BaseDom local__tmp2 = NULL;
  chpl____wide_object call_tmp9 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_object call_tmp10 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_bool call_tmp11;
  chpl____wide_object call_tmp12 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_bool call_tmp13;
  chpl____wide_object call_tmp14 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_bool call_tmp15;
  _ref_listNode_BaseDom call_tmp16 = NULL;
  listNode_BaseDom local_prev = NULL;
  chpl____wide_listNode_BaseDom ret5 = {CHPL_LOCALEID_T_INIT, NULL};
  listNode_BaseDom local_tmp2 = NULL;
  _ref_listNode_BaseDom local_call_tmp = NULL;
  chpl____wide_listNode_BaseDom ret6 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_list_BaseDom local_this2 = NULL;
  chpl____wide_object call_tmp17 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_object call_tmp18 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_bool call_tmp19;
  _ref_listNode_BaseDom call_tmp20 = NULL;
  _ref_list_BaseDom local_this3 = NULL;
  chpl____wide_listNode_BaseDom ret7 = {CHPL_LOCALEID_T_INIT, NULL};
  listNode_BaseDom local_tmp3 = NULL;
  _ref_listNode_BaseDom local_call_tmp2 = NULL;
  chpl____wide_listNode_BaseDom ret8 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_list_BaseDom local_this4 = NULL;
  chpl____wide_object call_tmp21 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_object call_tmp22 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_bool call_tmp23;
  _ref_listNode_BaseDom call_tmp24 = NULL;
  _ref_list_BaseDom local_this5 = NULL;
  _ref_listNode_BaseDom local_call_tmp3 = NULL;
  chpl_localeID_t call_tmp25;
  chpl____wide_listNode_BaseDom rvfDerefTmp = {CHPL_LOCALEID_T_INIT, NULL};
  _class_localson_fn86 _args_foron_fn = NULL;
  int64_t chpl_here_alloc_size;
  chpl_opaque chpl_here_alloc_tmp;
  _ref_int64_t call_tmp26 = NULL;
  _ref_list_BaseDom local_this6 = NULL;
  chpl____wide_listNode_BaseDom chpl_macro_tmp_1438;
  chpl____wide_listNode_BaseDom chpl_macro_tmp_1439;
  chpl____wide_object chpl_macro_tmp_1440;
  chpl____wide_object chpl_macro_tmp_1441;
  chpl____wide_object chpl_macro_tmp_1442;
  chpl____wide_object chpl_macro_tmp_1443;
  chpl____wide_object chpl_macro_tmp_1444;
  chpl____wide_object chpl_macro_tmp_1445;
  chpl____wide_object chpl_macro_tmp_1446;
  chpl____wide_object chpl_macro_tmp_1447;
  chpl____wide_object chpl_macro_tmp_1448;
  chpl____wide_object chpl_macro_tmp_1449;
  chpl____wide_object chpl_macro_tmp_1450;
  chpl____wide_object chpl_macro_tmp_1451;
  local_this = this8;
  chpl_check_nil(local_this, INT64(23), "/home/kp167/chap-svn/modules/standard/List.chpl");
  ret = (local_this)->first;
  tmp = ret;
  T = ((listNode_BaseDom)(nil));
  call_tmp = T;
  chpl_macro_tmp_1438.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_1438.addr = call_tmp;
  type_tmp = chpl_macro_tmp_1438;
  _ref_tmp_ = &type_tmp;
  local__ref_tmp_ = _ref_tmp_;
  chpl_macro_tmp_1439.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_1439.addr = NULL;
  *(local__ref_tmp_) = chpl_macro_tmp_1439;
  prev = type_tmp;
  chpl_macro_tmp_1440.locale = (&ret)->locale;
  chpl_macro_tmp_1440.addr = ((object)((&ret)->addr));
  call_tmp2 = chpl_macro_tmp_1440;
  call_tmp3 = (&call_tmp2)->addr != nil;
  if (call_tmp3) {
    T4 = ret;
    chpl_check_local(chpl_nodeFromLocaleID(&((&T4)->locale), INT64(0), NULL), INT64(25), "/home/kp167/chap-svn/modules/standard/List.chpl", "cannot access remote data in local block");
    local__tmp = (&T4)->addr;
    chpl_check_nil(local__tmp, INT64(25), "/home/kp167/chap-svn/modules/standard/List.chpl");
    ret2 = (local__tmp)->data;
    chpl_macro_tmp_1441.locale = (x)->locale;
    chpl_macro_tmp_1441.addr = ((object)((x)->addr));
    call_tmp4 = chpl_macro_tmp_1441;
    chpl_macro_tmp_1442.locale = (&ret2)->locale;
    chpl_macro_tmp_1442.addr = ((object)((&ret2)->addr));
    call_tmp5 = chpl_macro_tmp_1442;
    call_tmp6 = (((&call_tmp5)->addr != (&call_tmp4)->addr) || ((!(! (&call_tmp5)->addr)) && (chpl_nodeFromLocaleID(&((&call_tmp5)->locale), INT64(0), NULL) != chpl_nodeFromLocaleID(&((&call_tmp4)->locale), INT64(0), NULL))));
    T3 = call_tmp6;
  } else {
    T3 = false;
  }
  T2 = T3;
  while (T2) {
    _ref_tmp_2 = &prev;
    local__ref_tmp_2 = _ref_tmp_2;
    *(local__ref_tmp_2) = tmp;
    chpl_check_local(chpl_nodeFromLocaleID(&((&tmp)->locale), INT64(0), NULL), INT64(27), "/home/kp167/chap-svn/modules/standard/List.chpl", "cannot access remote data in local block");
    local_tmp = (&tmp)->addr;
    chpl_check_nil(local_tmp, INT64(27), "/home/kp167/chap-svn/modules/standard/List.chpl");
    ret3 = (local_tmp)->next;
    _ref_tmp_3 = &tmp;
    local__ref_tmp_3 = _ref_tmp_3;
    *(local__ref_tmp_3) = ret3;
    chpl_macro_tmp_1443.locale = (&tmp)->locale;
    chpl_macro_tmp_1443.addr = ((object)((&tmp)->addr));
    call_tmp7 = chpl_macro_tmp_1443;
    call_tmp8 = (&call_tmp7)->addr != nil;
    if (call_tmp8) {
      T6 = tmp;
      chpl_check_local(chpl_nodeFromLocaleID(&((&T6)->locale), INT64(0), NULL), INT64(25), "/home/kp167/chap-svn/modules/standard/List.chpl", "cannot access remote data in local block");
      local__tmp2 = (&T6)->addr;
      chpl_check_nil(local__tmp2, INT64(25), "/home/kp167/chap-svn/modules/standard/List.chpl");
      ret4 = (local__tmp2)->data;
      chpl_macro_tmp_1444.locale = (x)->locale;
      chpl_macro_tmp_1444.addr = ((object)((x)->addr));
      call_tmp9 = chpl_macro_tmp_1444;
      chpl_macro_tmp_1445.locale = (&ret4)->locale;
      chpl_macro_tmp_1445.addr = ((object)((&ret4)->addr));
      call_tmp10 = chpl_macro_tmp_1445;
      call_tmp11 = (((&call_tmp10)->addr != (&call_tmp9)->addr) || ((!(! (&call_tmp10)->addr)) && (chpl_nodeFromLocaleID(&((&call_tmp10)->locale), INT64(0), NULL) != chpl_nodeFromLocaleID(&((&call_tmp9)->locale), INT64(0), NULL))));
      T5 = call_tmp11;
    } else {
      T5 = false;
    }
    T2 = T5;
  }
  chpl_macro_tmp_1446.locale = (&tmp)->locale;
  chpl_macro_tmp_1446.addr = ((object)((&tmp)->addr));
  call_tmp12 = chpl_macro_tmp_1446;
  call_tmp13 = (&call_tmp12)->addr != nil;
  if (call_tmp13) {
    chpl_macro_tmp_1447.locale = (&prev)->locale;
    chpl_macro_tmp_1447.addr = ((object)((&prev)->addr));
    call_tmp14 = chpl_macro_tmp_1447;
    call_tmp15 = (&call_tmp14)->addr != nil;
    if (call_tmp15) {
      chpl_check_local(chpl_nodeFromLocaleID(&((&prev)->locale), INT64(0), NULL), INT64(31), "/home/kp167/chap-svn/modules/standard/List.chpl", "cannot access remote data in local block");
      local_prev = (&prev)->addr;
      chpl_check_nil(local_prev, INT64(31), "/home/kp167/chap-svn/modules/standard/List.chpl");
      call_tmp16 = &((local_prev)->next);
      chpl_check_local(chpl_nodeFromLocaleID(&((&tmp)->locale), INT64(0), NULL), INT64(31), "/home/kp167/chap-svn/modules/standard/List.chpl", "cannot access remote data in local block");
      local_tmp2 = (&tmp)->addr;
      chpl_check_nil(local_tmp2, INT64(31), "/home/kp167/chap-svn/modules/standard/List.chpl");
      ret5 = (local_tmp2)->next;
      local_call_tmp = call_tmp16;
      *(local_call_tmp) = ret5;
    }
    local_this2 = this8;
    chpl_check_nil(local_this2, INT64(32), "/home/kp167/chap-svn/modules/standard/List.chpl");
    ret6 = (local_this2)->first;
    chpl_macro_tmp_1448.locale = (&tmp)->locale;
    chpl_macro_tmp_1448.addr = ((object)((&tmp)->addr));
    call_tmp17 = chpl_macro_tmp_1448;
    chpl_macro_tmp_1449.locale = (&ret6)->locale;
    chpl_macro_tmp_1449.addr = ((object)((&ret6)->addr));
    call_tmp18 = chpl_macro_tmp_1449;
    call_tmp19 = (! (((&call_tmp18)->addr != (&call_tmp17)->addr) || ((!(! (&call_tmp18)->addr)) && (chpl_nodeFromLocaleID(&((&call_tmp18)->locale), INT64(0), NULL) != chpl_nodeFromLocaleID(&((&call_tmp17)->locale), INT64(0), NULL)))));
    if (call_tmp19) {
      local_this3 = this8;
      chpl_check_nil(local_this3, INT64(33), "/home/kp167/chap-svn/modules/standard/List.chpl");
      call_tmp20 = &((local_this3)->first);
      chpl_check_local(chpl_nodeFromLocaleID(&((&tmp)->locale), INT64(0), NULL), INT64(33), "/home/kp167/chap-svn/modules/standard/List.chpl", "cannot access remote data in local block");
      local_tmp3 = (&tmp)->addr;
      chpl_check_nil(local_tmp3, INT64(33), "/home/kp167/chap-svn/modules/standard/List.chpl");
      ret7 = (local_tmp3)->next;
      local_call_tmp2 = call_tmp20;
      *(local_call_tmp2) = ret7;
    }
    local_this4 = this8;
    chpl_check_nil(local_this4, INT64(34), "/home/kp167/chap-svn/modules/standard/List.chpl");
    ret8 = (local_this4)->last;
    chpl_macro_tmp_1450.locale = (&tmp)->locale;
    chpl_macro_tmp_1450.addr = ((object)((&tmp)->addr));
    call_tmp21 = chpl_macro_tmp_1450;
    chpl_macro_tmp_1451.locale = (&ret8)->locale;
    chpl_macro_tmp_1451.addr = ((object)((&ret8)->addr));
    call_tmp22 = chpl_macro_tmp_1451;
    call_tmp23 = (! (((&call_tmp22)->addr != (&call_tmp21)->addr) || ((!(! (&call_tmp22)->addr)) && (chpl_nodeFromLocaleID(&((&call_tmp22)->locale), INT64(0), NULL) != chpl_nodeFromLocaleID(&((&call_tmp21)->locale), INT64(0), NULL)))));
    if (call_tmp23) {
      local_this5 = this8;
      chpl_check_nil(local_this5, INT64(35), "/home/kp167/chap-svn/modules/standard/List.chpl");
      call_tmp24 = &((local_this5)->last);
      local_call_tmp3 = call_tmp24;
      *(local_call_tmp3) = prev;
    }
    call_tmp25 = (&tmp)->locale;
    rvfDerefTmp = tmp;
    chpl_here_alloc_size = sizeof(chpl__class_localson_fn86_object);
    chpl_here_alloc_tmp = _local_chpl_here_alloc(chpl_here_alloc_size, INT16(36));
    _args_foron_fn = ((_class_localson_fn86)(chpl_here_alloc_tmp));
    chpl_check_nil(_args_foron_fn, INT64(36), "/home/kp167/chap-svn/modules/standard/List.chpl");
    (_args_foron_fn)->_0__tmp = call_tmp25;
    chpl_check_nil(_args_foron_fn, INT64(36), "/home/kp167/chap-svn/modules/standard/List.chpl");
    (_args_foron_fn)->_1_rvfDerefTmp = rvfDerefTmp;
    /*** _local_wrapon_fn5 ***/ chpl_executeOn(&call_tmp25, INT32(91), _args_foron_fn, sizeof(chpl__class_localson_fn86_object), INT64(36), "/home/kp167/chap-svn/modules/standard/List.chpl");
    _local_chpl_here_free(((void*)(_args_foron_fn)));
    local_this6 = this8;
    chpl_check_nil(local_this6, INT64(37), "/home/kp167/chap-svn/modules/standard/List.chpl");
    call_tmp26 = &((local_this6)->length);
    *(call_tmp26) -= INT64(1);
  }
  return;
}

/* List.chpl:22 */
static void remove3(chpl____wide__ref_list_BaseDom* const this8, chpl____wide_BaseDom* const x) {
  chpl____wide_listNode_BaseDom tmp = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_listNode_BaseDom ret = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_listNode_BaseDom type_tmp = {CHPL_LOCALEID_T_INIT, NULL};
  listNode_BaseDom call_tmp = NULL;
  listNode_BaseDom T = NULL;
  chpl____wide_listNode_BaseDom prev = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_listNode_BaseDom _ref_tmp_ = NULL;
  chpl_bool T2;
  chpl____wide_object call_tmp2 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_bool call_tmp3;
  chpl_bool T3;
  chpl____wide_listNode_BaseDom T4 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_BaseDom ret2 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_object call_tmp4 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_object call_tmp5 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_bool call_tmp6;
  _ref_listNode_BaseDom _ref_tmp_2 = NULL;
  chpl____wide_listNode_BaseDom ret3 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_listNode_BaseDom _ref_tmp_3 = NULL;
  chpl____wide_object call_tmp7 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_bool call_tmp8;
  chpl_bool T5;
  chpl____wide_listNode_BaseDom T6 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_BaseDom ret4 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_object call_tmp9 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_object call_tmp10 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_bool call_tmp11;
  chpl____wide_object call_tmp12 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_bool call_tmp13;
  chpl____wide_object call_tmp14 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_bool call_tmp15;
  chpl____wide__ref_listNode_BaseDom call_tmp16 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_listNode_BaseDom ret5 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_listNode_BaseDom ret6 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_object call_tmp17 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_object call_tmp18 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_bool call_tmp19;
  chpl____wide__ref_listNode_BaseDom call_tmp20 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_listNode_BaseDom ret7 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_listNode_BaseDom ret8 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_object call_tmp21 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_object call_tmp22 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_bool call_tmp23;
  chpl____wide__ref_listNode_BaseDom call_tmp24 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_localeID_t call_tmp25;
  chpl____wide_listNode_BaseDom rvfDerefTmp = {CHPL_LOCALEID_T_INIT, NULL};
  _class_localson_fn86 _args_foron_fn = NULL;
  int64_t chpl_here_alloc_size;
  chpl_opaque chpl_here_alloc_tmp;
  chpl____wide__ref_int64_t call_tmp26 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_listNode_BaseDom chpl_macro_tmp_1452;
  chpl____wide_listNode_BaseDom chpl_macro_tmp_1453;
  chpl____wide_listNode_BaseDom chpl_macro_tmp_1454;
  chpl____wide_object chpl_macro_tmp_1455;
  chpl____wide__ref_BaseDom chpl_macro_tmp_1456;
  chpl____wide_object chpl_macro_tmp_1457;
  chpl____wide_object chpl_macro_tmp_1458;
  chpl____wide__ref_listNode_BaseDom chpl_macro_tmp_1459;
  chpl____wide_object chpl_macro_tmp_1460;
  chpl____wide__ref_BaseDom chpl_macro_tmp_1461;
  chpl____wide_object chpl_macro_tmp_1462;
  chpl____wide_object chpl_macro_tmp_1463;
  chpl____wide_object chpl_macro_tmp_1464;
  chpl____wide_object chpl_macro_tmp_1465;
  chpl____wide__ref_listNode_BaseDom chpl_macro_tmp_1466;
  chpl____wide__ref_listNode_BaseDom chpl_macro_tmp_1467;
  chpl____wide__ref_listNode_BaseDom chpl_macro_tmp_1468;
  chpl____wide_object chpl_macro_tmp_1469;
  chpl____wide_object chpl_macro_tmp_1470;
  chpl____wide__ref_listNode_BaseDom chpl_macro_tmp_1471;
  chpl____wide__ref_listNode_BaseDom chpl_macro_tmp_1472;
  chpl____wide__ref_listNode_BaseDom chpl_macro_tmp_1473;
  chpl____wide_object chpl_macro_tmp_1474;
  chpl____wide_object chpl_macro_tmp_1475;
  chpl____wide__ref_listNode_BaseDom chpl_macro_tmp_1476;
  chpl____wide__ref_int64_t chpl_macro_tmp_1477;
  int64_t chpl_macro_tmp_1478;
  chpl_macro_tmp_1452.locale = (*(this8)).locale;
  chpl_macro_tmp_1452.addr = &(((*(this8)).addr)->first);
  chpl_gen_comm_get(((void*)(&ret)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_1452).locale), INT64(0), NULL), (chpl_macro_tmp_1452).addr, sizeof(chpl____wide_listNode_BaseDom), -1, INT64(1), INT64(23), "/home/kp167/chap-svn/modules/standard/List.chpl");
  tmp = ret;
  T = ((listNode_BaseDom)(nil));
  call_tmp = T;
  chpl_macro_tmp_1453.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_1453.addr = call_tmp;
  type_tmp = chpl_macro_tmp_1453;
  _ref_tmp_ = &type_tmp;
  chpl_macro_tmp_1454.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_1454.addr = NULL;
  *(_ref_tmp_) = chpl_macro_tmp_1454;
  prev = type_tmp;
  chpl_macro_tmp_1455.locale = (&ret)->locale;
  chpl_macro_tmp_1455.addr = ((object)((&ret)->addr));
  call_tmp2 = chpl_macro_tmp_1455;
  call_tmp3 = (&call_tmp2)->addr != nil;
  if (call_tmp3) {
    T4 = ret;
    chpl_check_nil((&T4)->addr, INT64(25), "/home/kp167/chap-svn/modules/standard/List.chpl");
    chpl_macro_tmp_1456.locale = (&T4)->locale;
    chpl_macro_tmp_1456.addr = &(((&T4)->addr)->data);
    chpl_gen_comm_get(((void*)(&ret2)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_1456).locale), INT64(0), NULL), (chpl_macro_tmp_1456).addr, sizeof(chpl____wide_BaseDom), -1, INT64(1), INT64(25), "/home/kp167/chap-svn/modules/standard/List.chpl");
    chpl_macro_tmp_1457.locale = (x)->locale;
    chpl_macro_tmp_1457.addr = ((object)((x)->addr));
    call_tmp4 = chpl_macro_tmp_1457;
    chpl_macro_tmp_1458.locale = (&ret2)->locale;
    chpl_macro_tmp_1458.addr = ((object)((&ret2)->addr));
    call_tmp5 = chpl_macro_tmp_1458;
    call_tmp6 = (((&call_tmp5)->addr != (&call_tmp4)->addr) || ((!(! (&call_tmp5)->addr)) && (chpl_nodeFromLocaleID(&((&call_tmp5)->locale), INT64(0), NULL) != chpl_nodeFromLocaleID(&((&call_tmp4)->locale), INT64(0), NULL))));
    T3 = call_tmp6;
  } else {
    T3 = false;
  }
  T2 = T3;
  while (T2) {
    _ref_tmp_2 = &prev;
    *(_ref_tmp_2) = tmp;
    chpl_check_nil((&tmp)->addr, INT64(27), "/home/kp167/chap-svn/modules/standard/List.chpl");
    chpl_macro_tmp_1459.locale = (&tmp)->locale;
    chpl_macro_tmp_1459.addr = &(((&tmp)->addr)->next);
    chpl_gen_comm_get(((void*)(&ret3)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_1459).locale), INT64(0), NULL), (chpl_macro_tmp_1459).addr, sizeof(chpl____wide_listNode_BaseDom), -1, INT64(1), INT64(27), "/home/kp167/chap-svn/modules/standard/List.chpl");
    _ref_tmp_3 = &tmp;
    *(_ref_tmp_3) = ret3;
    chpl_macro_tmp_1460.locale = (&tmp)->locale;
    chpl_macro_tmp_1460.addr = ((object)((&tmp)->addr));
    call_tmp7 = chpl_macro_tmp_1460;
    call_tmp8 = (&call_tmp7)->addr != nil;
    if (call_tmp8) {
      T6 = tmp;
      chpl_check_nil((&T6)->addr, INT64(25), "/home/kp167/chap-svn/modules/standard/List.chpl");
      chpl_macro_tmp_1461.locale = (&T6)->locale;
      chpl_macro_tmp_1461.addr = &(((&T6)->addr)->data);
      chpl_gen_comm_get(((void*)(&ret4)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_1461).locale), INT64(0), NULL), (chpl_macro_tmp_1461).addr, sizeof(chpl____wide_BaseDom), -1, INT64(1), INT64(25), "/home/kp167/chap-svn/modules/standard/List.chpl");
      chpl_macro_tmp_1462.locale = (x)->locale;
      chpl_macro_tmp_1462.addr = ((object)((x)->addr));
      call_tmp9 = chpl_macro_tmp_1462;
      chpl_macro_tmp_1463.locale = (&ret4)->locale;
      chpl_macro_tmp_1463.addr = ((object)((&ret4)->addr));
      call_tmp10 = chpl_macro_tmp_1463;
      call_tmp11 = (((&call_tmp10)->addr != (&call_tmp9)->addr) || ((!(! (&call_tmp10)->addr)) && (chpl_nodeFromLocaleID(&((&call_tmp10)->locale), INT64(0), NULL) != chpl_nodeFromLocaleID(&((&call_tmp9)->locale), INT64(0), NULL))));
      T5 = call_tmp11;
    } else {
      T5 = false;
    }
    T2 = T5;
  }
  chpl_macro_tmp_1464.locale = (&tmp)->locale;
  chpl_macro_tmp_1464.addr = ((object)((&tmp)->addr));
  call_tmp12 = chpl_macro_tmp_1464;
  call_tmp13 = (&call_tmp12)->addr != nil;
  if (call_tmp13) {
    chpl_macro_tmp_1465.locale = (&prev)->locale;
    chpl_macro_tmp_1465.addr = ((object)((&prev)->addr));
    call_tmp14 = chpl_macro_tmp_1465;
    call_tmp15 = (&call_tmp14)->addr != nil;
    if (call_tmp15) {
      chpl_check_nil((&prev)->addr, INT64(31), "/home/kp167/chap-svn/modules/standard/List.chpl");
      chpl_macro_tmp_1466.locale = (&prev)->locale;
      chpl_macro_tmp_1466.addr = &(((&prev)->addr)->next);
      call_tmp16 = chpl_macro_tmp_1466;
      chpl_check_nil((&tmp)->addr, INT64(31), "/home/kp167/chap-svn/modules/standard/List.chpl");
      chpl_macro_tmp_1467.locale = (&tmp)->locale;
      chpl_macro_tmp_1467.addr = &(((&tmp)->addr)->next);
      chpl_gen_comm_get(((void*)(&ret5)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_1467).locale), INT64(0), NULL), (chpl_macro_tmp_1467).addr, sizeof(chpl____wide_listNode_BaseDom), -1, INT64(1), INT64(31), "/home/kp167/chap-svn/modules/standard/List.chpl");
      chpl_gen_comm_put(((void*)(&ret5)), chpl_nodeFromLocaleID(&((call_tmp16).locale), INT64(0), NULL), (call_tmp16).addr, sizeof(chpl____wide_listNode_BaseDom), -1, INT64(1), INT64(31), "/home/kp167/chap-svn/modules/standard/List.chpl");
    }
    chpl_macro_tmp_1468.locale = (*(this8)).locale;
    chpl_macro_tmp_1468.addr = &(((*(this8)).addr)->first);
    chpl_gen_comm_get(((void*)(&ret6)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_1468).locale), INT64(0), NULL), (chpl_macro_tmp_1468).addr, sizeof(chpl____wide_listNode_BaseDom), -1, INT64(1), INT64(32), "/home/kp167/chap-svn/modules/standard/List.chpl");
    chpl_macro_tmp_1469.locale = (&tmp)->locale;
    chpl_macro_tmp_1469.addr = ((object)((&tmp)->addr));
    call_tmp17 = chpl_macro_tmp_1469;
    chpl_macro_tmp_1470.locale = (&ret6)->locale;
    chpl_macro_tmp_1470.addr = ((object)((&ret6)->addr));
    call_tmp18 = chpl_macro_tmp_1470;
    call_tmp19 = (! (((&call_tmp18)->addr != (&call_tmp17)->addr) || ((!(! (&call_tmp18)->addr)) && (chpl_nodeFromLocaleID(&((&call_tmp18)->locale), INT64(0), NULL) != chpl_nodeFromLocaleID(&((&call_tmp17)->locale), INT64(0), NULL)))));
    if (call_tmp19) {
      chpl_macro_tmp_1471.locale = (*(this8)).locale;
      chpl_macro_tmp_1471.addr = &(((*(this8)).addr)->first);
      call_tmp20 = chpl_macro_tmp_1471;
      chpl_check_nil((&tmp)->addr, INT64(33), "/home/kp167/chap-svn/modules/standard/List.chpl");
      chpl_macro_tmp_1472.locale = (&tmp)->locale;
      chpl_macro_tmp_1472.addr = &(((&tmp)->addr)->next);
      chpl_gen_comm_get(((void*)(&ret7)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_1472).locale), INT64(0), NULL), (chpl_macro_tmp_1472).addr, sizeof(chpl____wide_listNode_BaseDom), -1, INT64(1), INT64(33), "/home/kp167/chap-svn/modules/standard/List.chpl");
      chpl_gen_comm_put(((void*)(&ret7)), chpl_nodeFromLocaleID(&((call_tmp20).locale), INT64(0), NULL), (call_tmp20).addr, sizeof(chpl____wide_listNode_BaseDom), -1, INT64(1), INT64(33), "/home/kp167/chap-svn/modules/standard/List.chpl");
    }
    chpl_macro_tmp_1473.locale = (*(this8)).locale;
    chpl_macro_tmp_1473.addr = &(((*(this8)).addr)->last);
    chpl_gen_comm_get(((void*)(&ret8)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_1473).locale), INT64(0), NULL), (chpl_macro_tmp_1473).addr, sizeof(chpl____wide_listNode_BaseDom), -1, INT64(1), INT64(34), "/home/kp167/chap-svn/modules/standard/List.chpl");
    chpl_macro_tmp_1474.locale = (&tmp)->locale;
    chpl_macro_tmp_1474.addr = ((object)((&tmp)->addr));
    call_tmp21 = chpl_macro_tmp_1474;
    chpl_macro_tmp_1475.locale = (&ret8)->locale;
    chpl_macro_tmp_1475.addr = ((object)((&ret8)->addr));
    call_tmp22 = chpl_macro_tmp_1475;
    call_tmp23 = (! (((&call_tmp22)->addr != (&call_tmp21)->addr) || ((!(! (&call_tmp22)->addr)) && (chpl_nodeFromLocaleID(&((&call_tmp22)->locale), INT64(0), NULL) != chpl_nodeFromLocaleID(&((&call_tmp21)->locale), INT64(0), NULL)))));
    if (call_tmp23) {
      chpl_macro_tmp_1476.locale = (*(this8)).locale;
      chpl_macro_tmp_1476.addr = &(((*(this8)).addr)->last);
      call_tmp24 = chpl_macro_tmp_1476;
      chpl_gen_comm_put(((void*)(&prev)), chpl_nodeFromLocaleID(&((call_tmp24).locale), INT64(0), NULL), (call_tmp24).addr, sizeof(chpl____wide_listNode_BaseDom), -1, INT64(1), INT64(35), "/home/kp167/chap-svn/modules/standard/List.chpl");
    }
    call_tmp25 = (&tmp)->locale;
    rvfDerefTmp = tmp;
    chpl_here_alloc_size = sizeof(chpl__class_localson_fn86_object);
    chpl_here_alloc_tmp = chpl_here_alloc(chpl_here_alloc_size, INT16(36));
    _args_foron_fn = ((_class_localson_fn86)(chpl_here_alloc_tmp));
    chpl_check_nil(_args_foron_fn, INT64(36), "/home/kp167/chap-svn/modules/standard/List.chpl");
    (_args_foron_fn)->_0__tmp = call_tmp25;
    chpl_check_nil(_args_foron_fn, INT64(36), "/home/kp167/chap-svn/modules/standard/List.chpl");
    (_args_foron_fn)->_1_rvfDerefTmp = rvfDerefTmp;
    /*** wrapon_fn86 ***/ chpl_executeOn(&call_tmp25, INT32(93), _args_foron_fn, sizeof(chpl__class_localson_fn86_object), INT64(36), "/home/kp167/chap-svn/modules/standard/List.chpl");
    chpl_here_free(((void*)(_args_foron_fn)));
    chpl_macro_tmp_1477.locale = (*(this8)).locale;
    chpl_macro_tmp_1477.addr = &(((*(this8)).addr)->length);
    call_tmp26 = chpl_macro_tmp_1477;
    chpl_gen_comm_get(((void*)(&chpl_macro_tmp_1478)), chpl_nodeFromLocaleID(&((call_tmp26).locale), INT64(0), NULL), (call_tmp26).addr, sizeof(int64_t), -1, INT64(1), INT64(37), "/home/kp167/chap-svn/modules/standard/List.chpl");
    chpl_macro_tmp_1478 -= INT64(1);
    chpl_gen_comm_put(((void*)(&chpl_macro_tmp_1478)), chpl_nodeFromLocaleID(&((call_tmp26).locale), INT64(0), NULL), (call_tmp26).addr, sizeof(int64_t), -1, INT64(1), INT64(37), "/home/kp167/chap-svn/modules/standard/List.chpl");
  }
  return;
}

/* List.chpl:22 */
static void _local_remove2(_ref_list_BaseArr this8, chpl____wide_BaseArr* const x) {
  chpl____wide_listNode_BaseArr tmp = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_listNode_BaseArr ret = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_list_BaseArr local_this = NULL;
  chpl____wide_listNode_BaseArr type_tmp = {CHPL_LOCALEID_T_INIT, NULL};
  listNode_BaseArr call_tmp = NULL;
  listNode_BaseArr T = NULL;
  chpl____wide_listNode_BaseArr prev = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_listNode_BaseArr _ref_tmp_ = NULL;
  _ref_listNode_BaseArr local__ref_tmp_ = NULL;
  chpl_bool T2;
  chpl____wide_object call_tmp2 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_bool call_tmp3;
  chpl_bool T3;
  chpl____wide_listNode_BaseArr T4 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_BaseArr ret2 = {CHPL_LOCALEID_T_INIT, NULL};
  listNode_BaseArr local__tmp = NULL;
  chpl____wide_object call_tmp4 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_object call_tmp5 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_bool call_tmp6;
  _ref_listNode_BaseArr _ref_tmp_2 = NULL;
  _ref_listNode_BaseArr local__ref_tmp_2 = NULL;
  chpl____wide_listNode_BaseArr ret3 = {CHPL_LOCALEID_T_INIT, NULL};
  listNode_BaseArr local_tmp = NULL;
  _ref_listNode_BaseArr _ref_tmp_3 = NULL;
  _ref_listNode_BaseArr local__ref_tmp_3 = NULL;
  chpl____wide_object call_tmp7 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_bool call_tmp8;
  chpl_bool T5;
  chpl____wide_listNode_BaseArr T6 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_BaseArr ret4 = {CHPL_LOCALEID_T_INIT, NULL};
  listNode_BaseArr local__tmp2 = NULL;
  chpl____wide_object call_tmp9 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_object call_tmp10 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_bool call_tmp11;
  chpl____wide_object call_tmp12 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_bool call_tmp13;
  chpl____wide_object call_tmp14 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_bool call_tmp15;
  _ref_listNode_BaseArr call_tmp16 = NULL;
  listNode_BaseArr local_prev = NULL;
  chpl____wide_listNode_BaseArr ret5 = {CHPL_LOCALEID_T_INIT, NULL};
  listNode_BaseArr local_tmp2 = NULL;
  _ref_listNode_BaseArr local_call_tmp = NULL;
  chpl____wide_listNode_BaseArr ret6 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_list_BaseArr local_this2 = NULL;
  chpl____wide_object call_tmp17 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_object call_tmp18 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_bool call_tmp19;
  _ref_listNode_BaseArr call_tmp20 = NULL;
  _ref_list_BaseArr local_this3 = NULL;
  chpl____wide_listNode_BaseArr ret7 = {CHPL_LOCALEID_T_INIT, NULL};
  listNode_BaseArr local_tmp3 = NULL;
  _ref_listNode_BaseArr local_call_tmp2 = NULL;
  chpl____wide_listNode_BaseArr ret8 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_list_BaseArr local_this4 = NULL;
  chpl____wide_object call_tmp21 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_object call_tmp22 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_bool call_tmp23;
  _ref_listNode_BaseArr call_tmp24 = NULL;
  _ref_list_BaseArr local_this5 = NULL;
  _ref_listNode_BaseArr local_call_tmp3 = NULL;
  chpl_localeID_t call_tmp25;
  chpl____wide_listNode_BaseArr rvfDerefTmp = {CHPL_LOCALEID_T_INIT, NULL};
  _class_localson_fn87 _args_foron_fn = NULL;
  int64_t chpl_here_alloc_size;
  chpl_opaque chpl_here_alloc_tmp;
  _ref_int64_t call_tmp26 = NULL;
  _ref_list_BaseArr local_this6 = NULL;
  chpl____wide_listNode_BaseArr chpl_macro_tmp_1479;
  chpl____wide_listNode_BaseArr chpl_macro_tmp_1480;
  chpl____wide_object chpl_macro_tmp_1481;
  chpl____wide_object chpl_macro_tmp_1482;
  chpl____wide_object chpl_macro_tmp_1483;
  chpl____wide_object chpl_macro_tmp_1484;
  chpl____wide_object chpl_macro_tmp_1485;
  chpl____wide_object chpl_macro_tmp_1486;
  chpl____wide_object chpl_macro_tmp_1487;
  chpl____wide_object chpl_macro_tmp_1488;
  chpl____wide_object chpl_macro_tmp_1489;
  chpl____wide_object chpl_macro_tmp_1490;
  chpl____wide_object chpl_macro_tmp_1491;
  chpl____wide_object chpl_macro_tmp_1492;
  local_this = this8;
  chpl_check_nil(local_this, INT64(23), "/home/kp167/chap-svn/modules/standard/List.chpl");
  ret = (local_this)->first;
  tmp = ret;
  T = ((listNode_BaseArr)(nil));
  call_tmp = T;
  chpl_macro_tmp_1479.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_1479.addr = call_tmp;
  type_tmp = chpl_macro_tmp_1479;
  _ref_tmp_ = &type_tmp;
  local__ref_tmp_ = _ref_tmp_;
  chpl_macro_tmp_1480.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_1480.addr = NULL;
  *(local__ref_tmp_) = chpl_macro_tmp_1480;
  prev = type_tmp;
  chpl_macro_tmp_1481.locale = (&ret)->locale;
  chpl_macro_tmp_1481.addr = ((object)((&ret)->addr));
  call_tmp2 = chpl_macro_tmp_1481;
  call_tmp3 = (&call_tmp2)->addr != nil;
  if (call_tmp3) {
    T4 = ret;
    chpl_check_local(chpl_nodeFromLocaleID(&((&T4)->locale), INT64(0), NULL), INT64(25), "/home/kp167/chap-svn/modules/standard/List.chpl", "cannot access remote data in local block");
    local__tmp = (&T4)->addr;
    chpl_check_nil(local__tmp, INT64(25), "/home/kp167/chap-svn/modules/standard/List.chpl");
    ret2 = (local__tmp)->data;
    chpl_macro_tmp_1482.locale = (x)->locale;
    chpl_macro_tmp_1482.addr = ((object)((x)->addr));
    call_tmp4 = chpl_macro_tmp_1482;
    chpl_macro_tmp_1483.locale = (&ret2)->locale;
    chpl_macro_tmp_1483.addr = ((object)((&ret2)->addr));
    call_tmp5 = chpl_macro_tmp_1483;
    call_tmp6 = (((&call_tmp5)->addr != (&call_tmp4)->addr) || ((!(! (&call_tmp5)->addr)) && (chpl_nodeFromLocaleID(&((&call_tmp5)->locale), INT64(0), NULL) != chpl_nodeFromLocaleID(&((&call_tmp4)->locale), INT64(0), NULL))));
    T3 = call_tmp6;
  } else {
    T3 = false;
  }
  T2 = T3;
  while (T2) {
    _ref_tmp_2 = &prev;
    local__ref_tmp_2 = _ref_tmp_2;
    *(local__ref_tmp_2) = tmp;
    chpl_check_local(chpl_nodeFromLocaleID(&((&tmp)->locale), INT64(0), NULL), INT64(27), "/home/kp167/chap-svn/modules/standard/List.chpl", "cannot access remote data in local block");
    local_tmp = (&tmp)->addr;
    chpl_check_nil(local_tmp, INT64(27), "/home/kp167/chap-svn/modules/standard/List.chpl");
    ret3 = (local_tmp)->next;
    _ref_tmp_3 = &tmp;
    local__ref_tmp_3 = _ref_tmp_3;
    *(local__ref_tmp_3) = ret3;
    chpl_macro_tmp_1484.locale = (&tmp)->locale;
    chpl_macro_tmp_1484.addr = ((object)((&tmp)->addr));
    call_tmp7 = chpl_macro_tmp_1484;
    call_tmp8 = (&call_tmp7)->addr != nil;
    if (call_tmp8) {
      T6 = tmp;
      chpl_check_local(chpl_nodeFromLocaleID(&((&T6)->locale), INT64(0), NULL), INT64(25), "/home/kp167/chap-svn/modules/standard/List.chpl", "cannot access remote data in local block");
      local__tmp2 = (&T6)->addr;
      chpl_check_nil(local__tmp2, INT64(25), "/home/kp167/chap-svn/modules/standard/List.chpl");
      ret4 = (local__tmp2)->data;
      chpl_macro_tmp_1485.locale = (x)->locale;
      chpl_macro_tmp_1485.addr = ((object)((x)->addr));
      call_tmp9 = chpl_macro_tmp_1485;
      chpl_macro_tmp_1486.locale = (&ret4)->locale;
      chpl_macro_tmp_1486.addr = ((object)((&ret4)->addr));
      call_tmp10 = chpl_macro_tmp_1486;
      call_tmp11 = (((&call_tmp10)->addr != (&call_tmp9)->addr) || ((!(! (&call_tmp10)->addr)) && (chpl_nodeFromLocaleID(&((&call_tmp10)->locale), INT64(0), NULL) != chpl_nodeFromLocaleID(&((&call_tmp9)->locale), INT64(0), NULL))));
      T5 = call_tmp11;
    } else {
      T5 = false;
    }
    T2 = T5;
  }
  chpl_macro_tmp_1487.locale = (&tmp)->locale;
  chpl_macro_tmp_1487.addr = ((object)((&tmp)->addr));
  call_tmp12 = chpl_macro_tmp_1487;
  call_tmp13 = (&call_tmp12)->addr != nil;
  if (call_tmp13) {
    chpl_macro_tmp_1488.locale = (&prev)->locale;
    chpl_macro_tmp_1488.addr = ((object)((&prev)->addr));
    call_tmp14 = chpl_macro_tmp_1488;
    call_tmp15 = (&call_tmp14)->addr != nil;
    if (call_tmp15) {
      chpl_check_local(chpl_nodeFromLocaleID(&((&prev)->locale), INT64(0), NULL), INT64(31), "/home/kp167/chap-svn/modules/standard/List.chpl", "cannot access remote data in local block");
      local_prev = (&prev)->addr;
      chpl_check_nil(local_prev, INT64(31), "/home/kp167/chap-svn/modules/standard/List.chpl");
      call_tmp16 = &((local_prev)->next);
      chpl_check_local(chpl_nodeFromLocaleID(&((&tmp)->locale), INT64(0), NULL), INT64(31), "/home/kp167/chap-svn/modules/standard/List.chpl", "cannot access remote data in local block");
      local_tmp2 = (&tmp)->addr;
      chpl_check_nil(local_tmp2, INT64(31), "/home/kp167/chap-svn/modules/standard/List.chpl");
      ret5 = (local_tmp2)->next;
      local_call_tmp = call_tmp16;
      *(local_call_tmp) = ret5;
    }
    local_this2 = this8;
    chpl_check_nil(local_this2, INT64(32), "/home/kp167/chap-svn/modules/standard/List.chpl");
    ret6 = (local_this2)->first;
    chpl_macro_tmp_1489.locale = (&tmp)->locale;
    chpl_macro_tmp_1489.addr = ((object)((&tmp)->addr));
    call_tmp17 = chpl_macro_tmp_1489;
    chpl_macro_tmp_1490.locale = (&ret6)->locale;
    chpl_macro_tmp_1490.addr = ((object)((&ret6)->addr));
    call_tmp18 = chpl_macro_tmp_1490;
    call_tmp19 = (! (((&call_tmp18)->addr != (&call_tmp17)->addr) || ((!(! (&call_tmp18)->addr)) && (chpl_nodeFromLocaleID(&((&call_tmp18)->locale), INT64(0), NULL) != chpl_nodeFromLocaleID(&((&call_tmp17)->locale), INT64(0), NULL)))));
    if (call_tmp19) {
      local_this3 = this8;
      chpl_check_nil(local_this3, INT64(33), "/home/kp167/chap-svn/modules/standard/List.chpl");
      call_tmp20 = &((local_this3)->first);
      chpl_check_local(chpl_nodeFromLocaleID(&((&tmp)->locale), INT64(0), NULL), INT64(33), "/home/kp167/chap-svn/modules/standard/List.chpl", "cannot access remote data in local block");
      local_tmp3 = (&tmp)->addr;
      chpl_check_nil(local_tmp3, INT64(33), "/home/kp167/chap-svn/modules/standard/List.chpl");
      ret7 = (local_tmp3)->next;
      local_call_tmp2 = call_tmp20;
      *(local_call_tmp2) = ret7;
    }
    local_this4 = this8;
    chpl_check_nil(local_this4, INT64(34), "/home/kp167/chap-svn/modules/standard/List.chpl");
    ret8 = (local_this4)->last;
    chpl_macro_tmp_1491.locale = (&tmp)->locale;
    chpl_macro_tmp_1491.addr = ((object)((&tmp)->addr));
    call_tmp21 = chpl_macro_tmp_1491;
    chpl_macro_tmp_1492.locale = (&ret8)->locale;
    chpl_macro_tmp_1492.addr = ((object)((&ret8)->addr));
    call_tmp22 = chpl_macro_tmp_1492;
    call_tmp23 = (! (((&call_tmp22)->addr != (&call_tmp21)->addr) || ((!(! (&call_tmp22)->addr)) && (chpl_nodeFromLocaleID(&((&call_tmp22)->locale), INT64(0), NULL) != chpl_nodeFromLocaleID(&((&call_tmp21)->locale), INT64(0), NULL)))));
    if (call_tmp23) {
      local_this5 = this8;
      chpl_check_nil(local_this5, INT64(35), "/home/kp167/chap-svn/modules/standard/List.chpl");
      call_tmp24 = &((local_this5)->last);
      local_call_tmp3 = call_tmp24;
      *(local_call_tmp3) = prev;
    }
    call_tmp25 = (&tmp)->locale;
    rvfDerefTmp = tmp;
    chpl_here_alloc_size = sizeof(chpl__class_localson_fn87_object);
    chpl_here_alloc_tmp = _local_chpl_here_alloc(chpl_here_alloc_size, INT16(36));
    _args_foron_fn = ((_class_localson_fn87)(chpl_here_alloc_tmp));
    chpl_check_nil(_args_foron_fn, INT64(36), "/home/kp167/chap-svn/modules/standard/List.chpl");
    (_args_foron_fn)->_0__tmp = call_tmp25;
    chpl_check_nil(_args_foron_fn, INT64(36), "/home/kp167/chap-svn/modules/standard/List.chpl");
    (_args_foron_fn)->_1_rvfDerefTmp = rvfDerefTmp;
    /*** _local_wrapon_fn6 ***/ chpl_executeOn(&call_tmp25, INT32(92), _args_foron_fn, sizeof(chpl__class_localson_fn87_object), INT64(36), "/home/kp167/chap-svn/modules/standard/List.chpl");
    _local_chpl_here_free(((void*)(_args_foron_fn)));
    local_this6 = this8;
    chpl_check_nil(local_this6, INT64(37), "/home/kp167/chap-svn/modules/standard/List.chpl");
    call_tmp26 = &((local_this6)->length);
    *(call_tmp26) -= INT64(1);
  }
  return;
}

/* List.chpl:22 */
static void remove4(chpl____wide__ref_list_BaseArr* const this8, chpl____wide_BaseArr* const x) {
  chpl____wide_listNode_BaseArr tmp = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_listNode_BaseArr ret = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_listNode_BaseArr type_tmp = {CHPL_LOCALEID_T_INIT, NULL};
  listNode_BaseArr call_tmp = NULL;
  listNode_BaseArr T = NULL;
  chpl____wide_listNode_BaseArr prev = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_listNode_BaseArr _ref_tmp_ = NULL;
  chpl_bool T2;
  chpl____wide_object call_tmp2 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_bool call_tmp3;
  chpl_bool T3;
  chpl____wide_listNode_BaseArr T4 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_BaseArr ret2 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_object call_tmp4 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_object call_tmp5 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_bool call_tmp6;
  _ref_listNode_BaseArr _ref_tmp_2 = NULL;
  chpl____wide_listNode_BaseArr ret3 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_listNode_BaseArr _ref_tmp_3 = NULL;
  chpl____wide_object call_tmp7 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_bool call_tmp8;
  chpl_bool T5;
  chpl____wide_listNode_BaseArr T6 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_BaseArr ret4 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_object call_tmp9 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_object call_tmp10 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_bool call_tmp11;
  chpl____wide_object call_tmp12 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_bool call_tmp13;
  chpl____wide_object call_tmp14 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_bool call_tmp15;
  chpl____wide__ref_listNode_BaseArr call_tmp16 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_listNode_BaseArr ret5 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_listNode_BaseArr ret6 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_object call_tmp17 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_object call_tmp18 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_bool call_tmp19;
  chpl____wide__ref_listNode_BaseArr call_tmp20 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_listNode_BaseArr ret7 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_listNode_BaseArr ret8 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_object call_tmp21 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_object call_tmp22 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_bool call_tmp23;
  chpl____wide__ref_listNode_BaseArr call_tmp24 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_localeID_t call_tmp25;
  chpl____wide_listNode_BaseArr rvfDerefTmp = {CHPL_LOCALEID_T_INIT, NULL};
  _class_localson_fn87 _args_foron_fn = NULL;
  int64_t chpl_here_alloc_size;
  chpl_opaque chpl_here_alloc_tmp;
  chpl____wide__ref_int64_t call_tmp26 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_listNode_BaseArr chpl_macro_tmp_1493;
  chpl____wide_listNode_BaseArr chpl_macro_tmp_1494;
  chpl____wide_listNode_BaseArr chpl_macro_tmp_1495;
  chpl____wide_object chpl_macro_tmp_1496;
  chpl____wide__ref_BaseArr chpl_macro_tmp_1497;
  chpl____wide_object chpl_macro_tmp_1498;
  chpl____wide_object chpl_macro_tmp_1499;
  chpl____wide__ref_listNode_BaseArr chpl_macro_tmp_1500;
  chpl____wide_object chpl_macro_tmp_1501;
  chpl____wide__ref_BaseArr chpl_macro_tmp_1502;
  chpl____wide_object chpl_macro_tmp_1503;
  chpl____wide_object chpl_macro_tmp_1504;
  chpl____wide_object chpl_macro_tmp_1505;
  chpl____wide_object chpl_macro_tmp_1506;
  chpl____wide__ref_listNode_BaseArr chpl_macro_tmp_1507;
  chpl____wide__ref_listNode_BaseArr chpl_macro_tmp_1508;
  chpl____wide__ref_listNode_BaseArr chpl_macro_tmp_1509;
  chpl____wide_object chpl_macro_tmp_1510;
  chpl____wide_object chpl_macro_tmp_1511;
  chpl____wide__ref_listNode_BaseArr chpl_macro_tmp_1512;
  chpl____wide__ref_listNode_BaseArr chpl_macro_tmp_1513;
  chpl____wide__ref_listNode_BaseArr chpl_macro_tmp_1514;
  chpl____wide_object chpl_macro_tmp_1515;
  chpl____wide_object chpl_macro_tmp_1516;
  chpl____wide__ref_listNode_BaseArr chpl_macro_tmp_1517;
  chpl____wide__ref_int64_t chpl_macro_tmp_1518;
  int64_t chpl_macro_tmp_1519;
  chpl_macro_tmp_1493.locale = (*(this8)).locale;
  chpl_macro_tmp_1493.addr = &(((*(this8)).addr)->first);
  chpl_gen_comm_get(((void*)(&ret)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_1493).locale), INT64(0), NULL), (chpl_macro_tmp_1493).addr, sizeof(chpl____wide_listNode_BaseArr), -1, INT64(1), INT64(23), "/home/kp167/chap-svn/modules/standard/List.chpl");
  tmp = ret;
  T = ((listNode_BaseArr)(nil));
  call_tmp = T;
  chpl_macro_tmp_1494.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_1494.addr = call_tmp;
  type_tmp = chpl_macro_tmp_1494;
  _ref_tmp_ = &type_tmp;
  chpl_macro_tmp_1495.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_1495.addr = NULL;
  *(_ref_tmp_) = chpl_macro_tmp_1495;
  prev = type_tmp;
  chpl_macro_tmp_1496.locale = (&ret)->locale;
  chpl_macro_tmp_1496.addr = ((object)((&ret)->addr));
  call_tmp2 = chpl_macro_tmp_1496;
  call_tmp3 = (&call_tmp2)->addr != nil;
  if (call_tmp3) {
    T4 = ret;
    chpl_check_nil((&T4)->addr, INT64(25), "/home/kp167/chap-svn/modules/standard/List.chpl");
    chpl_macro_tmp_1497.locale = (&T4)->locale;
    chpl_macro_tmp_1497.addr = &(((&T4)->addr)->data);
    chpl_gen_comm_get(((void*)(&ret2)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_1497).locale), INT64(0), NULL), (chpl_macro_tmp_1497).addr, sizeof(chpl____wide_BaseArr), -1, INT64(1), INT64(25), "/home/kp167/chap-svn/modules/standard/List.chpl");
    chpl_macro_tmp_1498.locale = (x)->locale;
    chpl_macro_tmp_1498.addr = ((object)((x)->addr));
    call_tmp4 = chpl_macro_tmp_1498;
    chpl_macro_tmp_1499.locale = (&ret2)->locale;
    chpl_macro_tmp_1499.addr = ((object)((&ret2)->addr));
    call_tmp5 = chpl_macro_tmp_1499;
    call_tmp6 = (((&call_tmp5)->addr != (&call_tmp4)->addr) || ((!(! (&call_tmp5)->addr)) && (chpl_nodeFromLocaleID(&((&call_tmp5)->locale), INT64(0), NULL) != chpl_nodeFromLocaleID(&((&call_tmp4)->locale), INT64(0), NULL))));
    T3 = call_tmp6;
  } else {
    T3 = false;
  }
  T2 = T3;
  while (T2) {
    _ref_tmp_2 = &prev;
    *(_ref_tmp_2) = tmp;
    chpl_check_nil((&tmp)->addr, INT64(27), "/home/kp167/chap-svn/modules/standard/List.chpl");
    chpl_macro_tmp_1500.locale = (&tmp)->locale;
    chpl_macro_tmp_1500.addr = &(((&tmp)->addr)->next);
    chpl_gen_comm_get(((void*)(&ret3)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_1500).locale), INT64(0), NULL), (chpl_macro_tmp_1500).addr, sizeof(chpl____wide_listNode_BaseArr), -1, INT64(1), INT64(27), "/home/kp167/chap-svn/modules/standard/List.chpl");
    _ref_tmp_3 = &tmp;
    *(_ref_tmp_3) = ret3;
    chpl_macro_tmp_1501.locale = (&tmp)->locale;
    chpl_macro_tmp_1501.addr = ((object)((&tmp)->addr));
    call_tmp7 = chpl_macro_tmp_1501;
    call_tmp8 = (&call_tmp7)->addr != nil;
    if (call_tmp8) {
      T6 = tmp;
      chpl_check_nil((&T6)->addr, INT64(25), "/home/kp167/chap-svn/modules/standard/List.chpl");
      chpl_macro_tmp_1502.locale = (&T6)->locale;
      chpl_macro_tmp_1502.addr = &(((&T6)->addr)->data);
      chpl_gen_comm_get(((void*)(&ret4)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_1502).locale), INT64(0), NULL), (chpl_macro_tmp_1502).addr, sizeof(chpl____wide_BaseArr), -1, INT64(1), INT64(25), "/home/kp167/chap-svn/modules/standard/List.chpl");
      chpl_macro_tmp_1503.locale = (x)->locale;
      chpl_macro_tmp_1503.addr = ((object)((x)->addr));
      call_tmp9 = chpl_macro_tmp_1503;
      chpl_macro_tmp_1504.locale = (&ret4)->locale;
      chpl_macro_tmp_1504.addr = ((object)((&ret4)->addr));
      call_tmp10 = chpl_macro_tmp_1504;
      call_tmp11 = (((&call_tmp10)->addr != (&call_tmp9)->addr) || ((!(! (&call_tmp10)->addr)) && (chpl_nodeFromLocaleID(&((&call_tmp10)->locale), INT64(0), NULL) != chpl_nodeFromLocaleID(&((&call_tmp9)->locale), INT64(0), NULL))));
      T5 = call_tmp11;
    } else {
      T5 = false;
    }
    T2 = T5;
  }
  chpl_macro_tmp_1505.locale = (&tmp)->locale;
  chpl_macro_tmp_1505.addr = ((object)((&tmp)->addr));
  call_tmp12 = chpl_macro_tmp_1505;
  call_tmp13 = (&call_tmp12)->addr != nil;
  if (call_tmp13) {
    chpl_macro_tmp_1506.locale = (&prev)->locale;
    chpl_macro_tmp_1506.addr = ((object)((&prev)->addr));
    call_tmp14 = chpl_macro_tmp_1506;
    call_tmp15 = (&call_tmp14)->addr != nil;
    if (call_tmp15) {
      chpl_check_nil((&prev)->addr, INT64(31), "/home/kp167/chap-svn/modules/standard/List.chpl");
      chpl_macro_tmp_1507.locale = (&prev)->locale;
      chpl_macro_tmp_1507.addr = &(((&prev)->addr)->next);
      call_tmp16 = chpl_macro_tmp_1507;
      chpl_check_nil((&tmp)->addr, INT64(31), "/home/kp167/chap-svn/modules/standard/List.chpl");
      chpl_macro_tmp_1508.locale = (&tmp)->locale;
      chpl_macro_tmp_1508.addr = &(((&tmp)->addr)->next);
      chpl_gen_comm_get(((void*)(&ret5)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_1508).locale), INT64(0), NULL), (chpl_macro_tmp_1508).addr, sizeof(chpl____wide_listNode_BaseArr), -1, INT64(1), INT64(31), "/home/kp167/chap-svn/modules/standard/List.chpl");
      chpl_gen_comm_put(((void*)(&ret5)), chpl_nodeFromLocaleID(&((call_tmp16).locale), INT64(0), NULL), (call_tmp16).addr, sizeof(chpl____wide_listNode_BaseArr), -1, INT64(1), INT64(31), "/home/kp167/chap-svn/modules/standard/List.chpl");
    }
    chpl_macro_tmp_1509.locale = (*(this8)).locale;
    chpl_macro_tmp_1509.addr = &(((*(this8)).addr)->first);
    chpl_gen_comm_get(((void*)(&ret6)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_1509).locale), INT64(0), NULL), (chpl_macro_tmp_1509).addr, sizeof(chpl____wide_listNode_BaseArr), -1, INT64(1), INT64(32), "/home/kp167/chap-svn/modules/standard/List.chpl");
    chpl_macro_tmp_1510.locale = (&tmp)->locale;
    chpl_macro_tmp_1510.addr = ((object)((&tmp)->addr));
    call_tmp17 = chpl_macro_tmp_1510;
    chpl_macro_tmp_1511.locale = (&ret6)->locale;
    chpl_macro_tmp_1511.addr = ((object)((&ret6)->addr));
    call_tmp18 = chpl_macro_tmp_1511;
    call_tmp19 = (! (((&call_tmp18)->addr != (&call_tmp17)->addr) || ((!(! (&call_tmp18)->addr)) && (chpl_nodeFromLocaleID(&((&call_tmp18)->locale), INT64(0), NULL) != chpl_nodeFromLocaleID(&((&call_tmp17)->locale), INT64(0), NULL)))));
    if (call_tmp19) {
      chpl_macro_tmp_1512.locale = (*(this8)).locale;
      chpl_macro_tmp_1512.addr = &(((*(this8)).addr)->first);
      call_tmp20 = chpl_macro_tmp_1512;
      chpl_check_nil((&tmp)->addr, INT64(33), "/home/kp167/chap-svn/modules/standard/List.chpl");
      chpl_macro_tmp_1513.locale = (&tmp)->locale;
      chpl_macro_tmp_1513.addr = &(((&tmp)->addr)->next);
      chpl_gen_comm_get(((void*)(&ret7)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_1513).locale), INT64(0), NULL), (chpl_macro_tmp_1513).addr, sizeof(chpl____wide_listNode_BaseArr), -1, INT64(1), INT64(33), "/home/kp167/chap-svn/modules/standard/List.chpl");
      chpl_gen_comm_put(((void*)(&ret7)), chpl_nodeFromLocaleID(&((call_tmp20).locale), INT64(0), NULL), (call_tmp20).addr, sizeof(chpl____wide_listNode_BaseArr), -1, INT64(1), INT64(33), "/home/kp167/chap-svn/modules/standard/List.chpl");
    }
    chpl_macro_tmp_1514.locale = (*(this8)).locale;
    chpl_macro_tmp_1514.addr = &(((*(this8)).addr)->last);
    chpl_gen_comm_get(((void*)(&ret8)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_1514).locale), INT64(0), NULL), (chpl_macro_tmp_1514).addr, sizeof(chpl____wide_listNode_BaseArr), -1, INT64(1), INT64(34), "/home/kp167/chap-svn/modules/standard/List.chpl");
    chpl_macro_tmp_1515.locale = (&tmp)->locale;
    chpl_macro_tmp_1515.addr = ((object)((&tmp)->addr));
    call_tmp21 = chpl_macro_tmp_1515;
    chpl_macro_tmp_1516.locale = (&ret8)->locale;
    chpl_macro_tmp_1516.addr = ((object)((&ret8)->addr));
    call_tmp22 = chpl_macro_tmp_1516;
    call_tmp23 = (! (((&call_tmp22)->addr != (&call_tmp21)->addr) || ((!(! (&call_tmp22)->addr)) && (chpl_nodeFromLocaleID(&((&call_tmp22)->locale), INT64(0), NULL) != chpl_nodeFromLocaleID(&((&call_tmp21)->locale), INT64(0), NULL)))));
    if (call_tmp23) {
      chpl_macro_tmp_1517.locale = (*(this8)).locale;
      chpl_macro_tmp_1517.addr = &(((*(this8)).addr)->last);
      call_tmp24 = chpl_macro_tmp_1517;
      chpl_gen_comm_put(((void*)(&prev)), chpl_nodeFromLocaleID(&((call_tmp24).locale), INT64(0), NULL), (call_tmp24).addr, sizeof(chpl____wide_listNode_BaseArr), -1, INT64(1), INT64(35), "/home/kp167/chap-svn/modules/standard/List.chpl");
    }
    call_tmp25 = (&tmp)->locale;
    rvfDerefTmp = tmp;
    chpl_here_alloc_size = sizeof(chpl__class_localson_fn87_object);
    chpl_here_alloc_tmp = chpl_here_alloc(chpl_here_alloc_size, INT16(36));
    _args_foron_fn = ((_class_localson_fn87)(chpl_here_alloc_tmp));
    chpl_check_nil(_args_foron_fn, INT64(36), "/home/kp167/chap-svn/modules/standard/List.chpl");
    (_args_foron_fn)->_0__tmp = call_tmp25;
    chpl_check_nil(_args_foron_fn, INT64(36), "/home/kp167/chap-svn/modules/standard/List.chpl");
    (_args_foron_fn)->_1_rvfDerefTmp = rvfDerefTmp;
    /*** wrapon_fn87 ***/ chpl_executeOn(&call_tmp25, INT32(94), _args_foron_fn, sizeof(chpl__class_localson_fn87_object), INT64(36), "/home/kp167/chap-svn/modules/standard/List.chpl");
    chpl_here_free(((void*)(_args_foron_fn)));
    chpl_macro_tmp_1518.locale = (*(this8)).locale;
    chpl_macro_tmp_1518.addr = &(((*(this8)).addr)->length);
    call_tmp26 = chpl_macro_tmp_1518;
    chpl_gen_comm_get(((void*)(&chpl_macro_tmp_1519)), chpl_nodeFromLocaleID(&((call_tmp26).locale), INT64(0), NULL), (call_tmp26).addr, sizeof(int64_t), -1, INT64(1), INT64(37), "/home/kp167/chap-svn/modules/standard/List.chpl");
    chpl_macro_tmp_1519 -= INT64(1);
    chpl_gen_comm_put(((void*)(&chpl_macro_tmp_1519)), chpl_nodeFromLocaleID(&((call_tmp26).locale), INT64(0), NULL), (call_tmp26).addr, sizeof(int64_t), -1, INT64(1), INT64(37), "/home/kp167/chap-svn/modules/standard/List.chpl");
  }
  return;
}

/* List.chpl:36 */
static void _local_on_fn5(chpl____wide_listNode_BaseDom* const delete_tmp) {
  chpl_opaque call_tmp;
  call_tmp = ((void*)((delete_tmp)->addr));
  _local_chpl_here_free(call_tmp);
  return;
}

/* List.chpl:36 */
static void on_fn86(chpl____wide_listNode_BaseDom* const delete_tmp) {
  chpl_opaque call_tmp;
  call_tmp = ((void*)((delete_tmp)->addr));
  chpl_here_free(call_tmp);
  return;
}

/* List.chpl:36 */
static void _local_on_fn6(chpl____wide_listNode_BaseArr* const delete_tmp) {
  chpl_opaque call_tmp;
  call_tmp = ((void*)((delete_tmp)->addr));
  _local_chpl_here_free(call_tmp);
  return;
}

/* List.chpl:36 */
static void on_fn87(chpl____wide_listNode_BaseArr* const delete_tmp) {
  chpl_opaque call_tmp;
  call_tmp = ((void*)((delete_tmp)->addr));
  chpl_here_free(call_tmp);
  return;
}

/* List.chpl:36 */
static void _local_wrapon_fn5(_class_localson_fn86 c) {
  chpl____wide_listNode_BaseDom _1_rvfDerefTmp = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_check_nil(c, INT64(36), "/home/kp167/chap-svn/modules/standard/List.chpl");
  _1_rvfDerefTmp = (c)->_1_rvfDerefTmp;
  _local_on_fn5(&_1_rvfDerefTmp);
  return;
}

/* List.chpl:36 */
static void wrapon_fn86(_class_localson_fn86 c) {
  chpl____wide_listNode_BaseDom _1_rvfDerefTmp = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_check_nil(c, INT64(36), "/home/kp167/chap-svn/modules/standard/List.chpl");
  _1_rvfDerefTmp = (c)->_1_rvfDerefTmp;
  on_fn86(&_1_rvfDerefTmp);
  return;
}

/* List.chpl:36 */
static void _local_wrapon_fn6(_class_localson_fn87 c) {
  chpl____wide_listNode_BaseArr _1_rvfDerefTmp = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_check_nil(c, INT64(36), "/home/kp167/chap-svn/modules/standard/List.chpl");
  _1_rvfDerefTmp = (c)->_1_rvfDerefTmp;
  _local_on_fn6(&_1_rvfDerefTmp);
  return;
}

/* List.chpl:36 */
static void wrapon_fn87(_class_localson_fn87 c) {
  chpl____wide_listNode_BaseArr _1_rvfDerefTmp = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_check_nil(c, INT64(36), "/home/kp167/chap-svn/modules/standard/List.chpl");
  _1_rvfDerefTmp = (c)->_1_rvfDerefTmp;
  on_fn87(&_1_rvfDerefTmp);
  return;
}

/* List.chpl:49 */
static void append(chpl____wide__ref_list_BaseArr* const this8, chpl____wide_BaseArr* const e) {
  chpl____wide_listNode_BaseArr ret = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_object call_tmp = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_bool call_tmp2;
  chpl____wide_listNode_BaseArr call_tmp3 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_listNode_BaseArr call_tmp4 = {CHPL_LOCALEID_T_INIT, NULL};
  listNode_BaseArr this9 = NULL;
  int64_t call_tmp5;
  chpl_opaque cast_tmp;
  listNode_BaseArr T = NULL;
  BaseArr T2 = NULL;
  chpl____wide_BaseArr T3 = {CHPL_LOCALEID_T_INIT, NULL};
  listNode_BaseArr T4 = NULL;
  chpl____wide_listNode_BaseArr T5 = {CHPL_LOCALEID_T_INIT, NULL};
  listNode_BaseArr call_tmp6 = NULL;
  listNode_BaseArr T6 = NULL;
  chpl____wide_listNode_BaseArr T7 = {CHPL_LOCALEID_T_INIT, NULL};
  listNode_BaseArr wrap_call_tmp = NULL;
  chpl____wide_listNode_BaseArr T8 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_listNode_BaseArr call_tmp7 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_listNode_BaseArr call_tmp8 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_listNode_BaseArr ret2 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_listNode_BaseArr call_tmp9 = {CHPL_LOCALEID_T_INIT, NULL};
  listNode_BaseArr this10 = NULL;
  int64_t call_tmp10;
  chpl_opaque cast_tmp2;
  listNode_BaseArr T9 = NULL;
  BaseArr T10 = NULL;
  chpl____wide_BaseArr T11 = {CHPL_LOCALEID_T_INIT, NULL};
  listNode_BaseArr T12 = NULL;
  chpl____wide_listNode_BaseArr T13 = {CHPL_LOCALEID_T_INIT, NULL};
  listNode_BaseArr call_tmp11 = NULL;
  listNode_BaseArr T14 = NULL;
  chpl____wide_listNode_BaseArr T15 = {CHPL_LOCALEID_T_INIT, NULL};
  listNode_BaseArr wrap_call_tmp2 = NULL;
  chpl____wide_listNode_BaseArr T16 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_listNode_BaseArr call_tmp12 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_listNode_BaseArr ret3 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_int64_t call_tmp13 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_listNode_BaseArr chpl_macro_tmp_1520;
  chpl____wide_object chpl_macro_tmp_1521;
  chpl____wide__ref_listNode_BaseArr chpl_macro_tmp_1522;
  chpl____wide__ref_listNode_BaseArr chpl_macro_tmp_1523;
  chpl____wide_BaseArr chpl_macro_tmp_1524;
  chpl____wide_listNode_BaseArr chpl_macro_tmp_1525;
  chpl____wide_listNode_BaseArr chpl_macro_tmp_1526;
  chpl____wide_listNode_BaseArr chpl_macro_tmp_1527;
  chpl____wide__ref_listNode_BaseArr chpl_macro_tmp_1528;
  chpl____wide__ref_listNode_BaseArr chpl_macro_tmp_1529;
  chpl____wide__ref_listNode_BaseArr chpl_macro_tmp_1530;
  chpl____wide__ref_listNode_BaseArr chpl_macro_tmp_1531;
  chpl____wide_BaseArr chpl_macro_tmp_1532;
  chpl____wide_listNode_BaseArr chpl_macro_tmp_1533;
  chpl____wide_listNode_BaseArr chpl_macro_tmp_1534;
  chpl____wide_listNode_BaseArr chpl_macro_tmp_1535;
  chpl____wide__ref_listNode_BaseArr chpl_macro_tmp_1536;
  chpl____wide__ref_listNode_BaseArr chpl_macro_tmp_1537;
  chpl____wide__ref_int64_t chpl_macro_tmp_1538;
  int64_t chpl_macro_tmp_1539;
  chpl_macro_tmp_1520.locale = (*(this8)).locale;
  chpl_macro_tmp_1520.addr = &(((*(this8)).addr)->last);
  chpl_gen_comm_get(((void*)(&ret)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_1520).locale), INT64(0), NULL), (chpl_macro_tmp_1520).addr, sizeof(chpl____wide_listNode_BaseArr), -1, INT64(1), INT64(50), "/home/kp167/chap-svn/modules/standard/List.chpl");
  chpl_macro_tmp_1521.locale = (&ret)->locale;
  chpl_macro_tmp_1521.addr = ((object)((&ret)->addr));
  call_tmp = chpl_macro_tmp_1521;
  call_tmp2 = (&call_tmp)->addr != nil;
  if (call_tmp2) {
    chpl_macro_tmp_1522.locale = (*(this8)).locale;
    chpl_macro_tmp_1522.addr = &(((*(this8)).addr)->last);
    chpl_gen_comm_get(((void*)(&call_tmp3)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_1522).locale), INT64(0), NULL), (chpl_macro_tmp_1522).addr, sizeof(chpl____wide_listNode_BaseArr), -1, INT64(1), INT64(51), "/home/kp167/chap-svn/modules/standard/List.chpl");
    chpl_check_nil((&call_tmp3)->addr, INT64(51), "/home/kp167/chap-svn/modules/standard/List.chpl");
    chpl_macro_tmp_1523.locale = (&call_tmp3)->locale;
    chpl_macro_tmp_1523.addr = &(((&call_tmp3)->addr)->next);
    call_tmp4 = chpl_macro_tmp_1523;
    call_tmp5 = sizeof(chpl_listNode_BaseArr_object);
    cast_tmp = chpl_here_alloc(call_tmp5, INT16(2));
    T = ((listNode_BaseArr)(cast_tmp));
    this9 = T;
    ((object)(this9))->chpl__cid = chpl__cid_listNode_BaseArr;
    T2 = nil;
    chpl_macro_tmp_1524.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_1524.addr = T2;
    T3 = chpl_macro_tmp_1524;
    chpl_check_nil(this9, INT64(51), "/home/kp167/chap-svn/modules/standard/List.chpl");
    (this9)->data = T3;
    T4 = nil;
    chpl_macro_tmp_1525.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_1525.addr = T4;
    T5 = chpl_macro_tmp_1525;
    chpl_check_nil(this9, INT64(51), "/home/kp167/chap-svn/modules/standard/List.chpl");
    (this9)->next = T5;
    chpl_check_nil(this9, INT64(51), "/home/kp167/chap-svn/modules/standard/List.chpl");
    (this9)->data = *(e);
    T6 = ((listNode_BaseArr)(nil));
    call_tmp6 = T6;
    chpl_macro_tmp_1526.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_1526.addr = call_tmp6;
    T7 = chpl_macro_tmp_1526;
    chpl_check_nil(this9, INT64(51), "/home/kp167/chap-svn/modules/standard/List.chpl");
    (this9)->next = T7;
    wrap_call_tmp = _construct_listNode(e, call_tmp6, this9);
    chpl_macro_tmp_1527.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_1527.addr = wrap_call_tmp;
    T8 = chpl_macro_tmp_1527;
    chpl_gen_comm_put(((void*)(&T8)), chpl_nodeFromLocaleID(&((call_tmp4).locale), INT64(0), NULL), (call_tmp4).addr, sizeof(chpl____wide_listNode_BaseArr), -1, INT64(1), INT64(51), "/home/kp167/chap-svn/modules/standard/List.chpl");
    chpl_macro_tmp_1528.locale = (*(this8)).locale;
    chpl_macro_tmp_1528.addr = &(((*(this8)).addr)->last);
    call_tmp7 = chpl_macro_tmp_1528;
    chpl_macro_tmp_1529.locale = (*(this8)).locale;
    chpl_macro_tmp_1529.addr = &(((*(this8)).addr)->last);
    chpl_gen_comm_get(((void*)(&call_tmp8)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_1529).locale), INT64(0), NULL), (chpl_macro_tmp_1529).addr, sizeof(chpl____wide_listNode_BaseArr), -1, INT64(1), INT64(52), "/home/kp167/chap-svn/modules/standard/List.chpl");
    chpl_check_nil((&call_tmp8)->addr, INT64(52), "/home/kp167/chap-svn/modules/standard/List.chpl");
    chpl_macro_tmp_1530.locale = (&call_tmp8)->locale;
    chpl_macro_tmp_1530.addr = &(((&call_tmp8)->addr)->next);
    chpl_gen_comm_get(((void*)(&ret2)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_1530).locale), INT64(0), NULL), (chpl_macro_tmp_1530).addr, sizeof(chpl____wide_listNode_BaseArr), -1, INT64(1), INT64(52), "/home/kp167/chap-svn/modules/standard/List.chpl");
    chpl_gen_comm_put(((void*)(&ret2)), chpl_nodeFromLocaleID(&((call_tmp7).locale), INT64(0), NULL), (call_tmp7).addr, sizeof(chpl____wide_listNode_BaseArr), -1, INT64(1), INT64(52), "/home/kp167/chap-svn/modules/standard/List.chpl");
  } else {
    chpl_macro_tmp_1531.locale = (*(this8)).locale;
    chpl_macro_tmp_1531.addr = &(((*(this8)).addr)->first);
    call_tmp9 = chpl_macro_tmp_1531;
    call_tmp10 = sizeof(chpl_listNode_BaseArr_object);
    cast_tmp2 = chpl_here_alloc(call_tmp10, INT16(2));
    T9 = ((listNode_BaseArr)(cast_tmp2));
    this10 = T9;
    ((object)(this10))->chpl__cid = chpl__cid_listNode_BaseArr;
    T10 = nil;
    chpl_macro_tmp_1532.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_1532.addr = T10;
    T11 = chpl_macro_tmp_1532;
    chpl_check_nil(this10, INT64(54), "/home/kp167/chap-svn/modules/standard/List.chpl");
    (this10)->data = T11;
    T12 = nil;
    chpl_macro_tmp_1533.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_1533.addr = T12;
    T13 = chpl_macro_tmp_1533;
    chpl_check_nil(this10, INT64(54), "/home/kp167/chap-svn/modules/standard/List.chpl");
    (this10)->next = T13;
    chpl_check_nil(this10, INT64(54), "/home/kp167/chap-svn/modules/standard/List.chpl");
    (this10)->data = *(e);
    T14 = ((listNode_BaseArr)(nil));
    call_tmp11 = T14;
    chpl_macro_tmp_1534.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_1534.addr = call_tmp11;
    T15 = chpl_macro_tmp_1534;
    chpl_check_nil(this10, INT64(54), "/home/kp167/chap-svn/modules/standard/List.chpl");
    (this10)->next = T15;
    wrap_call_tmp2 = _construct_listNode(e, call_tmp11, this10);
    chpl_macro_tmp_1535.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_1535.addr = wrap_call_tmp2;
    T16 = chpl_macro_tmp_1535;
    chpl_gen_comm_put(((void*)(&T16)), chpl_nodeFromLocaleID(&((call_tmp9).locale), INT64(0), NULL), (call_tmp9).addr, sizeof(chpl____wide_listNode_BaseArr), -1, INT64(1), INT64(54), "/home/kp167/chap-svn/modules/standard/List.chpl");
    chpl_macro_tmp_1536.locale = (*(this8)).locale;
    chpl_macro_tmp_1536.addr = &(((*(this8)).addr)->last);
    call_tmp12 = chpl_macro_tmp_1536;
    chpl_macro_tmp_1537.locale = (*(this8)).locale;
    chpl_macro_tmp_1537.addr = &(((*(this8)).addr)->first);
    chpl_gen_comm_get(((void*)(&ret3)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_1537).locale), INT64(0), NULL), (chpl_macro_tmp_1537).addr, sizeof(chpl____wide_listNode_BaseArr), -1, INT64(1), INT64(55), "/home/kp167/chap-svn/modules/standard/List.chpl");
    chpl_gen_comm_put(((void*)(&ret3)), chpl_nodeFromLocaleID(&((call_tmp12).locale), INT64(0), NULL), (call_tmp12).addr, sizeof(chpl____wide_listNode_BaseArr), -1, INT64(1), INT64(55), "/home/kp167/chap-svn/modules/standard/List.chpl");
  }
  chpl_macro_tmp_1538.locale = (*(this8)).locale;
  chpl_macro_tmp_1538.addr = &(((*(this8)).addr)->length);
  call_tmp13 = chpl_macro_tmp_1538;
  chpl_gen_comm_get(((void*)(&chpl_macro_tmp_1539)), chpl_nodeFromLocaleID(&((call_tmp13).locale), INT64(0), NULL), (call_tmp13).addr, sizeof(int64_t), -1, INT64(1), INT64(57), "/home/kp167/chap-svn/modules/standard/List.chpl");
  chpl_macro_tmp_1539 += INT64(1);
  chpl_gen_comm_put(((void*)(&chpl_macro_tmp_1539)), chpl_nodeFromLocaleID(&((call_tmp13).locale), INT64(0), NULL), (call_tmp13).addr, sizeof(int64_t), -1, INT64(1), INT64(57), "/home/kp167/chap-svn/modules/standard/List.chpl");
  return;
}

