/* Random.chpl:1 */
static void chpl__init_Random(int64_t _ln, c_string _fn) {
  c_string modFormatStr;
  c_string modStr;
  _ref_int32_t refIndentLevel = NULL;
  SeedGenerators this8;
  SeedGenerators wrap_call_tmp;
  _real64 call_tmp;
  _real64 call_tmp2;
  _real64 call_tmp3;
  _real64 call_tmp4;
  _real64 call_tmp5;
  _real64 call_tmp6;
  _real64 call_tmp7;
  _real64 call_tmp8;
  if (chpl__init_Random_p) {
    goto _exit_chpl__init_Random;
  }
  modFormatStr = "%*s\n";
  modStr = "Random";
  printModuleInit(modFormatStr, modStr, INT64(6));
  refIndentLevel = &moduleInitLevel;
  *(refIndentLevel) += INT64(1);
  chpl__init_Random_p = true;
  {
    chpl__init_Time(INT64(1), "/home/kp167/chap-svn/modules/standard/Random.chpl");
  }
  wrap_call_tmp = _construct_SeedGenerators(&this8);
  SeedGenerator = wrap_call_tmp;
  chpl_comm_broadcast_private(INT64(19), sizeof(SeedGenerators), -1);
  call_tmp = ((_real64)(INT64(23)));
  call_tmp2 = pow(0.5, call_tmp);
  RandomPrivate_r23 = call_tmp2;
  chpl_comm_broadcast_private(INT64(20), sizeof(_real64), -1);
  call_tmp3 = ((_real64)(INT64(23)));
  call_tmp4 = pow(2.0, call_tmp3);
  RandomPrivate_t23 = call_tmp4;
  chpl_comm_broadcast_private(INT64(21), sizeof(_real64), -1);
  call_tmp5 = ((_real64)(INT64(46)));
  call_tmp6 = pow(0.5, call_tmp5);
  RandomPrivate_r46 = call_tmp6;
  chpl_comm_broadcast_private(INT64(22), sizeof(_real64), -1);
  call_tmp7 = ((_real64)(INT64(46)));
  call_tmp8 = pow(2.0, call_tmp7);
  RandomPrivate_t46 = call_tmp8;
  chpl_comm_broadcast_private(INT64(23), sizeof(_real64), -1);
  RandomPrivate_arand = 1220703125.0;
  chpl_comm_broadcast_private(INT64(24), sizeof(_real64), -1);
  *(refIndentLevel) -= INT64(1);
  _exit_chpl__init_Random:;
  return;
}

/* Random.chpl:65 */
static SeedGenerators _construct_SeedGenerators(SeedGenerators* const meme) {
  SeedGenerators this8;
  return *(meme);
}

/* Random.chpl:75 */
static RandomStream_F _construct_RandomStream(int64_t seed, chpl____wide__syncvar_chpl_bool* const RandomStreamPrivate_lock_DOLLAR_, _real64 RandomStreamPrivate_cursor, int64_t RandomStreamPrivate_count, RandomStream_F meme) {
  RandomStream_F this8 = NULL;
  object T = NULL;
  this8 = meme;
  chpl_check_nil(this8, INT64(75), "/home/kp167/chap-svn/modules/standard/Random.chpl");
  T = &((this8)->super);
  _construct_object(T);
  chpl_check_nil(this8, INT64(77), "/home/kp167/chap-svn/modules/standard/Random.chpl");
  (this8)->seed = seed;
  chpl_check_nil(this8, INT64(156), "/home/kp167/chap-svn/modules/standard/Random.chpl");
  (this8)->RandomStreamPrivate_lock_DOLLAR_ = *(RandomStreamPrivate_lock_DOLLAR_);
  chpl_check_nil(this8, INT64(157), "/home/kp167/chap-svn/modules/standard/Random.chpl");
  (this8)->RandomStreamPrivate_cursor = RandomStreamPrivate_cursor;
  chpl_check_nil(this8, INT64(158), "/home/kp167/chap-svn/modules/standard/Random.chpl");
  (this8)->RandomStreamPrivate_count = RandomStreamPrivate_count;
  return this8;
}

/* Random.chpl:75 */
static void chpl__auto_destroy_RandomStream(RandomStream_F this8) {
  chpl____wide__syncvar_chpl_bool _field_destructor_tmp_ = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_check_nil(this8, INT64(156), "/home/kp167/chap-svn/modules/standard/Random.chpl");
  _field_destructor_tmp_ = (this8)->RandomStreamPrivate_lock_DOLLAR_;
  chpl_check_nil((&_field_destructor_tmp_)->addr, INT64(156), "/home/kp167/chap-svn/modules/standard/Random.chpl");
  chpl___TILDE__syncvar(&_field_destructor_tmp_);
  chpl_here_free(((void*)((&_field_destructor_tmp_)->addr)));
  return;
}

/* Random.chpl:79 */
static RandomStream_F RandomStream(int64_t seed) {
  RandomStream_F this8 = NULL;
  RandomStream_F this9 = NULL;
  int64_t call_tmp;
  chpl_opaque cast_tmp;
  RandomStream_F T = NULL;
  chpl____wide__syncvar_chpl_bool wrap_call_tmp = {CHPL_LOCALEID_T_INIT, NULL};
  RandomStream_F wrap_call_tmp2 = NULL;
  int64_t call_tmp2;
  chpl_bool call_tmp3;
  chpl_bool T2;
  chpl_bool call_tmp4;
  chpl_bool T3;
  chpl_bool call_tmp5;
  c_string T4;
  chpl____wide__syncvar_chpl_bool chpl_macro_tmp_1426;
  call_tmp = sizeof(chpl_RandomStream_F_object);
  cast_tmp = chpl_here_alloc(call_tmp, INT16(29));
  T = ((RandomStream_F)(cast_tmp));
  this9 = T;
  ((object)(this9))->chpl__cid = chpl__cid_RandomStream_F;
  chpl_check_nil(this9, INT64(79), "/home/kp167/chap-svn/modules/standard/Random.chpl");
  (this9)->seed = INT64(0);
  chpl_check_nil(this9, INT64(79), "/home/kp167/chap-svn/modules/standard/Random.chpl");
  (this9)->RandomStreamPrivate_cursor = 0.0;
  chpl_check_nil(this9, INT64(79), "/home/kp167/chap-svn/modules/standard/Random.chpl");
  (this9)->RandomStreamPrivate_count = INT64(0);
  chpl_check_nil(this9, INT64(79), "/home/kp167/chap-svn/modules/standard/Random.chpl");
  (this9)->seed = INT64(0);
  chpl_macro_tmp_1426.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_1426.addr = _construct__syncvar2(false);
  wrap_call_tmp = chpl_macro_tmp_1426;
  chpl_check_nil(this9, INT64(79), "/home/kp167/chap-svn/modules/standard/Random.chpl");
  (this9)->RandomStreamPrivate_lock_DOLLAR_ = wrap_call_tmp;
  chpl_check_nil(this9, INT64(79), "/home/kp167/chap-svn/modules/standard/Random.chpl");
  (this9)->RandomStreamPrivate_cursor = 0.0;
  chpl_check_nil(this9, INT64(79), "/home/kp167/chap-svn/modules/standard/Random.chpl");
  (this9)->RandomStreamPrivate_count = INT64(0);
  wrap_call_tmp2 = _construct_RandomStream(INT64(0), &wrap_call_tmp, 0.0, INT64(0), this9);
  this8 = wrap_call_tmp2;
  call_tmp2 = (seed % INT64(2));
  call_tmp3 = (call_tmp2 == INT64(0));
  if (call_tmp3) {
    T2 = true;
  } else {
    call_tmp4 = (seed < INT64(1));
    T2 = call_tmp4;
  }
  if (T2) {
    T3 = true;
  } else {
    call_tmp5 = (seed > INT64(70368744177664));
    T3 = call_tmp5;
  }
  if (T3) {
    T4 = "RandomStream seed must be an odd integer between 0 and 2**46";
    halt(T4, INT64(82), "/home/kp167/chap-svn/modules/standard/Random.chpl");
  }
  chpl_check_nil(wrap_call_tmp2, INT64(83), "/home/kp167/chap-svn/modules/standard/Random.chpl");
  RandomStreamPrivate_init(wrap_call_tmp2, seed);
  return this8;
}

/* Random.chpl:86 */
static _real64 getNext(chpl____wide_RandomStream_F* const this8) {
  _real64 local_RandomPrivate_arand;
  chpl____wide__ref_int64_t call_tmp = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref__real64 call_tmp2 = {CHPL_LOCALEID_T_INIT, NULL};
  _real64 default_arga;
  _real64 wrap_call_tmp;
  chpl____wide__ref_int64_t chpl_macro_tmp_1427;
  int64_t chpl_macro_tmp_1428;
  chpl____wide__ref__real64 chpl_macro_tmp_1429;
  local_RandomPrivate_arand = RandomPrivate_arand;
  chpl_check_nil((this8)->addr, INT64(89), "/home/kp167/chap-svn/modules/standard/Random.chpl");
  chpl_macro_tmp_1427.locale = (this8)->locale;
  chpl_macro_tmp_1427.addr = &(((this8)->addr)->RandomStreamPrivate_count);
  call_tmp = chpl_macro_tmp_1427;
  chpl_gen_comm_get(((void*)(&chpl_macro_tmp_1428)), chpl_nodeFromLocaleID(&((call_tmp).locale), INT64(0), NULL), (call_tmp).addr, sizeof(int64_t), -1, INT64(1), INT64(89), "/home/kp167/chap-svn/modules/standard/Random.chpl");
  chpl_macro_tmp_1428 += INT64(1);
  chpl_gen_comm_put(((void*)(&chpl_macro_tmp_1428)), chpl_nodeFromLocaleID(&((call_tmp).locale), INT64(0), NULL), (call_tmp).addr, sizeof(int64_t), -1, INT64(1), INT64(89), "/home/kp167/chap-svn/modules/standard/Random.chpl");
  chpl_check_nil((this8)->addr, INT64(90), "/home/kp167/chap-svn/modules/standard/Random.chpl");
  chpl_macro_tmp_1429.locale = (this8)->locale;
  chpl_macro_tmp_1429.addr = &(((this8)->addr)->RandomStreamPrivate_cursor);
  call_tmp2 = chpl_macro_tmp_1429;
  default_arga = local_RandomPrivate_arand;
  wrap_call_tmp = RandomPrivate_randlc(&call_tmp2, default_arga);
  return wrap_call_tmp;
}

/* Random.chpl:160 */
static void RandomStreamPrivate_init(RandomStream_F this8, int64_t seed) {
  _ref_int64_t call_tmp = NULL;
  _ref__real64 call_tmp2 = NULL;
  _real64 call_tmp3;
  _ref_int64_t call_tmp4 = NULL;
  chpl_check_nil(this8, INT64(161), "/home/kp167/chap-svn/modules/standard/Random.chpl");
  call_tmp = &((this8)->seed);
  *(call_tmp) = seed;
  chpl_check_nil(this8, INT64(162), "/home/kp167/chap-svn/modules/standard/Random.chpl");
  call_tmp2 = &((this8)->RandomStreamPrivate_cursor);
  call_tmp3 = ((_real64)(seed));
  *(call_tmp2) = call_tmp3;
  chpl_check_nil(this8, INT64(163), "/home/kp167/chap-svn/modules/standard/Random.chpl");
  call_tmp4 = &((this8)->RandomStreamPrivate_count);
  *(call_tmp4) = INT64(1);
  return;
}

/* Random.chpl:186 */
static _real64 RandomPrivate_randlc(chpl____wide__ref__real64* const x, _real64 a) {
  _real64 local_RandomPrivate_t46;
  _real64 local_RandomPrivate_r46;
  _real64 local_RandomPrivate_t23;
  _real64 local_RandomPrivate_r23;
  _real64 _formal_tmp_x;
  _real64 call_tmp;
  _real64 t1;
  _real64 call_tmp2;
  _real64 call_tmp3;
  _real64 call_tmp4;
  _real64 call_tmp5;
  _real64 call_tmp6;
  _ref__real64 _ref_tmp_ = NULL;
  _real64 call_tmp7;
  _real64 call_tmp8;
  _real64 call_tmp9;
  _real64 call_tmp10;
  _real64 call_tmp11;
  _real64 call_tmp12;
  _ref__real64 _ref_tmp_2 = NULL;
  _real64 call_tmp13;
  _real64 call_tmp14;
  _real64 call_tmp15;
  _real64 call_tmp16;
  _real64 call_tmp17;
  _real64 call_tmp18;
  _real64 call_tmp19;
  _real64 call_tmp20;
  _real64 call_tmp21;
  _real64 call_tmp22;
  _real64 call_tmp23;
  _ref__real64 _ref_tmp_3 = NULL;
  _real64 call_tmp24;
  local_RandomPrivate_t46 = RandomPrivate_t46;
  local_RandomPrivate_r46 = RandomPrivate_r46;
  local_RandomPrivate_t23 = RandomPrivate_t23;
  local_RandomPrivate_r23 = RandomPrivate_r23;
  chpl_gen_comm_get(((void*)(&call_tmp)), chpl_nodeFromLocaleID(&((*(x)).locale), INT64(0), NULL), (*(x)).addr, sizeof(_real64), -1, INT64(1), INT64(186), "/home/kp167/chap-svn/modules/standard/Random.chpl");
  _formal_tmp_x = call_tmp;
  call_tmp2 = (local_RandomPrivate_r23 * a);
  t1 = call_tmp2;
  call_tmp3 = floor(call_tmp2);
  call_tmp4 = (local_RandomPrivate_t23 * call_tmp3);
  call_tmp5 = (a - call_tmp4);
  call_tmp6 = (local_RandomPrivate_r23 * call_tmp);
  _ref_tmp_ = &t1;
  *(_ref_tmp_) = call_tmp6;
  call_tmp7 = floor(t1);
  call_tmp8 = (local_RandomPrivate_t23 * call_tmp7);
  call_tmp9 = (call_tmp - call_tmp8);
  call_tmp10 = (call_tmp3 * call_tmp9);
  call_tmp11 = (call_tmp5 * call_tmp7);
  call_tmp12 = (call_tmp10 + call_tmp11);
  _ref_tmp_2 = &t1;
  *(_ref_tmp_2) = call_tmp12;
  call_tmp13 = (local_RandomPrivate_r23 * t1);
  call_tmp14 = floor(call_tmp13);
  call_tmp15 = (local_RandomPrivate_t23 * call_tmp14);
  call_tmp16 = (t1 - call_tmp15);
  call_tmp17 = (local_RandomPrivate_t23 * call_tmp16);
  call_tmp18 = (call_tmp5 * call_tmp9);
  call_tmp19 = (call_tmp17 + call_tmp18);
  call_tmp20 = (local_RandomPrivate_r46 * call_tmp19);
  call_tmp21 = floor(call_tmp20);
  call_tmp22 = (local_RandomPrivate_t46 * call_tmp21);
  call_tmp23 = (call_tmp19 - call_tmp22);
  _ref_tmp_3 = &_formal_tmp_x;
  *(_ref_tmp_3) = call_tmp23;
  call_tmp24 = (local_RandomPrivate_r46 * call_tmp23);
  chpl_gen_comm_put(((void*)(&_formal_tmp_x)), chpl_nodeFromLocaleID(&((*(x)).locale), INT64(0), NULL), (*(x)).addr, sizeof(_real64), -1, INT64(1), INT64(186), "/home/kp167/chap-svn/modules/standard/Random.chpl");
  return call_tmp24;
}

