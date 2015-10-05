/* ChapelStandard.chpl:5 */
void chpl__init_ChapelStandard(int64_t _ln, c_string _fn) {
  c_string modFormatStr;
  c_string modStr;
  _ref_int32_t refIndentLevel = NULL;
  if (chpl__init_ChapelStandard_p) {
    goto _exit_chpl__init_ChapelStandard;
  }
  modFormatStr = "%*s\n";
  modStr = "ChapelStandard";
  printModuleInit(modFormatStr, modStr, INT64(14));
  refIndentLevel = &moduleInitLevel;
  *(refIndentLevel) += INT64(1);
  chpl__init_ChapelStandard_p = true;
  {
    chpl__init_ChapelBase(INT64(5), "/home/kp167/chap-svn/modules/internal/ChapelStandard.chpl");
    chpl__init_String(INT64(5), "/home/kp167/chap-svn/modules/internal/ChapelStandard.chpl");
    chpl__init_MemConsistency(INT64(5), "/home/kp167/chap-svn/modules/internal/ChapelStandard.chpl");
    chpl__init_Atomics(INT64(5), "/home/kp167/chap-svn/modules/internal/ChapelStandard.chpl");
    chpl__init_NetworkAtomics(INT64(5), "/home/kp167/chap-svn/modules/internal/ChapelStandard.chpl");
    chpl__init_AtomicsCommon(INT64(5), "/home/kp167/chap-svn/modules/internal/ChapelStandard.chpl");
    chpl__init_ChapelNumLocales(INT64(5), "/home/kp167/chap-svn/modules/internal/ChapelStandard.chpl");
    chpl__init_ChapelThreads(INT64(5), "/home/kp167/chap-svn/modules/internal/ChapelStandard.chpl");
    chpl__init_ChapelTuple(INT64(5), "/home/kp167/chap-svn/modules/internal/ChapelStandard.chpl");
    chpl__init_ChapelRange(INT64(5), "/home/kp167/chap-svn/modules/internal/ChapelStandard.chpl");
    chpl__init_ChapelSyncvar(INT64(5), "/home/kp167/chap-svn/modules/internal/ChapelStandard.chpl");
    chpl__init_ChapelLocale(INT64(5), "/home/kp167/chap-svn/modules/internal/ChapelStandard.chpl");
    chpl__init_DefaultRectangular(INT64(5), "/home/kp167/chap-svn/modules/internal/ChapelStandard.chpl");
    chpl__init_LocaleModel(INT64(5), "/home/kp167/chap-svn/modules/internal/ChapelStandard.chpl");
    chpl__init_LocalesArray(INT64(5), "/home/kp167/chap-svn/modules/internal/ChapelStandard.chpl");
    chpl__init_ChapelArray(INT64(5), "/home/kp167/chap-svn/modules/internal/ChapelStandard.chpl");
    chpl__init_ChapelDistribution(INT64(5), "/home/kp167/chap-svn/modules/internal/ChapelStandard.chpl");
    chpl__init_ChapelIO(INT64(5), "/home/kp167/chap-svn/modules/internal/ChapelStandard.chpl");
    chpl__init_LocaleTree(INT64(5), "/home/kp167/chap-svn/modules/internal/ChapelStandard.chpl");
    chpl__init_DefaultAssociative(INT64(5), "/home/kp167/chap-svn/modules/internal/ChapelStandard.chpl");
    chpl__init_ChapelTaskTable(INT64(5), "/home/kp167/chap-svn/modules/internal/ChapelStandard.chpl");
    chpl__init_MemTracking(INT64(5), "/home/kp167/chap-svn/modules/internal/ChapelStandard.chpl");
    chpl__init_ChapelUtil(INT64(5), "/home/kp167/chap-svn/modules/internal/ChapelStandard.chpl");
    chpl__init_ChapelDynDispHack(INT64(5), "/home/kp167/chap-svn/modules/internal/ChapelStandard.chpl");
    chpl__init_Types(INT64(5), "/home/kp167/chap-svn/modules/internal/ChapelStandard.chpl");
    chpl__init_Math(INT64(5), "/home/kp167/chap-svn/modules/internal/ChapelStandard.chpl");
    chpl__init_CommDiagnostics(INT64(5), "/home/kp167/chap-svn/modules/internal/ChapelStandard.chpl");
  }
  *(refIndentLevel) -= INT64(1);
  _exit_chpl__init_ChapelStandard:;
  return;
}

