/* DSIUtil.chpl:1 */
static void chpl__init_DSIUtil(int64_t _ln, c_string _fn) {
  c_string modFormatStr;
  c_string modStr;
  _ref_int32_t refIndentLevel = NULL;
  if (chpl__init_DSIUtil_p) {
    goto _exit_chpl__init_DSIUtil;
  }
  modFormatStr = "%*s\n";
  modStr = "DSIUtil";
  printModuleInit(modFormatStr, modStr, INT64(7));
  refIndentLevel = &moduleInitLevel;
  *(refIndentLevel) += INT64(1);
  chpl__init_DSIUtil_p = true;
  *(refIndentLevel) -= INT64(1);
  _exit_chpl__init_DSIUtil:;
  return;
}

/* DSIUtil.chpl:18 */
static void createTuple(int64_t val, _ref__tuple_1_star_int64_t _retArg) {
  int64_t tup_x1;
  _ref_int64_t call_tmp = NULL;
  tup_x1 = INT64(0);
  call_tmp = &tup_x1;
  *(call_tmp) = val;
  *(*(_retArg) + INT64(0)) = tup_x1;
  return;
}

/* DSIUtil.chpl:28 */
static void _computeChunkStuff(int64_t maxTasks, chpl_bool ignoreRunning, int64_t minSize, _tuple_1_star_range_int64_t_bounded_F* const ranges, _ref__tuple_2_star_int64_t _retArg) {
  _tuple_2_star_int64_t ret;
  int64_t T;
  int64_t T2;
  uint64_t numElems;
  chpl____wide__ref_range_int64_t_bounded_F call_tmp = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_rangeBase_int64_t_bounded_F call_tmp2 = {CHPL_LOCALEID_T_INIT, NULL};
  int64_t call_tmp3;
  uint64_t call_tmp4;
  _ref_uint64_t _ref_tmp_ = NULL;
  int64_t numChunks;
  int64_t call_tmp5;
  chpl_bool call_tmp6;
  _tuple_2_star_int64_t call_tmp7;
  _ref__tuple_2_star_int64_t _ref_tmp_2 = NULL;
  int64_t T3;
  int64_t T4;
  chpl_bool call_tmp8;
  int64_t parDim;
  int64_t maxDim;
  uint64_t maxElems;
  uint64_t call_tmp9;
  range_int64_t_bounded_F call_tmp10;
  _ref_range_int64_t_bounded_F ret_to_arg_ref_tmp_ = NULL;
  range_int64_t_bounded_F _ic__F0_this;
  rangeBase_int64_t_bounded_F T5;
  rangeBase_int64_t_bounded_F _ic__F0_this2;
  int64_t i;
  int64_t ret2;
  int64_t type_tmp;
  int64_t end;
  int64_t T6;
  int64_t ret3;
  int64_t ret4;
  chpl_bool call_tmp11;
  int64_t ret5;
  int64_t call_tmp12;
  _ref_int64_t _ref_tmp_3 = NULL;
  chpl_bool T7;
  chpl_bool call_tmp13;
  int64_t i2;
  uint64_t curElems;
  chpl____wide__ref_range_int64_t_bounded_F call_tmp14 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref__tuple_1_star_range_int64_t_bounded_F _ref_tmp_4 = NULL;
  chpl____wide__ref_rangeBase_int64_t_bounded_F call_tmp15 = {CHPL_LOCALEID_T_INIT, NULL};
  int64_t call_tmp16;
  uint64_t call_tmp17;
  uint64_t call_tmp18;
  chpl_bool call_tmp19;
  _ref_int64_t _ref_tmp_5 = NULL;
  chpl_bool call_tmp20;
  _ref_uint64_t _ref_tmp_6 = NULL;
  _ref_int64_t _ref_tmp_7 = NULL;
  int64_t call_tmp21;
  _ref_int64_t _ref_tmp_8 = NULL;
  chpl_bool call_tmp22;
  chpl_bool call_tmp23;
  _ref_int64_t _ref_tmp_9 = NULL;
  uint64_t call_tmp24;
  chpl_bool call_tmp25;
  int64_t call_tmp26;
  _ref_int64_t _ref_tmp_10 = NULL;
  _tuple_2_star_int64_t call_tmp27;
  _ref__tuple_2_star_int64_t _ref_tmp_11 = NULL;
  int64_t T8;
  int64_t T9;
  chpl____wide__ref_range_int64_t_bounded_F chpl_macro_tmp_1430;
  chpl____wide__ref_rangeBase_int64_t_bounded_F chpl_macro_tmp_1431;
  chpl____wide__ref_rangeBase_int64_t_bounded_F chpl_macro_tmp_1432;
  *(ret + INT64(0)) = INT64(0);
  *(ret + INT64(1)) = INT64(0);
  T = *(ret + INT64(0));
  T2 = *(ret + INT64(1));
  *(*(_retArg) + INT64(0)) = T;
  *(*(_retArg) + INT64(1)) = T2;
  numElems = UINT64(1);
  chpl_macro_tmp_1430.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_1430.addr = (*(ranges) + INT64(0));
  call_tmp = chpl_macro_tmp_1430;
  chpl_macro_tmp_1431.locale = (call_tmp).locale;
  chpl_macro_tmp_1431.addr = &(((call_tmp).addr)->_base);
  call_tmp2 = chpl_macro_tmp_1431;
  call_tmp3 = length(&call_tmp2);
  call_tmp4 = ((uint64_t)(call_tmp3));
  _ref_tmp_ = &numElems;
  *(_ref_tmp_) *= call_tmp4;
  call_tmp5 = _computeNumChunks(maxTasks, ignoreRunning, minSize, numElems);
  numChunks = call_tmp5;
  call_tmp6 = (call_tmp5 == INT64(0));
  if (call_tmp6) {
    *(call_tmp7 + INT64(0)) = INT64(0);
    *(call_tmp7 + INT64(1)) = INT64(-1);
    _ref_tmp_2 = &ret;
    *(*(_ref_tmp_2) + INT64(0)) = *(call_tmp7 + INT64(0));
    *(*(_ref_tmp_2) + INT64(1)) = *(call_tmp7 + INT64(1));
    T3 = *(ret + INT64(0));
    T4 = *(ret + INT64(1));
    *(*(_retArg) + INT64(0)) = T3;
    *(*(_retArg) + INT64(1)) = T4;
    goto _end__computeChunkStuff;
  }
  call_tmp8 = (numChunks > INT64(0));
  assert2(call_tmp8);
  parDim = INT64(-1);
  maxDim = INT64(-1);
  call_tmp9 = min3();
  maxElems = call_tmp9;
  ret_to_arg_ref_tmp_ = &call_tmp10;
  _build_range(INT64(1), INT64(1), ret_to_arg_ref_tmp_);
  _ic__F0_this = call_tmp10;
  T5 = (&_ic__F0_this)->_base;
  _ic__F0_this2 = T5;
  ret2 = (&_ic__F0_this2)->_low;
  i = ret2;
  type_tmp = INT64(0);
  ret3 = (&_ic__F0_this2)->_low;
  ret4 = (&_ic__F0_this2)->_high;
  call_tmp11 = (ret3 > ret4);
  if (call_tmp11) {
    T6 = ret2;
  } else {
    ret5 = (&_ic__F0_this2)->_high;
    call_tmp12 = (ret5 + INT64(1));
    T6 = call_tmp12;
  }
  _ref_tmp_3 = &type_tmp;
  *(_ref_tmp_3) = T6;
  end = type_tmp;
  call_tmp13 = (ret2 != type_tmp);
  T7 = call_tmp13;
  while (T7) {
    i2 = i;
    _ref_tmp_4 = ranges;
    call_tmp14 = this6(_ref_tmp_4, i);
    chpl_macro_tmp_1432.locale = (call_tmp14).locale;
    chpl_macro_tmp_1432.addr = &(((call_tmp14).addr)->_base);
    call_tmp15 = chpl_macro_tmp_1432;
    call_tmp16 = length(&call_tmp15);
    call_tmp17 = ((uint64_t)(call_tmp16));
    curElems = call_tmp17;
    call_tmp18 = ((uint64_t)(numChunks));
    call_tmp19 = (call_tmp17 >= call_tmp18);
    if (call_tmp19) {
      _ref_tmp_5 = &parDim;
      *(_ref_tmp_5) = i;
      goto _breakLabel;
    }
    call_tmp20 = (curElems > maxElems);
    if (call_tmp20) {
      _ref_tmp_6 = &maxElems;
      *(_ref_tmp_6) = curElems;
      _ref_tmp_7 = &maxDim;
      *(_ref_tmp_7) = i2;
    }
    call_tmp21 = (i + INT64(1));
    _ref_tmp_8 = &i;
    *(_ref_tmp_8) = call_tmp21;
    call_tmp22 = (i != end);
    T7 = call_tmp22;
  }
  _breakLabel:;
  call_tmp23 = (parDim == INT64(-1));
  if (call_tmp23) {
    _ref_tmp_9 = &parDim;
    *(_ref_tmp_9) = maxDim;
    call_tmp24 = ((uint64_t)(numChunks));
    call_tmp25 = (maxElems < call_tmp24);
    if (call_tmp25) {
      call_tmp26 = ((int64_t)(maxElems));
      _ref_tmp_10 = &numChunks;
      *(_ref_tmp_10) = call_tmp26;
    }
  }
  *(call_tmp27 + INT64(0)) = numChunks;
  *(call_tmp27 + INT64(1)) = parDim;
  _ref_tmp_11 = &ret;
  *(*(_ref_tmp_11) + INT64(0)) = *(call_tmp27 + INT64(0));
  *(*(_ref_tmp_11) + INT64(1)) = *(call_tmp27 + INT64(1));
  T8 = *(ret + INT64(0));
  T9 = *(ret + INT64(1));
  *(*(_retArg) + INT64(0)) = T8;
  *(*(_retArg) + INT64(1)) = T9;
  _end__computeChunkStuff:;
  return;
}

/* DSIUtil.chpl:73 */
static int64_t _computeNumChunks(int64_t maxTasks, chpl_bool ignoreRunning, int64_t minSize, uint64_t numElems) {
  int64_t ret;
  chpl_bool call_tmp;
  _ref_int64_t _ref_tmp_ = NULL;
  uint64_t unumElems;
  int64_t numChunks;
  chpl_bool call_tmp2;
  int32_t call_tmp3;
  chpl_localeID_t call_tmp4;
  _ref_chpl_localeID_t ret_to_arg_ref_tmp_ = NULL;
  chpl_localeID_t call_tmp5;
  chpl____wide_locale call_tmp6 = {CHPL_LOCALEID_T_INIT, NULL};
  int64_t call_tmp7;
  int64_t call_tmp8;
  int64_t T;
  chpl_bool call_tmp9;
  int64_t call_tmp10;
  _ref_int64_t _ref_tmp_2 = NULL;
  chpl_bool call_tmp11;
  chpl_bool T2;
  int64_t call_tmp12;
  uint64_t call_tmp13;
  chpl_bool call_tmp14;
  chpl_bool T3;
  chpl_bool call_tmp15;
  _ref_int64_t _ref_tmp_3 = NULL;
  int64_t call_tmp16;
  uint64_t call_tmp17;
  chpl_bool call_tmp18;
  chpl_bool T4;
  chpl_bool call_tmp19;
  uint64_t call_tmp20;
  chpl_bool call_tmp21;
  int64_t call_tmp22;
  _ref_int64_t _ref_tmp_4 = NULL;
  _ref_int64_t _ref_tmp_5 = NULL;
  ret = INT64(0);
  call_tmp = (numElems <= UINT64(0));
  if (call_tmp) {
    _ref_tmp_ = &ret;
    *(_ref_tmp_) = INT64(0);
    goto _end__computeNumChunks;
  }
  unumElems = numElems;
  numChunks = maxTasks;
  call_tmp2 = (! ignoreRunning);
  if (call_tmp2) {
    call_tmp3 = chpl_task_getRequestedSubloc();
    ret_to_arg_ref_tmp_ = &call_tmp4;
    chpl_buildLocaleID(chpl_nodeID, call_tmp3, ret_to_arg_ref_tmp_, INT64(81), "/home/kp167/chap-svn/modules/dists/DSIUtil.chpl");
    call_tmp5 = chpl__initCopy_chpl_rt_localeID_t(call_tmp4);
    call_tmp6 = chpl_localeID_to_locale(&call_tmp5);
    call_tmp7 = runningTasks(&call_tmp6);
    call_tmp8 = (call_tmp7 - INT64(1));
    call_tmp9 = (call_tmp8 < maxTasks);
    if (call_tmp9) {
      call_tmp10 = (maxTasks - call_tmp8);
      T = call_tmp10;
    } else {
      T = INT64(1);
    }
    _ref_tmp_2 = &numChunks;
    *(_ref_tmp_2) = T;
  }
  call_tmp11 = (minSize > INT64(0));
  if (call_tmp11) {
    call_tmp12 = (minSize * numChunks);
    call_tmp13 = ((uint64_t)(call_tmp12));
    call_tmp14 = (numElems < call_tmp13);
    if (call_tmp14) {
      call_tmp15 = (numChunks > INT64(1));
      T3 = call_tmp15;
    } else {
      T3 = false;
    }
    T2 = T3;
    while (T2) {
      _ref_tmp_3 = &numChunks;
      *(_ref_tmp_3) -= INT64(1);
      call_tmp16 = (minSize * numChunks);
      call_tmp17 = ((uint64_t)(call_tmp16));
      call_tmp18 = (unumElems < call_tmp17);
      if (call_tmp18) {
        call_tmp19 = (numChunks > INT64(1));
        T4 = call_tmp19;
      } else {
        T4 = false;
      }
      T2 = T4;
    }
  }
  call_tmp20 = ((uint64_t)(numChunks));
  call_tmp21 = (call_tmp20 > unumElems);
  if (call_tmp21) {
    call_tmp22 = ((int64_t)(unumElems));
    _ref_tmp_4 = &numChunks;
    *(_ref_tmp_4) = call_tmp22;
  }
  _ref_tmp_5 = &ret;
  *(_ref_tmp_5) = numChunks;
  _end__computeNumChunks:;
  return ret;
}

/* DSIUtil.chpl:144 */
static uint64_t intCeilXDivByY(uint64_t x, uint64_t y) {
  uint64_t call_tmp;
  uint64_t call_tmp2;
  uint64_t call_tmp3;
  call_tmp = (x - UINT64(1));
  call_tmp2 = (call_tmp / y);
  call_tmp3 = (UINT64(1) + call_tmp2);
  return call_tmp3;
}

/* DSIUtil.chpl:146 */
static void _computeBlock(int64_t numelems, int64_t numblocks, int64_t blocknum, int64_t wayhi, int64_t waylo, int64_t lo, _ref__tuple_2_star_int64_t _retArg) {
  chpl_bool call_tmp;
  int64_t T;
  chpl_bool call_tmp2;
  uint64_t call_tmp3;
  uint64_t call_tmp4;
  uint64_t call_tmp5;
  uint64_t call_tmp6;
  uint64_t call_tmp7;
  int64_t call_tmp8;
  int64_t call_tmp9;
  int64_t T2;
  int64_t call_tmp10;
  chpl_bool call_tmp11;
  uint64_t call_tmp12;
  int64_t call_tmp13;
  uint64_t call_tmp14;
  uint64_t call_tmp15;
  uint64_t call_tmp16;
  uint64_t call_tmp17;
  int64_t call_tmp18;
  int64_t call_tmp19;
  int64_t call_tmp20;
  call_tmp = (numelems == INT64(0));
  if (call_tmp) {
    *(*(_retArg) + INT64(0)) = INT64(1);
    *(*(_retArg) + INT64(1)) = INT64(0);
    goto _end__computeBlock;
  }
  call_tmp2 = (blocknum == INT64(0));
  if (call_tmp2) {
    T = waylo;
  } else {
    call_tmp3 = ((uint64_t)(numelems));
    call_tmp4 = ((uint64_t)(blocknum));
    call_tmp5 = (call_tmp3 * call_tmp4);
    call_tmp6 = ((uint64_t)(numblocks));
    call_tmp7 = intCeilXDivByY(call_tmp5, call_tmp6);
    call_tmp8 = ((int64_t)(call_tmp7));
    call_tmp9 = (lo + call_tmp8);
    T = call_tmp9;
  }
  call_tmp10 = (numblocks - INT64(1));
  call_tmp11 = (blocknum == call_tmp10);
  if (call_tmp11) {
    T2 = wayhi;
  } else {
    call_tmp12 = ((uint64_t)(numelems));
    call_tmp13 = (blocknum + INT64(1));
    call_tmp14 = ((uint64_t)(call_tmp13));
    call_tmp15 = (call_tmp12 * call_tmp14);
    call_tmp16 = ((uint64_t)(numblocks));
    call_tmp17 = intCeilXDivByY(call_tmp15, call_tmp16);
    call_tmp18 = ((int64_t)(call_tmp17));
    call_tmp19 = (lo + call_tmp18);
    call_tmp20 = (call_tmp19 - INT64(1));
    T2 = call_tmp20;
  }
  *(*(_retArg) + INT64(0)) = T;
  *(*(_retArg) + INT64(1)) = T2;
  _end__computeBlock:;
  return;
}

