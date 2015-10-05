/* ChapelSyncvar.chpl:7 */
static void chpl__init_ChapelSyncvar(int64_t _ln, c_string _fn) {
  c_string modFormatStr;
  c_string modStr;
  _ref_int32_t refIndentLevel = NULL;
  if (chpl__init_ChapelSyncvar_p) {
    goto _exit_chpl__init_ChapelSyncvar;
  }
  modFormatStr = "%*s\n";
  modStr = "ChapelSyncvar";
  printModuleInit(modFormatStr, modStr, INT64(13));
  refIndentLevel = &moduleInitLevel;
  *(refIndentLevel) += INT64(1);
  chpl__init_ChapelSyncvar_p = true;
  {
    chpl__init_MemConsistency(INT64(7), "/home/kp167/chap-svn/modules/internal/ChapelSyncvar.chpl");
  }
  *(refIndentLevel) -= INT64(1);
  _exit_chpl__init_ChapelSyncvar:;
  return;
}

/* ChapelSyncvar.chpl:17 */
static _syncvar_int64_t _construct__syncvar(int64_t value) {
  _syncvar_int64_t this8 = NULL;
  int64_t call_tmp;
  chpl_opaque cast_tmp;
  _syncvar_int64_t T = NULL;
  call_tmp = sizeof(chpl__syncvar_int64_t_object);
  cast_tmp = chpl_here_alloc(call_tmp, INT16(0));
  T = ((_syncvar_int64_t)(cast_tmp));
  this8 = T;
  chpl_check_nil(this8, INT64(19), "/home/kp167/chap-svn/modules/internal/ChapelSyncvar.chpl");
  (this8)->value = value;
  chpl_check_nil(this8, INT64(17), "/home/kp167/chap-svn/modules/internal/ChapelSyncvar.chpl");
  initialize6(this8);
  return this8;
}

/* ChapelSyncvar.chpl:17 */
static _syncvar_chpl_bool _construct__syncvar2(chpl_bool value) {
  _syncvar_chpl_bool this8 = NULL;
  int64_t call_tmp;
  chpl_opaque cast_tmp;
  _syncvar_chpl_bool T = NULL;
  call_tmp = sizeof(chpl__syncvar_chpl_bool_object);
  cast_tmp = chpl_here_alloc(call_tmp, INT16(0));
  T = ((_syncvar_chpl_bool)(cast_tmp));
  this8 = T;
  chpl_check_nil(this8, INT64(19), "/home/kp167/chap-svn/modules/internal/ChapelSyncvar.chpl");
  (this8)->value = value;
  chpl_check_nil(this8, INT64(17), "/home/kp167/chap-svn/modules/internal/ChapelSyncvar.chpl");
  initialize7(this8);
  return this8;
}

/* ChapelSyncvar.chpl:24 */
static void chpl___TILDE__syncvar(chpl____wide__syncvar_chpl_bool* const this8) {
  chpl____wide__ref_chpl_sync_aux_t chpl_macro_tmp_78;
  chpl_macro_tmp_78.locale = (this8)->locale;
  chpl_macro_tmp_78.addr = &(((this8)->addr)->sync_aux);
  chpl_sync_destroyAux((chpl_macro_tmp_78).addr);
  return;
}

/* ChapelSyncvar.chpl:26 */
static void initialize6(_syncvar_int64_t this8) {
  chpl_sync_initAux(&((this8)->sync_aux));
  return;
}

/* ChapelSyncvar.chpl:26 */
static void initialize7(_syncvar_chpl_bool this8) {
  chpl_sync_initAux(&((this8)->sync_aux));
  return;
}

