
#define CHPL_GEN_CODE

#include "sys_basic.h"
#include "stdchpl.h"
#include "chpl_compilation_config.h"
/*** Class Type Identification Numbers ***/

const chpl__class_id chpl__cid__class_localson_fn = 0;
const chpl__class_id chpl__cid__class_localson_fn2 = 1;
const chpl__class_id chpl__cid__class_localson_fn3 = 2;
const chpl__class_id chpl__cid__class_localson_fn4 = 3;
const chpl__class_id chpl__cid__class_localson_fn5 = 4;
const chpl__class_id chpl__cid__class_localson_fn6 = 5;
const chpl__class_id chpl__cid__class_localson_fn7 = 6;
const chpl__class_id chpl__cid__class_localson_fn8 = 7;
const chpl__class_id chpl__cid__class_localson_fn9 = 8;
const chpl__class_id chpl__cid__class_localson_fn10 = 9;
const chpl__class_id chpl__cid__class_localscoforall_fn = 10;
const chpl__class_id chpl__cid__class_localscoforall_fn2 = 11;
const chpl__class_id chpl__cid__class_localson_fn11 = 12;
const chpl__class_id chpl__cid__class_localson_fn12 = 13;
const chpl__class_id chpl__cid__class_localson_fn13 = 14;
const chpl__class_id chpl__cid__class_localson_fn14 = 15;
const chpl__class_id chpl__cid__class_localson_fn15 = 16;
const chpl__class_id chpl__cid__class_localson_fn16 = 17;
const chpl__class_id chpl__cid__class_localson_fn17 = 18;
const chpl__class_id chpl__cid__class_localson_fn18 = 19;
const chpl__class_id chpl__cid__class_localson_fn19 = 20;
const chpl__class_id chpl__cid__class_localson_fn20 = 21;
const chpl__class_id chpl__cid__class_localson_fn21 = 22;
const chpl__class_id chpl__cid__class_localson_fn22 = 23;
const chpl__class_id chpl__cid__class_localson_fn23 = 24;
const chpl__class_id chpl__cid__class_localson_fn24 = 25;
const chpl__class_id chpl__cid__class_localson_fn25 = 26;
const chpl__class_id chpl__cid__class_localson_fn26 = 27;
const chpl__class_id chpl__cid__class_localson_fn27 = 28;
const chpl__class_id chpl__cid__class_localson_fn28 = 29;
const chpl__class_id chpl__cid_chpl___OpaqueIndex = 30;
const chpl__class_id chpl__cid__ddata_chpl_TableEntry_chpl_taskID_t = 31;
const chpl__class_id chpl__cid__ddata_chpl_string = 32;
const chpl__class_id chpl__cid__ddata_chpldev_Task = 33;
const chpl__class_id chpl__cid__ddata_locale = 34;
const chpl__class_id chpl__cid__ddata_localesSignal = 35;
const chpl__class_id chpl__cid_chpl___EndCount = 36;
const chpl__class_id chpl__cid__class_localson_fn29 = 37;
const chpl__class_id chpl__cid__class_localson_fn30 = 38;
const chpl__class_id chpl__cid_BaseDist = 39;
const chpl__class_id chpl__cid__class_localson_fn31 = 40;
const chpl__class_id chpl__cid_BaseDom = 41;
const chpl__class_id chpl__cid__class_localson_fn32 = 42;
const chpl__class_id chpl__cid__class_localson_fn33 = 43;
const chpl__class_id chpl__cid__class_localson_fn34 = 44;
const chpl__class_id chpl__cid__class_localson_fn35 = 45;
const chpl__class_id chpl__cid__class_localson_fn36 = 46;
const chpl__class_id chpl__cid__class_localson_fn37 = 47;
const chpl__class_id chpl__cid__class_localson_fn38 = 48;
const chpl__class_id chpl__cid__class_localson_fn39 = 49;
const chpl__class_id chpl__cid_BaseRectangularDom = 50;
const chpl__class_id chpl__cid_BaseAssociativeDom = 51;
const chpl__class_id chpl__cid_BaseArr = 52;
const chpl__class_id chpl__cid__class_localson_fn40 = 53;
const chpl__class_id chpl__cid__class_localson_fn41 = 54;
const chpl__class_id chpl__cid__class_localson_fn42 = 55;
const chpl__class_id chpl__cid__class_localson_fn43 = 56;
const chpl__class_id chpl__cid_Writer = 57;
const chpl__class_id chpl__cid_Reader = 58;
const chpl__class_id chpl__cid_StringWriter = 59;
const chpl__class_id chpl__cid__class_localson_fn44 = 60;
const chpl__class_id chpl__cid__class_localson_fn45 = 61;
const chpl__class_id chpl__cid__class_localson_fn46 = 62;
const chpl__class_id chpl__cid__class_localson_fn47 = 63;
const chpl__class_id chpl__cid__class_localson_fn48 = 64;
const chpl__class_id chpl__cid_locale = 65;
const chpl__class_id chpl__cid_AbstractLocaleModel = 66;
const chpl__class_id chpl__cid_AbstractRootLocale = 67;
const chpl__class_id chpl__cid_localesSignal = 68;
const chpl__class_id chpl__cid__class_localson_fn49 = 69;
const chpl__class_id chpl__cid__syncvar_chpl_bool = 70;
const chpl__class_id chpl__cid__syncvar_int64_t = 71;
const chpl__class_id chpl__cid_chpldev_taskTable_t = 72;
const chpl__class_id chpl__cid__class_localson_fn50 = 73;
const chpl__class_id chpl__cid_DefaultAssociativeDom_chpl_taskID_t_F = 74;
const chpl__class_id chpl__cid__class_localson_fn51 = 75;
const chpl__class_id chpl__cid__class_localson_fn52 = 76;
const chpl__class_id chpl__cid_DefaultAssociativeArr_chpldev_Task_chpl_taskID_t_F = 77;
const chpl__class_id chpl__cid_DefaultDist = 78;
const chpl__class_id chpl__cid_DefaultRectangularDom_1_int64_t_F = 79;
const chpl__class_id chpl__cid_DefaultRectangularArr_chpl_TableEntry_chpl_taskID_t_1_int64_t_F = 80;
const chpl__class_id chpl__cid_DefaultRectangularArr_chpldev_Task_1_int64_t_F = 81;
const chpl__class_id chpl__cid_DefaultRectangularArr_locale_1_int64_t_F = 82;
const chpl__class_id chpl__cid_DefaultRectangularArr_localesSignal_1_int64_t_F = 83;
const chpl__class_id chpl__cid__class_localson_fn53 = 84;
const chpl__class_id chpl__cid__class_localson_fn54 = 85;
const chpl__class_id chpl__cid__class_localson_fn55 = 86;
const chpl__class_id chpl__cid__class_localson_fn56 = 87;
const chpl__class_id chpl__cid_LocaleModel = 88;
const chpl__class_id chpl__cid_RootLocale = 89;
const chpl__class_id chpl__cid__class_localson_fn57 = 90;
const chpl__class_id chpl__cid__class_localson_fn58 = 91;
const chpl__class_id chpl__cid_heap_c_string = 92;
const chpl__class_id chpl__cid_heap_chpl_bool = 93;
const chpl__class_id chpl__cid_heap_chpl_string = 94;
const chpl__class_id chpl__cid_object = 95;
const chpl__class_id chpl__cid_heap__tuple_6_star_chpl_string = 96;
const chpl__class_id chpl__cid_heap_locale = 97;
const chpl__class_id chpl__cid_heap__syncvar_int64_t = 98;
const chpl__class_id chpl__cid__class_localson_fn59 = 99;
const chpl__class_id chpl__cid__class_localson_fn60 = 100;
const chpl__class_id chpl__cid__class_localson_fn61 = 101;
const chpl__class_id chpl__cid__class_localson_fn62 = 102;
const chpl__class_id chpl__cid__class_localson_fn63 = 103;
const chpl__class_id chpl__cid__class_localson_fn64 = 104;
const chpl__class_id chpl__cid__class_localson_fn65 = 105;
const chpl__class_id chpl__cid__class_localson_fn66 = 106;
const chpl__class_id chpl__cid__class_localson_fn67 = 107;
const chpl__class_id chpl__cid__class_localson_fn68 = 108;
const chpl__class_id chpl__cid__class_localson_fn69 = 109;
const chpl__class_id chpl__cid__class_localson_fn70 = 110;
const chpl__class_id chpl__cid__class_localson_fn71 = 111;
const chpl__class_id chpl__cid__class_localson_fn72 = 112;
const chpl__class_id chpl__cid__class_localson_fn73 = 113;
const chpl__class_id chpl__cid__class_localson_fn74 = 114;
const chpl__class_id chpl__cid__class_localson_fn75 = 115;
const chpl__class_id chpl__cid__class_localson_fn76 = 116;
const chpl__class_id chpl__cid__class_localson_fn77 = 117;
const chpl__class_id chpl__cid__class_localson_fn78 = 118;
const chpl__class_id chpl__cid__class_localson_fn79 = 119;
const chpl__class_id chpl__cid__class_localson_fn80 = 120;
const chpl__class_id chpl__cid__class_localson_fn81 = 121;
const chpl__class_id chpl__cid__class_localson_fn82 = 122;
const chpl__class_id chpl__cid__class_localson_fn83 = 123;
const chpl__class_id chpl__cid__class_localson_fn84 = 124;
const chpl__class_id chpl__cid__class_localson_fn85 = 125;
const chpl__class_id chpl__cid_listNode_BaseArr = 126;
const chpl__class_id chpl__cid_listNode_BaseDom = 127;
const chpl__class_id chpl__cid__class_localson_fn86 = 128;
const chpl__class_id chpl__cid__class_localson_fn87 = 129;
const chpl__class_id chpl__cid_RandomStream_F = 130;
const chpl__class_id chpl__cid__class_localson_fn88 = 131;
const chpl__class_id chpl__cid__class_localson_fn89 = 132;
/*** Class Prototypes ***/

typedef struct chpl__class_localson_fn_s* _class_localson_fn;
typedef struct chpl__class_localson_fn2_s* _class_localson_fn2;
typedef struct chpl__class_localson_fn3_s* _class_localson_fn3;
typedef struct chpl__class_localson_fn4_s* _class_localson_fn4;
typedef struct chpl__class_localson_fn5_s* _class_localson_fn5;
typedef struct chpl__class_localson_fn6_s* _class_localson_fn6;
typedef struct chpl__class_localson_fn7_s* _class_localson_fn7;
typedef struct chpl__class_localson_fn8_s* _class_localson_fn8;
typedef struct chpl__class_localson_fn9_s* _class_localson_fn9;
typedef struct chpl__class_localson_fn10_s* _class_localson_fn10;
typedef struct chpl__class_localscoforall_fn_s* _class_localscoforall_fn;
typedef struct chpl__class_localscoforall_fn2_s* _class_localscoforall_fn2;
typedef struct chpl__class_localson_fn11_s* _class_localson_fn11;
typedef struct chpl__class_localson_fn12_s* _class_localson_fn12;
typedef struct chpl__class_localson_fn13_s* _class_localson_fn13;
typedef struct chpl__class_localson_fn14_s* _class_localson_fn14;
typedef struct chpl__class_localson_fn15_s* _class_localson_fn15;
typedef struct chpl__class_localson_fn16_s* _class_localson_fn16;
typedef struct chpl__class_localson_fn17_s* _class_localson_fn17;
typedef struct chpl__class_localson_fn18_s* _class_localson_fn18;
typedef struct chpl__class_localson_fn19_s* _class_localson_fn19;
typedef struct chpl__class_localson_fn20_s* _class_localson_fn20;
typedef struct chpl__class_localson_fn21_s* _class_localson_fn21;
typedef struct chpl__class_localson_fn22_s* _class_localson_fn22;
typedef struct chpl__class_localson_fn23_s* _class_localson_fn23;
typedef struct chpl__class_localson_fn24_s* _class_localson_fn24;
typedef struct chpl__class_localson_fn25_s* _class_localson_fn25;
typedef struct chpl__class_localson_fn26_s* _class_localson_fn26;
typedef struct chpl__class_localson_fn27_s* _class_localson_fn27;
typedef struct chpl__class_localson_fn28_s* _class_localson_fn28;
typedef struct chpl_chpl___OpaqueIndex_s* chpl___OpaqueIndex;
typedef struct chpl_chpl___EndCount_s* chpl___EndCount;
typedef struct chpl__class_localson_fn29_s* _class_localson_fn29;
typedef struct chpl__class_localson_fn30_s* _class_localson_fn30;
typedef struct chpl_BaseDist_s* BaseDist;
typedef struct chpl__class_localson_fn31_s* _class_localson_fn31;
typedef struct chpl_BaseDom_s* BaseDom;
typedef struct chpl__class_localson_fn32_s* _class_localson_fn32;
typedef struct chpl__class_localson_fn33_s* _class_localson_fn33;
typedef struct chpl__class_localson_fn34_s* _class_localson_fn34;
typedef struct chpl__class_localson_fn35_s* _class_localson_fn35;
typedef struct chpl__class_localson_fn36_s* _class_localson_fn36;
typedef struct chpl__class_localson_fn37_s* _class_localson_fn37;
typedef struct chpl__class_localson_fn38_s* _class_localson_fn38;
typedef struct chpl__class_localson_fn39_s* _class_localson_fn39;
typedef struct chpl_BaseRectangularDom_s* BaseRectangularDom;
typedef struct chpl_BaseAssociativeDom_s* BaseAssociativeDom;
typedef struct chpl_BaseArr_s* BaseArr;
typedef struct chpl__class_localson_fn40_s* _class_localson_fn40;
typedef struct chpl__class_localson_fn41_s* _class_localson_fn41;
typedef struct chpl__class_localson_fn42_s* _class_localson_fn42;
typedef struct chpl__class_localson_fn43_s* _class_localson_fn43;
typedef struct chpl_Writer_s* Writer;
typedef struct chpl_Reader_s* Reader;
typedef struct chpl_StringWriter_s* StringWriter;
typedef struct chpl__class_localson_fn44_s* _class_localson_fn44;
typedef struct chpl__class_localson_fn45_s* _class_localson_fn45;
typedef struct chpl__class_localson_fn46_s* _class_localson_fn46;
typedef struct chpl__class_localson_fn47_s* _class_localson_fn47;
typedef struct chpl__class_localson_fn48_s* _class_localson_fn48;
typedef struct chpl_locale_s* locale;
typedef struct chpl_AbstractLocaleModel_s* AbstractLocaleModel;
typedef struct chpl_AbstractRootLocale_s* AbstractRootLocale;
typedef struct chpl_localesSignal_s* localesSignal;
typedef struct chpl__class_localson_fn49_s* _class_localson_fn49;
typedef struct chpl__syncvar_chpl_bool_s* _syncvar_chpl_bool;
typedef struct chpl__syncvar_int64_t_s* _syncvar_int64_t;
typedef struct chpl_chpldev_taskTable_t_s* chpldev_taskTable_t;
typedef struct chpl__class_localson_fn50_s* _class_localson_fn50;
typedef struct chpl_DefaultAssociativeDom_chpl_taskID_t_F_s* DefaultAssociativeDom_chpl_taskID_t_F;
typedef struct chpl__class_localson_fn51_s* _class_localson_fn51;
typedef struct chpl__class_localson_fn52_s* _class_localson_fn52;
typedef struct chpl_DefaultAssociativeArr_chpldev_Task_chpl_taskID_t_F_s* DefaultAssociativeArr_chpldev_Task_chpl_taskID_t_F;
typedef struct chpl_DefaultDist_s* DefaultDist;
typedef struct chpl_DefaultRectangularDom_1_int64_t_F_s* DefaultRectangularDom_1_int64_t_F;
typedef struct chpl_DefaultRectangularArr_chpl_TableEntry_chpl_taskID_t_1_int64_t_F_s* DefaultRectangularArr_chpl_TableEntry_chpl_taskID_t_1_int64_t_F;
typedef struct chpl_DefaultRectangularArr_chpldev_Task_1_int64_t_F_s* DefaultRectangularArr_chpldev_Task_1_int64_t_F;
typedef struct chpl_DefaultRectangularArr_locale_1_int64_t_F_s* DefaultRectangularArr_locale_1_int64_t_F;
typedef struct chpl_DefaultRectangularArr_localesSignal_1_int64_t_F_s* DefaultRectangularArr_localesSignal_1_int64_t_F;
typedef struct chpl__class_localson_fn53_s* _class_localson_fn53;
typedef struct chpl__class_localson_fn54_s* _class_localson_fn54;
typedef struct chpl__class_localson_fn55_s* _class_localson_fn55;
typedef struct chpl__class_localson_fn56_s* _class_localson_fn56;
typedef struct chpl_LocaleModel_s* LocaleModel;
typedef struct chpl_RootLocale_s* RootLocale;
typedef struct chpl__class_localson_fn57_s* _class_localson_fn57;
typedef struct chpl__class_localson_fn58_s* _class_localson_fn58;
typedef struct chpl_heap_c_string_s* heap_c_string;
typedef struct chpl_heap_chpl_bool_s* heap_chpl_bool;
typedef struct chpl_heap_chpl_string_s* heap_chpl_string;
typedef struct chpl_object_s* object;
typedef struct chpl_heap__tuple_6_star_chpl_string_s* heap__tuple_6_star_chpl_string;
typedef struct chpl_heap_locale_s* heap_locale;
typedef struct chpl_heap__syncvar_int64_t_s* heap__syncvar_int64_t;
typedef struct chpl__class_localson_fn59_s* _class_localson_fn59;
typedef struct chpl__class_localson_fn60_s* _class_localson_fn60;
typedef struct chpl__class_localson_fn61_s* _class_localson_fn61;
typedef struct chpl__class_localson_fn62_s* _class_localson_fn62;
typedef struct chpl__class_localson_fn63_s* _class_localson_fn63;
typedef struct chpl__class_localson_fn64_s* _class_localson_fn64;
typedef struct chpl__class_localson_fn65_s* _class_localson_fn65;
typedef struct chpl__class_localson_fn66_s* _class_localson_fn66;
typedef struct chpl__class_localson_fn67_s* _class_localson_fn67;
typedef struct chpl__class_localson_fn68_s* _class_localson_fn68;
typedef struct chpl__class_localson_fn69_s* _class_localson_fn69;
typedef struct chpl__class_localson_fn70_s* _class_localson_fn70;
typedef struct chpl__class_localson_fn71_s* _class_localson_fn71;
typedef struct chpl__class_localson_fn72_s* _class_localson_fn72;
typedef struct chpl__class_localson_fn73_s* _class_localson_fn73;
typedef struct chpl__class_localson_fn74_s* _class_localson_fn74;
typedef struct chpl__class_localson_fn75_s* _class_localson_fn75;
typedef struct chpl__class_localson_fn76_s* _class_localson_fn76;
typedef struct chpl__class_localson_fn77_s* _class_localson_fn77;
typedef struct chpl__class_localson_fn78_s* _class_localson_fn78;
typedef struct chpl__class_localson_fn79_s* _class_localson_fn79;
typedef struct chpl__class_localson_fn80_s* _class_localson_fn80;
typedef struct chpl__class_localson_fn81_s* _class_localson_fn81;
typedef struct chpl__class_localson_fn82_s* _class_localson_fn82;
typedef struct chpl__class_localson_fn83_s* _class_localson_fn83;
typedef struct chpl__class_localson_fn84_s* _class_localson_fn84;
typedef struct chpl__class_localson_fn85_s* _class_localson_fn85;
typedef struct chpl_listNode_BaseArr_s* listNode_BaseArr;
typedef struct chpl_listNode_BaseDom_s* listNode_BaseDom;
typedef struct chpl__class_localson_fn86_s* _class_localson_fn86;
typedef struct chpl__class_localson_fn87_s* _class_localson_fn87;
typedef struct chpl_RandomStream_F_s* RandomStream_F;
typedef struct chpl__class_localson_fn88_s* _class_localson_fn88;
typedef struct chpl__class_localson_fn89_s* _class_localson_fn89;
/*** Enumerated Types ***/

typedef enum {iterKind_leader = UINT32(1), iterKind_follower = UINT32(2)} iterKind;
typedef enum {BoundedRangeType_bounded = UINT32(1), BoundedRangeType_boundedLow = UINT32(2), BoundedRangeType_boundedHigh = UINT32(3), BoundedRangeType_boundedNone = UINT32(4)} BoundedRangeType;
typedef enum {taskState_pending = UINT32(1), taskState_active = UINT32(2), taskState_suspended = UINT32(3)} taskState;
typedef enum {chpl__hash_status_empty = UINT32(1), chpl__hash_status_full = UINT32(2), chpl__hash_status_deleted = UINT32(3)} chpl__hash_status;
typedef enum {iomode_r = INT64(1), iomode_cw = INT64(2), iomode_rw = INT64(3), iomode_cwr = INT64(4)} iomode;
typedef enum {iokind_dynamic = INT64(0), iokind_native = INT64(1), iokind_big = INT64(2), iokind_little = INT64(3)} iokind;
typedef enum {iostringstyle_len1b_data = INT64(-1), iostringstyle_len2b_data = INT64(-2), iostringstyle_len4b_data = INT64(-4), iostringstyle_len8b_data = INT64(-8), iostringstyle_lenVb_data = INT64(-10), iostringstyle_data_null = INT64(-256)} iostringstyle;
typedef enum {FileAccessMode_read = UINT32(1), FileAccessMode_write = UINT32(2)} FileAccessMode;
typedef enum {TimeUnits_microseconds = UINT32(1), TimeUnits_milliseconds = UINT32(2), TimeUnits_seconds = UINT32(3), TimeUnits_minutes = UINT32(4), TimeUnits_hours = UINT32(5)} TimeUnits;
typedef enum {Day_sunday = INT64(0), Day_monday = UINT32(1), Day_tuesday = UINT32(2), Day_wednesday = UINT32(3), Day_thursday = UINT32(4), Day_friday = UINT32(5), Day_saturday = UINT32(6)} Day;
/*** Records, Unions, Data Class, References (Hierarchically) ***/

typedef struct chpl_atomicflag_s {
  atomic_flag _v;
} atomicflag;

typedef struct chpl_atomic_int64_s {
  atomic_int_least64_t _v;
} atomic_int64;

typedef struct chpl_atomic_refcnt_s {
  atomic_int64 _cnt;
} atomic_refcnt;

typedef struct chpl_chpl_TableEntry_chpl_taskID_t_s {
  chpl__hash_status status;
  chpl_taskID_t idx;
} chpl_TableEntry_chpl_taskID_t;

typedef chpl_TableEntry_chpl_taskID_t *_ddata_chpl_TableEntry_chpl_taskID_t;
typedef struct chpl_chpl____wide_chpl_string_s {
  chpl_localeID_t locale;
  chpl_string addr;
  int64_t size;
} chpl____wide_chpl_string;

typedef chpl____wide_chpl_string *_ddata_chpl_string;
typedef struct chpl_chpldev_Task_s {
  taskState state;
  uint32_t lineno;
  c_string filename;
  uint64_t tl_info;
} chpldev_Task;

typedef chpldev_Task *_ddata_chpldev_Task;
typedef struct chpl_chpl____wide_locale_s {
  chpl_localeID_t locale;
  locale addr;
} chpl____wide_locale;

typedef chpl____wide_locale *_ddata_locale;
typedef struct chpl_chpl____wide_localesSignal_s {
  chpl_localeID_t locale;
  localesSignal addr;
} chpl____wide_localesSignal;

typedef chpl____wide_localesSignal *_ddata_localesSignal;
typedef struct chpl_chpl____wide_AbstractLocaleModel_s {
  chpl_localeID_t locale;
  AbstractLocaleModel addr;
} chpl____wide_AbstractLocaleModel;

typedef chpl____wide_AbstractLocaleModel *_ref_AbstractLocaleModel;
typedef struct chpl_chpl____wide_AbstractRootLocale_s {
  chpl_localeID_t locale;
  AbstractRootLocale addr;
} chpl____wide_AbstractRootLocale;

typedef chpl____wide_AbstractRootLocale *_ref_AbstractRootLocale;
typedef struct chpl_chpl____wide_BaseArr_s {
  chpl_localeID_t locale;
  BaseArr addr;
} chpl____wide_BaseArr;

typedef chpl____wide_BaseArr *_ref_BaseArr;
typedef struct chpl_chpl____wide_BaseAssociativeDom_s {
  chpl_localeID_t locale;
  BaseAssociativeDom addr;
} chpl____wide_BaseAssociativeDom;

typedef chpl____wide_BaseAssociativeDom *_ref_BaseAssociativeDom;
typedef struct chpl_chpl____wide_BaseDist_s {
  chpl_localeID_t locale;
  BaseDist addr;
} chpl____wide_BaseDist;

typedef chpl____wide_BaseDist *_ref_BaseDist;
typedef struct chpl_chpl____wide_BaseDom_s {
  chpl_localeID_t locale;
  BaseDom addr;
} chpl____wide_BaseDom;

typedef chpl____wide_BaseDom *_ref_BaseDom;
typedef struct chpl_chpl____wide_BaseRectangularDom_s {
  chpl_localeID_t locale;
  BaseRectangularDom addr;
} chpl____wide_BaseRectangularDom;

typedef chpl____wide_BaseRectangularDom *_ref_BaseRectangularDom;
typedef struct chpl_chpl____wide_DefaultAssociativeArr_chpldev_Task_chpl_taskID_t_F_s {
  chpl_localeID_t locale;
  DefaultAssociativeArr_chpldev_Task_chpl_taskID_t_F addr;
} chpl____wide_DefaultAssociativeArr_chpldev_Task_chpl_taskID_t_F;

typedef chpl____wide_DefaultAssociativeArr_chpldev_Task_chpl_taskID_t_F *_ref_DefaultAssociativeArr_chpldev_Task_chpl_taskID_t_F;
typedef struct chpl_chpl____wide_DefaultAssociativeDom_chpl_taskID_t_F_s {
  chpl_localeID_t locale;
  DefaultAssociativeDom_chpl_taskID_t_F addr;
} chpl____wide_DefaultAssociativeDom_chpl_taskID_t_F;

typedef chpl____wide_DefaultAssociativeDom_chpl_taskID_t_F *_ref_DefaultAssociativeDom_chpl_taskID_t_F;
typedef struct chpl_chpl____wide_DefaultDist_s {
  chpl_localeID_t locale;
  DefaultDist addr;
} chpl____wide_DefaultDist;

typedef chpl____wide_DefaultDist *_ref_DefaultDist;
typedef struct chpl_chpl____wide_DefaultRectangularArr_chpl_TableEntry_chpl_taskID_t_1_int64_t_F_s {
  chpl_localeID_t locale;
  DefaultRectangularArr_chpl_TableEntry_chpl_taskID_t_1_int64_t_F addr;
} chpl____wide_DefaultRectangularArr_chpl_TableEntry_chpl_taskID_t_1_int64_t_F;

typedef chpl____wide_DefaultRectangularArr_chpl_TableEntry_chpl_taskID_t_1_int64_t_F *_ref_DefaultRectangularArr_chpl_TableEntry_chpl_taskID_t_1_int64_t_F;
typedef struct chpl_chpl____wide_DefaultRectangularArr_chpldev_Task_1_int64_t_F_s {
  chpl_localeID_t locale;
  DefaultRectangularArr_chpldev_Task_1_int64_t_F addr;
} chpl____wide_DefaultRectangularArr_chpldev_Task_1_int64_t_F;

typedef chpl____wide_DefaultRectangularArr_chpldev_Task_1_int64_t_F *_ref_DefaultRectangularArr_chpldev_Task_1_int64_t_F;
typedef struct chpl_chpl____wide_DefaultRectangularArr_locale_1_int64_t_F_s {
  chpl_localeID_t locale;
  DefaultRectangularArr_locale_1_int64_t_F addr;
} chpl____wide_DefaultRectangularArr_locale_1_int64_t_F;

typedef chpl____wide_DefaultRectangularArr_locale_1_int64_t_F *_ref_DefaultRectangularArr_locale_1_int64_t_F;
typedef struct chpl_chpl____wide_DefaultRectangularArr_localesSignal_1_int64_t_F_s {
  chpl_localeID_t locale;
  DefaultRectangularArr_localesSignal_1_int64_t_F addr;
} chpl____wide_DefaultRectangularArr_localesSignal_1_int64_t_F;

typedef chpl____wide_DefaultRectangularArr_localesSignal_1_int64_t_F *_ref_DefaultRectangularArr_localesSignal_1_int64_t_F;
typedef struct chpl_chpl____wide_DefaultRectangularDom_1_int64_t_F_s {
  chpl_localeID_t locale;
  DefaultRectangularDom_1_int64_t_F addr;
} chpl____wide_DefaultRectangularDom_1_int64_t_F;

typedef chpl____wide_DefaultRectangularDom_1_int64_t_F *_ref_DefaultRectangularDom_1_int64_t_F;
typedef struct chpl_chpl____wide_LocaleModel_s {
  chpl_localeID_t locale;
  LocaleModel addr;
} chpl____wide_LocaleModel;

typedef chpl____wide_LocaleModel *_ref_LocaleModel;
typedef struct chpl_chpl____wide_RandomStream_F_s {
  chpl_localeID_t locale;
  RandomStream_F addr;
} chpl____wide_RandomStream_F;

typedef chpl____wide_RandomStream_F *_ref_RandomStream_F;
typedef struct chpl_chpl____wide_Reader_s {
  chpl_localeID_t locale;
  Reader addr;
} chpl____wide_Reader;

typedef chpl____wide_Reader *_ref_Reader;
typedef struct chpl_chpl____wide_RootLocale_s {
  chpl_localeID_t locale;
  RootLocale addr;
} chpl____wide_RootLocale;

typedef chpl____wide_RootLocale *_ref_RootLocale;
typedef struct chpl_SeedGenerators_s {
  int dummyFieldToAvoidWarning;
} SeedGenerators;

typedef SeedGenerators *_ref_SeedGenerators;
typedef struct chpl_chpl____wide_StringWriter_s {
  chpl_localeID_t locale;
  StringWriter addr;
} chpl____wide_StringWriter;

typedef chpl____wide_StringWriter *_ref_StringWriter;
typedef struct chpl_Timer_s {
  _timevalue time;
  _real64 accumulated;
  chpl_bool running;
} Timer;

typedef Timer *_ref_Timer;
typedef struct chpl_chpl____wide_Writer_s {
  chpl_localeID_t locale;
  Writer addr;
} chpl____wide_Writer;

typedef chpl____wide_Writer *_ref_Writer;
typedef struct chpl_chpl____wide__EndCount_s {
  chpl_localeID_t locale;
  chpl___EndCount addr;
} chpl____wide__EndCount;

typedef chpl____wide__EndCount *_ref__EndCount;
typedef struct chpl_chpl____wide__OpaqueIndex_s {
  chpl_localeID_t locale;
  chpl___OpaqueIndex addr;
} chpl____wide__OpaqueIndex;

typedef chpl____wide__OpaqueIndex *_ref__OpaqueIndex;
typedef struct chpl_chpl___RuntimeTypeInfo_s {
  chpl____wide_DefaultDist d;
} chpl___RuntimeTypeInfo;

typedef chpl___RuntimeTypeInfo *_ref__RuntimeTypeInfo;
typedef struct chpl_chpl___RuntimeTypeInfo3_s {
  chpl____wide_DefaultRectangularDom_1_int64_t_F dom;
} chpl___RuntimeTypeInfo3;

typedef chpl___RuntimeTypeInfo3 *_ref__RuntimeTypeInfo2;
typedef struct chpl_chpl___RuntimeTypeInfo4_s {
  chpl____wide_DefaultRectangularDom_1_int64_t_F dom;
} chpl___RuntimeTypeInfo4;

typedef chpl___RuntimeTypeInfo4 *_ref__RuntimeTypeInfo3;
typedef struct chpl_chpl___RuntimeTypeInfo2_s {
  chpl____wide_DefaultDist d;
} chpl___RuntimeTypeInfo2;

typedef chpl___RuntimeTypeInfo2 *_ref__RuntimeTypeInfo4;
typedef struct chpl_chpl___RuntimeTypeInfo5_s {
  chpl____wide_DefaultRectangularDom_1_int64_t_F dom;
} chpl___RuntimeTypeInfo5;

typedef chpl___RuntimeTypeInfo5 *_ref__RuntimeTypeInfo5;
typedef struct chpl_chpl___RuntimeTypeInfo6_s {
  chpl____wide_DefaultAssociativeDom_chpl_taskID_t_F dom;
} chpl___RuntimeTypeInfo6;

typedef chpl___RuntimeTypeInfo6 *_ref__RuntimeTypeInfo6;
typedef struct chpl_chpl___RuntimeTypeInfo7_s {
  chpl____wide_DefaultRectangularDom_1_int64_t_F dom;
} chpl___RuntimeTypeInfo7;

typedef chpl___RuntimeTypeInfo7 *_ref__RuntimeTypeInfo7;
typedef struct chpl_chpl____wide__ddata_chpl_TableEntry_chpl_taskID_t_s {
  chpl_localeID_t locale;
  _ddata_chpl_TableEntry_chpl_taskID_t addr;
} chpl____wide__ddata_chpl_TableEntry_chpl_taskID_t;

typedef chpl____wide__ddata_chpl_TableEntry_chpl_taskID_t *_ref__ddata_chpl_TableEntry_chpl_taskID_t;
typedef struct chpl_chpl____wide__ddata_chpl_string_s {
  chpl_localeID_t locale;
  _ddata_chpl_string addr;
} chpl____wide__ddata_chpl_string;

typedef chpl____wide__ddata_chpl_string *_ref__ddata_chpl_string;
typedef struct chpl_chpl____wide__ddata_chpldev_Task_s {
  chpl_localeID_t locale;
  _ddata_chpldev_Task addr;
} chpl____wide__ddata_chpldev_Task;

typedef chpl____wide__ddata_chpldev_Task *_ref__ddata_chpldev_Task;
typedef struct chpl_chpl____wide__ddata_locale_s {
  chpl_localeID_t locale;
  _ddata_locale addr;
} chpl____wide__ddata_locale;

typedef chpl____wide__ddata_locale *_ref__ddata_locale;
typedef struct chpl_chpl____wide__ddata_localesSignal_s {
  chpl_localeID_t locale;
  _ddata_localesSignal addr;
} chpl____wide__ddata_localesSignal;

typedef chpl____wide__ddata_localesSignal *_ref__ddata_localesSignal;
typedef struct chpl__ir_initOnLocales_AbstractRootLocale_s {
  chpl____wide_AbstractRootLocale F0_this;
} _ir_initOnLocales_AbstractRootLocale;

typedef _ir_initOnLocales_AbstractRootLocale *_ref__ir_initOnLocales_AbstractRootLocale;
typedef _nilType *_ref__nilType;
typedef _real64 *_ref__real64;
typedef struct chpl_chpl____wide__syncvar_chpl_bool_s {
  chpl_localeID_t locale;
  _syncvar_chpl_bool addr;
} chpl____wide__syncvar_chpl_bool;

typedef chpl____wide__syncvar_chpl_bool *_ref__syncvar_chpl_bool;
typedef struct chpl_chpl____wide__syncvar_int64_t_s {
  chpl_localeID_t locale;
  _syncvar_int64_t addr;
} chpl____wide__syncvar_int64_t;

typedef chpl____wide__syncvar_int64_t *_ref__syncvar_int64_t;
typedef _timevalue *_ref__timevalue;
typedef c_string _tuple_1_star_c_string[1];

typedef _tuple_1_star_c_string *_ref__tuple_1_star_c_string;
typedef chpl____wide_chpl_string _tuple_1_star_chpl_string[1];

typedef _tuple_1_star_chpl_string *_ref__tuple_1_star_chpl_string;
typedef chpl_taskID_t _tuple_1_star_chpl_taskID_t[1];

typedef _tuple_1_star_chpl_taskID_t *_ref__tuple_1_star_chpl_taskID_t;
typedef int64_t _tuple_1_star_int64_t[1];

typedef _tuple_1_star_int64_t *_ref__tuple_1_star_int64_t;
typedef struct chpl_rangeBase_int64_t_bounded_F_s {
  int64_t _low;
  int64_t _high;
  int64_t _stride;
  int64_t _alignment;
} rangeBase_int64_t_bounded_F;

typedef struct chpl_range_int64_t_bounded_F_s {
  rangeBase_int64_t_bounded_F _base;
  chpl_bool _aligned;
} range_int64_t_bounded_F;

typedef range_int64_t_bounded_F _tuple_1_star_range_int64_t_bounded_F[1];

typedef _tuple_1_star_range_int64_t_bounded_F *_ref__tuple_1_star_range_int64_t_bounded_F;
typedef int64_t _tuple_27_star_int64_t[27];

typedef _tuple_27_star_int64_t *_ref__tuple_27_star_int64_t;
typedef struct chpl__tuple_2_chpl_bool_int64_t_s {
  chpl_bool x1;
  int64_t x2;
} _tuple_2_chpl_bool_int64_t;

typedef _tuple_2_chpl_bool_int64_t *_ref__tuple_2_chpl_bool_int64_t;
typedef struct chpl_ioNewline_s {
  chpl_bool skipWhitespaceOnly;
} ioNewline;

typedef struct chpl__tuple_2_chpl_string_ioNewline_s {
  chpl____wide_chpl_string x1;
  ioNewline x2;
} _tuple_2_chpl_string_ioNewline;

typedef _tuple_2_chpl_string_ioNewline *_ref__tuple_2_chpl_string_ioNewline;
typedef chpl____wide_DefaultRectangularArr_chpl_TableEntry_chpl_taskID_t_1_int64_t_F _tuple_2_star__array_DefaultRectangularArr_chpl_TableEntry_chpl_taskID_t_1_int64_t_F_DefaultRectangularArr_chpl_TableEntry_chpl_taskID_t_1_int64_t_F[2];

typedef _tuple_2_star__array_DefaultRectangularArr_chpl_TableEntry_chpl_taskID_t_1_int64_t_F_DefaultRectangularArr_chpl_TableEntry_chpl_taskID_t_1_int64_t_F *_ref__tuple_2_star__array_DefaultRectangularArr_chpl_TableEntry_chpl_taskID_t_1_int64_t_F_DefaultRectangularArr_chpl_TableEntry_chpl_taskID_t_1_int64_t_F;
typedef chpl____wide_DefaultRectangularArr_chpldev_Task_1_int64_t_F _tuple_2_star__array_DefaultRectangularArr_chpldev_Task_1_int64_t_F_DefaultRectangularArr_chpldev_Task_1_int64_t_F[2];

typedef _tuple_2_star__array_DefaultRectangularArr_chpldev_Task_1_int64_t_F_DefaultRectangularArr_chpldev_Task_1_int64_t_F *_ref__tuple_2_star__array_DefaultRectangularArr_chpldev_Task_1_int64_t_F_DefaultRectangularArr_chpldev_Task_1_int64_t_F;
typedef int64_t _tuple_2_star_int64_t[2];

typedef _tuple_2_star_int64_t *_ref__tuple_2_star_int64_t;
typedef struct chpl__tuple_3_chpl_string_int64_t_ioNewline_s {
  chpl____wide_chpl_string x1;
  int64_t x2;
  ioNewline x3;
} _tuple_3_chpl_string_int64_t_ioNewline;

typedef _tuple_3_chpl_string_int64_t_ioNewline *_ref__tuple_3_chpl_string_int64_t_ioNewline;
typedef struct chpl__tuple_4_chpl_string__real64_chpl_string_ioNewline_s {
  chpl____wide_chpl_string x1;
  _real64 x2;
  chpl____wide_chpl_string x3;
  ioNewline x4;
} _tuple_4_chpl_string__real64_chpl_string_ioNewline;

typedef _tuple_4_chpl_string__real64_chpl_string_ioNewline *_ref__tuple_4_chpl_string__real64_chpl_string_ioNewline;
typedef struct chpl__tuple_5_chpl_string__real64_chpl_string_int64_t_ioNewline_s {
  chpl____wide_chpl_string x1;
  _real64 x2;
  chpl____wide_chpl_string x3;
  int64_t x4;
  ioNewline x5;
} _tuple_5_chpl_string__real64_chpl_string_int64_t_ioNewline;

typedef _tuple_5_chpl_string__real64_chpl_string_int64_t_ioNewline *_ref__tuple_5_chpl_string__real64_chpl_string_int64_t_ioNewline;
typedef chpl____wide_chpl_string _tuple_6_star_chpl_string[6];

typedef _tuple_6_star_chpl_string *_ref__tuple_6_star_chpl_string;
typedef struct chpl__tuple_7_chpl_string_c_string_chpl_string_uint32_t_chpl_string_taskState_ioNewline_s {
  chpl____wide_chpl_string x1;
  c_string x2;
  chpl____wide_chpl_string x3;
  uint32_t x4;
  chpl____wide_chpl_string x5;
  taskState x6;
  ioNewline x7;
} _tuple_7_chpl_string_c_string_chpl_string_uint32_t_chpl_string_taskState_ioNewline;

typedef _tuple_7_chpl_string_c_string_chpl_string_uint32_t_chpl_string_taskState_ioNewline *_ref__tuple_7_chpl_string_c_string_chpl_string_uint32_t_chpl_string_taskState_ioNewline;
typedef atomic_flag *_ref_atomic_flag;
typedef atomic_int64 *_ref_atomic_int64;
typedef atomic_int_least64_t *_ref_atomic_int_least64_t;
typedef atomic_refcnt *_ref_atomic_refcnt;
typedef atomicflag *_ref_atomicflag;
typedef c_string *_ref_c_string;
typedef struct chpl_channel_F_dynamic_T_s {
  chpl____wide_locale home;
  qio_channel_ptr_t _channel_internal;
} channel_F_dynamic_T;

typedef channel_F_dynamic_T *_ref_channel_F_dynamic_T;
typedef struct chpl_channel_T_dynamic_T_s {
  chpl____wide_locale home;
  qio_channel_ptr_t _channel_internal;
} channel_T_dynamic_T;

typedef channel_T_dynamic_T *_ref_channel_T_dynamic_T;
typedef chpl_TableEntry_chpl_taskID_t *_ref_chpl_TableEntry_chpl_taskID_t;
typedef chpl__hash_status *_ref_chpl__hash_status;
typedef chpl_bool *_ref_chpl_bool;
typedef chpl_localeID_t *_ref_chpl_localeID_t;
typedef struct chpl_chpl_localeTreeRecord_s {
  chpl____wide_locale left;
  chpl____wide_locale right;
} chpl_localeTreeRecord;

typedef chpl_localeTreeRecord *_ref_chpl_localeTreeRecord;
typedef chpl_main_argument *_ref_chpl_main_argument;
typedef chpl____wide_chpl_string *_ref_chpl_string;
typedef chpl_taskID_t *_ref_chpl_taskID_t;
typedef chpl_task_list_p *_ref_chpl_task_list_p;
typedef chpldev_Task *_ref_chpldev_Task;
typedef struct chpl_chpl____wide_chpldev_taskTable_t_s {
  chpl_localeID_t locale;
  chpldev_taskTable_t addr;
} chpl____wide_chpldev_taskTable_t;

typedef chpl____wide_chpldev_taskTable_t *_ref_chpldev_taskTable_t;
typedef struct chpl_file_s {
  chpl____wide_locale home;
  qio_file_ptr_t _file_internal;
} file;

typedef file *_ref_file;
typedef int32_t *_ref_int32_t;
typedef int64_t *_ref_int64_t;
typedef struct chpl_ioLiteral_s {
  c_string val;
  chpl_bool ignoreWhiteSpace;
} ioLiteral;

typedef ioLiteral *_ref_ioLiteral;
typedef ioNewline *_ref_ioNewline;
typedef iostyle *_ref_iostyle;
typedef struct chpl_chpl____wide_listNode_BaseArr_s {
  chpl_localeID_t locale;
  listNode_BaseArr addr;
} chpl____wide_listNode_BaseArr;

typedef chpl____wide_listNode_BaseArr *_ref_listNode_BaseArr;
typedef struct chpl_chpl____wide_listNode_BaseDom_s {
  chpl_localeID_t locale;
  listNode_BaseDom addr;
} chpl____wide_listNode_BaseDom;

typedef chpl____wide_listNode_BaseDom *_ref_listNode_BaseDom;
typedef struct chpl_list_BaseArr_s {
  chpl____wide_listNode_BaseArr first;
  chpl____wide_listNode_BaseArr last;
  int64_t length;
} list_BaseArr;

typedef list_BaseArr *_ref_list_BaseArr;
typedef struct chpl_list_BaseDom_s {
  chpl____wide_listNode_BaseDom first;
  chpl____wide_listNode_BaseDom last;
  int64_t length;
} list_BaseDom;

typedef list_BaseDom *_ref_list_BaseDom;
typedef chpl____wide_locale *_ref_locale;
typedef struct chpl_localesBarrier_s {
  int dummyFieldToAvoidWarning;
} localesBarrier;

typedef localesBarrier *_ref_localesBarrier;
typedef chpl____wide_localesSignal *_ref_localesSignal;
typedef struct chpl_chpl____wide_object_s {
  chpl_localeID_t locale;
  object addr;
} chpl____wide_object;

typedef chpl____wide_object *_ref_object;
typedef qio_channel_ptr_t *_ref_qio_channel_ptr_t;
typedef qio_file_ptr_t *_ref_qio_file_ptr_t;
typedef struct chpl_rangeBase_int64_t_boundedLow_F_s {
  int64_t _low;
  int64_t _high;
  int64_t _stride;
  int64_t _alignment;
} rangeBase_int64_t_boundedLow_F;

typedef rangeBase_int64_t_boundedLow_F *_ref_rangeBase_int64_t_boundedLow_F;
typedef rangeBase_int64_t_bounded_F *_ref_rangeBase_int64_t_bounded_F;
typedef struct chpl_range_int64_t_boundedLow_F_s {
  rangeBase_int64_t_boundedLow_F _base;
  chpl_bool _aligned;
} range_int64_t_boundedLow_F;

typedef range_int64_t_boundedLow_F *_ref_range_int64_t_boundedLow_F;
typedef range_int64_t_bounded_F *_ref_range_int64_t_bounded_F;
typedef syserr *_ref_syserr;
typedef taskState *_ref_taskState;
typedef uint32_t *_ref_uint32_t;
typedef uint64_t *_ref_uint64_t;
typedef uint8_t *_ref_uint8_t;
typedef struct chpl_chpl____wide_heap_c_string_s {
  chpl_localeID_t locale;
  heap_c_string addr;
} chpl____wide_heap_c_string;

typedef struct chpl_chpl____wide_heap_chpl_bool_s {
  chpl_localeID_t locale;
  heap_chpl_bool addr;
} chpl____wide_heap_chpl_bool;

typedef struct chpl_chpl____wide_heap_chpl_string_s {
  chpl_localeID_t locale;
  heap_chpl_string addr;
} chpl____wide_heap_chpl_string;

typedef struct chpl_chpl____wide_heap__tuple_6_star_chpl_string_s {
  chpl_localeID_t locale;
  heap__tuple_6_star_chpl_string addr;
} chpl____wide_heap__tuple_6_star_chpl_string;

typedef struct chpl_chpl____wide_heap_locale_s {
  chpl_localeID_t locale;
  heap_locale addr;
} chpl____wide_heap_locale;

typedef struct chpl_chpl____wide_heap__syncvar_int64_t_s {
  chpl_localeID_t locale;
  heap__syncvar_int64_t addr;
} chpl____wide_heap__syncvar_int64_t;

typedef struct chpl_chpl____wide__ref_AbstractLocaleModel_s {
  chpl_localeID_t locale;
  _ref_AbstractLocaleModel addr;
} chpl____wide__ref_AbstractLocaleModel;

typedef struct chpl_chpl____wide__ref_AbstractRootLocale_s {
  chpl_localeID_t locale;
  _ref_AbstractRootLocale addr;
} chpl____wide__ref_AbstractRootLocale;

typedef struct chpl_chpl____wide__ref_BaseArr_s {
  chpl_localeID_t locale;
  _ref_BaseArr addr;
} chpl____wide__ref_BaseArr;

typedef struct chpl_chpl____wide__ref_BaseAssociativeDom_s {
  chpl_localeID_t locale;
  _ref_BaseAssociativeDom addr;
} chpl____wide__ref_BaseAssociativeDom;

typedef struct chpl_chpl____wide__ref_BaseDist_s {
  chpl_localeID_t locale;
  _ref_BaseDist addr;
} chpl____wide__ref_BaseDist;

typedef struct chpl_chpl____wide__ref_BaseDom_s {
  chpl_localeID_t locale;
  _ref_BaseDom addr;
} chpl____wide__ref_BaseDom;

typedef struct chpl_chpl____wide__ref_BaseRectangularDom_s {
  chpl_localeID_t locale;
  _ref_BaseRectangularDom addr;
} chpl____wide__ref_BaseRectangularDom;

typedef struct chpl_chpl____wide__ref_DefaultAssociativeArr_chpldev_Task_chpl_taskID_t_F_s {
  chpl_localeID_t locale;
  _ref_DefaultAssociativeArr_chpldev_Task_chpl_taskID_t_F addr;
} chpl____wide__ref_DefaultAssociativeArr_chpldev_Task_chpl_taskID_t_F;

typedef struct chpl_chpl____wide__ref_DefaultAssociativeDom_chpl_taskID_t_F_s {
  chpl_localeID_t locale;
  _ref_DefaultAssociativeDom_chpl_taskID_t_F addr;
} chpl____wide__ref_DefaultAssociativeDom_chpl_taskID_t_F;

typedef struct chpl_chpl____wide__ref_DefaultDist_s {
  chpl_localeID_t locale;
  _ref_DefaultDist addr;
} chpl____wide__ref_DefaultDist;

typedef struct chpl_chpl____wide__ref_DefaultRectangularArr_chpl_TableEntry_chpl_taskID_t_1_int64_t_F_s {
  chpl_localeID_t locale;
  _ref_DefaultRectangularArr_chpl_TableEntry_chpl_taskID_t_1_int64_t_F addr;
} chpl____wide__ref_DefaultRectangularArr_chpl_TableEntry_chpl_taskID_t_1_int64_t_F;

typedef struct chpl_chpl____wide__ref_DefaultRectangularArr_chpldev_Task_1_int64_t_F_s {
  chpl_localeID_t locale;
  _ref_DefaultRectangularArr_chpldev_Task_1_int64_t_F addr;
} chpl____wide__ref_DefaultRectangularArr_chpldev_Task_1_int64_t_F;

typedef struct chpl_chpl____wide__ref_DefaultRectangularArr_locale_1_int64_t_F_s {
  chpl_localeID_t locale;
  _ref_DefaultRectangularArr_locale_1_int64_t_F addr;
} chpl____wide__ref_DefaultRectangularArr_locale_1_int64_t_F;

typedef struct chpl_chpl____wide__ref_DefaultRectangularArr_localesSignal_1_int64_t_F_s {
  chpl_localeID_t locale;
  _ref_DefaultRectangularArr_localesSignal_1_int64_t_F addr;
} chpl____wide__ref_DefaultRectangularArr_localesSignal_1_int64_t_F;

typedef struct chpl_chpl____wide__ref_DefaultRectangularDom_1_int64_t_F_s {
  chpl_localeID_t locale;
  _ref_DefaultRectangularDom_1_int64_t_F addr;
} chpl____wide__ref_DefaultRectangularDom_1_int64_t_F;

typedef struct chpl_chpl____wide__ref_LocaleModel_s {
  chpl_localeID_t locale;
  _ref_LocaleModel addr;
} chpl____wide__ref_LocaleModel;

typedef struct chpl_chpl____wide__ref_RandomStream_F_s {
  chpl_localeID_t locale;
  _ref_RandomStream_F addr;
} chpl____wide__ref_RandomStream_F;

typedef struct chpl_chpl____wide__ref_Reader_s {
  chpl_localeID_t locale;
  _ref_Reader addr;
} chpl____wide__ref_Reader;

typedef struct chpl_chpl____wide__ref_RootLocale_s {
  chpl_localeID_t locale;
  _ref_RootLocale addr;
} chpl____wide__ref_RootLocale;

typedef struct chpl_chpl____wide__ref_SeedGenerators_s {
  chpl_localeID_t locale;
  _ref_SeedGenerators addr;
} chpl____wide__ref_SeedGenerators;

typedef struct chpl_chpl____wide__ref_StringWriter_s {
  chpl_localeID_t locale;
  _ref_StringWriter addr;
} chpl____wide__ref_StringWriter;

typedef struct chpl_chpl____wide__ref_Timer_s {
  chpl_localeID_t locale;
  _ref_Timer addr;
} chpl____wide__ref_Timer;

typedef struct chpl_chpl____wide__ref_Writer_s {
  chpl_localeID_t locale;
  _ref_Writer addr;
} chpl____wide__ref_Writer;

typedef struct chpl_chpl____wide__ref__EndCount_s {
  chpl_localeID_t locale;
  _ref__EndCount addr;
} chpl____wide__ref__EndCount;

typedef struct chpl_chpl____wide__ref__OpaqueIndex_s {
  chpl_localeID_t locale;
  _ref__OpaqueIndex addr;
} chpl____wide__ref__OpaqueIndex;

typedef struct chpl_chpl____wide__ref__RuntimeTypeInfo_s {
  chpl_localeID_t locale;
  _ref__RuntimeTypeInfo addr;
} chpl____wide__ref__RuntimeTypeInfo;

typedef struct chpl_chpl____wide__ref__RuntimeTypeInfo2_s {
  chpl_localeID_t locale;
  _ref__RuntimeTypeInfo2 addr;
} chpl____wide__ref__RuntimeTypeInfo2;

typedef struct chpl_chpl____wide__ref__RuntimeTypeInfo3_s {
  chpl_localeID_t locale;
  _ref__RuntimeTypeInfo3 addr;
} chpl____wide__ref__RuntimeTypeInfo3;

typedef struct chpl_chpl____wide__ref__RuntimeTypeInfo4_s {
  chpl_localeID_t locale;
  _ref__RuntimeTypeInfo4 addr;
} chpl____wide__ref__RuntimeTypeInfo4;

typedef struct chpl_chpl____wide__ref__RuntimeTypeInfo5_s {
  chpl_localeID_t locale;
  _ref__RuntimeTypeInfo5 addr;
} chpl____wide__ref__RuntimeTypeInfo5;

typedef struct chpl_chpl____wide__ref__RuntimeTypeInfo6_s {
  chpl_localeID_t locale;
  _ref__RuntimeTypeInfo6 addr;
} chpl____wide__ref__RuntimeTypeInfo6;

typedef struct chpl_chpl____wide__ref__RuntimeTypeInfo7_s {
  chpl_localeID_t locale;
  _ref__RuntimeTypeInfo7 addr;
} chpl____wide__ref__RuntimeTypeInfo7;

typedef struct chpl_chpl____wide__ref__ddata_chpl_TableEntry_chpl_taskID_t_s {
  chpl_localeID_t locale;
  _ref__ddata_chpl_TableEntry_chpl_taskID_t addr;
} chpl____wide__ref__ddata_chpl_TableEntry_chpl_taskID_t;

typedef struct chpl_chpl____wide__ref__ddata_chpl_string_s {
  chpl_localeID_t locale;
  _ref__ddata_chpl_string addr;
} chpl____wide__ref__ddata_chpl_string;

typedef struct chpl_chpl____wide__ref__ddata_chpldev_Task_s {
  chpl_localeID_t locale;
  _ref__ddata_chpldev_Task addr;
} chpl____wide__ref__ddata_chpldev_Task;

typedef struct chpl_chpl____wide__ref__ddata_locale_s {
  chpl_localeID_t locale;
  _ref__ddata_locale addr;
} chpl____wide__ref__ddata_locale;

typedef struct chpl_chpl____wide__ref__ddata_localesSignal_s {
  chpl_localeID_t locale;
  _ref__ddata_localesSignal addr;
} chpl____wide__ref__ddata_localesSignal;

typedef struct chpl_chpl____wide__ref__ir_initOnLocales_AbstractRootLocale_s {
  chpl_localeID_t locale;
  _ref__ir_initOnLocales_AbstractRootLocale addr;
} chpl____wide__ref__ir_initOnLocales_AbstractRootLocale;

typedef struct chpl_chpl____wide__ref__nilType_s {
  chpl_localeID_t locale;
  _ref__nilType addr;
} chpl____wide__ref__nilType;

typedef struct chpl_chpl____wide__ref__real64_s {
  chpl_localeID_t locale;
  _ref__real64 addr;
} chpl____wide__ref__real64;

typedef struct chpl_chpl____wide__ref__syncvar_chpl_bool_s {
  chpl_localeID_t locale;
  _ref__syncvar_chpl_bool addr;
} chpl____wide__ref__syncvar_chpl_bool;

typedef struct chpl_chpl____wide__ref__syncvar_int64_t_s {
  chpl_localeID_t locale;
  _ref__syncvar_int64_t addr;
} chpl____wide__ref__syncvar_int64_t;

typedef struct chpl_chpl____wide__ref__timevalue_s {
  chpl_localeID_t locale;
  _ref__timevalue addr;
} chpl____wide__ref__timevalue;

typedef struct chpl_chpl____wide__ref__tuple_1_star_c_string_s {
  chpl_localeID_t locale;
  _ref__tuple_1_star_c_string addr;
} chpl____wide__ref__tuple_1_star_c_string;

typedef struct chpl_chpl____wide__ref__tuple_1_star_chpl_string_s {
  chpl_localeID_t locale;
  _ref__tuple_1_star_chpl_string addr;
} chpl____wide__ref__tuple_1_star_chpl_string;

typedef struct chpl_chpl____wide__ref__tuple_1_star_chpl_taskID_t_s {
  chpl_localeID_t locale;
  _ref__tuple_1_star_chpl_taskID_t addr;
} chpl____wide__ref__tuple_1_star_chpl_taskID_t;

typedef struct chpl_chpl____wide__ref__tuple_1_star_int64_t_s {
  chpl_localeID_t locale;
  _ref__tuple_1_star_int64_t addr;
} chpl____wide__ref__tuple_1_star_int64_t;

typedef struct chpl_chpl____wide__ref__tuple_1_star_range_int64_t_bounded_F_s {
  chpl_localeID_t locale;
  _ref__tuple_1_star_range_int64_t_bounded_F addr;
} chpl____wide__ref__tuple_1_star_range_int64_t_bounded_F;

typedef struct chpl_chpl____wide__ref__tuple_27_star_int64_t_s {
  chpl_localeID_t locale;
  _ref__tuple_27_star_int64_t addr;
} chpl____wide__ref__tuple_27_star_int64_t;

typedef struct chpl_chpl____wide__ref__tuple_2_chpl_bool_int64_t_s {
  chpl_localeID_t locale;
  _ref__tuple_2_chpl_bool_int64_t addr;
} chpl____wide__ref__tuple_2_chpl_bool_int64_t;

typedef struct chpl_chpl____wide__ref__tuple_2_chpl_string_ioNewline_s {
  chpl_localeID_t locale;
  _ref__tuple_2_chpl_string_ioNewline addr;
} chpl____wide__ref__tuple_2_chpl_string_ioNewline;

typedef struct chpl_chpl____wide__ref__tuple_2_star__array_DefaultRectangularArr_chpl_TableEntry_chpl_taskID_t_1_int64_t_F_DefaultRectangularArr_chpl_TableEntry_chpl_taskID_t_1_int64_t_F_s {
  chpl_localeID_t locale;
  _ref__tuple_2_star__array_DefaultRectangularArr_chpl_TableEntry_chpl_taskID_t_1_int64_t_F_DefaultRectangularArr_chpl_TableEntry_chpl_taskID_t_1_int64_t_F addr;
} chpl____wide__ref__tuple_2_star__array_DefaultRectangularArr_chpl_TableEntry_chpl_taskID_t_1_int64_t_F_DefaultRectangularArr_chpl_TableEntry_chpl_taskID_t_1_int64_t_F;

typedef struct chpl_chpl____wide__ref__tuple_2_star__array_DefaultRectangularArr_chpldev_Task_1_int64_t_F_DefaultRectangularArr_chpldev_Task_1_int64_t_F_s {
  chpl_localeID_t locale;
  _ref__tuple_2_star__array_DefaultRectangularArr_chpldev_Task_1_int64_t_F_DefaultRectangularArr_chpldev_Task_1_int64_t_F addr;
} chpl____wide__ref__tuple_2_star__array_DefaultRectangularArr_chpldev_Task_1_int64_t_F_DefaultRectangularArr_chpldev_Task_1_int64_t_F;

typedef struct chpl_chpl____wide__ref__tuple_2_star_int64_t_s {
  chpl_localeID_t locale;
  _ref__tuple_2_star_int64_t addr;
} chpl____wide__ref__tuple_2_star_int64_t;

typedef struct chpl_chpl____wide__ref__tuple_3_chpl_string_int64_t_ioNewline_s {
  chpl_localeID_t locale;
  _ref__tuple_3_chpl_string_int64_t_ioNewline addr;
} chpl____wide__ref__tuple_3_chpl_string_int64_t_ioNewline;

typedef struct chpl_chpl____wide__ref__tuple_4_chpl_string__real64_chpl_string_ioNewline_s {
  chpl_localeID_t locale;
  _ref__tuple_4_chpl_string__real64_chpl_string_ioNewline addr;
} chpl____wide__ref__tuple_4_chpl_string__real64_chpl_string_ioNewline;

typedef struct chpl_chpl____wide__ref__tuple_5_chpl_string__real64_chpl_string_int64_t_ioNewline_s {
  chpl_localeID_t locale;
  _ref__tuple_5_chpl_string__real64_chpl_string_int64_t_ioNewline addr;
} chpl____wide__ref__tuple_5_chpl_string__real64_chpl_string_int64_t_ioNewline;

typedef struct chpl_chpl____wide__ref__tuple_6_star_chpl_string_s {
  chpl_localeID_t locale;
  _ref__tuple_6_star_chpl_string addr;
} chpl____wide__ref__tuple_6_star_chpl_string;

typedef struct chpl_chpl____wide__ref__tuple_7_chpl_string_c_string_chpl_string_uint32_t_chpl_string_taskState_ioNewline_s {
  chpl_localeID_t locale;
  _ref__tuple_7_chpl_string_c_string_chpl_string_uint32_t_chpl_string_taskState_ioNewline addr;
} chpl____wide__ref__tuple_7_chpl_string_c_string_chpl_string_uint32_t_chpl_string_taskState_ioNewline;

typedef struct chpl_chpl____wide__ref_atomic_flag_s {
  chpl_localeID_t locale;
  _ref_atomic_flag addr;
} chpl____wide__ref_atomic_flag;

typedef struct chpl_chpl____wide__ref_atomic_int64_s {
  chpl_localeID_t locale;
  _ref_atomic_int64 addr;
} chpl____wide__ref_atomic_int64;

typedef struct chpl_chpl____wide__ref_atomic_int_least64_t_s {
  chpl_localeID_t locale;
  _ref_atomic_int_least64_t addr;
} chpl____wide__ref_atomic_int_least64_t;

typedef struct chpl_chpl____wide__ref_atomic_refcnt_s {
  chpl_localeID_t locale;
  _ref_atomic_refcnt addr;
} chpl____wide__ref_atomic_refcnt;

typedef struct chpl_chpl____wide__ref_atomicflag_s {
  chpl_localeID_t locale;
  _ref_atomicflag addr;
} chpl____wide__ref_atomicflag;

typedef struct chpl_chpl____wide__ref_c_string_s {
  chpl_localeID_t locale;
  _ref_c_string addr;
} chpl____wide__ref_c_string;

typedef struct chpl_chpl____wide__ref_channel_F_dynamic_T_s {
  chpl_localeID_t locale;
  _ref_channel_F_dynamic_T addr;
} chpl____wide__ref_channel_F_dynamic_T;

typedef struct chpl_chpl____wide__ref_channel_T_dynamic_T_s {
  chpl_localeID_t locale;
  _ref_channel_T_dynamic_T addr;
} chpl____wide__ref_channel_T_dynamic_T;

typedef struct chpl_chpl____wide__ref_chpl_TableEntry_chpl_taskID_t_s {
  chpl_localeID_t locale;
  _ref_chpl_TableEntry_chpl_taskID_t addr;
} chpl____wide__ref_chpl_TableEntry_chpl_taskID_t;

typedef struct chpl_chpl____wide__ref_chpl__hash_status_s {
  chpl_localeID_t locale;
  _ref_chpl__hash_status addr;
} chpl____wide__ref_chpl__hash_status;

typedef struct chpl_chpl____wide__ref_chpl_bool_s {
  chpl_localeID_t locale;
  _ref_chpl_bool addr;
} chpl____wide__ref_chpl_bool;

typedef struct chpl_chpl____wide__ref_chpl_localeID_t_s {
  chpl_localeID_t locale;
  _ref_chpl_localeID_t addr;
} chpl____wide__ref_chpl_localeID_t;

typedef struct chpl_chpl____wide__ref_chpl_localeTreeRecord_s {
  chpl_localeID_t locale;
  _ref_chpl_localeTreeRecord addr;
} chpl____wide__ref_chpl_localeTreeRecord;

typedef struct chpl_chpl____wide__ref_chpl_main_argument_s {
  chpl_localeID_t locale;
  _ref_chpl_main_argument addr;
} chpl____wide__ref_chpl_main_argument;

typedef struct chpl_chpl____wide__ref_chpl_string_s {
  chpl_localeID_t locale;
  _ref_chpl_string addr;
} chpl____wide__ref_chpl_string;

typedef struct chpl_chpl____wide__ref_chpl_taskID_t_s {
  chpl_localeID_t locale;
  _ref_chpl_taskID_t addr;
} chpl____wide__ref_chpl_taskID_t;

typedef struct chpl_chpl____wide__ref_chpl_task_list_p_s {
  chpl_localeID_t locale;
  _ref_chpl_task_list_p addr;
} chpl____wide__ref_chpl_task_list_p;

typedef struct chpl_chpl____wide__ref_chpldev_Task_s {
  chpl_localeID_t locale;
  _ref_chpldev_Task addr;
} chpl____wide__ref_chpldev_Task;

typedef struct chpl_chpl____wide__ref_chpldev_taskTable_t_s {
  chpl_localeID_t locale;
  _ref_chpldev_taskTable_t addr;
} chpl____wide__ref_chpldev_taskTable_t;

typedef struct chpl_chpl____wide__ref_file_s {
  chpl_localeID_t locale;
  _ref_file addr;
} chpl____wide__ref_file;

typedef struct chpl_chpl____wide__ref_int32_t_s {
  chpl_localeID_t locale;
  _ref_int32_t addr;
} chpl____wide__ref_int32_t;

typedef struct chpl_chpl____wide__ref_int64_t_s {
  chpl_localeID_t locale;
  _ref_int64_t addr;
} chpl____wide__ref_int64_t;

typedef struct chpl_chpl____wide__ref_ioLiteral_s {
  chpl_localeID_t locale;
  _ref_ioLiteral addr;
} chpl____wide__ref_ioLiteral;

typedef struct chpl_chpl____wide__ref_ioNewline_s {
  chpl_localeID_t locale;
  _ref_ioNewline addr;
} chpl____wide__ref_ioNewline;

typedef struct chpl_chpl____wide__ref_iostyle_s {
  chpl_localeID_t locale;
  _ref_iostyle addr;
} chpl____wide__ref_iostyle;

typedef struct chpl_chpl____wide__ref_listNode_BaseArr_s {
  chpl_localeID_t locale;
  _ref_listNode_BaseArr addr;
} chpl____wide__ref_listNode_BaseArr;

typedef struct chpl_chpl____wide__ref_listNode_BaseDom_s {
  chpl_localeID_t locale;
  _ref_listNode_BaseDom addr;
} chpl____wide__ref_listNode_BaseDom;

typedef struct chpl_chpl____wide__ref_list_BaseArr_s {
  chpl_localeID_t locale;
  _ref_list_BaseArr addr;
} chpl____wide__ref_list_BaseArr;

typedef struct chpl_chpl____wide__ref_list_BaseDom_s {
  chpl_localeID_t locale;
  _ref_list_BaseDom addr;
} chpl____wide__ref_list_BaseDom;

typedef struct chpl_chpl____wide__ref_locale_s {
  chpl_localeID_t locale;
  _ref_locale addr;
} chpl____wide__ref_locale;

typedef struct chpl_chpl____wide__ref_localesBarrier_s {
  chpl_localeID_t locale;
  _ref_localesBarrier addr;
} chpl____wide__ref_localesBarrier;

typedef struct chpl_chpl____wide__ref_localesSignal_s {
  chpl_localeID_t locale;
  _ref_localesSignal addr;
} chpl____wide__ref_localesSignal;

typedef struct chpl_chpl____wide__ref_object_s {
  chpl_localeID_t locale;
  _ref_object addr;
} chpl____wide__ref_object;

typedef struct chpl_chpl____wide__ref_qio_channel_ptr_t_s {
  chpl_localeID_t locale;
  _ref_qio_channel_ptr_t addr;
} chpl____wide__ref_qio_channel_ptr_t;

typedef struct chpl_chpl____wide__ref_qio_file_ptr_t_s {
  chpl_localeID_t locale;
  _ref_qio_file_ptr_t addr;
} chpl____wide__ref_qio_file_ptr_t;

typedef struct chpl_chpl____wide__ref_rangeBase_int64_t_boundedLow_F_s {
  chpl_localeID_t locale;
  _ref_rangeBase_int64_t_boundedLow_F addr;
} chpl____wide__ref_rangeBase_int64_t_boundedLow_F;

typedef struct chpl_chpl____wide__ref_rangeBase_int64_t_bounded_F_s {
  chpl_localeID_t locale;
  _ref_rangeBase_int64_t_bounded_F addr;
} chpl____wide__ref_rangeBase_int64_t_bounded_F;

typedef struct chpl_chpl____wide__ref_range_int64_t_boundedLow_F_s {
  chpl_localeID_t locale;
  _ref_range_int64_t_boundedLow_F addr;
} chpl____wide__ref_range_int64_t_boundedLow_F;

typedef struct chpl_chpl____wide__ref_range_int64_t_bounded_F_s {
  chpl_localeID_t locale;
  _ref_range_int64_t_bounded_F addr;
} chpl____wide__ref_range_int64_t_bounded_F;

typedef struct chpl_chpl____wide__ref_syserr_s {
  chpl_localeID_t locale;
  _ref_syserr addr;
} chpl____wide__ref_syserr;

typedef struct chpl_chpl____wide__ref_taskState_s {
  chpl_localeID_t locale;
  _ref_taskState addr;
} chpl____wide__ref_taskState;

typedef struct chpl_chpl____wide__ref_uint32_t_s {
  chpl_localeID_t locale;
  _ref_uint32_t addr;
} chpl____wide__ref_uint32_t;

typedef struct chpl_chpl____wide__ref_uint64_t_s {
  chpl_localeID_t locale;
  _ref_uint64_t addr;
} chpl____wide__ref_uint64_t;

typedef struct chpl_chpl____wide__ref_uint8_t_s {
  chpl_localeID_t locale;
  _ref_uint8_t addr;
} chpl____wide__ref_uint8_t;

/*** Classes ***/

typedef struct chpl__class_localson_fn_s {
  chpl_localeID_t _0__tmp;
  chpl____wide__ref_atomicflag _1_this;
  memory_order _2_order;
  chpl____wide__ref_chpl_bool _3__tmp;
} chpl__class_localson_fn_object;

typedef struct chpl__class_localson_fn2_s {
  chpl_localeID_t _0__tmp;
  chpl____wide__ref_atomicflag _1_this;
  memory_order _2_order;
  chpl____wide__ref_chpl_bool _3__tmp;
} chpl__class_localson_fn2_object;

typedef struct chpl__class_localson_fn3_s {
  chpl_localeID_t _0__tmp;
  chpl____wide__ref_atomicflag _1_this;
  memory_order _2_order;
} chpl__class_localson_fn3_object;

typedef struct chpl__class_localson_fn4_s {
  chpl_localeID_t _0__tmp;
  chpl____wide__ref_atomicflag _1_this;
  chpl_bool _2_val;
  memory_order _3_order;
} chpl__class_localson_fn4_object;

typedef struct chpl__class_localson_fn5_s {
  chpl_localeID_t _0__tmp;
  chpl____wide__ref_atomic_int64 _1_this;
  memory_order _2_order;
  chpl____wide__ref_int64_t _3__tmp;
} chpl__class_localson_fn5_object;

typedef struct chpl__class_localson_fn6_s {
  chpl_localeID_t _0__tmp;
  chpl____wide__ref_atomic_int64 _1_this;
  int64_t _2_value;
  memory_order _3_order;
} chpl__class_localson_fn6_object;

typedef struct chpl__class_localson_fn7_s {
  chpl_localeID_t _0__tmp;
  chpl____wide__ref_atomic_int64 _1_this;
  int64_t _2_value;
  memory_order _3_order;
} chpl__class_localson_fn7_object;

typedef struct chpl__class_localson_fn8_s {
  chpl_localeID_t _0__tmp;
  chpl____wide__ref_atomic_int64 _1_this;
  int64_t _2_value;
  memory_order _3_order;
  chpl____wide__ref_int64_t _4__tmp;
} chpl__class_localson_fn8_object;

typedef struct chpl__class_localson_fn9_s {
  chpl_localeID_t _0__tmp;
  chpl____wide__ref_atomic_int64 _1_this;
  int64_t _2_value;
  memory_order _3_order;
} chpl__class_localson_fn9_object;

typedef struct chpl__class_localson_fn10_s {
  chpl_localeID_t _0__tmp;
  chpl____wide__ref_atomic_int64 _1_this;
  int64_t _2_val;
  memory_order _3_order;
} chpl__class_localson_fn10_object;

typedef struct chpl__class_localscoforall_fn_s {
  _tuple_1_star_range_int64_t_bounded_F _0_locBlock;
  int64_t _1_parDim;
  int64_t _2_numChunks;
  int64_t _3_chunk;
  chpl____wide__EndCount _4_rvfDerefTmp;
  _tuple_2_star__array_DefaultRectangularArr_chpl_TableEntry_chpl_taskID_t_1_int64_t_F_DefaultRectangularArr_chpl_TableEntry_chpl_taskID_t_1_int64_t_F _5_rvfDerefTmp;
} chpl__class_localscoforall_fn_object;

typedef struct chpl__class_localscoforall_fn2_s {
  _tuple_1_star_range_int64_t_bounded_F _0_locBlock;
  int64_t _1_parDim;
  int64_t _2_numChunks;
  int64_t _3_chunk;
  chpl____wide__EndCount _4_rvfDerefTmp;
  _tuple_2_star__array_DefaultRectangularArr_chpldev_Task_1_int64_t_F_DefaultRectangularArr_chpldev_Task_1_int64_t_F _5_rvfDerefTmp;
} chpl__class_localscoforall_fn2_object;

typedef struct chpl__class_localson_fn11_s {
  chpl_localeID_t _0__tmp;
  chpl____wide_DefaultDist _1_this;
} chpl__class_localson_fn11_object;

typedef struct chpl__class_localson_fn12_s {
  chpl_localeID_t _0__tmp;
  chpl____wide_DefaultDist _1_rvfDerefTmp;
} chpl__class_localson_fn12_object;

typedef struct chpl__class_localson_fn13_s {
  chpl_localeID_t _0__tmp;
  chpl____wide_DefaultRectangularDom_1_int64_t_F _1_this;
} chpl__class_localson_fn13_object;

typedef struct chpl__class_localson_fn14_s {
  chpl_localeID_t _0__tmp;
  chpl____wide_DefaultAssociativeDom_chpl_taskID_t_F _1_this;
} chpl__class_localson_fn14_object;

typedef struct chpl__class_localson_fn15_s {
  chpl_localeID_t _0__tmp;
  chpl____wide_DefaultRectangularDom_1_int64_t_F _1_rvfDerefTmp;
} chpl__class_localson_fn15_object;

typedef struct chpl__class_localson_fn16_s {
  chpl_localeID_t _0__tmp;
  chpl____wide_DefaultAssociativeDom_chpl_taskID_t_F _1_rvfDerefTmp;
} chpl__class_localson_fn16_object;

typedef struct chpl__class_localson_fn17_s {
  chpl_localeID_t _0__tmp;
  chpl____wide_DefaultRectangularArr_locale_1_int64_t_F _1_this;
} chpl__class_localson_fn17_object;

typedef struct chpl__class_localson_fn18_s {
  chpl_localeID_t _0__tmp;
  chpl____wide_DefaultRectangularArr_localesSignal_1_int64_t_F _1_this;
} chpl__class_localson_fn18_object;

typedef struct chpl__class_localson_fn19_s {
  chpl_localeID_t _0__tmp;
  chpl____wide_DefaultRectangularArr_chpl_TableEntry_chpl_taskID_t_1_int64_t_F _1_this;
} chpl__class_localson_fn19_object;

typedef struct chpl__class_localson_fn20_s {
  chpl_localeID_t _0__tmp;
  chpl____wide_DefaultRectangularArr_chpldev_Task_1_int64_t_F _1_this;
} chpl__class_localson_fn20_object;

typedef struct chpl__class_localson_fn21_s {
  chpl_localeID_t _0__tmp;
  chpl____wide_DefaultAssociativeArr_chpldev_Task_chpl_taskID_t_F _1_this;
} chpl__class_localson_fn21_object;

typedef struct chpl__class_localson_fn22_s {
  chpl_localeID_t _0__tmp;
  chpl____wide_DefaultRectangularArr_locale_1_int64_t_F _1_rvfDerefTmp;
} chpl__class_localson_fn22_object;

typedef struct chpl__class_localson_fn23_s {
  chpl_localeID_t _0__tmp;
  chpl____wide_DefaultRectangularArr_localesSignal_1_int64_t_F _1_rvfDerefTmp;
} chpl__class_localson_fn23_object;

typedef struct chpl__class_localson_fn24_s {
  chpl_localeID_t _0__tmp;
  chpl____wide_DefaultRectangularArr_chpl_TableEntry_chpl_taskID_t_1_int64_t_F _1_rvfDerefTmp;
} chpl__class_localson_fn24_object;

typedef struct chpl__class_localson_fn25_s {
  chpl_localeID_t _0__tmp;
  chpl____wide_DefaultRectangularArr_chpldev_Task_1_int64_t_F _1_rvfDerefTmp;
} chpl__class_localson_fn25_object;

typedef struct chpl__class_localson_fn26_s {
  chpl_localeID_t _0__tmp;
  chpl____wide_DefaultAssociativeArr_chpldev_Task_chpl_taskID_t_F _1_rvfDerefTmp;
} chpl__class_localson_fn26_object;

typedef struct chpl__class_localson_fn27_s {
  chpl_localeID_t _0__tmp;
  chpl____wide_BaseArr _1_rvfDerefTmp;
  chpl____wide_DefaultRectangularDom_1_int64_t_F _2__tmp;
} chpl__class_localson_fn27_object;

typedef struct chpl__class_localson_fn28_s {
  chpl_localeID_t _0__tmp;
  chpl____wide_BaseArr _1_rvfDerefTmp;
} chpl__class_localson_fn28_object;

typedef struct chpl__class_localson_fn29_s {
  chpl_localeID_t _0__tmp;
  chpl____wide__EndCount _1_rvfDerefTmp;
} chpl__class_localson_fn29_object;

typedef struct chpl__class_localson_fn30_s {
  chpl_localeID_t _0__tmp;
  chpl____wide__EndCount _1_e;
} chpl__class_localson_fn30_object;

typedef struct chpl__class_localson_fn31_s {
  chpl_localeID_t _0__tmp;
  chpl____wide_BaseDist _1_this;
  chpl____wide_BaseDom _2_x;
} chpl__class_localson_fn31_object;

typedef struct chpl__class_localson_fn32_s {
  chpl_localeID_t _0__tmp;
  chpl____wide_BaseDist _1_rvfDerefTmp;
  chpl____wide_BaseDom _2_this;
} chpl__class_localson_fn32_object;

typedef struct chpl__class_localson_fn33_s {
  chpl_localeID_t _0__tmp;
  chpl____wide_BaseDist _1_rvfDerefTmp;
} chpl__class_localson_fn33_object;

typedef struct chpl__class_localson_fn34_s {
  chpl_localeID_t _0__tmp;
  chpl____wide_BaseDom _1_this;
  chpl____wide_BaseArr _2_x;
} chpl__class_localson_fn34_object;

typedef struct chpl__class_localson_fn35_s {
  chpl_localeID_t _0__tmp;
  chpl____wide_BaseDom _1_this;
  chpl____wide_DefaultRectangularArr_locale_1_int64_t_F _2_x;
} chpl__class_localson_fn35_object;

typedef struct chpl__class_localson_fn36_s {
  chpl_localeID_t _0__tmp;
  chpl____wide_BaseDom _1_this;
  chpl____wide_DefaultRectangularArr_localesSignal_1_int64_t_F _2_x;
} chpl__class_localson_fn36_object;

typedef struct chpl__class_localson_fn37_s {
  chpl_localeID_t _0__tmp;
  chpl____wide_BaseDom _1_this;
  chpl____wide_DefaultRectangularArr_chpl_TableEntry_chpl_taskID_t_1_int64_t_F _2_x;
} chpl__class_localson_fn37_object;

typedef struct chpl__class_localson_fn38_s {
  chpl_localeID_t _0__tmp;
  chpl____wide_BaseDom _1_this;
  chpl____wide_DefaultRectangularArr_chpldev_Task_1_int64_t_F _2_x;
} chpl__class_localson_fn38_object;

typedef struct chpl__class_localson_fn39_s {
  chpl_localeID_t _0__tmp;
  chpl____wide_BaseDom _1_this;
  chpl____wide_DefaultAssociativeArr_chpldev_Task_chpl_taskID_t_F _2_x;
} chpl__class_localson_fn39_object;

typedef struct chpl__class_localson_fn40_s {
  chpl_localeID_t _0__tmp;
  chpl____wide_BaseArr _1_this;
} chpl__class_localson_fn40_object;

typedef struct chpl__class_localson_fn41_s {
  chpl_localeID_t _0__tmp;
  chpl____wide_BaseArr _1_rvfDerefTmp;
} chpl__class_localson_fn41_object;

typedef struct chpl__class_localson_fn42_s {
  chpl_localeID_t _0__tmp;
  chpl____wide_BaseDom _1_rvfDerefTmp;
  chpl____wide_BaseArr _2_this;
} chpl__class_localson_fn42_object;

typedef struct chpl__class_localson_fn43_s {
  chpl_localeID_t _0__tmp;
  chpl____wide_BaseDom _1_rvfDerefTmp;
} chpl__class_localson_fn43_object;

typedef struct chpl__class_localson_fn44_s {
  chpl_localeID_t _0__tmp;
  chpl____wide_StringWriter _1_rvfDerefTmp;
} chpl__class_localson_fn44_object;

typedef struct chpl__class_localson_fn45_s {
  chpl_localeID_t _0__tmp;
  chpl____wide_StringWriter _1_rvfDerefTmp;
} chpl__class_localson_fn45_object;

typedef struct chpl__class_localson_fn46_s {
  chpl_localeID_t _0__tmp;
  chpl____wide_StringWriter _1_rvfDerefTmp;
} chpl__class_localson_fn46_object;

typedef struct chpl__class_localson_fn47_s {
  chpl_localeID_t _0__tmp;
  chpl____wide_StringWriter _1_rvfDerefTmp;
} chpl__class_localson_fn47_object;

typedef struct chpl__class_localson_fn48_s {
  chpl_localeID_t _0__tmp;
  chpl____wide_StringWriter _1_rvfDerefTmp;
} chpl__class_localson_fn48_object;

typedef struct chpl__class_localson_fn49_s {
  chpl_localeID_t _0__tmp;
  chpl____wide_localesSignal _1_rvfDerefTmp;
} chpl__class_localson_fn49_object;

typedef struct chpl__syncvar_chpl_bool_s {
  chpl_bool value;
  chpl_sync_aux_t sync_aux;
} chpl__syncvar_chpl_bool_object;

typedef struct chpl__syncvar_int64_t_s {
  int64_t value;
  chpl_sync_aux_t sync_aux;
} chpl__syncvar_int64_t_object;

typedef struct chpl__class_localson_fn50_s {
  chpl_localeID_t _0__tmp;
  chpl____wide__EndCount _1_rvfDerefTmp;
} chpl__class_localson_fn50_object;

typedef struct chpl__class_localson_fn51_s {
  chpl_localeID_t _0__tmp;
  chpl____wide_DefaultAssociativeDom_chpl_taskID_t_F _1_this;
  chpl_taskID_t _2_idx;
  chpl____wide__ref_int64_t _3__tmp;
} chpl__class_localson_fn51_object;

typedef struct chpl__class_localson_fn52_s {
  chpl_localeID_t _0__tmp;
  chpl____wide_DefaultAssociativeDom_chpl_taskID_t_F _1_this;
  chpl_taskID_t _2_idx;
} chpl__class_localson_fn52_object;

typedef struct chpl__class_localson_fn53_s {
  chpl_localeID_t _0__tmp;
  chpl____wide_DefaultRectangularArr_locale_1_int64_t_F _1_rvfDerefTmp;
} chpl__class_localson_fn53_object;

typedef struct chpl__class_localson_fn54_s {
  chpl_localeID_t _0__tmp;
  chpl____wide_DefaultRectangularArr_localesSignal_1_int64_t_F _1_rvfDerefTmp;
} chpl__class_localson_fn54_object;

typedef struct chpl__class_localson_fn55_s {
  chpl_localeID_t _0__tmp;
  chpl____wide_DefaultRectangularArr_chpl_TableEntry_chpl_taskID_t_1_int64_t_F _1_rvfDerefTmp;
} chpl__class_localson_fn55_object;

typedef struct chpl__class_localson_fn56_s {
  chpl_localeID_t _0__tmp;
  chpl____wide_DefaultRectangularArr_chpldev_Task_1_int64_t_F _1_rvfDerefTmp;
} chpl__class_localson_fn56_object;

typedef struct chpl__class_localson_fn57_s {
  chpl_localeID_t _0__tmp;
  int64_t _1_locIdx;
  localesBarrier _2_b;
  chpl____wide_DefaultRectangularArr_localesSignal_1_int64_t_F _3_flags;
  chpl____wide__EndCount _4_rvfDerefTmp;
  _ir_initOnLocales_AbstractRootLocale _5_rvfDerefTmp;
  chpl____wide_RootLocale _6_this;
} chpl__class_localson_fn57_object;

typedef struct chpl__class_localson_fn58_s {
  chpl_localeID_t _0__tmp;
  chpl____wide_locale _1_rvfDerefTmp;
  chpl____wide_locale _2_rvfDerefTmp;
} chpl__class_localson_fn58_object;

typedef struct chpl_heap_c_string_s {
  c_string value;
} chpl_heap_c_string_object;

typedef struct chpl_heap_chpl_bool_s {
  chpl_bool value;
} chpl_heap_chpl_bool_object;

typedef struct chpl_heap_chpl_string_s {
  chpl____wide_chpl_string value;
} chpl_heap_chpl_string_object;

typedef struct chpl_heap__tuple_6_star_chpl_string_s {
  _tuple_6_star_chpl_string value;
} chpl_heap__tuple_6_star_chpl_string_object;

typedef struct chpl_heap_locale_s {
  chpl____wide_locale value;
} chpl_heap_locale_object;

typedef struct chpl_heap__syncvar_int64_t_s {
  chpl____wide__syncvar_int64_t value;
} chpl_heap__syncvar_int64_t_object;

typedef struct chpl__class_localson_fn59_s {
  chpl_localeID_t _0__tmp;
  chpl____wide__ref_file _1__tmp;
} chpl__class_localson_fn59_object;

typedef struct chpl__class_localson_fn60_s {
  chpl_localeID_t _0__tmp;
  chpl____wide__ref_file _1__tmp;
} chpl__class_localson_fn60_object;

typedef struct chpl__class_localson_fn61_s {
  chpl_localeID_t _0__tmp;
  chpl____wide__ref_file _1_ret;
} chpl__class_localson_fn61_object;

typedef struct chpl__class_localson_fn62_s {
  chpl_localeID_t _0__tmp;
  chpl____wide__ref_file _1_this;
} chpl__class_localson_fn62_object;

typedef struct chpl__class_localson_fn63_s {
  chpl_localeID_t _0__tmp;
  chpl____wide__ref_file _1_this;
  chpl____wide__ref_iostyle _2__tmp;
} chpl__class_localson_fn63_object;

typedef struct chpl__class_localson_fn64_s {
  chpl_localeID_t _0__tmp;
  chpl____wide__ref_file _1_this;
  chpl____wide__ref_syserr _2__tmp;
  chpl____wide__ref_chpl_string _3__tmp;
} chpl__class_localson_fn64_object;

typedef struct chpl__class_localson_fn65_s {
  chpl_localeID_t _0__tmp;
  chpl____wide__ref_channel_F_dynamic_T _1__tmp;
} chpl__class_localson_fn65_object;

typedef struct chpl__class_localson_fn66_s {
  chpl_localeID_t _0__tmp;
  chpl____wide__ref_channel_T_dynamic_T _1__tmp;
} chpl__class_localson_fn66_object;

typedef struct chpl__class_localson_fn67_s {
  chpl_localeID_t _0__tmp;
  chpl____wide__ref_channel_F_dynamic_T _1__tmp;
} chpl__class_localson_fn67_object;

typedef struct chpl__class_localson_fn68_s {
  chpl_localeID_t _0__tmp;
  chpl____wide__ref_channel_T_dynamic_T _1__tmp;
} chpl__class_localson_fn68_object;

typedef struct chpl__class_localson_fn69_s {
  chpl_localeID_t _0__tmp;
  chpl____wide__ref_channel_F_dynamic_T _1_ret;
} chpl__class_localson_fn69_object;

typedef struct chpl__class_localson_fn70_s {
  chpl_localeID_t _0__tmp;
  chpl____wide__ref_channel_T_dynamic_T _1_ret;
} chpl__class_localson_fn70_object;

typedef struct chpl__class_localson_fn71_s {
  chpl_localeID_t _0__tmp;
  int32_t _1_hints;
  chpl____wide__ref_syserr _2__tmp;
  int64_t _3_end;
  chpl____wide__ref_channel_F_dynamic_T _4__tmp;
  chpl____wide__ref_file _5__tmp;
  int64_t _6_start;
  iostyle _7_rvfDerefTmp;
} chpl__class_localson_fn71_object;

typedef struct chpl__class_localson_fn72_s {
  chpl_localeID_t _0__tmp;
  int64_t _1_end;
  chpl____wide__ref_channel_T_dynamic_T _2__tmp;
  chpl____wide__ref_file _3__tmp;
  int64_t _4_start;
  iostyle _5_rvfDerefTmp;
  int32_t _6_hints;
  chpl____wide__ref_syserr _7__tmp;
} chpl__class_localson_fn72_object;

typedef struct chpl__class_localson_fn73_s {
  chpl_localeID_t _0__tmp;
  chpl____wide__ref_channel_F_dynamic_T _1_this;
} chpl__class_localson_fn73_object;

typedef struct chpl__class_localson_fn74_s {
  chpl_localeID_t _0__tmp;
  chpl____wide__ref_channel_T_dynamic_T _1_this;
} chpl__class_localson_fn74_object;

typedef struct chpl__class_localson_fn75_s {
  chpl_localeID_t _0__tmp;
  chpl____wide__ref_channel_T_dynamic_T _1_this;
  chpl____wide__ref_chpl_string _2__tmp;
  chpl____wide__ref_int64_t _3__tmp;
} chpl__class_localson_fn75_object;

typedef struct chpl__class_localson_fn76_s {
  chpl_localeID_t _0__tmp;
  chpl____wide__ref_channel_T_dynamic_T _1_this;
  chpl____wide__ref_syserr _2__tmp;
} chpl__class_localson_fn76_object;

typedef struct chpl__class_localson_fn77_s {
  chpl_localeID_t _0__tmp;
  chpl____wide__ref_channel_T_dynamic_T _1_this;
} chpl__class_localson_fn77_object;

typedef struct chpl__class_localson_fn78_s {
  chpl_localeID_t _0__tmp;
  chpl____wide__ref_syserr _1__tmp;
  iostyle _2_rvfDerefTmp;
  file _3_rvfDerefTmp;
  int64_t _4_start;
  int64_t _5_end;
  int32_t _6_hints;
  chpl____wide__ref_channel_F_dynamic_T _7__tmp;
} chpl__class_localson_fn78_object;

typedef struct chpl__class_localson_fn79_s {
  chpl_localeID_t _0__tmp;
  iostyle _1_rvfDerefTmp;
  file _2_rvfDerefTmp;
  int64_t _3_start;
  int64_t _4_end;
  int32_t _5_hints;
  chpl____wide__ref_channel_T_dynamic_T _6__tmp;
  chpl____wide__ref_syserr _7__tmp;
} chpl__class_localson_fn79_object;

typedef struct chpl__class_localson_fn80_s {
  chpl_localeID_t _0__tmp;
  chpl____wide__ref_channel_T_dynamic_T _1_this;
  chpl____wide__ref_syserr _2__tmp;
  chpl____wide__ref__tuple_1_star_chpl_string _3__tmp;
} chpl__class_localson_fn80_object;

typedef struct chpl__class_localson_fn81_s {
  chpl_localeID_t _0__tmp;
  chpl____wide__ref_channel_T_dynamic_T _1_this;
  chpl____wide__ref_syserr _2__tmp;
  chpl____wide__ref__tuple_2_chpl_string_ioNewline _3__tmp;
} chpl__class_localson_fn81_object;

typedef struct chpl__class_localson_fn82_s {
  chpl_localeID_t _0__tmp;
  chpl____wide__ref_channel_T_dynamic_T _1_this;
  chpl____wide__ref_syserr _2__tmp;
  chpl____wide__ref__tuple_3_chpl_string_int64_t_ioNewline _3__tmp;
} chpl__class_localson_fn82_object;

typedef struct chpl__class_localson_fn83_s {
  chpl_localeID_t _0__tmp;
  chpl____wide__ref_channel_T_dynamic_T _1_this;
  chpl____wide__ref_syserr _2__tmp;
  chpl____wide__ref__tuple_5_chpl_string__real64_chpl_string_int64_t_ioNewline _3__tmp;
} chpl__class_localson_fn83_object;

typedef struct chpl__class_localson_fn84_s {
  chpl_localeID_t _0__tmp;
  chpl____wide__ref_channel_T_dynamic_T _1_this;
  chpl____wide__ref_syserr _2__tmp;
  chpl____wide__ref__tuple_4_chpl_string__real64_chpl_string_ioNewline _3__tmp;
} chpl__class_localson_fn84_object;

typedef struct chpl__class_localson_fn85_s {
  chpl_localeID_t _0__tmp;
  chpl____wide__ref_channel_T_dynamic_T _1_this;
  chpl____wide__ref_syserr _2__tmp;
  chpl____wide__ref__tuple_7_chpl_string_c_string_chpl_string_uint32_t_chpl_string_taskState_ioNewline _3__tmp;
} chpl__class_localson_fn85_object;

typedef struct chpl__class_localson_fn86_s {
  chpl_localeID_t _0__tmp;
  chpl____wide_listNode_BaseDom _1_rvfDerefTmp;
} chpl__class_localson_fn86_object;

typedef struct chpl__class_localson_fn87_s {
  chpl_localeID_t _0__tmp;
  chpl____wide_listNode_BaseArr _1_rvfDerefTmp;
} chpl__class_localson_fn87_object;

typedef struct chpl__class_localson_fn88_s {
  chpl_localeID_t _0__tmp;
  chpl____wide__EndCount _1__endCount;
} chpl__class_localson_fn88_object;

typedef struct chpl__class_localson_fn89_s {
  chpl_localeID_t _0__tmp;
  chpl____wide_RandomStream_F _1_rvfDerefTmp;
} chpl__class_localson_fn89_object;

typedef struct chpl_object_s {
  chpl__class_id chpl__cid;
} chpl_object_object;

typedef struct chpl_chpl___OpaqueIndex_s /* : object */ {
  chpl_object_object super;
} chpl_chpl___OpaqueIndex_object;

typedef struct chpl_chpl___EndCount_s /* : object */ {
  chpl_object_object super;
  atomic_int64 i;
  int64_t taskCnt;
  chpl_task_list_p taskList;
} chpl_chpl___EndCount_object;

typedef struct chpl_BaseDist_s /* : object */ {
  chpl_object_object super;
  atomic_refcnt _distCnt;
  list_BaseDom _doms;
  atomicflag _domsLock;
} chpl_BaseDist_object;

typedef struct chpl_BaseDom_s /* : object */ {
  chpl_object_object super;
  atomic_refcnt _domCnt;
  list_BaseArr _arrs;
  atomicflag _arrsLock;
} chpl_BaseDom_object;

typedef struct chpl_BaseArr_s /* : object */ {
  chpl_object_object super;
  atomic_refcnt _arrCnt;
  chpl____wide_BaseArr _arrAlias;
} chpl_BaseArr_object;

typedef struct chpl_Writer_s /* : object */ {
  chpl_object_object super;
} chpl_Writer_object;

typedef struct chpl_Reader_s /* : object */ {
  chpl_object_object super;
} chpl_Reader_object;

typedef struct chpl_locale_s /* : object */ {
  chpl_object_object super;
  chpl____wide_locale parent;
  int64_t numCores;
  atomic_int64 runningTaskCounter;
} chpl_locale_object;

typedef struct chpl_localesSignal_s /* : object */ {
  chpl_object_object super;
  atomicflag s;
} chpl_localesSignal_object;

typedef struct chpl_chpldev_taskTable_t_s /* : object */ {
  chpl_object_object super;
  chpl____wide_DefaultAssociativeDom_chpl_taskID_t_F dom;
  chpl____wide_DefaultAssociativeArr_chpldev_Task_chpl_taskID_t_F map;
} chpl_chpldev_taskTable_t_object;

typedef struct chpl_listNode_BaseArr_s /* : object */ {
  chpl_object_object super;
  chpl____wide_BaseArr data;
  chpl____wide_listNode_BaseArr next;
} chpl_listNode_BaseArr_object;

typedef struct chpl_listNode_BaseDom_s /* : object */ {
  chpl_object_object super;
  chpl____wide_BaseDom data;
  chpl____wide_listNode_BaseDom next;
} chpl_listNode_BaseDom_object;

typedef struct chpl_RandomStream_F_s /* : object */ {
  chpl_object_object super;
  int64_t seed;
  chpl____wide__syncvar_chpl_bool RandomStreamPrivate_lock_DOLLAR_;
  _real64 RandomStreamPrivate_cursor;
  int64_t RandomStreamPrivate_count;
} chpl_RandomStream_F_object;

typedef struct chpl_BaseRectangularDom_s /* : BaseDom */ {
  chpl_BaseDom_object super;
} chpl_BaseRectangularDom_object;

typedef struct chpl_BaseAssociativeDom_s /* : BaseDom */ {
  chpl_BaseDom_object super;
} chpl_BaseAssociativeDom_object;

typedef struct chpl_StringWriter_s /* : Writer */ {
  chpl_Writer_object super;
  c_string s;
} chpl_StringWriter_object;

typedef struct chpl_AbstractLocaleModel_s /* : locale */ {
  chpl_locale_object super;
} chpl_AbstractLocaleModel_object;

typedef struct chpl_AbstractRootLocale_s /* : locale */ {
  chpl_locale_object super;
} chpl_AbstractRootLocale_object;

typedef struct chpl_DefaultAssociativeArr_chpldev_Task_chpl_taskID_t_F_s /* : BaseArr */ {
  chpl_BaseArr_object super;
  chpl____wide_DefaultAssociativeDom_chpl_taskID_t_F dom;
  chpl____wide_DefaultRectangularArr_chpldev_Task_1_int64_t_F data;
  chpl____wide_DefaultRectangularDom_1_int64_t_F tmpDom;
  chpl____wide_DefaultRectangularArr_chpldev_Task_1_int64_t_F tmpTable;
} chpl_DefaultAssociativeArr_chpldev_Task_chpl_taskID_t_F_object;

typedef struct chpl_DefaultDist_s /* : BaseDist */ {
  chpl_BaseDist_object super;
} chpl_DefaultDist_object;

typedef struct chpl_DefaultRectangularArr_chpl_TableEntry_chpl_taskID_t_1_int64_t_F_s /* : BaseArr */ {
  chpl_BaseArr_object super;
  chpl____wide_DefaultRectangularDom_1_int64_t_F dom;
  _tuple_1_star_int64_t off;
  _tuple_1_star_int64_t blk;
  _tuple_1_star_int64_t str;
  int64_t origin;
  int64_t factoredOffs;
  chpl____wide__ddata_chpl_TableEntry_chpl_taskID_t data;
  chpl____wide__ddata_chpl_TableEntry_chpl_taskID_t shiftedData;
  chpl_bool noinit_data;
} chpl_DefaultRectangularArr_chpl_TableEntry_chpl_taskID_t_1_int64_t_F_object;

typedef struct chpl_DefaultRectangularArr_chpldev_Task_1_int64_t_F_s /* : BaseArr */ {
  chpl_BaseArr_object super;
  chpl____wide_DefaultRectangularDom_1_int64_t_F dom;
  _tuple_1_star_int64_t off;
  _tuple_1_star_int64_t blk;
  _tuple_1_star_int64_t str;
  int64_t origin;
  int64_t factoredOffs;
  chpl____wide__ddata_chpldev_Task data;
  chpl____wide__ddata_chpldev_Task shiftedData;
  chpl_bool noinit_data;
} chpl_DefaultRectangularArr_chpldev_Task_1_int64_t_F_object;

typedef struct chpl_DefaultRectangularArr_locale_1_int64_t_F_s /* : BaseArr */ {
  chpl_BaseArr_object super;
  chpl____wide_DefaultRectangularDom_1_int64_t_F dom;
  _tuple_1_star_int64_t off;
  _tuple_1_star_int64_t blk;
  _tuple_1_star_int64_t str;
  int64_t origin;
  int64_t factoredOffs;
  chpl____wide__ddata_locale data;
  chpl____wide__ddata_locale shiftedData;
  chpl_bool noinit_data;
} chpl_DefaultRectangularArr_locale_1_int64_t_F_object;

typedef struct chpl_DefaultRectangularArr_localesSignal_1_int64_t_F_s /* : BaseArr */ {
  chpl_BaseArr_object super;
  chpl____wide_DefaultRectangularDom_1_int64_t_F dom;
  _tuple_1_star_int64_t off;
  _tuple_1_star_int64_t blk;
  _tuple_1_star_int64_t str;
  int64_t origin;
  int64_t factoredOffs;
  chpl____wide__ddata_localesSignal data;
  chpl____wide__ddata_localesSignal shiftedData;
  chpl_bool noinit_data;
} chpl_DefaultRectangularArr_localesSignal_1_int64_t_F_object;

typedef struct chpl_DefaultAssociativeDom_chpl_taskID_t_F_s /* : BaseAssociativeDom */ {
  chpl_BaseAssociativeDom_object super;
  chpl____wide_DefaultDist dist;
  atomic_int64 numEntries;
  atomicflag tableLock;
  int64_t tableSizeNum;
  int64_t tableSize;
  chpl____wide_DefaultRectangularDom_1_int64_t_F tableDom;
  chpl____wide_DefaultRectangularArr_chpl_TableEntry_chpl_taskID_t_1_int64_t_F table;
  chpl_bool postponeResize;
} chpl_DefaultAssociativeDom_chpl_taskID_t_F_object;

typedef struct chpl_DefaultRectangularDom_1_int64_t_F_s /* : BaseRectangularDom */ {
  chpl_BaseRectangularDom_object super;
  chpl____wide_DefaultDist dist;
  _tuple_1_star_range_int64_t_bounded_F ranges;
} chpl_DefaultRectangularDom_1_int64_t_F_object;

typedef struct chpl_LocaleModel_s /* : AbstractLocaleModel */ {
  chpl_AbstractLocaleModel_object super;
  uint64_t callStackSize;
  int64_t _node_id;
  chpl____wide_chpl_string local_name;
} chpl_LocaleModel_object;

typedef struct chpl_RootLocale_s /* : AbstractRootLocale */ {
  chpl_AbstractRootLocale_object super;
  chpl____wide_DefaultRectangularDom_1_int64_t_F myLocaleSpace;
  chpl____wide_DefaultRectangularArr_locale_1_int64_t_F myLocales;
} chpl_RootLocale_object;

/*** Function Prototypes ***/

static void chpl__init_Atomics(int64_t _ln, c_string _fn);
static atomicflag _construct_atomicflag(atomic_flag _v, atomicflag* const meme);
static void on_fn(chpl____wide__ref_atomicflag* const this8, memory_order order, chpl____wide__ref_chpl_bool* const ret);
static void wrapon_fn(_class_localson_fn c);
static void _local_on_fn(chpl____wide__ref_atomicflag* const this8, memory_order order, chpl____wide__ref_chpl_bool* const ret);
static void _local_wrapon_fn(_class_localson_fn2 c);
static void on_fn2(chpl____wide__ref_atomicflag* const this8, memory_order order, chpl____wide__ref_chpl_bool* const ret);
static void wrapon_fn2(_class_localson_fn2 c);
static void _local_on_fn2(chpl____wide__ref_atomicflag* const this8, memory_order order);
static void _local_wrapon_fn2(_class_localson_fn3 c);
static void on_fn3(chpl____wide__ref_atomicflag* const this8, memory_order order);
static void wrapon_fn3(_class_localson_fn3 c);
static void on_fn4(chpl____wide__ref_atomicflag* const this8, chpl_bool val, memory_order order);
static void wrapon_fn4(_class_localson_fn4 c);
static atomic_int64 _construct_atomic_int64(atomic_int_least64_t _v, atomic_int64* const meme);
static void on_fn5(chpl____wide__ref_atomic_int64* const this8, memory_order order, chpl____wide__ref_int64_t* const ret);
static void wrapon_fn5(_class_localson_fn5 c);
static void on_fn6(chpl____wide__ref_atomic_int64* const this8, int64_t value, memory_order order);
static void wrapon_fn6(_class_localson_fn6 c);
static void on_fn7(chpl____wide__ref_atomic_int64* const this8, int64_t value, memory_order order);
static void wrapon_fn7(_class_localson_fn7 c);
static void on_fn8(chpl____wide__ref_atomic_int64* const this8, int64_t value, memory_order order, chpl____wide__ref_int64_t* const ret);
static void wrapon_fn8(_class_localson_fn8 c);
static void on_fn9(chpl____wide__ref_atomic_int64* const this8, int64_t value, memory_order order);
static void wrapon_fn9(_class_localson_fn9 c);
static void on_fn10(chpl____wide__ref_atomic_int64* const this8, int64_t val, memory_order order);
static void wrapon_fn10(_class_localson_fn10 c);
static void chpl__init_AtomicsCommon(int64_t _ln, c_string _fn);
static atomic_refcnt _construct_atomic_refcnt(atomic_int64* const _cnt, atomic_refcnt* const meme);
static void chpl__init_ChapelArray(int64_t _ln, c_string _fn);
static void _newArray(chpl____wide_DefaultRectangularArr_locale_1_int64_t_F* const value, _ref_DefaultRectangularArr_locale_1_int64_t_F _retArg);
static void _newArray2(chpl____wide_DefaultRectangularArr_localesSignal_1_int64_t_F* const value, _ref_DefaultRectangularArr_localesSignal_1_int64_t_F _retArg);
static void _newArray3(chpl____wide_DefaultRectangularArr_chpl_TableEntry_chpl_taskID_t_1_int64_t_F* const value, _ref_DefaultRectangularArr_chpl_TableEntry_chpl_taskID_t_1_int64_t_F _retArg);
static void _newArray4(chpl____wide_DefaultAssociativeArr_chpldev_Task_chpl_taskID_t_F* const value, _ref_DefaultAssociativeArr_chpldev_Task_chpl_taskID_t_F _retArg);
static void _newArray5(chpl____wide_DefaultRectangularArr_chpldev_Task_1_int64_t_F* const value, _ref_DefaultRectangularArr_chpldev_Task_1_int64_t_F _retArg);
static void _newDomain(DefaultRectangularDom_1_int64_t_F value, _ref_DefaultRectangularDom_1_int64_t_F _retArg);
static void _newDomain2(DefaultAssociativeDom_chpl_taskID_t_F value, _ref_DefaultAssociativeDom_chpl_taskID_t_F _retArg);
static void _getDomain(chpl____wide_DefaultRectangularDom_1_int64_t_F* const value, _ref_DefaultRectangularDom_1_int64_t_F _retArg);
static void _newDistribution(chpl____wide_DefaultDist* const value, _ref_DefaultDist _retArg);
static void _getDistribution(chpl____wide_DefaultDist* const value, _ref_DefaultDist _retArg);
static chpl___RuntimeTypeInfo chpl__buildDomainRuntimeType(chpl____wide_DefaultDist* const d);
static void chpl__convertRuntimeTypeToValue(chpl____wide_DefaultDist* const d, _ref_DefaultRectangularDom_1_int64_t_F _retArg);
static chpl___RuntimeTypeInfo2 chpl__buildDomainRuntimeType2(chpl____wide_DefaultDist* const d);
static void chpl__convertRuntimeTypeToValue2(chpl____wide_DefaultDist* const d, _ref_DefaultAssociativeDom_chpl_taskID_t_F _retArg);
static chpl___RuntimeTypeInfo chpl__convertValueToRuntimeType(chpl____wide_DefaultRectangularDom_1_int64_t_F* const dom);
static chpl___RuntimeTypeInfo3 chpl__buildArrayRuntimeType(chpl____wide_DefaultRectangularDom_1_int64_t_F* const dom);
static chpl___RuntimeTypeInfo4 chpl__buildArrayRuntimeType2(chpl____wide_DefaultRectangularDom_1_int64_t_F* const dom);
static chpl___RuntimeTypeInfo5 chpl__buildArrayRuntimeType3(chpl____wide_DefaultRectangularDom_1_int64_t_F* const dom);
static chpl___RuntimeTypeInfo6 chpl__buildArrayRuntimeType4(chpl____wide_DefaultAssociativeDom_chpl_taskID_t_F* const dom);
static chpl___RuntimeTypeInfo7 chpl__buildArrayRuntimeType5(chpl____wide_DefaultRectangularDom_1_int64_t_F* const dom);
static void chpl__convertRuntimeTypeToValue3(chpl____wide_DefaultRectangularDom_1_int64_t_F* const dom, _ref_DefaultRectangularArr_localesSignal_1_int64_t_F _retArg);
static void chpl__convertRuntimeTypeToValue4(chpl____wide_DefaultRectangularDom_1_int64_t_F* const dom, _ref_DefaultRectangularArr_locale_1_int64_t_F _retArg);
static void chpl__convertRuntimeTypeToValue5(chpl____wide_DefaultRectangularDom_1_int64_t_F* const dom, _ref_DefaultRectangularArr_chpl_TableEntry_chpl_taskID_t_1_int64_t_F _retArg);
static void chpl__convertRuntimeTypeToValue6(chpl____wide_DefaultRectangularDom_1_int64_t_F* const dom, _ref_DefaultRectangularArr_chpldev_Task_1_int64_t_F _retArg);
static void chpl__convertRuntimeTypeToValue7(chpl____wide_DefaultAssociativeDom_chpl_taskID_t_F* const dom, _ref_DefaultAssociativeArr_chpldev_Task_chpl_taskID_t_F _retArg);
static void coforall_fn(_tuple_1_star_range_int64_t_bounded_F* const locBlock, int64_t parDim, int64_t numChunks, int64_t chunk, chpl____wide__EndCount* const _coforallCount, _tuple_2_star__array_DefaultRectangularArr_chpl_TableEntry_chpl_taskID_t_1_int64_t_F_DefaultRectangularArr_chpl_TableEntry_chpl_taskID_t_1_int64_t_F* const chpl__iter);
static void coforall_fn2(_tuple_1_star_range_int64_t_bounded_F* const locBlock, int64_t parDim, int64_t numChunks, int64_t chunk, chpl____wide__EndCount* const _coforallCount, _tuple_2_star__array_DefaultRectangularArr_chpldev_Task_1_int64_t_F_DefaultRectangularArr_chpldev_Task_1_int64_t_F* const chpl__iter);
static void chpl_incRefCountsForDomainsInArrayEltTypes(void);
static void chpl_incRefCountsForDomainsInArrayEltTypes2(void);
static void chpl_incRefCountsForDomainsInArrayEltTypes3(void);
static void chpl_incRefCountsForDomainsInArrayEltTypes4(void);
static void chpl_decRefCountsForDomainsInArrayEltTypes(void);
static void chpl_decRefCountsForDomainsInArrayEltTypes2(void);
static void chpl_decRefCountsForDomainsInArrayEltTypes3(void);
static void chpl_decRefCountsForDomainsInArrayEltTypes4(void);
static void chpl__buildDomainExpr(range_int64_t_bounded_F* const _e0_ranges, _ref_DefaultRectangularDom_1_int64_t_F _retArg);
static void chpl__buildDomainExpr2(range_int64_t_bounded_F* const _e0_ranges, _ref_DefaultRectangularDom_1_int64_t_F _retArg);
static void chpl__ensureDomainExpr(chpl____wide_DefaultRectangularDom_1_int64_t_F* const x, _ref_DefaultRectangularDom_1_int64_t_F _retArg);
static void chpl__ensureDomainExpr2(chpl____wide_DefaultAssociativeDom_chpl_taskID_t_F* const x, _ref_DefaultAssociativeDom_chpl_taskID_t_F _retArg);
static void chpl__ensureDomainExpr3(range_int64_t_bounded_F* const _e0_x, _ref_DefaultRectangularDom_1_int64_t_F _retArg);
static void chpl__buildDistValue(DefaultDist x, _ref_DefaultDist _retArg);
static void chpl__buildDistValue2(DefaultDist x, _ref_DefaultDist _retArg);
static chpl____wide_DefaultDist _construct__distribution(chpl____wide_DefaultDist* const _value, chpl____wide_DefaultDist* const meme);
static chpl____wide_DefaultDist _distribution(chpl____wide_DefaultDist* const _value);
static void chpl___TILDE__distribution(chpl____wide_DefaultDist* const this8);
static void on_fn11(chpl____wide_DefaultDist* const this8);
static void wrapon_fn11(_class_localson_fn11 c);
static void on_fn12(chpl____wide_DefaultDist* const delete_tmp);
static void wrapon_fn12(_class_localson_fn12 c);
static void clone2(chpl____wide_DefaultDist* const this8, _ref_DefaultDist _retArg);
static DefaultRectangularDom_1_int64_t_F newRectangularDom(chpl____wide_DefaultDist* const this8);
static DefaultAssociativeDom_chpl_taskID_t_F newAssociativeDom(chpl____wide_DefaultDist* const this8);
static chpl____wide_DefaultRectangularDom_1_int64_t_F _construct__domain(chpl____wide_DefaultRectangularDom_1_int64_t_F* const _value, chpl____wide_DefaultRectangularDom_1_int64_t_F* const meme);
static DefaultAssociativeDom_chpl_taskID_t_F _construct__domain2(DefaultAssociativeDom_chpl_taskID_t_F _value, DefaultAssociativeDom_chpl_taskID_t_F meme);
static void chpl___TILDE__domain(chpl____wide_DefaultRectangularDom_1_int64_t_F* const this8);
static void chpl___TILDE__domain2(chpl____wide_DefaultAssociativeDom_chpl_taskID_t_F* const this8);
static void on_fn13(chpl____wide_DefaultRectangularDom_1_int64_t_F* const this8);
static void on_fn14(chpl____wide_DefaultAssociativeDom_chpl_taskID_t_F* const this8);
static void wrapon_fn13(_class_localson_fn13 c);
static void wrapon_fn14(_class_localson_fn14 c);
static void on_fn15(chpl____wide_DefaultRectangularDom_1_int64_t_F* const delete_tmp);
static void on_fn16(chpl____wide_DefaultAssociativeDom_chpl_taskID_t_F* const delete_tmp);
static void wrapon_fn15(_class_localson_fn15 c);
static void wrapon_fn16(_class_localson_fn16 c);
static void dist(chpl____wide_DefaultRectangularDom_1_int64_t_F* const this8, _ref_DefaultDist _retArg);
static void this2(chpl____wide_DefaultRectangularDom_1_int64_t_F* const this8, range_int64_t_bounded_F* const _e0_ranges, _ref_DefaultRectangularDom_1_int64_t_F _retArg);
static void buildArray(chpl____wide_DefaultRectangularDom_1_int64_t_F* const this8, _ref_DefaultRectangularArr_locale_1_int64_t_F _retArg);
static void buildArray2(chpl____wide_DefaultRectangularDom_1_int64_t_F* const this8, _ref_DefaultRectangularArr_localesSignal_1_int64_t_F _retArg);
static void buildArray3(chpl____wide_DefaultRectangularDom_1_int64_t_F* const this8, _ref_DefaultRectangularArr_chpl_TableEntry_chpl_taskID_t_1_int64_t_F _retArg);
static void buildArray4(chpl____wide_DefaultAssociativeDom_chpl_taskID_t_F* const this8, _ref_DefaultAssociativeArr_chpldev_Task_chpl_taskID_t_F _retArg);
static void buildArray5(chpl____wide_DefaultRectangularDom_1_int64_t_F* const this8, _ref_DefaultRectangularArr_chpldev_Task_1_int64_t_F _retArg);
static void help(chpl____wide_DefaultRectangularDom_1_int64_t_F* const this8, _ref_DefaultRectangularArr_locale_1_int64_t_F x);
static void help2(chpl____wide_DefaultRectangularDom_1_int64_t_F* const this8, _ref_DefaultRectangularArr_localesSignal_1_int64_t_F x);
static void help3(chpl____wide_DefaultRectangularDom_1_int64_t_F* const this8, _ref_DefaultRectangularArr_chpl_TableEntry_chpl_taskID_t_1_int64_t_F x);
static void help4(chpl____wide_DefaultAssociativeDom_chpl_taskID_t_F* const this8, _ref_DefaultAssociativeArr_chpldev_Task_chpl_taskID_t_F x);
static void help5(chpl____wide_DefaultRectangularDom_1_int64_t_F* const this8, _ref_DefaultRectangularArr_chpldev_Task_1_int64_t_F x);
static void add(chpl____wide_DefaultAssociativeDom_chpl_taskID_t_F* const this8, chpl_taskID_t i);
static void remove2(chpl____wide_DefaultAssociativeDom_chpl_taskID_t_F* const this8, chpl_taskID_t i);
static int64_t numIndices(chpl____wide_DefaultRectangularDom_1_int64_t_F* const this8);
static int64_t high(chpl____wide_DefaultRectangularDom_1_int64_t_F* const this8);
static chpl_bool member(chpl____wide_DefaultAssociativeDom_chpl_taskID_t_F* const this8, _tuple_1_star_chpl_taskID_t* const i);
static chpl_bool member2(chpl____wide_DefaultAssociativeDom_chpl_taskID_t_F* const this8, chpl_taskID_t _e0_i);
static void setIndices(chpl____wide_DefaultRectangularDom_1_int64_t_F* const this8, _tuple_1_star_range_int64_t_bounded_F* const x);
static void getIndices(chpl____wide_DefaultRectangularDom_1_int64_t_F* const this8, _ref__tuple_1_star_range_int64_t_bounded_F _retArg);
static chpl____wide_DefaultRectangularArr_locale_1_int64_t_F _construct__array(chpl____wide_DefaultRectangularArr_locale_1_int64_t_F* const _value, chpl____wide_DefaultRectangularArr_locale_1_int64_t_F* const meme);
static chpl____wide_DefaultRectangularArr_localesSignal_1_int64_t_F _construct__array2(chpl____wide_DefaultRectangularArr_localesSignal_1_int64_t_F* const _value, chpl____wide_DefaultRectangularArr_localesSignal_1_int64_t_F* const meme);
static chpl____wide_DefaultRectangularArr_chpl_TableEntry_chpl_taskID_t_1_int64_t_F _construct__array3(chpl____wide_DefaultRectangularArr_chpl_TableEntry_chpl_taskID_t_1_int64_t_F* const _value, chpl____wide_DefaultRectangularArr_chpl_TableEntry_chpl_taskID_t_1_int64_t_F* const meme);
static chpl____wide_DefaultRectangularArr_chpldev_Task_1_int64_t_F _construct__array4(chpl____wide_DefaultRectangularArr_chpldev_Task_1_int64_t_F* const _value, chpl____wide_DefaultRectangularArr_chpldev_Task_1_int64_t_F* const meme);
static chpl____wide_DefaultAssociativeArr_chpldev_Task_chpl_taskID_t_F _construct__array5(chpl____wide_DefaultAssociativeArr_chpldev_Task_chpl_taskID_t_F* const _value, chpl____wide_DefaultAssociativeArr_chpldev_Task_chpl_taskID_t_F* const meme);
static void initialize(chpl____wide_DefaultRectangularArr_locale_1_int64_t_F* const this8);
static void initialize2(chpl____wide_DefaultRectangularArr_localesSignal_1_int64_t_F* const this8);
static void initialize3(chpl____wide_DefaultRectangularArr_chpl_TableEntry_chpl_taskID_t_1_int64_t_F* const this8);
static void initialize4(chpl____wide_DefaultRectangularArr_chpldev_Task_1_int64_t_F* const this8);
static void initialize5(chpl____wide_DefaultAssociativeArr_chpldev_Task_chpl_taskID_t_F* const this8);
static void chpl___TILDE__array(chpl____wide_DefaultRectangularArr_locale_1_int64_t_F* const this8);
static void chpl___TILDE__array2(chpl____wide_DefaultRectangularArr_localesSignal_1_int64_t_F* const this8);
static void chpl___TILDE__array3(chpl____wide_DefaultRectangularArr_chpl_TableEntry_chpl_taskID_t_1_int64_t_F* const this8);
static void chpl___TILDE__array4(chpl____wide_DefaultRectangularArr_chpldev_Task_1_int64_t_F* const this8);
static void chpl___TILDE__array5(chpl____wide_DefaultAssociativeArr_chpldev_Task_chpl_taskID_t_F* const this8);
static void on_fn17(chpl____wide_DefaultRectangularArr_locale_1_int64_t_F* const this8);
static void on_fn18(chpl____wide_DefaultRectangularArr_localesSignal_1_int64_t_F* const this8);
static void on_fn19(chpl____wide_DefaultRectangularArr_chpl_TableEntry_chpl_taskID_t_1_int64_t_F* const this8);
static void on_fn20(chpl____wide_DefaultRectangularArr_chpldev_Task_1_int64_t_F* const this8);
static void on_fn21(chpl____wide_DefaultAssociativeArr_chpldev_Task_chpl_taskID_t_F* const this8);
static void wrapon_fn17(_class_localson_fn17 c);
static void wrapon_fn18(_class_localson_fn18 c);
static void wrapon_fn19(_class_localson_fn19 c);
static void wrapon_fn20(_class_localson_fn20 c);
static void wrapon_fn21(_class_localson_fn21 c);
static void on_fn22(chpl____wide_DefaultRectangularArr_locale_1_int64_t_F* const delete_tmp);
static void on_fn23(chpl____wide_DefaultRectangularArr_localesSignal_1_int64_t_F* const delete_tmp);
static void on_fn24(chpl____wide_DefaultRectangularArr_chpl_TableEntry_chpl_taskID_t_1_int64_t_F* const delete_tmp);
static void on_fn25(chpl____wide_DefaultRectangularArr_chpldev_Task_1_int64_t_F* const delete_tmp);
static void on_fn26(chpl____wide_DefaultAssociativeArr_chpldev_Task_chpl_taskID_t_F* const delete_tmp);
static void wrapon_fn22(_class_localson_fn22 c);
static void wrapon_fn23(_class_localson_fn23 c);
static void wrapon_fn24(_class_localson_fn24 c);
static void wrapon_fn25(_class_localson_fn25 c);
static void wrapon_fn26(_class_localson_fn26 c);
static void _dom(chpl____wide_DefaultRectangularArr_locale_1_int64_t_F* const this8, _ref_DefaultRectangularDom_1_int64_t_F _retArg);
static void _dom2(chpl____wide_DefaultRectangularArr_chpl_TableEntry_chpl_taskID_t_1_int64_t_F* const this8, _ref_DefaultRectangularDom_1_int64_t_F _retArg);
static void newAlias(chpl____wide_DefaultRectangularArr_locale_1_int64_t_F* const this8, _ref_DefaultRectangularArr_locale_1_int64_t_F _retArg);
static void chpl___ASSIGN_(chpl____wide_DefaultDist* const a, chpl____wide_DefaultDist* const b);
static void chpl___ASSIGN_2(chpl____wide_DefaultRectangularDom_1_int64_t_F* const a, chpl____wide_DefaultRectangularDom_1_int64_t_F* const b);
static void on_fn27(chpl____wide_BaseArr* const e, chpl____wide_DefaultRectangularDom_1_int64_t_F* const b);
static void wrapon_fn27(_class_localson_fn27 c);
static void on_fn28(chpl____wide_BaseArr* const e);
static void wrapon_fn28(_class_localson_fn28 c);
static void checkArrayShapesUponAssignment(chpl____wide_DefaultRectangularArr_chpl_TableEntry_chpl_taskID_t_1_int64_t_F* const a, chpl____wide_DefaultRectangularArr_chpl_TableEntry_chpl_taskID_t_1_int64_t_F* const b);
static void checkArrayShapesUponAssignment2(chpl____wide_DefaultRectangularArr_chpldev_Task_1_int64_t_F* const a, chpl____wide_DefaultRectangularArr_chpldev_Task_1_int64_t_F* const b);
static void wrapcoforall_fn(_class_localscoforall_fn c);
static void wrapcoforall_fn2(_class_localscoforall_fn2 c);
static void chpl__auto_destroy__OpaqueIndex(chpl___OpaqueIndex this8);
static chpl____wide_DefaultDist chpl__initCopy(chpl____wide_DefaultDist* const a);
static chpl____wide_DefaultRectangularDom_1_int64_t_F chpl__initCopy2(chpl____wide_DefaultRectangularDom_1_int64_t_F* const a);
static void chpl__init_ChapelBase(int64_t _ln, c_string _fn);
static c_string _cast(taskState this8);
static void compilerAssert(void);
static void init_elts(chpl____wide__ddata_locale* const x, int64_t s);
static void init_elts2(chpl____wide__ddata_localesSignal* const x, int64_t s);
static void init_elts3(chpl____wide__ddata_chpl_TableEntry_chpl_taskID_t* const x, int64_t s);
static void init_elts4(chpl____wide__ddata_chpldev_Task* const x, int64_t s);
static chpl___EndCount _construct__EndCount(atomic_int64* const i, int64_t taskCnt, chpl_task_list_p taskList, chpl___EndCount meme);
static void chpl__auto_destroy__EndCount(chpl___EndCount this8);
static void on_fn29(chpl____wide__EndCount* const delete_tmp);
static void wrapon_fn29(_class_localson_fn29 c);
static void _upEndCount(chpl____wide__EndCount* const e);
static void on_fn30(chpl____wide__EndCount* const e);
static void wrapon_fn30(_class_localson_fn30 c);
static void _downEndCount(chpl____wide__EndCount* const e);
static void _waitEndCount(chpl___EndCount e);
static void _upEndCount2(chpl___EndCount _endCount);
static void _downEndCount2(chpl____wide__EndCount* const _endCount);
static void _waitEndCount2(chpl___EndCount _endCount);
static int64_t _command_line_cast(c_string x);
static int64_t _command_line_cast2(c_string x);
static chpl_bool _command_line_cast3(c_string x);
static int64_t _command_line_cast4(c_string x);
static chpl_bool _command_line_cast5(c_string x);
static chpl_bool _command_line_cast6(c_string x);
static chpl_bool _command_line_cast7(c_string x);
static chpl_bool _command_line_cast8(c_string x);
static uint64_t _command_line_cast9(c_string x);
static uint64_t _command_line_cast10(c_string x);
static c_string _command_line_cast11(c_string x);
static c_string _command_line_cast12(c_string x);
static chpl_bool _command_line_cast13(c_string x);
static chpl____wide_DefaultDist chpl__autoCopy(chpl____wide_DefaultDist* const x);
static chpl____wide_DefaultRectangularDom_1_int64_t_F chpl__autoCopy2(chpl____wide_DefaultRectangularDom_1_int64_t_F* const x);
static chpl____wide_DefaultAssociativeDom_chpl_taskID_t_F chpl__autoCopy3(chpl____wide_DefaultAssociativeDom_chpl_taskID_t_F* const x);
static chpl____wide_DefaultRectangularArr_locale_1_int64_t_F chpl__autoCopy4(chpl____wide_DefaultRectangularArr_locale_1_int64_t_F* const x);
static chpl____wide_DefaultRectangularArr_localesSignal_1_int64_t_F chpl__autoCopy5(chpl____wide_DefaultRectangularArr_localesSignal_1_int64_t_F* const x);
static chpl____wide_DefaultRectangularArr_chpl_TableEntry_chpl_taskID_t_1_int64_t_F chpl__autoCopy6(chpl____wide_DefaultRectangularArr_chpl_TableEntry_chpl_taskID_t_1_int64_t_F* const x);
static chpl____wide_DefaultRectangularArr_chpldev_Task_1_int64_t_F chpl__autoCopy7(chpl____wide_DefaultRectangularArr_chpldev_Task_1_int64_t_F* const x);
static chpl____wide_DefaultAssociativeArr_chpldev_Task_chpl_taskID_t_F chpl__autoCopy8(chpl____wide_DefaultAssociativeArr_chpldev_Task_chpl_taskID_t_F* const x);
static void chpl__autoDestroy(chpl____wide_DefaultDist* const x);
static void chpl__autoDestroy2(chpl____wide_DefaultRectangularDom_1_int64_t_F* const x);
static void chpl__autoDestroy3(chpl____wide_DefaultAssociativeDom_chpl_taskID_t_F* const x);
static void chpl__autoDestroy4(chpl____wide_DefaultRectangularArr_locale_1_int64_t_F* const x);
static void chpl__autoDestroy5(chpl____wide_DefaultRectangularArr_localesSignal_1_int64_t_F* const x);
static void chpl__autoDestroy6(chpl____wide_DefaultRectangularArr_chpl_TableEntry_chpl_taskID_t_1_int64_t_F* const x);
static void chpl__autoDestroy7(chpl____wide_DefaultRectangularArr_chpldev_Task_1_int64_t_F* const x);
static void chpl__autoDestroy8(chpl____wide_DefaultAssociativeArr_chpldev_Task_chpl_taskID_t_F* const x);
static void chpl__init_ChapelDistribution(int64_t _ln, c_string _fn);
static BaseDist _construct_BaseDist(atomic_refcnt* const _distCnt, list_BaseDom* const _doms, atomicflag* const _domsLock, BaseDist meme);
static void chpl__auto_destroy_BaseDist(BaseDist this8);
static int64_t destroyDist(chpl____wide_BaseDist* const this8);
static void _local_on_fn3(chpl____wide_BaseDist* const this8, chpl____wide_BaseDom* const x);
static void _local_wrapon_fn3(_class_localson_fn31 c);
static void on_fn31(chpl____wide_BaseDist* const this8, chpl____wide_BaseDom* const x);
static void wrapon_fn31(_class_localson_fn31 c);
static void dsiDestroyDistClass(chpl____wide_BaseDist* const this8);
static BaseDom _construct_BaseDom(atomic_refcnt* const _domCnt, list_BaseArr* const _arrs, atomicflag* const _arrsLock, BaseDom meme);
static void chpl__auto_destroy_BaseDom(BaseDom this8);
static chpl____wide_BaseDist dsiMyDist(chpl____wide_BaseDom* const this8);
static int64_t destroyDom(chpl____wide_BaseDom* const this8);
static void on_fn32(chpl____wide_BaseDist* const dist2, chpl____wide_BaseDom* const this8);
static void wrapon_fn32(_class_localson_fn32 c);
static void on_fn33(chpl____wide_BaseDist* const delete_tmp);
static void wrapon_fn33(_class_localson_fn33 c);
static void _local_on_fn4(chpl____wide_BaseDom* const this8, chpl____wide_BaseArr* const x);
static void _local_wrapon_fn4(_class_localson_fn34 c);
static void on_fn34(chpl____wide_BaseDom* const this8, chpl____wide_BaseArr* const x);
static void wrapon_fn34(_class_localson_fn34 c);
static void on_fn35(chpl____wide_BaseDom* const this8, chpl____wide_DefaultRectangularArr_locale_1_int64_t_F* const x);
static void on_fn36(chpl____wide_BaseDom* const this8, chpl____wide_DefaultRectangularArr_localesSignal_1_int64_t_F* const x);
static void on_fn37(chpl____wide_BaseDom* const this8, chpl____wide_DefaultRectangularArr_chpl_TableEntry_chpl_taskID_t_1_int64_t_F* const x);
static void on_fn38(chpl____wide_BaseDom* const this8, chpl____wide_DefaultRectangularArr_chpldev_Task_1_int64_t_F* const x);
static void on_fn39(chpl____wide_BaseDom* const this8, chpl____wide_DefaultAssociativeArr_chpldev_Task_chpl_taskID_t_F* const x);
static void wrapon_fn35(_class_localson_fn35 c);
static void wrapon_fn36(_class_localson_fn36 c);
static void wrapon_fn37(_class_localson_fn37 c);
static void wrapon_fn38(_class_localson_fn38 c);
static void wrapon_fn39(_class_localson_fn39 c);
static void _backupArrays(chpl____wide_BaseDom* const this8);
static void _removeArrayBackups(chpl____wide_BaseDom* const this8);
static void _preserveArrayElements(chpl____wide_BaseDom* const this8, int64_t oldslot, int64_t newslot);
static chpl_bool dsiLinksDistribution(chpl____wide_BaseDom* const this8);
static BaseRectangularDom _construct_BaseRectangularDom(atomic_refcnt* const _domCnt, list_BaseArr* const _arrs, atomicflag* const _arrsLock, BaseRectangularDom meme);
static void chpl__auto_destroy_BaseRectangularDom(BaseRectangularDom this8);
static BaseAssociativeDom _construct_BaseAssociativeDom(atomic_refcnt* const _domCnt, list_BaseArr* const _arrs, atomicflag* const _arrsLock, BaseAssociativeDom meme);
static void chpl__auto_destroy_BaseAssociativeDom(BaseAssociativeDom this8);
static BaseArr _construct_BaseArr(atomic_refcnt* const _arrCnt, BaseArr _arrAlias, BaseArr meme);
static void chpl__auto_destroy_BaseArr(BaseArr this8);
static chpl____wide_BaseDom dsiGetBaseDom(chpl____wide_BaseArr* const this8);
static int64_t destroyArr(chpl____wide_BaseArr* const this8);
static void on_fn40(chpl____wide_BaseArr* const this8);
static void wrapon_fn40(_class_localson_fn40 c);
static void on_fn41(chpl____wide_BaseArr* const delete_tmp);
static void wrapon_fn41(_class_localson_fn41 c);
static void on_fn42(chpl____wide_BaseDom* const dom, chpl____wide_BaseArr* const this8);
static void wrapon_fn42(_class_localson_fn42 c);
static void on_fn43(chpl____wide_BaseDom* const delete_tmp);
static void wrapon_fn43(_class_localson_fn43 c);
static void dsiDestroyData(chpl____wide_BaseArr* const this8);
static void dsiReallocate(chpl____wide_BaseArr* const this8, chpl____wide_DefaultRectangularDom_1_int64_t_F* const d);
static void dsiPostReallocate(chpl____wide_BaseArr* const this8);
static void clearEntry(chpl____wide_BaseArr* const this8, chpl_taskID_t idx);
static void _backupArray(chpl____wide_BaseArr* const this8);
static void _removeArrayBackup(chpl____wide_BaseArr* const this8);
static void _preserveArrayElement(chpl____wide_BaseArr* const this8, int64_t oldslot, int64_t newslot);
static void chpl__init_ChapelDynDispHack(int64_t _ln, c_string _fn);
static void chpl__init_ChapelIO(int64_t _ln, c_string _fn);
static Writer _construct_Writer(Writer meme);
static void chpl__auto_destroy_Writer(Writer this8);
static chpl_bool binary(chpl____wide_Writer* const this8);
static int64_t styleElement(chpl____wide_Writer* const this8, int64_t element);
static void writePrimitive(chpl____wide_Writer* const this8, chpl____wide_chpl_string x);
static void writePrimitive2(chpl____wide_Writer* const this8, ioLiteral* const x);
static void writePrimitive3(chpl____wide_Writer* const this8, int64_t x);
static void writePrimitive4(chpl____wide_Writer* const this8, uint64_t x);
static void writeIt(chpl____wide_Writer* const this8, chpl____wide_chpl_string x);
static void writeIt2(chpl____wide_Writer* const this8, _tuple_1_star_int64_t* const x);
static void writeIt3(chpl____wide_Writer* const this8, ioLiteral* const x);
static void writeIt4(chpl____wide_Writer* const this8, int64_t x);
static void writeIt5(chpl____wide_Writer* const this8, chpl_taskID_t x);
static void writeIt6(chpl____wide_Writer* const this8, uint64_t x);
static void readwrite(chpl____wide_Writer* const this8, ioLiteral* const x);
static void readwrite2(chpl____wide_Writer* const this8, int64_t x);
static void write2(chpl____wide_Writer* const this8, chpl____wide_chpl_string _e0_args, _tuple_1_star_int64_t* const _e1_args);
static void write3(chpl____wide_Writer* const this8, chpl____wide_chpl_string _e0_args, int64_t _e1_args);
static void write4(chpl____wide_Writer* const this8, chpl____wide_chpl_string _e0_args, int64_t _e1_args, chpl____wide_chpl_string _e2_args, int64_t _e3_args, chpl____wide_chpl_string _e4_args, int64_t _e5_args);
static void write5(chpl____wide_Writer* const this8, chpl____wide_chpl_string _e0_args, chpl_taskID_t _e1_args, chpl____wide_chpl_string _e2_args, int64_t _e3_args, chpl____wide_chpl_string _e4_args, int64_t _e5_args, chpl____wide_chpl_string _e6_args);
static void write6(chpl____wide_Writer* const this8, uint64_t _e0_args);
static void write7(chpl____wide_Writer* const this8, chpl____wide_chpl_string _e0_args, chpl_taskID_t _e1_args);
static void chpl__auto_destroy_Reader(Reader this8);
static void assert2(chpl_bool test);
static void halt(c_string s, int64_t _ln, c_string _fn);
static void halt2(chpl____wide_chpl_string _e0_args, _tuple_1_star_int64_t* const _e1_args, int64_t _ln, c_string _fn);
static void halt3(chpl____wide_chpl_string _e0_args, int64_t _e1_args, int64_t _ln, c_string _fn);
static void halt4(chpl____wide_chpl_string _e0_args, int64_t _e1_args, chpl____wide_chpl_string _e2_args, int64_t _e3_args, chpl____wide_chpl_string _e4_args, int64_t _e5_args, int64_t _ln, c_string _fn);
static void halt5(chpl____wide_chpl_string _e0_args, chpl_taskID_t _e1_args, chpl____wide_chpl_string _e2_args, int64_t _e3_args, chpl____wide_chpl_string _e4_args, int64_t _e5_args, chpl____wide_chpl_string _e6_args, int64_t _ln, c_string _fn);
static void halt6(chpl____wide_chpl_string _e0_args, chpl_taskID_t _e1_args, int64_t _ln, c_string _fn);
static void writeThis(chpl_taskID_t this8, chpl____wide_Writer* const f);
static StringWriter _construct_StringWriter(c_string s, StringWriter meme);
static void chpl__auto_destroy_StringWriter(StringWriter this8);
static void writePrimitive5(chpl____wide_StringWriter* const this8, chpl____wide_chpl_string x);
static void writePrimitive6(chpl____wide_StringWriter* const this8, ioLiteral* const x);
static void writePrimitive7(chpl____wide_StringWriter* const this8, int64_t x);
static void writePrimitive8(chpl____wide_StringWriter* const this8, uint64_t x);
static void write8(chpl____wide__ref_c_string* const this8, chpl____wide_chpl_string _e0_args, _tuple_1_star_int64_t* const _e1_args);
static void write9(chpl____wide__ref_c_string* const this8, chpl____wide_chpl_string _e0_args, int64_t _e1_args);
static void write10(chpl____wide__ref_c_string* const this8, chpl____wide_chpl_string _e0_args, int64_t _e1_args, chpl____wide_chpl_string _e2_args, int64_t _e3_args, chpl____wide_chpl_string _e4_args, int64_t _e5_args);
static void write11(chpl____wide__ref_c_string* const this8, chpl____wide_chpl_string _e0_args, chpl_taskID_t _e1_args, chpl____wide_chpl_string _e2_args, int64_t _e3_args, chpl____wide_chpl_string _e4_args, int64_t _e5_args, chpl____wide_chpl_string _e6_args);
static void write12(chpl____wide__ref_c_string* const this8, chpl____wide_chpl_string _e0_args, chpl_taskID_t _e1_args);
static void on_fn44(chpl____wide_StringWriter* const delete_tmp);
static void on_fn45(chpl____wide_StringWriter* const delete_tmp);
static void on_fn46(chpl____wide_StringWriter* const delete_tmp);
static void on_fn47(chpl____wide_StringWriter* const delete_tmp);
static void on_fn48(chpl____wide_StringWriter* const delete_tmp);
static void wrapon_fn44(_class_localson_fn44 c);
static void wrapon_fn45(_class_localson_fn45 c);
static void wrapon_fn46(_class_localson_fn46 c);
static void wrapon_fn47(_class_localson_fn47 c);
static void wrapon_fn48(_class_localson_fn48 c);
static void chpl__init_ChapelLocale(int64_t _ln, c_string _fn);
static locale _construct_locale(locale parent, int64_t numCores, atomic_int64* const runningTaskCounter, locale meme);
static void chpl__auto_destroy_locale(locale this8);
static locale locale2(void);
static int64_t id(chpl____wide_locale* const this8);
static int64_t chpl_id(chpl____wide_locale* const this8);
static int64_t getChildCount(chpl____wide_locale* const this8);
static chpl____wide_locale getChild(chpl____wide_locale* const this8, int64_t idx);
static AbstractLocaleModel _construct_AbstractLocaleModel(locale parent, int64_t numCores, atomic_int64* const runningTaskCounter, AbstractLocaleModel meme);
static void chpl__auto_destroy_AbstractLocaleModel(AbstractLocaleModel this8);
static AbstractRootLocale _construct_AbstractRootLocale(locale parent, int64_t numCores, atomic_int64* const runningTaskCounter, AbstractRootLocale meme);
static void chpl__auto_destroy_AbstractRootLocale(AbstractRootLocale this8);
static chpl____wide_locale localeIDtoLocale(chpl____wide_AbstractRootLocale* const this8, chpl_localeID_t* const id2);
static localesSignal _construct_localesSignal(atomicflag* const s, localesSignal meme);
static void chpl__auto_destroy_localesSignal(localesSignal this8);
static localesBarrier _construct_localesBarrier(localesBarrier* const meme);
static void wait2(_ref_localesBarrier this8, int64_t locIdx, chpl____wide_DefaultRectangularArr_localesSignal_1_int64_t_F* const flags);
static void on_fn49(chpl____wide_localesSignal* const delete_tmp);
static void wrapon_fn49(_class_localson_fn49 c);
static void chpl_init_rootLocale(void);
static void chpl_rootLocaleInitPrivate(int64_t locIdx);
static chpl____wide_locale chpl_localeID_to_locale(chpl_localeID_t* const id2);
static int64_t runningTasks(chpl____wide_locale* const this8);
void chpl_taskRunningCntInc(int64_t _ln, c_string _fn);
void chpl_taskRunningCntDec(int64_t _ln, c_string _fn);
static void chpl__init_ChapelNumLocales(int64_t _ln, c_string _fn);
static void chpl__init_ChapelRange(int64_t _ln, c_string _fn);
static range_int64_t_bounded_F _construct_range(rangeBase_int64_t_bounded_F* const _base, chpl_bool _aligned, range_int64_t_bounded_F* const meme);
static range_int64_t_boundedLow_F _construct_range2(rangeBase_int64_t_boundedLow_F* const _base, chpl_bool _aligned, range_int64_t_boundedLow_F* const meme);
static range_int64_t_bounded_F range(int64_t _low, int64_t _high, int64_t _stride, int64_t _alignment, chpl_bool _aligned);
static range_int64_t_boundedLow_F range2(int64_t _low, int64_t _high, int64_t _stride, int64_t _alignment, chpl_bool _aligned);
static range_int64_t_bounded_F range3(rangeBase_int64_t_bounded_F* const _base, chpl_bool _aligned);
static void _build_range(int64_t low, int64_t high2, _ref_range_int64_t_bounded_F _retArg);
static void _build_range2(int64_t bound, _ref_range_int64_t_boundedLow_F _retArg);
static void this3(_ref_range_int64_t_bounded_F this8, range_int64_t_bounded_F* const other, _ref_range_int64_t_bounded_F _retArg);
static void chpl_count_help(range_int64_t_boundedLow_F* const r, int64_t count, _ref_range_int64_t_bounded_F _retArg);
static void chpl___POUND_(range_int64_t_boundedLow_F* const r, int64_t count, _ref_range_int64_t_bounded_F _retArg);
static void chpl__init_ChapelRangeBase(int64_t _ln, c_string _fn);
static rangeBase_int64_t_bounded_F _construct_rangeBase(int64_t _low, int64_t _high, int64_t _stride, int64_t _alignment, rangeBase_int64_t_bounded_F* const meme);
static rangeBase_int64_t_boundedLow_F _construct_rangeBase2(int64_t _low, int64_t _high, int64_t _stride, int64_t _alignment, rangeBase_int64_t_boundedLow_F* const meme);
static rangeBase_int64_t_bounded_F rangeBase(int64_t _low, int64_t _high, int64_t _stride, int64_t _alignment);
static rangeBase_int64_t_boundedLow_F rangeBase2(int64_t _low, int64_t _high, int64_t _stride, int64_t _alignment);
static int64_t length(chpl____wide__ref_rangeBase_int64_t_bounded_F* const this8);
static chpl_bool member3(chpl____wide__ref_rangeBase_int64_t_bounded_F* const this8, int64_t i);
static void chpl___ASSIGN_3(_ref_rangeBase_int64_t_bounded_F r1, rangeBase_int64_t_bounded_F* const r2);
static void chpl___ASSIGN_4(_ref_rangeBase_int64_t_boundedLow_F r1, rangeBase_int64_t_boundedLow_F* const r2);
static void this4(_ref_rangeBase_int64_t_bounded_F this8, rangeBase_int64_t_bounded_F* const other, _ref_rangeBase_int64_t_bounded_F _retArg);
static void chpl__count(rangeBase_int64_t_boundedLow_F* const r, int64_t count, _ref_rangeBase_int64_t_bounded_F _retArg);
static int64_t chpl__add(int64_t a, int64_t b);
void chpl__init_ChapelStandard(int64_t _ln, c_string _fn);
static void chpl__init_ChapelSyncvar(int64_t _ln, c_string _fn);
static _syncvar_int64_t _construct__syncvar(int64_t value);
static _syncvar_chpl_bool _construct__syncvar2(chpl_bool value);
static void chpl___TILDE__syncvar(chpl____wide__syncvar_chpl_bool* const this8);
static void initialize6(_syncvar_int64_t this8);
static void initialize7(_syncvar_chpl_bool this8);
static void chpl__init_ChapelTaskTable(int64_t _ln, c_string _fn);
static chpldev_Task _construct_chpldev_Task(taskState state, uint32_t lineno, c_string filename, uint64_t tl_info, chpldev_Task* const meme);
static void chpl___ASSIGN_5(chpl____wide__ref_chpldev_Task* const _arg1, chpldev_Task* const _arg2);
static chpldev_Task chpl__initCopy3(chpldev_Task* const x);
static chpldev_taskTable_t _construct_chpldev_taskTable_t(chpl____wide_DefaultAssociativeDom_chpl_taskID_t_F* const dom, chpl____wide_DefaultAssociativeArr_chpldev_Task_chpl_taskID_t_F* const map, chpldev_taskTable_t meme);
static void chpl__auto_destroy_chpldev_taskTable_t(chpldev_taskTable_t this8);
static void chpldev_taskTable_init(void);
static void on_fn50(chpl____wide__EndCount* const _coforallCount);
static void wrapon_fn50(_class_localson_fn50 c);
void chpldev_taskTable_add(chpl_taskID_t taskID, uint32_t lineno, c_string filename, uint64_t tl_info);
void chpldev_taskTable_remove(chpl_taskID_t taskID);
void chpldev_taskTable_set_active(chpl_taskID_t taskID);
void chpldev_taskTable_set_suspended(chpl_taskID_t taskID);
uint64_t chpldev_taskTable_get_tl_info(chpl_taskID_t taskID);
void chpldev_taskTable_print(void);
static void chpl__init_ChapelThreads(int64_t _ln, c_string _fn);
static void chpl__init_ChapelTuple(int64_t _ln, c_string _fn);
static int64_t this5(_ref__tuple_27_star_int64_t this8, int64_t i);
static chpl____wide__ref_range_int64_t_bounded_F this6(_ref__tuple_1_star_range_int64_t_bounded_F this8, int64_t i);
static void this7(_ref__tuple_1_star_range_int64_t_bounded_F this8, int64_t i, _ref_range_int64_t_bounded_F _retArg);
static void readWriteThis(_ref__tuple_1_star_int64_t this8, chpl____wide_Writer* const f);
static void chpl__init_ChapelUtil(int64_t _ln, c_string _fn);
static void chpl__init_DefaultAssociative(int64_t _ln, c_string _fn);
static chpl_TableEntry_chpl_taskID_t _construct_chpl_TableEntry(chpl__hash_status status, chpl_taskID_t idx, chpl_TableEntry_chpl_taskID_t* const meme);
static void chpl___ASSIGN_6(chpl____wide__ref_chpl_TableEntry_chpl_taskID_t* const _arg1, chpl_TableEntry_chpl_taskID_t* const _arg2);
static chpl_TableEntry_chpl_taskID_t chpl__initCopy4(chpl_TableEntry_chpl_taskID_t* const x);
static void chpl__primes(_ref__tuple_27_star_int64_t _retArg);
static DefaultAssociativeDom_chpl_taskID_t_F _construct_DefaultAssociativeDom(atomic_refcnt* const _domCnt, list_BaseArr* const _arrs, atomicflag* const _arrsLock, DefaultDist dist2, atomic_int64* const numEntries, atomicflag* const tableLock, int64_t tableSizeNum, int64_t tableSize, chpl____wide_DefaultRectangularDom_1_int64_t_F* const tableDom, chpl____wide_DefaultRectangularArr_chpl_TableEntry_chpl_taskID_t_1_int64_t_F* const table2, chpl_bool postponeResize, DefaultAssociativeDom_chpl_taskID_t_F meme);
static void chpl__auto_destroy_DefaultAssociativeDom(DefaultAssociativeDom_chpl_taskID_t_F this8);
static chpl_bool dsiLinksDistribution2(chpl____wide_DefaultAssociativeDom_chpl_taskID_t_F* const this8);
static DefaultAssociativeDom_chpl_taskID_t_F DefaultAssociativeDom(chpl____wide_DefaultDist* const dist2);
static DefaultAssociativeArr_chpldev_Task_chpl_taskID_t_F dsiBuildArray(chpl____wide_DefaultAssociativeDom_chpl_taskID_t_F* const this8);
static chpl_bool dsiMember(chpl____wide_DefaultAssociativeDom_chpl_taskID_t_F* const this8, chpl_taskID_t idx);
static int64_t dsiAdd(chpl____wide_DefaultAssociativeDom_chpl_taskID_t_F* const this8, chpl_taskID_t idx);
static void on_fn51(chpl____wide_DefaultAssociativeDom_chpl_taskID_t_F* const this8, chpl_taskID_t idx, chpl____wide__ref_int64_t* const slotNum);
static void wrapon_fn51(_class_localson_fn51 c);
static int64_t _add(chpl____wide_DefaultAssociativeDom_chpl_taskID_t_F* const this8, chpl_taskID_t idx);
static void dsiRemove(chpl____wide_DefaultAssociativeDom_chpl_taskID_t_F* const this8, chpl_taskID_t idx);
static void on_fn52(chpl____wide_DefaultAssociativeDom_chpl_taskID_t_F* const this8, chpl_taskID_t idx);
static void wrapon_fn52(_class_localson_fn52 c);
static void _resize(chpl____wide_DefaultAssociativeDom_chpl_taskID_t_F* const this8, chpl_bool grow);
static void _findFilledSlot(chpl____wide_DefaultAssociativeDom_chpl_taskID_t_F* const this8, chpl_taskID_t idx, _ref__tuple_2_chpl_bool_int64_t _retArg);
static void _findFilledSlot2(chpl____wide_DefaultAssociativeDom_chpl_taskID_t_F* const this8, chpl_taskID_t idx, _ref__tuple_2_chpl_bool_int64_t _retArg);
static void _findFilledSlot3(chpl____wide_DefaultAssociativeDom_chpl_taskID_t_F* const this8, chpl_taskID_t idx, _ref__tuple_2_chpl_bool_int64_t _retArg);
static void _findEmptySlot(chpl____wide_DefaultAssociativeDom_chpl_taskID_t_F* const this8, chpl_taskID_t idx, chpl_bool haveLock, _ref__tuple_2_chpl_bool_int64_t _retArg);
static DefaultAssociativeArr_chpldev_Task_chpl_taskID_t_F _construct_DefaultAssociativeArr(atomic_refcnt* const _arrCnt, BaseArr _arrAlias, chpl____wide_DefaultAssociativeDom_chpl_taskID_t_F* const dom, chpl____wide_DefaultRectangularArr_chpldev_Task_1_int64_t_F* const data, chpl____wide_DefaultRectangularDom_1_int64_t_F* const tmpDom, chpl____wide_DefaultRectangularArr_chpldev_Task_1_int64_t_F* const tmpTable, DefaultAssociativeArr_chpldev_Task_chpl_taskID_t_F meme);
static void chpl__auto_destroy_DefaultAssociativeArr(DefaultAssociativeArr_chpldev_Task_chpl_taskID_t_F this8);
static chpl____wide_DefaultAssociativeDom_chpl_taskID_t_F dsiGetBaseDom2(chpl____wide_DefaultAssociativeArr_chpldev_Task_chpl_taskID_t_F* const this8);
static void clearEntry2(chpl____wide_DefaultAssociativeArr_chpldev_Task_chpl_taskID_t_F* const this8, chpl_taskID_t idx);
static chpl____wide__ref_chpldev_Task dsiAccess(chpl____wide_DefaultAssociativeArr_chpldev_Task_chpl_taskID_t_F* const this8, chpl_taskID_t idx);
static void _backupArray2(chpl____wide_DefaultAssociativeArr_chpldev_Task_chpl_taskID_t_F* const this8);
static void _removeArrayBackup2(chpl____wide_DefaultAssociativeArr_chpldev_Task_chpl_taskID_t_F* const this8);
static void _preserveArrayElement2(chpl____wide_DefaultAssociativeArr_chpldev_Task_chpl_taskID_t_F* const this8, int64_t oldslot, int64_t newslot);
static int64_t chpl__defaultHashWrapper(chpl_taskID_t x);
static int64_t _gen_key(int64_t i);
static void chpl__init_DefaultRectangular(int64_t _ln, c_string _fn);
static DefaultDist _construct_DefaultDist(atomic_refcnt* const _distCnt, list_BaseDom* const _doms, atomicflag* const _domsLock, DefaultDist meme);
static void chpl__auto_destroy_DefaultDist(DefaultDist this8);
static DefaultRectangularDom_1_int64_t_F dsiNewRectangularDom(chpl____wide_DefaultDist* const this8);
static DefaultAssociativeDom_chpl_taskID_t_F dsiNewAssociativeDom(chpl____wide_DefaultDist* const this8);
static chpl____wide_DefaultDist dsiClone(chpl____wide_DefaultDist* const this8);
static void dsiAssign(chpl____wide_DefaultDist* const this8, chpl____wide_DefaultDist* const other);
static DefaultRectangularDom_1_int64_t_F _construct_DefaultRectangularDom(atomic_refcnt* const _domCnt, list_BaseArr* const _arrs, atomicflag* const _arrsLock, DefaultDist dist2, _tuple_1_star_range_int64_t_bounded_F* const ranges, DefaultRectangularDom_1_int64_t_F meme);
static void chpl__auto_destroy_DefaultRectangularDom(DefaultRectangularDom_1_int64_t_F this8);
static chpl_bool dsiLinksDistribution3(chpl____wide_DefaultRectangularDom_1_int64_t_F* const this8);
static DefaultRectangularDom_1_int64_t_F DefaultRectangularDom(chpl____wide_DefaultDist* const dist2);
static void dsiGetIndices(chpl____wide_DefaultRectangularDom_1_int64_t_F* const this8, _ref__tuple_1_star_range_int64_t_bounded_F _retArg);
static void dsiSetIndices(chpl____wide_DefaultRectangularDom_1_int64_t_F* const this8, _tuple_1_star_range_int64_t_bounded_F* const x);
static chpl_bool dsiMember2(chpl____wide_DefaultRectangularDom_1_int64_t_F* const this8, _tuple_1_star_int64_t* const ind);
static void dsiDims(chpl____wide_DefaultRectangularDom_1_int64_t_F* const this8, _ref__tuple_1_star_range_int64_t_bounded_F _retArg);
static void dsiDim(chpl____wide_DefaultRectangularDom_1_int64_t_F* const this8, _ref_range_int64_t_bounded_F _retArg);
static int64_t dsiNumIndices(chpl____wide_DefaultRectangularDom_1_int64_t_F* const this8);
static int64_t dsiLow(chpl____wide_DefaultRectangularDom_1_int64_t_F* const this8);
static int64_t dsiHigh(chpl____wide_DefaultRectangularDom_1_int64_t_F* const this8);
static DefaultRectangularArr_locale_1_int64_t_F dsiBuildArray2(chpl____wide_DefaultRectangularDom_1_int64_t_F* const this8);
static DefaultRectangularArr_localesSignal_1_int64_t_F dsiBuildArray3(chpl____wide_DefaultRectangularDom_1_int64_t_F* const this8);
static DefaultRectangularArr_chpl_TableEntry_chpl_taskID_t_1_int64_t_F dsiBuildArray4(chpl____wide_DefaultRectangularDom_1_int64_t_F* const this8);
static DefaultRectangularArr_chpldev_Task_1_int64_t_F dsiBuildArray5(chpl____wide_DefaultRectangularDom_1_int64_t_F* const this8);
static DefaultRectangularDom_1_int64_t_F dsiBuildRectangularDom(chpl____wide_DefaultRectangularDom_1_int64_t_F* const this8, _tuple_1_star_range_int64_t_bounded_F* const ranges);
static DefaultRectangularArr_locale_1_int64_t_F _construct_DefaultRectangularArr(atomic_refcnt* const _arrCnt, BaseArr _arrAlias, chpl____wide_DefaultRectangularDom_1_int64_t_F* const dom, _tuple_1_star_int64_t* const off, _tuple_1_star_int64_t* const blk, _tuple_1_star_int64_t* const str, int64_t origin, int64_t factoredOffs, _ddata_locale data, _ddata_locale shiftedData, chpl_bool noinit_data, DefaultRectangularArr_locale_1_int64_t_F meme);
static DefaultRectangularArr_localesSignal_1_int64_t_F _construct_DefaultRectangularArr2(atomic_refcnt* const _arrCnt, BaseArr _arrAlias, chpl____wide_DefaultRectangularDom_1_int64_t_F* const dom, _tuple_1_star_int64_t* const off, _tuple_1_star_int64_t* const blk, _tuple_1_star_int64_t* const str, int64_t origin, int64_t factoredOffs, _ddata_localesSignal data, _ddata_localesSignal shiftedData, chpl_bool noinit_data, DefaultRectangularArr_localesSignal_1_int64_t_F meme);
static DefaultRectangularArr_chpl_TableEntry_chpl_taskID_t_1_int64_t_F _construct_DefaultRectangularArr3(atomic_refcnt* const _arrCnt, BaseArr _arrAlias, chpl____wide_DefaultRectangularDom_1_int64_t_F* const dom, _tuple_1_star_int64_t* const off, _tuple_1_star_int64_t* const blk, _tuple_1_star_int64_t* const str, int64_t origin, int64_t factoredOffs, _ddata_chpl_TableEntry_chpl_taskID_t data, _ddata_chpl_TableEntry_chpl_taskID_t shiftedData, chpl_bool noinit_data, DefaultRectangularArr_chpl_TableEntry_chpl_taskID_t_1_int64_t_F meme);
static DefaultRectangularArr_chpldev_Task_1_int64_t_F _construct_DefaultRectangularArr4(atomic_refcnt* const _arrCnt, BaseArr _arrAlias, chpl____wide_DefaultRectangularDom_1_int64_t_F* const dom, _tuple_1_star_int64_t* const off, _tuple_1_star_int64_t* const blk, _tuple_1_star_int64_t* const str, int64_t origin, int64_t factoredOffs, _ddata_chpldev_Task data, _ddata_chpldev_Task shiftedData, chpl_bool noinit_data, DefaultRectangularArr_chpldev_Task_1_int64_t_F meme);
static void chpl__auto_destroy_DefaultRectangularArr(DefaultRectangularArr_locale_1_int64_t_F this8);
static void chpl__auto_destroy_DefaultRectangularArr2(DefaultRectangularArr_localesSignal_1_int64_t_F this8);
static void chpl__auto_destroy_DefaultRectangularArr3(DefaultRectangularArr_chpl_TableEntry_chpl_taskID_t_1_int64_t_F this8);
static void chpl__auto_destroy_DefaultRectangularArr4(DefaultRectangularArr_chpldev_Task_1_int64_t_F this8);
static chpl____wide_DefaultRectangularDom_1_int64_t_F dsiGetBaseDom3(chpl____wide_DefaultRectangularArr_locale_1_int64_t_F* const this8);
static chpl____wide_DefaultRectangularDom_1_int64_t_F dsiGetBaseDom4(chpl____wide_DefaultRectangularArr_localesSignal_1_int64_t_F* const this8);
static chpl____wide_DefaultRectangularDom_1_int64_t_F dsiGetBaseDom5(chpl____wide_DefaultRectangularArr_chpl_TableEntry_chpl_taskID_t_1_int64_t_F* const this8);
static chpl____wide_DefaultRectangularDom_1_int64_t_F dsiGetBaseDom6(chpl____wide_DefaultRectangularArr_chpldev_Task_1_int64_t_F* const this8);
static void dsiDestroyData2(chpl____wide_DefaultRectangularArr_locale_1_int64_t_F* const this8);
static void dsiDestroyData3(chpl____wide_DefaultRectangularArr_localesSignal_1_int64_t_F* const this8);
static void dsiDestroyData4(chpl____wide_DefaultRectangularArr_chpl_TableEntry_chpl_taskID_t_1_int64_t_F* const this8);
static void dsiDestroyData5(chpl____wide_DefaultRectangularArr_chpldev_Task_1_int64_t_F* const this8);
static void computeFactoredOffs(DefaultRectangularArr_locale_1_int64_t_F this8);
static void computeFactoredOffs2(DefaultRectangularArr_localesSignal_1_int64_t_F this8);
static void computeFactoredOffs3(DefaultRectangularArr_chpl_TableEntry_chpl_taskID_t_1_int64_t_F this8);
static void computeFactoredOffs4(DefaultRectangularArr_chpldev_Task_1_int64_t_F this8);
static void initialize8(DefaultRectangularArr_locale_1_int64_t_F this8);
static void initialize9(DefaultRectangularArr_localesSignal_1_int64_t_F this8);
static void initialize10(DefaultRectangularArr_chpl_TableEntry_chpl_taskID_t_1_int64_t_F this8);
static void initialize11(DefaultRectangularArr_chpldev_Task_1_int64_t_F this8);
static void dsiReallocate2(chpl____wide_DefaultRectangularArr_locale_1_int64_t_F* const this8, chpl____wide_DefaultRectangularDom_1_int64_t_F* const d);
static void dsiReallocate3(chpl____wide_DefaultRectangularArr_localesSignal_1_int64_t_F* const this8, chpl____wide_DefaultRectangularDom_1_int64_t_F* const d);
static void dsiReallocate4(chpl____wide_DefaultRectangularArr_chpl_TableEntry_chpl_taskID_t_1_int64_t_F* const this8, chpl____wide_DefaultRectangularDom_1_int64_t_F* const d);
static void dsiReallocate5(chpl____wide_DefaultRectangularArr_chpldev_Task_1_int64_t_F* const this8, chpl____wide_DefaultRectangularDom_1_int64_t_F* const d);
static void on_fn53(chpl____wide_DefaultRectangularArr_locale_1_int64_t_F* const delete_tmp);
static void on_fn54(chpl____wide_DefaultRectangularArr_localesSignal_1_int64_t_F* const delete_tmp);
static void on_fn55(chpl____wide_DefaultRectangularArr_chpl_TableEntry_chpl_taskID_t_1_int64_t_F* const delete_tmp);
static void on_fn56(chpl____wide_DefaultRectangularArr_chpldev_Task_1_int64_t_F* const delete_tmp);
static void wrapon_fn53(_class_localson_fn53 c);
static void wrapon_fn54(_class_localson_fn54 c);
static void wrapon_fn55(_class_localson_fn55 c);
static void wrapon_fn56(_class_localson_fn56 c);
static void chpl__init_LocaleModel(int64_t _ln, c_string _fn);
static void chpl_buildLocaleID(int32_t node, int32_t subloc, _ref_chpl_localeID_t _retArg, int64_t _ln, c_string _fn);
static int32_t chpl_nodeFromLocaleID(chpl_localeID_t* const loc, int64_t _ln, c_string _fn);
static int32_t chpl_sublocFromLocaleID(chpl_localeID_t* const loc, int64_t _ln, c_string _fn);
static LocaleModel _construct_LocaleModel(locale parent, int64_t numCores, atomic_int64* const runningTaskCounter, uint64_t callStackSize, int64_t _node_id, chpl_string local_name, LocaleModel meme);
static void chpl__auto_destroy_LocaleModel(LocaleModel this8);
static LocaleModel LocaleModel2(chpl____wide_locale* const parent_loc);
static int64_t chpl_id2(chpl____wide_LocaleModel* const this8);
static int64_t getChildCount2(chpl____wide_LocaleModel* const this8);
static chpl____wide_locale getChild2(chpl____wide_LocaleModel* const this8, int64_t idx);
static void init(LocaleModel this8);
static RootLocale _construct_RootLocale(locale parent, int64_t numCores, atomic_int64* const runningTaskCounter, chpl____wide_DefaultRectangularDom_1_int64_t_F* const myLocaleSpace, chpl____wide_DefaultRectangularArr_locale_1_int64_t_F* const myLocales, RootLocale meme);
static void chpl__auto_destroy_RootLocale(RootLocale this8);
static RootLocale RootLocale2(void);
static void init2(chpl____wide_RootLocale* const this8);
static void wrapon_fn57(_class_localson_fn57 c);
static int64_t chpl_id3(chpl____wide_RootLocale* const this8);
static void on_fn57(int64_t locIdx, localesBarrier* const b, chpl____wide_DefaultRectangularArr_localesSignal_1_int64_t_F* const flags, chpl____wide__EndCount* const _coforallCount, _ir_initOnLocales_AbstractRootLocale* const chpl__iter, chpl____wide_RootLocale* const this8);
static int64_t getChildCount3(chpl____wide_RootLocale* const this8);
static chpl____wide_locale getChild3(chpl____wide_RootLocale* const this8, int64_t idx);
static chpl____wide_DefaultRectangularArr_locale_1_int64_t_F getDefaultLocaleArray(chpl____wide_RootLocale* const this8);
static void getDefaultLocaleArray2(chpl____wide_RootLocale* const this8, _ref_DefaultRectangularArr_locale_1_int64_t_F _retArg);
static chpl____wide_locale localeIDtoLocale2(chpl____wide_RootLocale* const this8, chpl_localeID_t* const id2);
static chpl_opaque _local_chpl_here_alloc(int64_t size, int16_t md);
static chpl_opaque chpl_here_alloc(int64_t size, int16_t md);
static void _local_chpl_here_free(chpl_opaque ptr);
static void chpl_here_free(chpl_opaque ptr);
void chpl_executeOn(chpl_localeID_t* const loc, int64_t fn, c_void_ptr args, int32_t args_size, int64_t _ln, c_string _fn);
void chpl_executeOnFast(chpl_localeID_t* const loc, int64_t fn, c_void_ptr args, int32_t args_size, int64_t _ln, c_string _fn);
void chpl_executeOnNB(chpl_localeID_t* const loc, int64_t fn, c_void_ptr args, int32_t args_size, int64_t _ln, c_string _fn);
void chpl_taskListAddBegin(int64_t subloc_id, int64_t fn, c_void_ptr args, _ref_chpl_task_list_p tlist, int64_t tlist_node_id, int64_t _ln, c_string _fn);
void chpl_taskListAddCoStmt(int64_t subloc_id, int64_t fn, c_void_ptr args, _ref_chpl_task_list_p tlist, int64_t tlist_node_id, int64_t _ln, c_string _fn);
void chpl_taskListProcess(chpl_task_list_p task_list, int64_t _ln, c_string _fn);
void chpl_taskListExecute(chpl_task_list_p task_list, int64_t _ln, c_string _fn);
void chpl_taskListFree(chpl_task_list_p task_list, int64_t _ln, c_string _fn);
static void chpl__init_LocaleTree(int64_t _ln, c_string _fn);
static chpl_localeTreeRecord _construct_chpl_localeTreeRecord(locale left, locale right, chpl_localeTreeRecord* const meme);
static void chpl_initLocaleTree(void);
static void on_fn58(chpl____wide_locale* const left, chpl____wide_locale* const right);
static void wrapon_fn58(_class_localson_fn58 c);
static void chpl__init_LocalesArray(int64_t _ln, c_string _fn);
static void chpl__init_MemConsistency(int64_t _ln, c_string _fn);
static void chpl__init_MemTracking(int64_t _ln, c_string _fn);
void chpl_memTracking_returnConfigVals(_ref_chpl_bool ret_memTrack, _ref_chpl_bool ret_memStats, _ref_chpl_bool ret_memLeaks, _ref_chpl_bool ret_memLeaksTable, _ref_uint64_t ret_memMax, _ref_uint64_t ret_memThreshold, _ref_c_string ret_memLog, _ref_c_string ret_memLeaksLog);
static void chpl__init_NetworkAtomics(int64_t _ln, c_string _fn);
void chpl__init_PrintModuleInitOrder(int64_t _ln, c_string _fn);
static void printModuleInit(c_string s1, c_string s2, int64_t len);
static void initPrint(void);
static void chpl__init_String(int64_t _ln, c_string _fn);
static object _construct_object(object meme);
static void chpl__auto_destroy_object(object this8);
void chpl__heapAllocateGlobals(void);
void chpl__init_preInit(int64_t _ln, c_string _fn);
static void chpl__init_CommDiagnostics(int64_t _ln, c_string _fn);
static void chpl__init_DSIUtil(int64_t _ln, c_string _fn);
static void createTuple(int64_t val, _ref__tuple_1_star_int64_t _retArg);
static void _computeChunkStuff(int64_t maxTasks, chpl_bool ignoreRunning, int64_t minSize, _tuple_1_star_range_int64_t_bounded_F* const ranges, _ref__tuple_2_star_int64_t _retArg);
static int64_t _computeNumChunks(int64_t maxTasks, chpl_bool ignoreRunning, int64_t minSize, uint64_t numElems);
static uint64_t intCeilXDivByY(uint64_t x, uint64_t y);
static void _computeBlock(int64_t numelems, int64_t numblocks, int64_t blocknum, int64_t wayhi, int64_t waylo, int64_t lo, _ref__tuple_2_star_int64_t _retArg);
static void chpl__init_Error(int64_t _ln, c_string _fn);
static c_string quote_string(chpl____wide_chpl_string s, int64_t len);
static void ioerror(syserr error, chpl____wide_chpl_string msg, chpl____wide_chpl_string path);
static void ioerror2(syserr error, chpl____wide_chpl_string msg, chpl____wide_chpl_string path, int64_t offset);
static void chpl__init_IO(int64_t _ln, c_string _fn);
static void defaultIOStyle(_ref_iostyle _retArg);
static file _construct_file(chpl____wide_locale* const home, qio_file_ptr_t _file_internal, file* const meme);
static file chpl__initCopy5(file* const x);
static void on_fn59(chpl____wide__ref_file* const x);
static void wrapon_fn59(_class_localson_fn59 c);
static void chpl___ASSIGN_7(_ref_file ret, file* const x);
static void on_fn60(chpl____wide__ref_file* const x);
static void wrapon_fn60(_class_localson_fn60 c);
static void on_fn61(chpl____wide__ref_file* const ret);
static void wrapon_fn61(_class_localson_fn61 c);
static void check(_ref_file this8);
static void chpl___TILDE_file(_ref_file this8);
static void on_fn62(chpl____wide__ref_file* const this8);
static void wrapon_fn62(_class_localson_fn62 c);
static void _style(_ref_file this8, _ref_iostyle _retArg);
static void on_fn63(chpl____wide__ref_file* const this8, chpl____wide__ref_iostyle* const ret);
static void wrapon_fn63(_class_localson_fn63 c);
static chpl____wide_chpl_string getPath(_ref_file this8, chpl____wide__ref_syserr* const error);
static void on_fn64(chpl____wide__ref_file* const this8, chpl____wide__ref_syserr* const _formal_tmp_error, chpl____wide__ref_chpl_string* const ret);
static void wrapon_fn64(_class_localson_fn64 c);
static chpl____wide_chpl_string tryGetPath(_ref_file this8);
static void openfd(int32_t fd, chpl____wide__ref_syserr* const error, int32_t hints, iostyle* const style, _ref_file _retArg);
static void openfd2(int32_t fd, int32_t hints, iostyle* const style, _ref_file _retArg);
static void openfp(_cfile fp, chpl____wide__ref_syserr* const error, int32_t hints, iostyle* const style, _ref_file _retArg);
static void openfp2(_cfile fp, int32_t hints, iostyle* const style, _ref_file _retArg);
static channel_F_dynamic_T _construct_channel(locale home, qio_channel_ptr_t _channel_internal, channel_F_dynamic_T* const meme);
static channel_T_dynamic_T _construct_channel2(locale home, qio_channel_ptr_t _channel_internal, channel_T_dynamic_T* const meme);
static channel_F_dynamic_T chpl__initCopy6(channel_F_dynamic_T* const x);
static channel_T_dynamic_T chpl__initCopy7(channel_T_dynamic_T* const x);
static void on_fn65(chpl____wide__ref_channel_F_dynamic_T* const x);
static void on_fn66(chpl____wide__ref_channel_T_dynamic_T* const x);
static void wrapon_fn65(_class_localson_fn65 c);
static void wrapon_fn66(_class_localson_fn66 c);
static void chpl___ASSIGN_8(chpl____wide__ref_channel_F_dynamic_T* const ret, channel_F_dynamic_T* const x);
static void chpl___ASSIGN_9(chpl____wide__ref_channel_T_dynamic_T* const ret, channel_T_dynamic_T* const x);
static void on_fn67(chpl____wide__ref_channel_F_dynamic_T* const x);
static void on_fn68(chpl____wide__ref_channel_T_dynamic_T* const x);
static void wrapon_fn67(_class_localson_fn67 c);
static void wrapon_fn68(_class_localson_fn68 c);
static void on_fn69(chpl____wide__ref_channel_F_dynamic_T* const ret);
static void on_fn70(chpl____wide__ref_channel_T_dynamic_T* const ret);
static void wrapon_fn69(_class_localson_fn69 c);
static void wrapon_fn70(_class_localson_fn70 c);
static channel_F_dynamic_T channel(file* const f, chpl____wide__ref_syserr* const error, int32_t hints, int64_t start2, int64_t end, iostyle* const style);
static channel_T_dynamic_T channel2(file* const f, chpl____wide__ref_syserr* const error, int32_t hints, int64_t start2, int64_t end, iostyle* const style);
static void on_fn71(int32_t hints, chpl____wide__ref_syserr* const _formal_tmp_error, int64_t end, chpl____wide__ref_channel_F_dynamic_T* const this8, chpl____wide__ref_file* const f, int64_t start2, iostyle* const style);
static void on_fn72(int64_t end, chpl____wide__ref_channel_T_dynamic_T* const this8, chpl____wide__ref_file* const f, int64_t start2, iostyle* const style, int32_t hints, chpl____wide__ref_syserr* const _formal_tmp_error);
static void wrapon_fn71(_class_localson_fn71 c);
static void wrapon_fn72(_class_localson_fn72 c);
static void chpl___TILDE_channel(_ref_channel_F_dynamic_T this8);
static void chpl___TILDE_channel2(_ref_channel_T_dynamic_T this8);
static void on_fn73(chpl____wide__ref_channel_F_dynamic_T* const this8);
static void on_fn74(chpl____wide__ref_channel_T_dynamic_T* const this8);
static void wrapon_fn73(_class_localson_fn73 c);
static void wrapon_fn74(_class_localson_fn74 c);
static ioNewline _construct_ioNewline(chpl_bool skipWhitespaceOnly, ioNewline* const meme);
static ioLiteral _construct_ioLiteral(c_string val, chpl_bool ignoreWhiteSpace, ioLiteral* const meme);
static void chpl___ASSIGN_10(_ref_ioLiteral _arg1, ioLiteral* const _arg2);
static void _ch_ioerror(chpl____wide__ref_channel_T_dynamic_T* const this8, syserr error, chpl____wide_chpl_string msg);
static void on_fn75(chpl____wide__ref_channel_T_dynamic_T* const this8, chpl____wide__ref_chpl_string* const path, chpl____wide__ref_int64_t* const offset);
static void wrapon_fn75(_class_localson_fn75 c);
static void on_fn76(chpl____wide__ref_channel_T_dynamic_T* const this8, chpl____wide__ref_syserr* const _formal_tmp_error);
static void wrapon_fn76(_class_localson_fn76 c);
static void on_fn77(chpl____wide__ref_channel_T_dynamic_T* const this8);
static void wrapon_fn77(_class_localson_fn77 c);
static void reader(_ref_file this8, chpl____wide__ref_syserr* const error, int64_t start2, int64_t end, int32_t hints, iostyle* const style, _ref_channel_F_dynamic_T _retArg);
static void on_fn78(chpl____wide__ref_syserr* const _formal_tmp_error, iostyle* const style, file* const this8, int64_t start2, int64_t end, int32_t hints, chpl____wide__ref_channel_F_dynamic_T* const ret);
static void wrapon_fn78(_class_localson_fn78 c);
static void reader2(_ref_file this8, int64_t start2, int64_t end, int32_t hints, iostyle* const style, _ref_channel_F_dynamic_T _retArg);
static void writer(_ref_file this8, chpl____wide__ref_syserr* const error, int64_t start2, int64_t end, int32_t hints, iostyle* const style, _ref_channel_T_dynamic_T _retArg);
static void on_fn79(iostyle* const style, file* const this8, int64_t start2, int64_t end, int32_t hints, chpl____wide__ref_channel_T_dynamic_T* const ret, chpl____wide__ref_syserr* const _formal_tmp_error);
static void wrapon_fn79(_class_localson_fn79 c);
static void writer2(_ref_file this8, int64_t start2, int64_t end, int32_t hints, iostyle* const style, _ref_channel_T_dynamic_T _retArg);
static syserr _write_text_internal(qio_channel_ptr_t _channel_internal, chpl____wide_chpl_string x);
static syserr _write_text_internal2(qio_channel_ptr_t _channel_internal, int64_t x);
static syserr _write_text_internal3(qio_channel_ptr_t _channel_internal, _real64 x);
static syserr _write_text_internal4(qio_channel_ptr_t _channel_internal, c_string x);
static syserr _write_text_internal5(qio_channel_ptr_t _channel_internal, uint32_t x);
static syserr _write_text_internal6(qio_channel_ptr_t _channel_internal, taskState x);
static chpl____wide_chpl_string _args_to_proto(chpl____wide_chpl_string _e0_args, chpl____wide_chpl_string preArg);
static chpl____wide_chpl_string _args_to_proto2(chpl____wide_chpl_string _e0_args, ioNewline* const _e1_args, chpl____wide_chpl_string preArg);
static chpl____wide_chpl_string _args_to_proto3(chpl____wide_chpl_string _e0_args, int64_t _e1_args, ioNewline* const _e2_args, chpl____wide_chpl_string preArg);
static chpl____wide_chpl_string _args_to_proto4(chpl____wide_chpl_string _e0_args, _real64 _e1_args, chpl____wide_chpl_string _e2_args, int64_t _e3_args, ioNewline* const _e4_args, chpl____wide_chpl_string preArg);
static chpl____wide_chpl_string _args_to_proto5(chpl____wide_chpl_string _e0_args, _real64 _e1_args, chpl____wide_chpl_string _e2_args, ioNewline* const _e3_args, chpl____wide_chpl_string preArg);
static chpl____wide_chpl_string _args_to_proto6(chpl____wide_chpl_string _e0_args, c_string _e1_args, chpl____wide_chpl_string _e2_args, uint32_t _e3_args, chpl____wide_chpl_string _e4_args, taskState _e5_args, ioNewline* const _e6_args, chpl____wide_chpl_string preArg);
static void on_fn80(chpl____wide__ref_channel_T_dynamic_T* const this8, chpl____wide__ref_syserr* const _formal_tmp_error, chpl____wide__ref__tuple_1_star_chpl_string* const args);
static void on_fn81(chpl____wide__ref_channel_T_dynamic_T* const this8, chpl____wide__ref_syserr* const _formal_tmp_error, chpl____wide__ref__tuple_2_chpl_string_ioNewline* const args);
static void on_fn82(chpl____wide__ref_channel_T_dynamic_T* const this8, chpl____wide__ref_syserr* const _formal_tmp_error, chpl____wide__ref__tuple_3_chpl_string_int64_t_ioNewline* const args);
static void on_fn83(chpl____wide__ref_channel_T_dynamic_T* const this8, chpl____wide__ref_syserr* const _formal_tmp_error, chpl____wide__ref__tuple_5_chpl_string__real64_chpl_string_int64_t_ioNewline* const args);
static void on_fn84(chpl____wide__ref_channel_T_dynamic_T* const this8, chpl____wide__ref_syserr* const _formal_tmp_error, chpl____wide__ref__tuple_4_chpl_string__real64_chpl_string_ioNewline* const args);
static void on_fn85(chpl____wide__ref_channel_T_dynamic_T* const this8, chpl____wide__ref_syserr* const _formal_tmp_error, chpl____wide__ref__tuple_7_chpl_string_c_string_chpl_string_uint32_t_chpl_string_taskState_ioNewline* const args);
static void wrapon_fn80(_class_localson_fn80 c);
static void wrapon_fn81(_class_localson_fn81 c);
static void wrapon_fn82(_class_localson_fn82 c);
static void wrapon_fn83(_class_localson_fn83 c);
static void wrapon_fn84(_class_localson_fn84 c);
static void wrapon_fn85(_class_localson_fn85 c);
static chpl_bool writeln(_ref_channel_T_dynamic_T this8, chpl____wide_chpl_string _e0_args);
static chpl_bool writeln2(_ref_channel_T_dynamic_T this8, chpl____wide_chpl_string _e0_args, int64_t _e1_args);
static chpl_bool writeln3(_ref_channel_T_dynamic_T this8, chpl____wide_chpl_string _e0_args, _real64 _e1_args, chpl____wide_chpl_string _e2_args, int64_t _e3_args);
static chpl_bool writeln4(_ref_channel_T_dynamic_T this8, chpl____wide_chpl_string _e0_args, _real64 _e1_args, chpl____wide_chpl_string _e2_args);
static chpl_bool writeln5(_ref_channel_T_dynamic_T this8, chpl____wide_chpl_string _e0_args, c_string _e1_args, chpl____wide_chpl_string _e2_args, uint32_t _e3_args, chpl____wide_chpl_string _e4_args, taskState _e5_args);
static void write13(chpl____wide_chpl_string _e0_args);
static void writeln6(chpl____wide_chpl_string _e0_args);
static void writeln7(chpl____wide_chpl_string _e0_args, int64_t _e1_args);
static void writeln8(chpl____wide_chpl_string _e0_args, _real64 _e1_args, chpl____wide_chpl_string _e2_args, int64_t _e3_args);
static void writeln9(chpl____wide_chpl_string _e0_args, _real64 _e1_args, chpl____wide_chpl_string _e2_args);
static listNode_BaseArr _construct_listNode(chpl____wide_BaseArr* const data, listNode_BaseArr next, listNode_BaseArr meme);
static void chpl__auto_destroy_listNode(listNode_BaseArr this8);
static void chpl__auto_destroy_listNode2(listNode_BaseDom this8);
static void chpl__init_List(int64_t _ln, c_string _fn);
static list_BaseArr _construct_list(listNode_BaseArr first, listNode_BaseArr last, int64_t length2, list_BaseArr* const meme);
static list_BaseDom _construct_list2(listNode_BaseDom first, listNode_BaseDom last, int64_t length2, list_BaseDom* const meme);
static void _local_remove(_ref_list_BaseDom this8, chpl____wide_BaseDom* const x);
static void _local_remove2(_ref_list_BaseArr this8, chpl____wide_BaseArr* const x);
static void remove3(chpl____wide__ref_list_BaseDom* const this8, chpl____wide_BaseDom* const x);
static void remove4(chpl____wide__ref_list_BaseArr* const this8, chpl____wide_BaseArr* const x);
static void _local_on_fn5(chpl____wide_listNode_BaseDom* const delete_tmp);
static void _local_on_fn6(chpl____wide_listNode_BaseArr* const delete_tmp);
static void _local_wrapon_fn5(_class_localson_fn86 c);
static void _local_wrapon_fn6(_class_localson_fn87 c);
static void on_fn86(chpl____wide_listNode_BaseDom* const delete_tmp);
static void on_fn87(chpl____wide_listNode_BaseArr* const delete_tmp);
static void wrapon_fn86(_class_localson_fn86 c);
static void wrapon_fn87(_class_localson_fn87 c);
static void append(chpl____wide__ref_list_BaseArr* const this8, chpl____wide_BaseArr* const e);
static void chpl__init_Math(int64_t _ln, c_string _fn);
static void chpl__init_Random(int64_t _ln, c_string _fn);
static SeedGenerators _construct_SeedGenerators(SeedGenerators* const meme);
static RandomStream_F _construct_RandomStream(int64_t seed, chpl____wide__syncvar_chpl_bool* const RandomStreamPrivate_lock_DOLLAR_, _real64 RandomStreamPrivate_cursor, int64_t RandomStreamPrivate_count, RandomStream_F meme);
static void chpl__auto_destroy_RandomStream(RandomStream_F this8);
static RandomStream_F RandomStream(int64_t seed);
static _real64 getNext(chpl____wide_RandomStream_F* const this8);
static void RandomStreamPrivate_init(RandomStream_F this8, int64_t seed);
static _real64 RandomPrivate_randlc(chpl____wide__ref__real64* const x, _real64 a);
static void chpl__init_Regexp(int64_t _ln, c_string _fn);
static void chpl__init_Sys(int64_t _ln, c_string _fn);
static void chpl__init_SysBasic(int64_t _ln, c_string _fn);
static void chpl__init_SysCTypes(int64_t _ln, c_string _fn);
static void chpl__init_Time(int64_t _ln, c_string _fn);
static Timer _construct_Timer(_timevalue time2, _real64 accumulated, chpl_bool running, Timer* const meme);
static void initialize12(_ref_Timer this8);
static void start(_ref_Timer this8);
static void stop(_ref_Timer this8);
static _real64 elapsed(_ref_Timer this8, TimeUnits unit);
static _real64 _convert_microseconds(TimeUnits unit, _real64 us);
static void chpl__init_Types(int64_t _ln, c_string _fn);
static int64_t min2(void);
static uint64_t min3(void);
static int64_t max2(void);
static void chpl__init_cobegin(int64_t _ln, c_string _fn);
int64_t chpl_gen_main(chpl_main_argument* const _arg);
static void chpl_user_main(chpl___EndCount _endCount);
static void chpl__autoDestroyGlobals(void);
static void on_fn88(chpl____wide__EndCount* const _endCount);
static void wrapon_fn88(_class_localson_fn88 c);
static void monteCarlo(void);
static void on_fn89(chpl____wide_RandomStream_F* const delete_tmp);
static void wrapon_fn89(_class_localson_fn89 c);
/*** Function Pointer Table ***/

chpl_fn_p chpl_ftable[] = {
  (chpl_fn_p)wrapon_fn,
  (chpl_fn_p)_local_wrapon_fn,
  (chpl_fn_p)wrapon_fn2,
  (chpl_fn_p)_local_wrapon_fn2,
  (chpl_fn_p)wrapon_fn3,
  (chpl_fn_p)wrapon_fn4,
  (chpl_fn_p)wrapon_fn5,
  (chpl_fn_p)wrapon_fn6,
  (chpl_fn_p)wrapon_fn7,
  (chpl_fn_p)wrapon_fn8,
  (chpl_fn_p)wrapon_fn9,
  (chpl_fn_p)wrapon_fn10,
  (chpl_fn_p)wrapon_fn11,
  (chpl_fn_p)wrapon_fn12,
  (chpl_fn_p)wrapon_fn13,
  (chpl_fn_p)wrapon_fn14,
  (chpl_fn_p)wrapon_fn15,
  (chpl_fn_p)wrapon_fn16,
  (chpl_fn_p)wrapon_fn17,
  (chpl_fn_p)wrapon_fn18,
  (chpl_fn_p)wrapon_fn19,
  (chpl_fn_p)wrapon_fn20,
  (chpl_fn_p)wrapon_fn21,
  (chpl_fn_p)wrapon_fn22,
  (chpl_fn_p)wrapon_fn23,
  (chpl_fn_p)wrapon_fn24,
  (chpl_fn_p)wrapon_fn25,
  (chpl_fn_p)wrapon_fn26,
  (chpl_fn_p)wrapon_fn27,
  (chpl_fn_p)wrapon_fn28,
  (chpl_fn_p)wrapcoforall_fn,
  (chpl_fn_p)wrapcoforall_fn2,
  (chpl_fn_p)wrapon_fn29,
  (chpl_fn_p)wrapon_fn30,
  (chpl_fn_p)_local_wrapon_fn3,
  (chpl_fn_p)wrapon_fn31,
  (chpl_fn_p)wrapon_fn32,
  (chpl_fn_p)wrapon_fn33,
  (chpl_fn_p)_local_wrapon_fn4,
  (chpl_fn_p)wrapon_fn34,
  (chpl_fn_p)wrapon_fn35,
  (chpl_fn_p)wrapon_fn36,
  (chpl_fn_p)wrapon_fn37,
  (chpl_fn_p)wrapon_fn38,
  (chpl_fn_p)wrapon_fn39,
  (chpl_fn_p)wrapon_fn40,
  (chpl_fn_p)wrapon_fn41,
  (chpl_fn_p)wrapon_fn42,
  (chpl_fn_p)wrapon_fn43,
  (chpl_fn_p)wrapon_fn44,
  (chpl_fn_p)wrapon_fn45,
  (chpl_fn_p)wrapon_fn46,
  (chpl_fn_p)wrapon_fn47,
  (chpl_fn_p)wrapon_fn48,
  (chpl_fn_p)wrapon_fn49,
  (chpl_fn_p)wrapon_fn50,
  (chpl_fn_p)wrapon_fn51,
  (chpl_fn_p)wrapon_fn52,
  (chpl_fn_p)wrapon_fn53,
  (chpl_fn_p)wrapon_fn54,
  (chpl_fn_p)wrapon_fn55,
  (chpl_fn_p)wrapon_fn56,
  (chpl_fn_p)wrapon_fn57,
  (chpl_fn_p)wrapon_fn58,
  (chpl_fn_p)wrapon_fn59,
  (chpl_fn_p)wrapon_fn60,
  (chpl_fn_p)wrapon_fn61,
  (chpl_fn_p)wrapon_fn62,
  (chpl_fn_p)wrapon_fn63,
  (chpl_fn_p)wrapon_fn64,
  (chpl_fn_p)wrapon_fn65,
  (chpl_fn_p)wrapon_fn66,
  (chpl_fn_p)wrapon_fn67,
  (chpl_fn_p)wrapon_fn68,
  (chpl_fn_p)wrapon_fn69,
  (chpl_fn_p)wrapon_fn70,
  (chpl_fn_p)wrapon_fn71,
  (chpl_fn_p)wrapon_fn72,
  (chpl_fn_p)wrapon_fn73,
  (chpl_fn_p)wrapon_fn74,
  (chpl_fn_p)wrapon_fn75,
  (chpl_fn_p)wrapon_fn76,
  (chpl_fn_p)wrapon_fn77,
  (chpl_fn_p)wrapon_fn78,
  (chpl_fn_p)wrapon_fn79,
  (chpl_fn_p)wrapon_fn80,
  (chpl_fn_p)wrapon_fn81,
  (chpl_fn_p)wrapon_fn82,
  (chpl_fn_p)wrapon_fn83,
  (chpl_fn_p)wrapon_fn84,
  (chpl_fn_p)wrapon_fn85,
  (chpl_fn_p)_local_wrapon_fn5,
  (chpl_fn_p)_local_wrapon_fn6,
  (chpl_fn_p)wrapon_fn86,
  (chpl_fn_p)wrapon_fn87,
  (chpl_fn_p)wrapon_fn88,
  (chpl_fn_p)wrapon_fn89
};
/*** Virtual Method Table ***/

chpl_fn_p chpl_vmtable[] = {
  /* _class_localson_fn */
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  /* _class_localson_fn2 */
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  /* _class_localson_fn3 */
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  /* _class_localson_fn4 */
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  /* _class_localson_fn5 */
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  /* _class_localson_fn6 */
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  /* _class_localson_fn7 */
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  /* _class_localson_fn8 */
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  /* _class_localson_fn9 */
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  /* _class_localson_fn10 */
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  /* _class_localscoforall_fn */
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  /* _class_localscoforall_fn2 */
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  /* _class_localson_fn11 */
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  /* _class_localson_fn12 */
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  /* _class_localson_fn13 */
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  /* _class_localson_fn14 */
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  /* _class_localson_fn15 */
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  /* _class_localson_fn16 */
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  /* _class_localson_fn17 */
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  /* _class_localson_fn18 */
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  /* _class_localson_fn19 */
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  /* _class_localson_fn20 */
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  /* _class_localson_fn21 */
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  /* _class_localson_fn22 */
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  /* _class_localson_fn23 */
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  /* _class_localson_fn24 */
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  /* _class_localson_fn25 */
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  /* _class_localson_fn26 */
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  /* _class_localson_fn27 */
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  /* _class_localson_fn28 */
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  /* chpl___OpaqueIndex */
  (chpl_fn_p)chpl__auto_destroy__OpaqueIndex,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  /* _ddata_chpl_TableEntry_chpl_taskID_t */
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  /* _ddata_chpl_string */
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  /* _ddata_chpldev_Task */
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  /* _ddata_locale */
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  /* _ddata_localesSignal */
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  /* chpl___EndCount */
  (chpl_fn_p)chpl__auto_destroy__EndCount,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  /* _class_localson_fn29 */
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  /* _class_localson_fn30 */
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  /* BaseDist */
  (chpl_fn_p)chpl__auto_destroy_BaseDist,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  /* _class_localson_fn31 */
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  /* BaseDom */
  (chpl_fn_p)chpl__auto_destroy_BaseDom,
  (chpl_fn_p)dsiLinksDistribution,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  /* _class_localson_fn32 */
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  /* _class_localson_fn33 */
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  /* _class_localson_fn34 */
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  /* _class_localson_fn35 */
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  /* _class_localson_fn36 */
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  /* _class_localson_fn37 */
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  /* _class_localson_fn38 */
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  /* _class_localson_fn39 */
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  /* BaseRectangularDom */
  (chpl_fn_p)chpl__auto_destroy_BaseRectangularDom,
  (chpl_fn_p)dsiLinksDistribution,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  /* BaseAssociativeDom */
  (chpl_fn_p)chpl__auto_destroy_BaseAssociativeDom,
  (chpl_fn_p)dsiLinksDistribution,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  /* BaseArr */
  (chpl_fn_p)chpl__auto_destroy_BaseArr,
  (chpl_fn_p)clearEntry,
  (chpl_fn_p)_preserveArrayElement,
  (chpl_fn_p)_removeArrayBackup,
  (chpl_fn_p)dsiReallocate,
  (chpl_fn_p)dsiGetBaseDom,
  (chpl_fn_p)_backupArray,
  (chpl_fn_p)dsiDestroyData,
  /* _class_localson_fn40 */
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  /* _class_localson_fn41 */
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  /* _class_localson_fn42 */
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  /* _class_localson_fn43 */
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  /* Writer */
  (chpl_fn_p)chpl__auto_destroy_Writer,
  (chpl_fn_p)writePrimitive3,
  (chpl_fn_p)writePrimitive4,
  (chpl_fn_p)writePrimitive2,
  (chpl_fn_p)writePrimitive,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  /* Reader */
  (chpl_fn_p)chpl__auto_destroy_Reader,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  /* StringWriter */
  (chpl_fn_p)chpl__auto_destroy_StringWriter,
  (chpl_fn_p)writePrimitive7,
  (chpl_fn_p)writePrimitive8,
  (chpl_fn_p)writePrimitive6,
  (chpl_fn_p)writePrimitive5,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  /* _class_localson_fn44 */
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  /* _class_localson_fn45 */
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  /* _class_localson_fn46 */
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  /* _class_localson_fn47 */
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  /* _class_localson_fn48 */
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  /* locale */
  (chpl_fn_p)chpl__auto_destroy_locale,
  (chpl_fn_p)chpl_id,
  (chpl_fn_p)getChild,
  (chpl_fn_p)getChildCount,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  /* AbstractLocaleModel */
  (chpl_fn_p)chpl__auto_destroy_AbstractLocaleModel,
  (chpl_fn_p)chpl_id,
  (chpl_fn_p)getChild,
  (chpl_fn_p)getChildCount,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  /* AbstractRootLocale */
  (chpl_fn_p)chpl__auto_destroy_AbstractRootLocale,
  (chpl_fn_p)chpl_id,
  (chpl_fn_p)getChild,
  (chpl_fn_p)getChildCount,
  (chpl_fn_p)localeIDtoLocale,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  /* localesSignal */
  (chpl_fn_p)chpl__auto_destroy_localesSignal,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  /* _class_localson_fn49 */
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  /* _syncvar_chpl_bool */
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  /* _syncvar_int64_t */
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  /* chpldev_taskTable_t */
  (chpl_fn_p)chpl__auto_destroy_chpldev_taskTable_t,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  /* _class_localson_fn50 */
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  /* DefaultAssociativeDom_chpl_taskID_t_F */
  (chpl_fn_p)chpl__auto_destroy_DefaultAssociativeDom,
  (chpl_fn_p)dsiLinksDistribution2,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  /* _class_localson_fn51 */
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  /* _class_localson_fn52 */
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  /* DefaultAssociativeArr_chpldev_Task_chpl_taskID_t_F */
  (chpl_fn_p)chpl__auto_destroy_DefaultAssociativeArr,
  (chpl_fn_p)clearEntry2,
  (chpl_fn_p)_preserveArrayElement2,
  (chpl_fn_p)_removeArrayBackup2,
  (chpl_fn_p)dsiReallocate,
  (chpl_fn_p)dsiGetBaseDom2,
  (chpl_fn_p)_backupArray2,
  (chpl_fn_p)dsiDestroyData,
  /* DefaultDist */
  (chpl_fn_p)chpl__auto_destroy_DefaultDist,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  /* DefaultRectangularDom_1_int64_t_F */
  (chpl_fn_p)chpl__auto_destroy_DefaultRectangularDom,
  (chpl_fn_p)dsiLinksDistribution3,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  /* DefaultRectangularArr_chpl_TableEntry_chpl_taskID_t_1_int64_t_F */
  (chpl_fn_p)chpl__auto_destroy_DefaultRectangularArr3,
  (chpl_fn_p)clearEntry,
  (chpl_fn_p)_preserveArrayElement,
  (chpl_fn_p)_removeArrayBackup,
  (chpl_fn_p)dsiReallocate4,
  (chpl_fn_p)dsiGetBaseDom5,
  (chpl_fn_p)_backupArray,
  (chpl_fn_p)dsiDestroyData4,
  /* DefaultRectangularArr_chpldev_Task_1_int64_t_F */
  (chpl_fn_p)chpl__auto_destroy_DefaultRectangularArr4,
  (chpl_fn_p)clearEntry,
  (chpl_fn_p)_preserveArrayElement,
  (chpl_fn_p)_removeArrayBackup,
  (chpl_fn_p)dsiReallocate5,
  (chpl_fn_p)dsiGetBaseDom6,
  (chpl_fn_p)_backupArray,
  (chpl_fn_p)dsiDestroyData5,
  /* DefaultRectangularArr_locale_1_int64_t_F */
  (chpl_fn_p)chpl__auto_destroy_DefaultRectangularArr,
  (chpl_fn_p)clearEntry,
  (chpl_fn_p)_preserveArrayElement,
  (chpl_fn_p)_removeArrayBackup,
  (chpl_fn_p)dsiReallocate2,
  (chpl_fn_p)dsiGetBaseDom3,
  (chpl_fn_p)_backupArray,
  (chpl_fn_p)dsiDestroyData2,
  /* DefaultRectangularArr_localesSignal_1_int64_t_F */
  (chpl_fn_p)chpl__auto_destroy_DefaultRectangularArr2,
  (chpl_fn_p)clearEntry,
  (chpl_fn_p)_preserveArrayElement,
  (chpl_fn_p)_removeArrayBackup,
  (chpl_fn_p)dsiReallocate3,
  (chpl_fn_p)dsiGetBaseDom4,
  (chpl_fn_p)_backupArray,
  (chpl_fn_p)dsiDestroyData3,
  /* _class_localson_fn53 */
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  /* _class_localson_fn54 */
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  /* _class_localson_fn55 */
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  /* _class_localson_fn56 */
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  /* LocaleModel */
  (chpl_fn_p)chpl__auto_destroy_LocaleModel,
  (chpl_fn_p)chpl_id2,
  (chpl_fn_p)getChild2,
  (chpl_fn_p)getChildCount2,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  /* RootLocale */
  (chpl_fn_p)chpl__auto_destroy_RootLocale,
  (chpl_fn_p)chpl_id3,
  (chpl_fn_p)getChild3,
  (chpl_fn_p)getChildCount3,
  (chpl_fn_p)localeIDtoLocale2,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  /* _class_localson_fn57 */
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  /* _class_localson_fn58 */
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  /* heap_c_string */
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  /* heap_chpl_bool */
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  /* heap_chpl_string */
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  /* object */
  (chpl_fn_p)chpl__auto_destroy_object,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  /* heap__tuple_6_star_chpl_string */
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  /* heap_locale */
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  /* heap__syncvar_int64_t */
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  /* _class_localson_fn59 */
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  /* _class_localson_fn60 */
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  /* _class_localson_fn61 */
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  /* _class_localson_fn62 */
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  /* _class_localson_fn63 */
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  /* _class_localson_fn64 */
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  /* _class_localson_fn65 */
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  /* _class_localson_fn66 */
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  /* _class_localson_fn67 */
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  /* _class_localson_fn68 */
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  /* _class_localson_fn69 */
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  /* _class_localson_fn70 */
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  /* _class_localson_fn71 */
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  /* _class_localson_fn72 */
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  /* _class_localson_fn73 */
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  /* _class_localson_fn74 */
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  /* _class_localson_fn75 */
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  /* _class_localson_fn76 */
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  /* _class_localson_fn77 */
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  /* _class_localson_fn78 */
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  /* _class_localson_fn79 */
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  /* _class_localson_fn80 */
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  /* _class_localson_fn81 */
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  /* _class_localson_fn82 */
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  /* _class_localson_fn83 */
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  /* _class_localson_fn84 */
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  /* _class_localson_fn85 */
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  /* listNode_BaseArr */
  (chpl_fn_p)chpl__auto_destroy_listNode,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  /* listNode_BaseDom */
  (chpl_fn_p)chpl__auto_destroy_listNode2,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  /* _class_localson_fn86 */
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  /* _class_localson_fn87 */
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  /* RandomStream_F */
  (chpl_fn_p)chpl__auto_destroy_RandomStream,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  /* _class_localson_fn88 */
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  /* _class_localson_fn89 */
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL
};
/*** Global Variables ***/

static chpl____wide_heap__syncvar_int64_t privatizeLock_DOLLAR_;
static chpl____wide_heap_chpl_bool chpl__testParOn;
static chpl____wide_locale rootLocale;
static chpl____wide_heap_locale origRootLocale;
static chpl____wide_heap_locale dummyLocale;
static int64_t numLocales;
static chpl____wide_chpldev_taskTable_t chpldev_taskTable;
static int64_t numThreadsPerLocale;
static int64_t dataParTasksPerLocale;
static chpl_bool dataParIgnoreRunningTasks;
static int64_t dataParMinGranularity;
static chpl____wide_DefaultDist defaultDist;
static chpl____wide_heap_chpl_bool doneCreatingLocales;
static chpl____wide_DefaultRectangularDom_1_int64_t_F chpl_emptyLocaleSpace;
static chpl____wide_DefaultRectangularArr_locale_1_int64_t_F chpl_emptyLocales;
static chpl_localeTreeRecord chpl_localeTree;
static chpl____wide_DefaultRectangularArr_locale_1_int64_t_F Locales;
static chpl____wide_DefaultRectangularDom_1_int64_t_F LocaleSpace;
static chpl_bool memTrack;
static chpl_bool memStats;
static chpl_bool memLeaks;
static chpl_bool memLeaksTable;
static uint64_t memMax;
static uint64_t memThreshold;
static chpl____wide_heap_c_string memLog;
static chpl____wide_heap_chpl_string s_memLog;
static chpl____wide_heap_c_string memLeaksLog;
static chpl____wide_heap_chpl_string s_memLeaksLog;
static int32_t LINENO;
static chpl_bool printModuleInitOrder;
static int32_t moduleInitLevel;
static chpl_bool chpl__init_DSIUtil_p;
static chpl_bool chpl__init_Error_p;
static chpl_bool chpl__init_IO_p;
static chpl_bool chpl__init_List_p;
static chpl_bool chpl__init_Math_p;
static chpl_bool chpl__init_Random_p;
static chpl_bool chpl__init_Regexp_p;
static chpl_bool chpl__init_SysBasic_p;
static chpl_bool chpl__init_SysCTypes_p;
static chpl_bool chpl__init_Time_p;
static chpl_bool chpl__init_Types_p;
static chpl_bool chpl__init_cobegin_p;
static chpl_bool chpl__init_AtomicsCommon_p;
static chpl_bool chpl__init_ChapelDistribution_p;
static chpl_bool chpl__init_ChapelDynDispHack_p;
static chpl_bool chpl__init_MemConsistency_p;
static chpl_bool chpl__init_Sys_p;
static chpl_bool chpl__init_NetworkAtomics_p;
static chpl_bool chpl__init_ChapelArray_p;
static chpl_bool chpl__init_ChapelIO_p;
static chpl_bool chpl__init_ChapelLocale_p;
static chpl_bool chpl__init_ChapelNumLocales_p;
static chpl_bool chpl__init_ChapelRangeBase_p;
static chpl_bool chpl__init_ChapelRange_p;
static chpl_bool chpl__init_ChapelTaskTable_p;
static chpl_bool chpl__init_CommDiagnostics_p;
static chpl_bool chpl__init_DefaultAssociative_p;
static chpl_bool chpl__init_DefaultRectangular_p;
static chpl_bool chpl__init_MemTracking_p;
static chpl_bool chpl__init_String_p;
static chpl_bool chpl__init_ChapelBase_p;
static chpl_bool chpl__init_ChapelStandard_p;
static chpl_bool chpl__init_ChapelTuple_p;
static chpl_bool chpl__init_ChapelUtil_p;
static chpl_bool chpl__init_LocaleTree_p;
static chpl_bool chpl__init_ChapelSyncvar_p;
static chpl_bool chpl__init_ChapelThreads_p;
static chpl_bool chpl__init_LocaleModel_p;
static chpl_bool chpl__init_PrintModuleInitOrder_p;
static chpl_bool chpl__init_LocalesArray_p;
static chpl_bool chpl__init_Atomics_p;
static int32_t IOHINT_NONE;
static int32_t IOHINT_RANDOM;
static int32_t IOHINT_SEQUENTIAL;
static int32_t IOHINT_CACHED;
static int32_t IOHINT_PARALLEL;
static chpl____wide_heap_chpl_string _r;
static chpl____wide_heap_chpl_string _rw;
static chpl____wide_heap_chpl_string _cw;
static chpl____wide_heap_chpl_string _cwr;
static _tuple_1_star_c_string _trues;
static _tuple_1_star_c_string _falses;
static chpl____wide_heap_chpl_string _i;
static chpl____wide_heap__tuple_6_star_chpl_string _arg_to_proto_names;
static channel_F_dynamic_T stdin2;
static channel_T_dynamic_T stdout2;
static channel_T_dynamic_T stderr2;
static SeedGenerators SeedGenerator;
static _real64 RandomPrivate_r23;
static _real64 RandomPrivate_t23;
static _real64 RandomPrivate_r46;
static _real64 RandomPrivate_t46;
static _real64 RandomPrivate_arand;
const int chpl_numGlobalsOnHeap = 15;

ptr_wide_ptr_t chpl_globals_registry[15];
const int chpl_heterogeneous = 0;

const char* chpl_mem_descs[] = {
  "this",
  "locale",
  "listNode(BaseArr)",
  "listNode(BaseDom)",
  "DefaultDist",
  "domain(1,int(64),false)",
  "_ic_these__ref_list_BaseArr",
  "_ddata(locale)",
  "[domain(1,int(64),false)] locale",
  "_ic_these__ref_rangeBase_int64_t_bounded_F",
  "_ic_these__ref_range_int64_t_bounded_F",
  "RootLocale",
  "_ic_these_DefaultRectangularDom_1_int64_t_F",
  "_ic_initOnLocales_AbstractRootLocale",
  "_ddata(localesSignal)",
  "[domain(1,int(64),false)] localesSignal",
  "_EndCount",
  "_ic_these_DefaultRectangularArr_localesSignal_1_int64_t_F",
  "localesSignal",
  "StringWriter",
  "LocaleModel",
  "_ddata(chpl_TableEntry(chpl_taskID_t))",
  "[domain(1,int(64),false)] chpl_TableEntry(chpl_taskID_t)",
  "DefaultAssociativeDom(chpl_taskID_t,false)",
  "_ddata(chpldev_Task)",
  "[domain(1,int(64),false)] chpldev_Task",
  "[DefaultAssociativeDom(chpl_taskID_t,false)] chpldev_Task",
  "_ic_these_DefaultRectangularArr_locale_1_int64_t_F",
  "chpldev_taskTable_t",
  "RandomStream(false)",
  "_ic__lookForSlots_DefaultAssociativeDom_chpl_taskID_t_F",
  "_ic_these_DefaultRectangularArr_chpl_TableEntry_chpl_taskID_t_1_int64_t_F",
  "_ic__fullSlots_DefaultAssociativeDom_chpl_taskID_t_F",
  "_ic_these_DefaultAssociativeDom_chpl_taskID_t_F",
  "_ic_these_DefaultRectangularArr_chpldev_Task_1_int64_t_F",
  "_ddata(string)",
  "bundled args",
  "global heap-converted data"
};
const int chpl_mem_numDescs = 38;
const int chpl_no_stdmodules = 0;

void* const chpl_private_broadcast_table[] = {
  &chpl_verbose_comm,
  &chpl_comm_diagnostics,
  &chpl_verbose_mem,
  &printModuleInitOrder,
  &LINENO,
  &numLocales,
  &numThreadsPerLocale,
  &dataParTasksPerLocale,
  &dataParIgnoreRunningTasks,
  &dataParMinGranularity,
  &chpl_emptyLocaleSpace,
  &chpl_emptyLocales,
  &LocaleSpace,
  &memTrack,
  &memStats,
  &memLeaks,
  &memLeaksTable,
  &memMax,
  &memThreshold,
  &SeedGenerator,
  &RandomPrivate_r23,
  &RandomPrivate_t23,
  &RandomPrivate_r46,
  &RandomPrivate_t46,
  &RandomPrivate_arand,
  &IOHINT_NONE,
  &IOHINT_RANDOM,
  &IOHINT_SEQUENTIAL,
  &IOHINT_CACHED,
  &IOHINT_PARALLEL,
  &_trues,
  &_falses,
  &stdin2,
  &stdout2,
  &stderr2
};
#include "chpl-gen-includes.h"
typedef chpl____wide_heap_locale *_ref_chpl____wide_heap_locale;
typedef struct chpl_chpl____wide__ref_chpl____wide_heap_locale_s {
  chpl_localeID_t locale;
  _ref_chpl____wide_heap_locale addr;
} chpl____wide__ref_chpl____wide_heap_locale;

typedef chpl____wide_heap_chpl_bool *_ref_chpl____wide_heap_chpl_bool;
typedef struct chpl_chpl____wide__ref_chpl____wide_heap_chpl_bool_s {
  chpl_localeID_t locale;
  _ref_chpl____wide_heap_chpl_bool addr;
} chpl____wide__ref_chpl____wide_heap_chpl_bool;

typedef chpl____wide_heap__syncvar_int64_t *_ref_chpl____wide_heap__syncvar_int64_t;
typedef struct chpl_chpl____wide__ref_chpl____wide_heap__syncvar_int64_t_s {
  chpl_localeID_t locale;
  _ref_chpl____wide_heap__syncvar_int64_t addr;
} chpl____wide__ref_chpl____wide_heap__syncvar_int64_t;

typedef chpl____wide_heap_c_string *_ref_chpl____wide_heap_c_string;
typedef struct chpl_chpl____wide__ref_chpl____wide_heap_c_string_s {
  chpl_localeID_t locale;
  _ref_chpl____wide_heap_c_string addr;
} chpl____wide__ref_chpl____wide_heap_c_string;

typedef chpl____wide_heap_chpl_string *_ref_chpl____wide_heap_chpl_string;
typedef struct chpl_chpl____wide__ref_chpl____wide_heap_chpl_string_s {
  chpl_localeID_t locale;
  _ref_chpl____wide_heap_chpl_string addr;
} chpl____wide__ref_chpl____wide_heap_chpl_string;

typedef chpl____wide_heap__tuple_6_star_chpl_string *_ref_chpl____wide_heap__tuple_6_star_chpl_string;
typedef struct chpl_chpl____wide__ref_chpl____wide_heap__tuple_6_star_chpl_string_s {
  chpl_localeID_t locale;
  _ref_chpl____wide_heap__tuple_6_star_chpl_string addr;
} chpl____wide__ref_chpl____wide_heap__tuple_6_star_chpl_string;

typedef chpl_sync_aux_t *_ref_chpl_sync_aux_t;
typedef struct chpl_chpl____wide__ref_chpl_sync_aux_t_s {
  chpl_localeID_t locale;
  _ref_chpl_sync_aux_t addr;
} chpl____wide__ref_chpl_sync_aux_t;

typedef struct chpl_chpl____wide__nilType_s {
  chpl_localeID_t locale;
  _nilType addr;
} chpl____wide__nilType;

