/* <internal>:0 */
static object _construct_object(object meme) {
  object this8 = NULL;
  return meme;
}

/* <internal>:0 */
static void chpl__auto_destroy_object(object this8) {
  return;
}

/* ChapelBase.chpl:5 */
void chpl__heapAllocateGlobals(void) {
  int32_t T;
  chpl_bool T2;
  int64_t chpl_here_alloc_size;
  chpl_opaque chpl_here_alloc_tmp;
  int64_t chpl_here_alloc_size2;
  chpl_opaque chpl_here_alloc_tmp2;
  int64_t chpl_here_alloc_size3;
  chpl_opaque chpl_here_alloc_tmp3;
  int64_t chpl_here_alloc_size4;
  chpl_opaque chpl_here_alloc_tmp4;
  int64_t chpl_here_alloc_size5;
  chpl_opaque chpl_here_alloc_tmp5;
  int64_t chpl_here_alloc_size6;
  chpl_opaque chpl_here_alloc_tmp6;
  int64_t chpl_here_alloc_size7;
  chpl_opaque chpl_here_alloc_tmp7;
  int64_t chpl_here_alloc_size8;
  chpl_opaque chpl_here_alloc_tmp8;
  int64_t chpl_here_alloc_size9;
  chpl_opaque chpl_here_alloc_tmp9;
  int64_t chpl_here_alloc_size10;
  chpl_opaque chpl_here_alloc_tmp10;
  int64_t chpl_here_alloc_size11;
  chpl_opaque chpl_here_alloc_tmp11;
  int64_t chpl_here_alloc_size12;
  chpl_opaque chpl_here_alloc_tmp12;
  int64_t chpl_here_alloc_size13;
  chpl_opaque chpl_here_alloc_tmp13;
  int64_t chpl_here_alloc_size14;
  chpl_opaque chpl_here_alloc_tmp14;
  int64_t chpl_here_alloc_size15;
  chpl_opaque chpl_here_alloc_tmp15;
  chpl____wide_heap_locale chpl_macro_tmp_1;
  chpl____wide_heap_locale chpl_macro_tmp_2;
  chpl____wide_heap_chpl_bool chpl_macro_tmp_3;
  chpl____wide_heap__syncvar_int64_t chpl_macro_tmp_4;
  chpl____wide_heap_chpl_bool chpl_macro_tmp_5;
  chpl____wide_heap_c_string chpl_macro_tmp_6;
  chpl____wide_heap_chpl_string chpl_macro_tmp_7;
  chpl____wide_heap_c_string chpl_macro_tmp_8;
  chpl____wide_heap_chpl_string chpl_macro_tmp_9;
  chpl____wide_heap_chpl_string chpl_macro_tmp_10;
  chpl____wide_heap_chpl_string chpl_macro_tmp_11;
  chpl____wide_heap_chpl_string chpl_macro_tmp_12;
  chpl____wide_heap_chpl_string chpl_macro_tmp_13;
  chpl____wide_heap_chpl_string chpl_macro_tmp_14;
  chpl____wide_heap__tuple_6_star_chpl_string chpl_macro_tmp_15;
  T = chpl_nodeID;
  T2 = (T == INT64(0));
  if (T2) {
    chpl_here_alloc_size = sizeof(chpl_heap_locale_object);
    chpl_here_alloc_tmp = chpl_here_alloc(chpl_here_alloc_size, INT16(37));
    chpl_macro_tmp_1.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_1.addr = ((heap_locale)(chpl_here_alloc_tmp));
    origRootLocale = chpl_macro_tmp_1;
    chpl_here_alloc_size2 = sizeof(chpl_heap_locale_object);
    chpl_here_alloc_tmp2 = chpl_here_alloc(chpl_here_alloc_size2, INT16(37));
    chpl_macro_tmp_2.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_2.addr = ((heap_locale)(chpl_here_alloc_tmp2));
    dummyLocale = chpl_macro_tmp_2;
    chpl_here_alloc_size3 = sizeof(chpl_heap_chpl_bool_object);
    chpl_here_alloc_tmp3 = chpl_here_alloc(chpl_here_alloc_size3, INT16(37));
    chpl_macro_tmp_3.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_3.addr = ((heap_chpl_bool)(chpl_here_alloc_tmp3));
    doneCreatingLocales = chpl_macro_tmp_3;
    chpl_here_alloc_size4 = sizeof(chpl_heap__syncvar_int64_t_object);
    chpl_here_alloc_tmp4 = chpl_here_alloc(chpl_here_alloc_size4, INT16(37));
    chpl_macro_tmp_4.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_4.addr = ((heap__syncvar_int64_t)(chpl_here_alloc_tmp4));
    privatizeLock_DOLLAR_ = chpl_macro_tmp_4;
    chpl_here_alloc_size5 = sizeof(chpl_heap_chpl_bool_object);
    chpl_here_alloc_tmp5 = chpl_here_alloc(chpl_here_alloc_size5, INT16(37));
    chpl_macro_tmp_5.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_5.addr = ((heap_chpl_bool)(chpl_here_alloc_tmp5));
    chpl__testParOn = chpl_macro_tmp_5;
    chpl_here_alloc_size6 = sizeof(chpl_heap_c_string_object);
    chpl_here_alloc_tmp6 = chpl_here_alloc(chpl_here_alloc_size6, INT16(37));
    chpl_macro_tmp_6.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_6.addr = ((heap_c_string)(chpl_here_alloc_tmp6));
    memLog = chpl_macro_tmp_6;
    chpl_here_alloc_size7 = sizeof(chpl_heap_chpl_string_object);
    chpl_here_alloc_tmp7 = chpl_here_alloc(chpl_here_alloc_size7, INT16(37));
    chpl_macro_tmp_7.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_7.addr = ((heap_chpl_string)(chpl_here_alloc_tmp7));
    s_memLog = chpl_macro_tmp_7;
    chpl_here_alloc_size8 = sizeof(chpl_heap_c_string_object);
    chpl_here_alloc_tmp8 = chpl_here_alloc(chpl_here_alloc_size8, INT16(37));
    chpl_macro_tmp_8.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_8.addr = ((heap_c_string)(chpl_here_alloc_tmp8));
    memLeaksLog = chpl_macro_tmp_8;
    chpl_here_alloc_size9 = sizeof(chpl_heap_chpl_string_object);
    chpl_here_alloc_tmp9 = chpl_here_alloc(chpl_here_alloc_size9, INT16(37));
    chpl_macro_tmp_9.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_9.addr = ((heap_chpl_string)(chpl_here_alloc_tmp9));
    s_memLeaksLog = chpl_macro_tmp_9;
    chpl_here_alloc_size10 = sizeof(chpl_heap_chpl_string_object);
    chpl_here_alloc_tmp10 = chpl_here_alloc(chpl_here_alloc_size10, INT16(37));
    chpl_macro_tmp_10.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_10.addr = ((heap_chpl_string)(chpl_here_alloc_tmp10));
    _r = chpl_macro_tmp_10;
    chpl_here_alloc_size11 = sizeof(chpl_heap_chpl_string_object);
    chpl_here_alloc_tmp11 = chpl_here_alloc(chpl_here_alloc_size11, INT16(37));
    chpl_macro_tmp_11.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_11.addr = ((heap_chpl_string)(chpl_here_alloc_tmp11));
    _rw = chpl_macro_tmp_11;
    chpl_here_alloc_size12 = sizeof(chpl_heap_chpl_string_object);
    chpl_here_alloc_tmp12 = chpl_here_alloc(chpl_here_alloc_size12, INT16(37));
    chpl_macro_tmp_12.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_12.addr = ((heap_chpl_string)(chpl_here_alloc_tmp12));
    _cw = chpl_macro_tmp_12;
    chpl_here_alloc_size13 = sizeof(chpl_heap_chpl_string_object);
    chpl_here_alloc_tmp13 = chpl_here_alloc(chpl_here_alloc_size13, INT16(37));
    chpl_macro_tmp_13.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_13.addr = ((heap_chpl_string)(chpl_here_alloc_tmp13));
    _cwr = chpl_macro_tmp_13;
    chpl_here_alloc_size14 = sizeof(chpl_heap_chpl_string_object);
    chpl_here_alloc_tmp14 = chpl_here_alloc(chpl_here_alloc_size14, INT16(37));
    chpl_macro_tmp_14.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_14.addr = ((heap_chpl_string)(chpl_here_alloc_tmp14));
    _i = chpl_macro_tmp_14;
    chpl_here_alloc_size15 = sizeof(chpl_heap__tuple_6_star_chpl_string_object);
    chpl_here_alloc_tmp15 = chpl_here_alloc(chpl_here_alloc_size15, INT16(37));
    chpl_macro_tmp_15.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_15.addr = ((heap__tuple_6_star_chpl_string)(chpl_here_alloc_tmp15));
    _arg_to_proto_names = chpl_macro_tmp_15;
  }
  chpl_heap_register_global_var(INT64(0), ((ptr_wide_ptr_t)(&origRootLocale)));
  chpl_heap_register_global_var(INT64(1), ((ptr_wide_ptr_t)(&dummyLocale)));
  chpl_heap_register_global_var(INT64(2), ((ptr_wide_ptr_t)(&doneCreatingLocales)));
  chpl_heap_register_global_var(INT64(3), ((ptr_wide_ptr_t)(&privatizeLock_DOLLAR_)));
  chpl_heap_register_global_var(INT64(4), ((ptr_wide_ptr_t)(&chpl__testParOn)));
  chpl_heap_register_global_var(INT64(5), ((ptr_wide_ptr_t)(&memLog)));
  chpl_heap_register_global_var(INT64(6), ((ptr_wide_ptr_t)(&s_memLog)));
  chpl_heap_register_global_var(INT64(7), ((ptr_wide_ptr_t)(&memLeaksLog)));
  chpl_heap_register_global_var(INT64(8), ((ptr_wide_ptr_t)(&s_memLeaksLog)));
  chpl_heap_register_global_var(INT64(9), ((ptr_wide_ptr_t)(&_r)));
  chpl_heap_register_global_var(INT64(10), ((ptr_wide_ptr_t)(&_rw)));
  chpl_heap_register_global_var(INT64(11), ((ptr_wide_ptr_t)(&_cw)));
  chpl_heap_register_global_var(INT64(12), ((ptr_wide_ptr_t)(&_cwr)));
  chpl_heap_register_global_var(INT64(13), ((ptr_wide_ptr_t)(&_i)));
  chpl_heap_register_global_var(INT64(14), ((ptr_wide_ptr_t)(&_arg_to_proto_names)));
  chpl_gen_comm_broadcast_global_vars(INT64(15));
  return;
}

/* ChapelBase.chpl:5 */
void chpl__init_preInit(int64_t _ln, c_string _fn) {
  chpl__init_ChapelBase_p = false;
  chpl__init_ChapelStandard_p = false;
  chpl__init_PrintModuleInitOrder_p = false;
  chpl__init_String_p = false;
  chpl__init_MemConsistency_p = false;
  chpl__init_Atomics_p = false;
  chpl__init_NetworkAtomics_p = false;
  chpl__init_AtomicsCommon_p = false;
  chpl__init_ChapelNumLocales_p = false;
  chpl__init_ChapelThreads_p = false;
  chpl__init_ChapelTuple_p = false;
  chpl__init_ChapelRange_p = false;
  chpl__init_ChapelSyncvar_p = false;
  chpl__init_ChapelLocale_p = false;
  chpl__init_DefaultRectangular_p = false;
  chpl__init_LocaleModel_p = false;
  chpl__init_LocalesArray_p = false;
  chpl__init_ChapelArray_p = false;
  chpl__init_ChapelDistribution_p = false;
  chpl__init_ChapelIO_p = false;
  chpl__init_LocaleTree_p = false;
  chpl__init_DefaultAssociative_p = false;
  chpl__init_ChapelTaskTable_p = false;
  chpl__init_MemTracking_p = false;
  chpl__init_ChapelUtil_p = false;
  chpl__init_ChapelDynDispHack_p = false;
  chpl__init_ChapelRangeBase_p = false;
  chpl__init_cobegin_p = false;
  chpl__init_Time_p = false;
  chpl__init_Random_p = false;
  chpl__init_Types_p = false;
  chpl__init_Math_p = false;
  chpl__init_DSIUtil_p = false;
  chpl__init_Sys_p = false;
  chpl__init_List_p = false;
  chpl__init_SysBasic_p = false;
  chpl__init_IO_p = false;
  chpl__init_CommDiagnostics_p = false;
  chpl__init_SysCTypes_p = false;
  chpl__init_Error_p = false;
  chpl__init_Regexp_p = false;
  return;
}

