/* Time.chpl:1 */
static void chpl__init_Time(int64_t _ln, c_string _fn) {
  c_string modFormatStr;
  c_string modStr;
  _ref_int32_t refIndentLevel = NULL;
  if (chpl__init_Time_p) {
    goto _exit_chpl__init_Time;
  }
  modFormatStr = "%*s\n";
  modStr = "Time";
  printModuleInit(modFormatStr, modStr, INT64(4));
  refIndentLevel = &moduleInitLevel;
  *(refIndentLevel) += INT64(1);
  chpl__init_Time_p = true;
  *(refIndentLevel) -= INT64(1);
  _exit_chpl__init_Time:;
  return;
}

/* Time.chpl:33 */
static Timer _construct_Timer(_timevalue time2, _real64 accumulated, chpl_bool running, Timer* const meme) {
  Timer this8;
  _ref_Timer _ref_tmp_ = NULL;
  this8 = *(meme);
  (&this8)->time = time2;
  (&this8)->accumulated = accumulated;
  (&this8)->running = running;
  _ref_tmp_ = &this8;
  chpl_check_nil(_ref_tmp_, INT64(33), "/home/kp167/chap-svn/modules/standard/Time.chpl");
  initialize12(_ref_tmp_);
  return this8;
}

/* Time.chpl:38 */
static void initialize12(_ref_Timer this8) {
  return;
}

/* Time.chpl:49 */
static void start(_ref_Timer this8) {
  chpl_bool ret;
  chpl_bool call_tmp;
  _ref_chpl_bool call_tmp2 = NULL;
  _ref__timevalue call_tmp3 = NULL;
  _timevalue call_tmp4;
  c_string T;
  chpl_check_nil(this8, INT64(50), "/home/kp167/chap-svn/modules/standard/Time.chpl");
  ret = (this8)->running;
  call_tmp = (! ret);
  if (call_tmp) {
    chpl_check_nil(this8, INT64(51), "/home/kp167/chap-svn/modules/standard/Time.chpl");
    call_tmp2 = &((this8)->running);
    *(call_tmp2) = true;
    chpl_check_nil(this8, INT64(52), "/home/kp167/chap-svn/modules/standard/Time.chpl");
    call_tmp3 = &((this8)->time);
    call_tmp4 = chpl_now_timevalue();
    *(call_tmp3) = call_tmp4;
  } else {
    T = "start called on a timer that has not been stopped";
    halt(T, INT64(54), "/home/kp167/chap-svn/modules/standard/Time.chpl");
  }
  return;
}

/* Time.chpl:58 */
static void stop(_ref_Timer this8) {
  chpl_bool ret;
  _timevalue type_tmp;
  _timevalue time2;
  _timevalue call_tmp;
  _ref__timevalue _ref_tmp_ = NULL;
  _ref__real64 call_tmp2 = NULL;
  _timevalue ret2;
  int64_t call_tmp3;
  int64_t call_tmp4;
  int64_t call_tmp5;
  int64_t call_tmp6;
  _real64 call_tmp7;
  _real64 call_tmp8;
  _real64 call_tmp9;
  _real64 call_tmp10;
  _real64 call_tmp11;
  _real64 call_tmp12;
  _real64 call_tmp13;
  _real64 call_tmp14;
  _real64 call_tmp15;
  _ref_chpl_bool call_tmp16 = NULL;
  c_string T;
  chpl_check_nil(this8, INT64(59), "/home/kp167/chap-svn/modules/standard/Time.chpl");
  ret = (this8)->running;
  if (ret) {
    time2 = type_tmp;
    call_tmp = chpl_now_timevalue();
    _ref_tmp_ = &time2;
    *(_ref_tmp_) = call_tmp;
    chpl_check_nil(this8, INT64(62), "/home/kp167/chap-svn/modules/standard/Time.chpl");
    call_tmp2 = &((this8)->accumulated);
    chpl_check_nil(this8, INT64(62), "/home/kp167/chap-svn/modules/standard/Time.chpl");
    ret2 = (this8)->time;
    call_tmp3 = chpl_timevalue_seconds(time2);
    call_tmp4 = chpl_timevalue_seconds(ret2);
    call_tmp5 = chpl_timevalue_microseconds(time2);
    call_tmp6 = chpl_timevalue_microseconds(ret2);
    call_tmp7 = ((_real64)(call_tmp3));
    call_tmp8 = (call_tmp7 * 1.0e+6);
    call_tmp9 = ((_real64)(call_tmp5));
    call_tmp10 = (call_tmp8 + call_tmp9);
    call_tmp11 = ((_real64)(call_tmp4));
    call_tmp12 = (call_tmp11 * 1.0e+6);
    call_tmp13 = ((_real64)(call_tmp6));
    call_tmp14 = (call_tmp12 + call_tmp13);
    call_tmp15 = (call_tmp10 - call_tmp14);
    *(call_tmp2) += call_tmp15;
    chpl_check_nil(this8, INT64(63), "/home/kp167/chap-svn/modules/standard/Time.chpl");
    call_tmp16 = &((this8)->running);
    *(call_tmp16) = false;
  } else {
    T = "stop called on a timer that has not been started";
    halt(T, INT64(65), "/home/kp167/chap-svn/modules/standard/Time.chpl");
  }
  return;
}

/* Time.chpl:69 */
static _real64 elapsed(_ref_Timer this8, TimeUnits unit) {
  _real64 ret;
  chpl_bool ret2;
  _timevalue type_tmp;
  _timevalue time2;
  _timevalue call_tmp;
  _ref__timevalue _ref_tmp_ = NULL;
  _real64 ret3;
  _timevalue ret4;
  int64_t call_tmp2;
  int64_t call_tmp3;
  int64_t call_tmp4;
  int64_t call_tmp5;
  _real64 call_tmp6;
  _real64 call_tmp7;
  _real64 call_tmp8;
  _real64 call_tmp9;
  _real64 call_tmp10;
  _real64 call_tmp11;
  _real64 call_tmp12;
  _real64 call_tmp13;
  _real64 call_tmp14;
  _real64 call_tmp15;
  _real64 call_tmp16;
  _real64 ret5;
  _real64 wrap_call_tmp;
  chpl_check_nil(this8, INT64(70), "/home/kp167/chap-svn/modules/standard/Time.chpl");
  ret2 = (this8)->running;
  if (ret2) {
    time2 = type_tmp;
    call_tmp = chpl_now_timevalue();
    _ref_tmp_ = &time2;
    *(_ref_tmp_) = call_tmp;
    chpl_check_nil(this8, INT64(73), "/home/kp167/chap-svn/modules/standard/Time.chpl");
    ret3 = (this8)->accumulated;
    chpl_check_nil(this8, INT64(73), "/home/kp167/chap-svn/modules/standard/Time.chpl");
    ret4 = (this8)->time;
    call_tmp2 = chpl_timevalue_seconds(time2);
    call_tmp3 = chpl_timevalue_seconds(ret4);
    call_tmp4 = chpl_timevalue_microseconds(time2);
    call_tmp5 = chpl_timevalue_microseconds(ret4);
    call_tmp6 = ((_real64)(call_tmp2));
    call_tmp7 = (call_tmp6 * 1.0e+6);
    call_tmp8 = ((_real64)(call_tmp4));
    call_tmp9 = (call_tmp7 + call_tmp8);
    call_tmp10 = ((_real64)(call_tmp3));
    call_tmp11 = (call_tmp10 * 1.0e+6);
    call_tmp12 = ((_real64)(call_tmp5));
    call_tmp13 = (call_tmp11 + call_tmp12);
    call_tmp14 = (call_tmp9 - call_tmp13);
    call_tmp15 = (ret3 + call_tmp14);
    call_tmp16 = _convert_microseconds(unit, call_tmp15);
    ret = call_tmp16;
    goto _end_elapsed;
  } else {
    chpl_check_nil(this8, INT64(75), "/home/kp167/chap-svn/modules/standard/Time.chpl");
    ret5 = (this8)->accumulated;
    wrap_call_tmp = _convert_microseconds(unit, ret5);
    ret = wrap_call_tmp;
    goto _end_elapsed;
  }
  _end_elapsed:;
  return ret;
}

/* Time.chpl:90 */
static _real64 _convert_microseconds(TimeUnits unit, _real64 us) {
  _real64 ret;
  int64_t call_tmp;
  int64_t call_tmp2;
  chpl_bool call_tmp3;
  int64_t call_tmp4;
  int64_t call_tmp5;
  chpl_bool call_tmp6;
  _real64 call_tmp7;
  int64_t call_tmp8;
  int64_t call_tmp9;
  chpl_bool call_tmp10;
  _real64 call_tmp11;
  int64_t call_tmp12;
  int64_t call_tmp13;
  chpl_bool call_tmp14;
  _real64 call_tmp15;
  int64_t call_tmp16;
  int64_t call_tmp17;
  chpl_bool call_tmp18;
  _real64 call_tmp19;
  c_string T;
  _real64 call_tmp20;
  call_tmp = ((int64_t)(unit));
  call_tmp2 = ((int64_t)(TimeUnits_microseconds));
  call_tmp3 = (call_tmp == call_tmp2);
  if (call_tmp3) {
    ret = us;
    goto _end__convert_microseconds;
  } else {
    call_tmp4 = ((int64_t)(unit));
    call_tmp5 = ((int64_t)(TimeUnits_milliseconds));
    call_tmp6 = (call_tmp4 == call_tmp5);
    if (call_tmp6) {
      call_tmp7 = (us / 1.0e+3);
      ret = call_tmp7;
      goto _end__convert_microseconds;
    } else {
      call_tmp8 = ((int64_t)(unit));
      call_tmp9 = ((int64_t)(TimeUnits_seconds));
      call_tmp10 = (call_tmp8 == call_tmp9);
      if (call_tmp10) {
        call_tmp11 = (us / 1.0e+6);
        ret = call_tmp11;
        goto _end__convert_microseconds;
      } else {
        call_tmp12 = ((int64_t)(unit));
        call_tmp13 = ((int64_t)(TimeUnits_minutes));
        call_tmp14 = (call_tmp12 == call_tmp13);
        if (call_tmp14) {
          call_tmp15 = (us / 60.0e+6);
          ret = call_tmp15;
          goto _end__convert_microseconds;
        } else {
          call_tmp16 = ((int64_t)(unit));
          call_tmp17 = ((int64_t)(TimeUnits_hours));
          call_tmp18 = (call_tmp16 == call_tmp17);
          if (call_tmp18) {
            call_tmp19 = (us / 3600.0e+6);
            ret = call_tmp19;
            goto _end__convert_microseconds;
          }
        }
      }
    }
  }
  T = "internal error in module Time";
  halt(T, INT64(98), "/home/kp167/chap-svn/modules/standard/Time.chpl");
  call_tmp20 = (-1.0);
  ret = call_tmp20;
  _end__convert_microseconds:;
  return ret;
}

