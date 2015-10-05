/* ChapelThreads.chpl:11 */
static void chpl__init_ChapelThreads(int64_t _ln, c_string _fn) {
  c_string modFormatStr;
  c_string modStr;
  _ref_int32_t refIndentLevel = NULL;
  int64_t type_tmp;
  int32_t call_tmp;
  _ref_int64_t _ref_tmp_ = NULL;
  int64_t call_tmp2;
  if (chpl__init_ChapelThreads_p) {
    goto _exit_chpl__init_ChapelThreads;
  }
  modFormatStr = "%*s\n";
  modStr = "ChapelThreads";
  printModuleInit(modFormatStr, modStr, INT64(13));
  refIndentLevel = &moduleInitLevel;
  *(refIndentLevel) += INT64(1);
  chpl__init_ChapelThreads_p = true;
  type_tmp = INT64(0);
  call_tmp = chpl_task_getenvNumThreadsPerLocale();
  _ref_tmp_ = &type_tmp;
  call_tmp2 = ((int64_t)(call_tmp));
  *(_ref_tmp_) = call_tmp2;
  numThreadsPerLocale = type_tmp;
  chpl_comm_broadcast_private(INT64(6), sizeof(int64_t), -1);
  *(refIndentLevel) -= INT64(1);
  _exit_chpl__init_ChapelThreads:;
  return;
}

