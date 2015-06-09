#define DW_FISSION_SECT_COUNT 12
#define true                    1
#define false                   0
#define DW_ADDR_VERSION5   5
#define DW_CIE_ID 		~(0x0)
#define DW_CIE_VERSION		1 /* DWARF2 */
#define DW_CIE_VERSION3		3 /* DWARF3 */
#define DW_CIE_VERSION4		4 /* DWARF4 */
#define DW_CIE_VERSION5		5 /* DWARF5 */
#define DW_CU_VERSION2 2
#define DW_CU_VERSION3 3
#define DW_CU_VERSION4 4
#define DW_CU_VERSION5 5
#define DW_ARANGES_VERSION2 2
#define DW_LINE_VERSION2   2
#define DW_LINE_VERSION3   3
#define DW_LINE_VERSION4   4
#define DW_LINE_VERSION5   5
#define DW_LINE_STR_VERSION5   5
#define DW_LOC_VERSION5   5
#define DW_MACRO_VERSION5   5
#define DW_NAMES_VERSION5   5
#define DW_PUBNAMES_VERSION2 2
#define DW_PUBTYPES_VERSION2 2
#define DW_RANGES_VERSION5 5
#define DW_STR_OFFSETS_VERSION5   5
#define DW_SUP_VERSION5 5
#define DW_CU_INDEX_VERSION5 5
#define DW_TU_INDEX_VERSION5 5
#define DW_DLA_ABBREV_LIST      0x1e
#define DW_DLA_CHAIN            0x1f
#define DW_DLA_CU_CONTEXT       0x20
#define DW_DLA_FRAME            0x21
#define DW_DLA_GLOBAL_CONTEXT   0x22
#define DW_DLA_FILE_ENTRY       0x23
#define DW_DLA_LINE_CONTEXT     0x24
#define DW_DLA_LOC_CHAIN        0x25
#define DW_DLA_HASH_TABLE       0x26
#define DW_DLA_FUNC_CONTEXT     0x27
#define DW_DLA_TYPENAME_CONTEXT 0x28
#define DW_DLA_VAR_CONTEXT      0x29
#define DW_DLA_WEAK_CONTEXT     0x2a
#define DW_DLA_PUBTYPES_CONTEXT 0x2b  /* DWARF3 */
#define DW_DLA_HASH_TABLE_ENTRY 0x2c
#define DW_DLA_FISSION_PERCU    0x2d
#define MAX_DW_DLA		0x38
#define DW_EXTENDED_OPCODE   0
#define MAX_LINE_DIFF       UINT_MAX
#define DW_LNE_LEN_MAX   100
#define DW_DEBUG_FRAME_VERSION     1 /* DWARF2 */
#define DW_DEBUG_FRAME_VERSION3    3 /* DWARF3 */
#define DW_DEBUG_FRAME_VERSION4    4 /* DWARF4 */
#define DW_DEBUG_FRAME_AUGMENTER_STRING     	"mti v1"
#define DW_CIE_OFFSET		~(0x0)
#define DW_EMPTY_STRING		""
#define DW_FRAME_INSTR_OPCODE_SHIFT		6
#define DW_FRAME_INSTR_OFFSET_MASK		0x3f
#define LOP_EXTENDED 1
#define LOP_DISCARD  2
#define LOP_STANDARD 3
#define LOP_SPECIAL  4
#define MAX_LINE_OP_CODE  255
#define DWARF_MAX_DEBUG_SECTIONS 30
#define CU_VERSION_STAMP_SIZE   sizeof(Dwarf_Half)
#define CU_ADDRESS_SIZE_SIZE    sizeof(Dwarf_Small)
#define ORIGINAL_DWARF_OFFSET_SIZE  4
#define DISTINGUISHED_VALUE  0xffffffff
#define DISTINGUISHED_VALUE_OFFSET_SIZE 8
#define ELF_MAGIC	0x012b649e
#define DW_PR_XZEROS "08"

#ifndef DW_REG_TABLE_SIZE
#define DW_REG_TABLE_SIZE  66
#endif

#ifndef DW_FRAME_REG_INITIAL_VALUE
#define DW_FRAME_REG_INITIAL_VALUE DW_FRAME_SAME_VAL
#endif

#define DW_FRAME_UNDEFINED_VAL          1034
#define DW_FRAME_SAME_VAL               1035
#define DW_FRAME_CFA_COL3               1436
#define DW_EXPR_OFFSET 0  /* DWARF2 only sees this. */
#define DW_EXPR_VAL_OFFSET 1
#define DW_EXPR_EXPRESSION 2
#define DW_EXPR_VAL_EXPRESSION 3
#define DW_DLA_STRING          0x01     /* char* */
#define DW_DLA_LOC             0x02     /* Dwarf_Loc */
#define DW_DLA_LOCDESC         0x03     /* Dwarf_Locdesc */
#define DW_DLA_ELLIST          0x04     /* Dwarf_Ellist (not used)*/
#define DW_DLA_BOUNDS          0x05     /* Dwarf_Bounds (not used) */
#define DW_DLA_BLOCK           0x06     /* Dwarf_Block */
#define DW_DLA_DEBUG           0x07     /* Dwarf_Debug */
#define DW_DLA_DIE             0x08     /* Dwarf_Die */
#define DW_DLA_LINE            0x09     /* Dwarf_Line */
#define DW_DLA_ATTR            0x0a     /* Dwarf_Attribute */
#define DW_DLA_TYPE            0x0b     /* Dwarf_Type  (not used) */
#define DW_DLA_SUBSCR          0x0c     /* Dwarf_Subscr (not used) */
#define DW_DLA_GLOBAL          0x0d     /* Dwarf_Global */
#define DW_DLA_ERROR           0x0e     /* Dwarf_Error */
#define DW_DLA_LIST            0x0f     /* a list */
#define DW_DLA_LINEBUF         0x10     /* Dwarf_Line* (not used) */
#define DW_DLA_ARANGE          0x11     /* Dwarf_Arange */
#define DW_DLA_ABBREV          0x12     /* Dwarf_Abbrev */
#define DW_DLA_FRAME_OP        0x13     /* Dwarf_Frame_Op */
#define DW_DLA_CIE             0x14     /* Dwarf_Cie */
#define DW_DLA_FDE             0x15     /* Dwarf_Fde */
#define DW_DLA_LOC_BLOCK       0x16     /* Dwarf_Loc Block (not used) */
#define DW_DLA_FRAME_BLOCK     0x17     /* Dwarf_Frame Block (not used) */
#define DW_DLA_FUNC            0x18     /* Dwarf_Func */
#define DW_DLA_TYPENAME        0x19     /* Dwarf_Type */
#define DW_DLA_VAR             0x1a     /* Dwarf_Var */
#define DW_DLA_WEAK            0x1b     /* Dwarf_Weak */
#define DW_DLA_ADDR            0x1c     /* Dwarf_Addr sized entries */
#define DW_DLA_RANGES          0x1d     /* Dwarf_Ranges */
#define DW_DLA_GDBINDEX        0x37     /* Dwarf_Gdbindex */
#define DW_DLA_XU_INDEX        0x38     /* Dwarf_Xu_Index_Header */
#define DW_CIE_AUGMENTER_STRING_V0              "z"
#define DW_DLC_READ        0        /* read only access */
#define DW_DLC_WRITE       1        /* write only access */
#define DW_DLC_RDWR        2        /* read/write access NOT SUPPORTED*/
#define DW_DLC_SIZE_64              0x40000000 /* 64-bit address-size target */
#define DW_DLC_SIZE_32              0x20000000 /* 32-bit address-size target */
#define DW_DLC_OFFSET_SIZE_64       0x10000000 /* 64-bit offset-size DWARF */
#define DW_DLC_STREAM_RELOCATIONS   0x02000000
#define DW_DLC_OFFSET32             0x00010000 /* use 32-bit sec offsets */
#define DW_DLC_OFFSET64             0x10000000 /* use 64-bit sec offsets */
#define DW_DLC_POINTER32            0x20000000 /* use 4 for address_size */
#define DW_DLC_POINTER64            0x40000000 /* use 8 for address_size */
#define DW_DLC_IRIX_OFFSET64        0x00200000 /* use non-std IRIX 64bitoffset headers  */
#define DW_DLC_SYMBOLIC_RELOCATIONS 0x04000000
#define DW_DLC_TARGET_BIGENDIAN     0x08000000 /* Big    endian target */
#define DW_DLC_TARGET_LITTLEENDIAN  0x00100000 /* Little endian target */
#define DW_DLS_BACKWARD   -1       /* slide backward to find line */
#define DW_DLS_NOSLIDE     0       /* match exactly without sliding */
#define DW_DLS_FORWARD     1       /* slide forward to find line */
#define DW_DLE_NE          0     /* no error */
#define DW_DLE_VMM         1     /* dwarf format/library version mismatch */
#define DW_DLE_MAP         2     /* memory map failure */
#define DW_DLE_LEE         3     /* libelf error */
#define DW_DLE_NDS         4     /* no debug section */
#define DW_DLE_NLS         5     /* no line section */
#define DW_DLE_ID          6     /* invalid descriptor for query */
#define DW_DLE_IOF         7     /* I/O failure */
#define DW_DLE_MAF         8     /* memory allocation failure */
#define DW_DLE_IA          9     /* invalid argument */
#define DW_DLE_MDE         10     /* mangled debugging entry */
#define DW_DLE_MLE         11     /* mangled line number entry */
#define DW_DLE_FNO         12     /* file not open */
#define DW_DLE_FNR         13     /* file not a regular file */
#define DW_DLE_FWA         14     /* file open with wrong access */
#define DW_DLE_NOB         15     /* not an object file */
#define DW_DLE_MOF         16     /* mangled object file header */
#define DW_DLE_EOLL        17     /* end of location list entries */
#define DW_DLE_NOLL        18     /* no location list section */
#define DW_DLE_BADOFF      19     /* Invalid offset */
#define DW_DLE_EOS         20     /* end of section  */
#define DW_DLE_ATRUNC      21     /* abbreviations section appears truncated*/
#define DW_DLE_BADBITC     22     /* Address size passed to dwarf bad*/
#define DW_DLE_DBG_ALLOC                        23
#define DW_DLE_FSTAT_ERROR                      24
#define DW_DLE_FSTAT_MODE_ERROR                 25
#define DW_DLE_INIT_ACCESS_WRONG                26
#define DW_DLE_ELF_BEGIN_ERROR                  27
#define DW_DLE_ELF_GETEHDR_ERROR                28
#define DW_DLE_ELF_GETSHDR_ERROR                29
#define DW_DLE_ELF_STRPTR_ERROR                 30
#define DW_DLE_DEBUG_INFO_DUPLICATE             31
#define DW_DLE_DEBUG_INFO_NULL                  32
#define DW_DLE_DEBUG_ABBREV_DUPLICATE           33
#define DW_DLE_DEBUG_ABBREV_NULL                34
#define DW_DLE_DEBUG_ARANGES_DUPLICATE          35
#define DW_DLE_DEBUG_ARANGES_NULL               36
#define DW_DLE_DEBUG_LINE_DUPLICATE             37
#define DW_DLE_DEBUG_LINE_NULL                  38
#define DW_DLE_DEBUG_LOC_DUPLICATE              39
#define DW_DLE_DEBUG_LOC_NULL                   40
#define DW_DLE_DEBUG_MACINFO_DUPLICATE          41
#define DW_DLE_DEBUG_MACINFO_NULL               42
#define DW_DLE_DEBUG_PUBNAMES_DUPLICATE         43
#define DW_DLE_DEBUG_PUBNAMES_NULL              44
#define DW_DLE_DEBUG_STR_DUPLICATE              45
#define DW_DLE_DEBUG_STR_NULL                   46
#define DW_DLE_CU_LENGTH_ERROR                  47
#define DW_DLE_VERSION_STAMP_ERROR              48
#define DW_DLE_ABBREV_OFFSET_ERROR              49
#define DW_DLE_ADDRESS_SIZE_ERROR               50
#define DW_DLE_DEBUG_INFO_PTR_NULL              51
#define DW_DLE_DIE_NULL                         52
#define DW_DLE_STRING_OFFSET_BAD                53
#define DW_DLE_DEBUG_LINE_LENGTH_BAD            54
#define DW_DLE_LINE_PROLOG_LENGTH_BAD           55
#define DW_DLE_LINE_NUM_OPERANDS_BAD            56
#define DW_DLE_LINE_SET_ADDR_ERROR              57 /* No longer used. */
#define DW_DLE_LINE_EXT_OPCODE_BAD              58
#define DW_DLE_DWARF_LINE_NULL                  59
#define DW_DLE_INCL_DIR_NUM_BAD                 60
#define DW_DLE_LINE_FILE_NUM_BAD                61
#define DW_DLE_ALLOC_FAIL                       62
#define DW_DLE_NO_CALLBACK_FUNC                 63
#define DW_DLE_SECT_ALLOC                       64
#define DW_DLE_FILE_ENTRY_ALLOC                 65
#define DW_DLE_LINE_ALLOC                       66
#define DW_DLE_FPGM_ALLOC                       67
#define DW_DLE_INCDIR_ALLOC                     68
#define DW_DLE_STRING_ALLOC                     69
#define DW_DLE_CHUNK_ALLOC                      70
#define DW_DLE_BYTEOFF_ERR                      71
#define DW_DLE_CIE_ALLOC                        72
#define DW_DLE_FDE_ALLOC                        73
#define DW_DLE_REGNO_OVFL                       74
#define DW_DLE_CIE_OFFS_ALLOC                   75
#define DW_DLE_WRONG_ADDRESS                    76
#define DW_DLE_EXTRA_NEIGHBORS                  77
#define    DW_DLE_WRONG_TAG                     78
#define DW_DLE_DIE_ALLOC                        79
#define DW_DLE_PARENT_EXISTS                    80
#define DW_DLE_DBG_NULL                         81
#define DW_DLE_DEBUGLINE_ERROR                  82
#define DW_DLE_DEBUGFRAME_ERROR                 83
#define DW_DLE_DEBUGINFO_ERROR                  84
#define DW_DLE_ATTR_ALLOC                       85
#define DW_DLE_ABBREV_ALLOC                     86
#define DW_DLE_OFFSET_UFLW                      87
#define DW_DLE_ELF_SECT_ERR                     88
#define DW_DLE_DEBUG_FRAME_LENGTH_BAD           89
#define DW_DLE_FRAME_VERSION_BAD                90
#define DW_DLE_CIE_RET_ADDR_REG_ERROR           91
#define DW_DLE_FDE_NULL                         92
#define DW_DLE_FDE_DBG_NULL                     93
#define DW_DLE_CIE_NULL                         94
#define DW_DLE_CIE_DBG_NULL                     95
#define DW_DLE_FRAME_TABLE_COL_BAD              96
#define DW_DLE_PC_NOT_IN_FDE_RANGE              97
#define DW_DLE_CIE_INSTR_EXEC_ERROR             98
#define DW_DLE_FRAME_INSTR_EXEC_ERROR           99
#define DW_DLE_FDE_PTR_NULL                    100
#define DW_DLE_RET_OP_LIST_NULL                101
#define DW_DLE_LINE_CONTEXT_NULL               102
#define DW_DLE_DBG_NO_CU_CONTEXT               103
#define DW_DLE_DIE_NO_CU_CONTEXT               104
#define DW_DLE_FIRST_DIE_NOT_CU                105
#define DW_DLE_NEXT_DIE_PTR_NULL               106
#define DW_DLE_DEBUG_FRAME_DUPLICATE           107
#define DW_DLE_DEBUG_FRAME_NULL                108
#define DW_DLE_ABBREV_DECODE_ERROR             109
#define DW_DLE_DWARF_ABBREV_NULL               110
#define DW_DLE_ATTR_NULL                       111
#define DW_DLE_DIE_BAD                         112
#define DW_DLE_DIE_ABBREV_BAD                  113
#define DW_DLE_ATTR_FORM_BAD                   114
#define DW_DLE_ATTR_NO_CU_CONTEXT              115
#define DW_DLE_ATTR_FORM_SIZE_BAD              116
#define DW_DLE_ATTR_DBG_NULL                   117
#define DW_DLE_BAD_REF_FORM                    118
#define DW_DLE_ATTR_FORM_OFFSET_BAD            119
#define DW_DLE_LINE_OFFSET_BAD                 120
#define DW_DLE_DEBUG_STR_OFFSET_BAD            121
#define DW_DLE_STRING_PTR_NULL                 122
#define DW_DLE_PUBNAMES_VERSION_ERROR          123
#define DW_DLE_PUBNAMES_LENGTH_BAD             124
#define DW_DLE_GLOBAL_NULL                     125
#define DW_DLE_GLOBAL_CONTEXT_NULL             126
#define DW_DLE_DIR_INDEX_BAD                   127
#define DW_DLE_LOC_EXPR_BAD                    128
#define DW_DLE_DIE_LOC_EXPR_BAD                129
#define DW_DLE_ADDR_ALLOC                      130
#define DW_DLE_OFFSET_BAD                      131
#define DW_DLE_MAKE_CU_CONTEXT_FAIL            132
#define DW_DLE_REL_ALLOC                       133
#define DW_DLE_ARANGE_OFFSET_BAD               134
#define DW_DLE_SEGMENT_SIZE_BAD                135
#define DW_DLE_ARANGE_LENGTH_BAD               136
#define DW_DLE_ARANGE_DECODE_ERROR             137
#define DW_DLE_ARANGES_NULL                    138
#define DW_DLE_ARANGE_NULL                     139
#define DW_DLE_NO_FILE_NAME                    140
#define DW_DLE_NO_COMP_DIR                     141
#define DW_DLE_CU_ADDRESS_SIZE_BAD             142
#define DW_DLE_INPUT_ATTR_BAD                  143
#define DW_DLE_EXPR_NULL                       144
#define DW_DLE_BAD_EXPR_OPCODE                 145
#define DW_DLE_EXPR_LENGTH_BAD                 146
#define DW_DLE_MULTIPLE_RELOC_IN_EXPR          147
#define DW_DLE_ELF_GETIDENT_ERROR              148
#define DW_DLE_NO_AT_MIPS_FDE                  149
#define DW_DLE_NO_CIE_FOR_FDE                  150
#define DW_DLE_DIE_ABBREV_LIST_NULL            151
#define DW_DLE_DEBUG_FUNCNAMES_DUPLICATE       152
#define DW_DLE_DEBUG_FUNCNAMES_NULL            153
#define DW_DLE_DEBUG_FUNCNAMES_VERSION_ERROR   154
#define DW_DLE_DEBUG_FUNCNAMES_LENGTH_BAD      155
#define DW_DLE_FUNC_NULL                       156
#define DW_DLE_FUNC_CONTEXT_NULL               157
#define DW_DLE_DEBUG_TYPENAMES_DUPLICATE       158
#define DW_DLE_DEBUG_TYPENAMES_NULL            159
#define DW_DLE_DEBUG_TYPENAMES_VERSION_ERROR   160
#define DW_DLE_DEBUG_TYPENAMES_LENGTH_BAD      161
#define DW_DLE_TYPE_NULL                       162
#define DW_DLE_TYPE_CONTEXT_NULL               163
#define DW_DLE_DEBUG_VARNAMES_DUPLICATE        164
#define DW_DLE_DEBUG_VARNAMES_NULL             165
#define DW_DLE_DEBUG_VARNAMES_VERSION_ERROR    166
#define DW_DLE_DEBUG_VARNAMES_LENGTH_BAD       167
#define DW_DLE_VAR_NULL                        168
#define DW_DLE_VAR_CONTEXT_NULL                169
#define DW_DLE_DEBUG_WEAKNAMES_DUPLICATE       170
#define DW_DLE_DEBUG_WEAKNAMES_NULL            171
#define DW_DLE_DEBUG_WEAKNAMES_VERSION_ERROR   172
#define DW_DLE_DEBUG_WEAKNAMES_LENGTH_BAD      173
#define DW_DLE_WEAK_NULL                       174
#define DW_DLE_WEAK_CONTEXT_NULL               175
#define DW_DLE_LOCDESC_COUNT_WRONG             176
#define DW_DLE_MACINFO_STRING_NULL             177
#define DW_DLE_MACINFO_STRING_EMPTY            178
#define DW_DLE_MACINFO_INTERNAL_ERROR_SPACE    179
#define DW_DLE_MACINFO_MALLOC_FAIL             180
#define DW_DLE_DEBUGMACINFO_ERROR              181
#define DW_DLE_DEBUG_MACRO_LENGTH_BAD          182
#define DW_DLE_DEBUG_MACRO_MAX_BAD             183
#define DW_DLE_DEBUG_MACRO_INTERNAL_ERR        184
#define DW_DLE_DEBUG_MACRO_MALLOC_SPACE        185
#define DW_DLE_DEBUG_MACRO_INCONSISTENT        186
#define DW_DLE_DF_NO_CIE_AUGMENTATION          187
#define DW_DLE_DF_REG_NUM_TOO_HIGH             188
#define DW_DLE_DF_MAKE_INSTR_NO_INIT           189
#define DW_DLE_DF_NEW_LOC_LESS_OLD_LOC         190
#define DW_DLE_DF_POP_EMPTY_STACK              191
#define DW_DLE_DF_ALLOC_FAIL                   192
#define DW_DLE_DF_FRAME_DECODING_ERROR         193
#define DW_DLE_DEBUG_LOC_SECTION_SHORT         194
#define DW_DLE_FRAME_AUGMENTATION_UNKNOWN      195
#define DW_DLE_PUBTYPE_CONTEXT                 196 /* Unused. */
#define DW_DLE_DEBUG_PUBTYPES_LENGTH_BAD       197
#define DW_DLE_DEBUG_PUBTYPES_VERSION_ERROR    198
#define DW_DLE_DEBUG_PUBTYPES_DUPLICATE        199
#define DW_DLE_FRAME_CIE_DECODE_ERROR          200
#define DW_DLE_FRAME_REGISTER_UNREPRESENTABLE  201
#define DW_DLE_FRAME_REGISTER_COUNT_MISMATCH   202
#define DW_DLE_LINK_LOOP                       203
#define DW_DLE_STRP_OFFSET_BAD                 204
#define DW_DLE_DEBUG_RANGES_DUPLICATE          205
#define DW_DLE_DEBUG_RANGES_OFFSET_BAD         206
#define DW_DLE_DEBUG_RANGES_MISSING_END        207
#define DW_DLE_DEBUG_RANGES_OUT_OF_MEM         208
#define DW_DLE_DEBUG_SYMTAB_ERR                209
#define DW_DLE_DEBUG_STRTAB_ERR                210
#define DW_DLE_RELOC_MISMATCH_INDEX            211
#define DW_DLE_RELOC_MISMATCH_RELOC_INDEX      212
#define DW_DLE_RELOC_MISMATCH_STRTAB_INDEX     213
#define DW_DLE_RELOC_SECTION_MISMATCH          214
#define DW_DLE_RELOC_SECTION_MISSING_INDEX     215
#define DW_DLE_RELOC_SECTION_LENGTH_ODD        216
#define DW_DLE_RELOC_SECTION_PTR_NULL          217
#define DW_DLE_RELOC_SECTION_MALLOC_FAIL       218
#define DW_DLE_NO_ELF64_SUPPORT                219
#define DW_DLE_MISSING_ELF64_SUPPORT           220
#define DW_DLE_ORPHAN_FDE                      221
#define DW_DLE_DUPLICATE_INST_BLOCK            222
#define DW_DLE_BAD_REF_SIG8_FORM               223
#define DW_DLE_ATTR_EXPRLOC_FORM_BAD           224
#define DW_DLE_FORM_SEC_OFFSET_LENGTH_BAD      225
#define DW_DLE_NOT_REF_FORM                    226
#define DW_DLE_DEBUG_FRAME_LENGTH_NOT_MULTIPLE 227
#define DW_DLE_REF_SIG8_NOT_HANDLED            228
#define DW_DLE_DEBUG_FRAME_POSSIBLE_ADDRESS_BOTCH 229
#define DW_DLE_LOC_BAD_TERMINATION             230
#define DW_DLE_SYMTAB_SECTION_LENGTH_ODD       231
#define DW_DLE_RELOC_SECTION_SYMBOL_INDEX_BAD  232
#define DW_DLE_RELOC_SECTION_RELOC_TARGET_SIZE_UNKNOWN  233
#define DW_DLE_SYMTAB_SECTION_ENTRYSIZE_ZERO   234
#define DW_DLE_LINE_NUMBER_HEADER_ERROR        235
#define DW_DLE_DEBUG_TYPES_NULL                236
#define DW_DLE_DEBUG_TYPES_DUPLICATE           237
#define DW_DLE_DEBUG_TYPES_ONLY_DWARF4         238
#define DW_DLE_DEBUG_TYPEOFFSET_BAD            239
#define DW_DLE_GNU_OPCODE_ERROR                240
#define DW_DLE_DEBUGPUBTYPES_ERROR             241
#define DW_DLE_AT_FIXUP_NULL                   242
#define DW_DLE_AT_FIXUP_DUP                    243
#define DW_DLE_BAD_ABINAME                     244
#define DW_DLE_TOO_MANY_DEBUG                  245
#define DW_DLE_DEBUG_STR_OFFSETS_DUPLICATE     246
#define DW_DLE_SECTION_DUPLICATION             247
#define DW_DLE_SECTION_ERROR                   248
#define DW_DLE_DEBUG_ADDR_DUPLICATE            249
#define DW_DLE_DEBUG_CU_UNAVAILABLE_FOR_FORM   250
#define DW_DLE_DEBUG_FORM_HANDLING_INCOMPLETE  251
#define DW_DLE_NEXT_DIE_PAST_END               252
#define DW_DLE_NEXT_DIE_WRONG_FORM             253
#define DW_DLE_NEXT_DIE_NO_ABBREV_LIST         254
#define DW_DLE_NESTED_FORM_INDIRECT_ERROR      255
#define DW_DLE_CU_DIE_NO_ABBREV_LIST           256
#define DW_DLE_MISSING_NEEDED_DEBUG_ADDR_SECTION 257
#define DW_DLE_ATTR_FORM_NOT_ADDR_INDEX        258
#define DW_DLE_ATTR_FORM_NOT_STR_INDEX         259
#define DW_DLE_DUPLICATE_GDB_INDEX             260
#define DW_DLE_ERRONEOUS_GDB_INDEX_SECTION     261
#define DW_DLE_GDB_INDEX_COUNT_ERROR           262
#define DW_DLE_GDB_INDEX_COUNT_ADDR_ERROR      263
#define DW_DLE_GDB_INDEX_INDEX_ERROR           264
#define DW_DLE_GDB_INDEX_CUVEC_ERROR           265
#define DW_DLE_DUPLICATE_CU_INDEX              266
#define DW_DLE_DUPLICATE_TU_INDEX              267
#define DW_DLE_XU_TYPE_ARG_ERROR               268
#define DW_DLE_XU_IMPOSSIBLE_ERROR             269
#define DW_DLE_XU_NAME_COL_ERROR               270
#define DW_DLE_XU_HASH_ROW_ERROR               271
#define DW_DLE_XU_HASH_INDEX_ERROR             272
#define DW_DLE_FAILSAFE_ERRVAL                 273
#define DW_DLE_ARANGE_ERROR                    274
#define DW_DLE_PUBNAMES_ERROR                  275
#define DW_DLE_FUNCNAMES_ERROR                 276
#define DW_DLE_TYPENAMES_ERROR                 277
#define DW_DLE_VARNAMES_ERROR                  278
#define DW_DLE_WEAKNAMES_ERROR                 279
#define DW_DLE_RELOCS_ERROR                    280
#define DW_DLE_ATTR_OUTSIDE_SECTION            281
#define DW_DLE_FISSION_INDEX_WRONG             282
#define DW_DLE_FISSION_VERSION_ERROR           283
#define DW_DLE_NEXT_DIE_LOW_ERROR              284
#define DW_DLE_CU_UT_TYPE_ERROR                285
#define DW_DLE_NO_SUCH_SIGNATURE_FOUND         286
#define DW_DLE_SIGNATURE_SECTION_NUMBER_WRONG  287
#define DW_DLE_ATTR_FORM_NOT_DATA8             288
#define DW_DLE_SIG_TYPE_WRONG_STRING           289
#define DW_DLE_MISSING_REQUIRED_TU_OFFSET_HASH 290
#define DW_DLE_MISSING_REQUIRED_CU_OFFSET_HASH 291
#define DW_DLE_DWP_MISSING_DWO_ID              292
#define DW_DLE_DWP_SIBLING_ERROR               293
#define DW_DLE_DEBUG_FISSION_INCOMPLETE        294
#define DW_DLE_FISSION_SECNUM_ERR              295
#define DW_DLE_DEBUG_MACRO_DUPLICATE           296
#define DW_DLE_DEBUG_NAMES_DUPLICATE           297
#define DW_DLE_DEBUG_LINE_STR_DUPLICATE        298
#define DW_DLE_DEBUG_SUP_DUPLICATE             299
#define DW_DLE_LAST        299
#define DW_DLE_LO_USER     0x10000
#define DW_FRAME_UNDEFINED_VAL          1034
#define DW_FRAME_SAME_VAL               1035
#define DW_DLV_BADADDR     (~(Dwarf_Addr)0)
#define DW_DLV_NOCOUNT     ((Dwarf_Signed)-1)
#define DW_DLV_BADOFFSET   (~(Dwarf_Off)0)
#define DW_DLV_NO_ENTRY -1
#define DW_DLV_OK        0
#define DW_DLV_ERROR     1
#define DW_DLX_NO_EH_OFFSET         (-1LL)
#define DW_DLX_EH_OFFSET_UNAVAILABLE  (-2LL)
#define DWARF_DRD_BUFFER_VERSION 2
#define NUM_DEBUG_SECTIONS      16



#define WHAT_IS_OPCODE(type,opcode,base,opcode_length,line_ptr,highest_std) \
    if ((opcode) < (base)) {                             \
        /*  we know we must treat as a standard op       \
            or a special case. */                        \
        if ((opcode) == DW_EXTENDED_OPCODE) {            \
            type = LOP_EXTENDED;                         \
				        } else if (((highest_std)+1) >= (base)) {        \
            /*  == Standard case: compile of             \
                dwarf_line.c and object                  \
                have same standard op codes set.         \
                == Special case: compile of dwarf_line.c \
                has things in standard op codes list     \
                in dwarf.h header not                    \
                in the object: handle this as a standard \
                op code in switch below.                 \
                The header special ops overlap the       \
                object standard ops.                     \
                The new standard op codes will not       \
                appear in the object. */                 \
            type = LOP_STANDARD;                         \
        } else  {                                        \
            /* These are standard opcodes in the object  \
            ** that were not defined  in the header      \
            ** at the time dwarf_line.c                  \
            ** was compiled. Provides the ability of     \
            ** out-of-date dwarf reader to read newer    \
            ** line table data transparently.            \
            */                                           \
            type = LOP_DISCARD;                          \
        }                                                \
		    } else {                                             \
        /* Is  a special op code. */                     \
        type =  LOP_SPECIAL;                             \
		    }

	/*  The following is from  the dwarf definition of 'ubyte'
	and is specifically  mentioned in section  6.2.5.1, page 54
	of the Rev 2.0.0 dwarf specification.
	*/

#define DECODE_LEB128_UWORD(ptr, value)               \
    do {                                              \
        Dwarf_Word uleblen;                           \
        value = _dwarf_decode_u_leb128(ptr,&uleblen); \
        ptr += uleblen;                               \
	    } while (0)

#define DECODE_LEB128_SWORD(ptr, value)               \
    do {                                              \
        Dwarf_Word sleblen;                           \
        value = _dwarf_decode_s_leb128(ptr,&sleblen); \
        ptr += sleblen;                               \
	    } while (0)

#define SKIP_LEB128_WORD(ptr)                     \
    do {                                          \
        if ((*(ptr++) & 0x80) != 0) {             \
            if ((*(ptr++) & 0x80) != 0) {         \
                if ((*(ptr++) & 0x80) != 0) {     \
                    if ((*(ptr++) & 0x80) != 0) { \
					                    }                             \
				                }                                 \
			            }                                     \
		        }                                         \
	    } while (0)


#define CHECK_DIE(die, error_ret_value)                          \
    do {                                                         \
        if (die == NULL) {                                       \
            _dwarf_error(NULL, error, DW_DLE_DIE_NULL);          \
            return(error_ret_value);                             \
		        }                                                        \
        if (die->di_cu_context == NULL) {                        \
            _dwarf_error(NULL, error, DW_DLE_DIE_NO_CU_CONTEXT); \
            return(error_ret_value);                             \
		        }                                                        \
        if (die->di_cu_context->cc_dbg == NULL) {                \
            _dwarf_error(NULL, error, DW_DLE_DBG_NULL);          \
            return(error_ret_value);                             \
		        }                                                        \
	    } while (0)

#define READ_UNALIGNED(dbg,dest,desttype, source, length) \
    do  {                                                 \
        BIGGEST_UINT _ltmp = 0;                           \
        dbg->de_copy_word( (char *)(&_ltmp) ,             \
            source, length) ;                             \
        dest = (desttype)_ltmp;                           \
		    } while (0)

#define SIGN_EXTEND(dest, length)                               \
    do {                                                        \
        if (*(Dwarf_Sbyte *)((char *)&dest + (length-1)) < 0) { \
            memcpy((char *)&dest+length,                        \
                "\xff\xff\xff\xff\xff\xff\xff\xff",             \
                sizeof(dest) - length);                         \
				        }                                                       \
		    } while (0)

#define READ_AREA_LENGTH(r_dbg,w_target,r_targtype,                      \
    rw_src_data_p,w_length_size,w_exten_size)                            \
    do {                                                                 \
        READ_UNALIGNED(r_dbg,w_target,r_targtype,                        \
        rw_src_data_p, ORIGINAL_DWARF_OFFSET_SIZE);                      \
        if (w_target == DISTINGUISHED_VALUE) {                           \
            /* dwarf3 64bit extension */                                 \
            w_length_size  = DISTINGUISHED_VALUE_OFFSET_SIZE;            \
            rw_src_data_p += ORIGINAL_DWARF_OFFSET_SIZE;                 \
            w_exten_size   = ORIGINAL_DWARF_OFFSET_SIZE;                 \
            READ_UNALIGNED(r_dbg,w_target,r_targtype,                    \
                rw_src_data_p, DISTINGUISHED_VALUE_OFFSET_SIZE);         \
            rw_src_data_p += DISTINGUISHED_VALUE_OFFSET_SIZE;            \
		        } else {                                                         \
            if (w_target == 0 && r_dbg->de_big_endian_object) {          \
                /* Might be IRIX: We have to distinguish between   */    \
                /* 32-bit DWARF format and IRIX 64-bit DWARF format. */  \
                if (r_dbg->de_length_size == 8) {                        \
                    /* IRIX 64 bit, big endian.  This test */            \
                    /* is not a truly precise test, a precise test */    \
                    /* would check if the target was IRIX.  */           \
                    READ_UNALIGNED(r_dbg,w_target,r_targtype,            \
                        rw_src_data_p, DISTINGUISHED_VALUE_OFFSET_SIZE); \
                    w_length_size  = DISTINGUISHED_VALUE_OFFSET_SIZE;    \
                    rw_src_data_p += DISTINGUISHED_VALUE_OFFSET_SIZE;    \
                    w_exten_size = 0;                                    \
				                } else {                                                 \
                    /* 32 bit, big endian */                             \
                    w_length_size  = ORIGINAL_DWARF_OFFSET_SIZE;         \
                    rw_src_data_p += w_length_size;                      \
                    w_exten_size = 0;                                    \
				                }                                                        \
			            } else {                                                     \
                /* Standard 32 bit dwarf2/dwarf3 */                      \
                w_exten_size   = 0;                                      \
                w_length_size  = ORIGINAL_DWARF_OFFSET_SIZE;             \
                rw_src_data_p += w_length_size;                          \
			            }                                                            \
		        }                                                                \
	    } while (0)


struct Dwarf_Sig8_s  {
	char signature[8];
};

typedef struct Dwarf_Sig8_s Dwarf_Sig8;
typedef unsigned long Dwarf_Word;
typedef signed long Dwarf_Sword;
typedef signed char Dwarf_Sbyte;
typedef unsigned char Dwarf_Ubyte;
typedef signed short Dwarf_Shalf;
typedef unsigned char *Dwarf_Byte_Ptr;
typedef unsigned Dwarf_ufixed;
typedef int Dwarf_sfixed;
typedef unsigned long long Dwarf_ufixed64;;
typedef long long Dwarf_sfixed64;
typedef struct Dwarf_Abbrev_List_s *Dwarf_Abbrev_List;
typedef struct Dwarf_CU_Context_s *Dwarf_CU_Context;
typedef struct Dwarf_Hash_Table_s *Dwarf_Hash_Table;
typedef struct Dwarf_Hash_Table_Entry_s *Dwarf_Hash_Table_Entry;
typedef struct Dwarf_Alloc_Hdr_s *Dwarf_Alloc_Hdr;
typedef int                 Dwarf_Bool;     /* boolean type */
typedef unsigned long long  Dwarf_Off;      /* 8 byte file offset */
typedef unsigned long long  Dwarf_Unsigned; /* 8 byte unsigned value*/
typedef unsigned short      Dwarf_Half;     /* 2 byte unsigned value */
typedef unsigned char       Dwarf_Small;    /* 1 byte unsigned value */
typedef signed   long long  Dwarf_Signed;   /* 8 byte signed value */
typedef unsigned long long  Dwarf_Addr;     /* target memory address */
typedef struct Dwarf_Debug_s*      Dwarf_Debug;
typedef struct Dwarf_Die_s*        Dwarf_Die;
typedef struct Dwarf_Line_s*       Dwarf_Line;
typedef struct Dwarf_Global_s*     Dwarf_Global;
typedef struct Dwarf_Func_s*       Dwarf_Func;
typedef struct Dwarf_Type_s*       Dwarf_Type;
typedef struct Dwarf_Var_s*        Dwarf_Var;
typedef struct Dwarf_Weak_s*       Dwarf_Weak;
typedef struct Dwarf_Error_s*      Dwarf_Error;
typedef struct Dwarf_Attribute_s*  Dwarf_Attribute;
typedef struct Dwarf_Abbrev_s*     Dwarf_Abbrev;
typedef struct Dwarf_Fde_s*        Dwarf_Fde;
typedef struct Dwarf_Cie_s*        Dwarf_Cie;
typedef struct Dwarf_Arange_s*     Dwarf_Arange;
typedef struct Dwarf_Gdbindex_s*   Dwarf_Gdbindex;
struct Dwarf_Xu_Index_Header_s;
typedef struct Dwarf_Xu_Index_Header_s* Dwarf_Xu_Index_Header;
typedef struct Dwarf_P_Debug_s*       Dwarf_P_Debug;
typedef struct Dwarf_P_Attribute_s*   Dwarf_P_Attribute;
typedef struct Dwarf_P_Fde_s*         Dwarf_P_Fde;
typedef struct Dwarf_P_Expr_s*        Dwarf_P_Expr;
typedef Dwarf_Unsigned                Dwarf_Tag;
typedef void*        Dwarf_Ptr;          /* host machine pointer */
typedef void(*Dwarf_Handler)(Dwarf_Error /*error*/, Dwarf_Ptr /*errarg*/);
typedef struct Dwarf_P_Section_Data_s *Dwarf_P_Section_Data;
typedef struct Dwarf_P_Inc_Dir_s *Dwarf_P_Inc_Dir;
typedef struct Dwarf_P_F_Entry_s *Dwarf_P_F_Entry;
typedef struct Dwarf_P_Cie_s *Dwarf_P_Cie;
typedef struct Dwarf_P_Line_s *Dwarf_P_Line;
typedef struct Dwarf_P_Simple_nameentry_s *Dwarf_P_Simple_nameentry;
typedef struct Dwarf_P_Simple_name_header_s *Dwarf_P_Simple_name_header;
typedef struct Dwarf_P_Arange_s *Dwarf_P_Arange;
typedef struct Dwarf_P_Per_Reloc_Sect_s *Dwarf_P_Per_Reloc_Sect;


struct Dwarf_P_Simple_name_header_s {
	Dwarf_P_Simple_nameentry sn_head;
	Dwarf_P_Simple_nameentry sn_tail;
	Dwarf_Signed sn_count;

	/*  Length that will be generated, not counting fixed header or
	trailer */
	Dwarf_Signed sn_net_len;
};


struct Dwarf_Debug_Fission_Per_CU_s  {
	const char   * pcu_type;
	Dwarf_Unsigned pcu_index;
	Dwarf_Sig8     pcu_hash;
	Dwarf_Unsigned pcu_offset[DW_FISSION_SECT_COUNT];
	Dwarf_Unsigned pcu_size[DW_FISSION_SECT_COUNT];
	Dwarf_Unsigned unused1;
	Dwarf_Unsigned unused2;
};

typedef struct Dwarf_Debug_Fission_Per_CU_s  Dwarf_Debug_Fission_Per_CU;

typedef unsigned long Dwarf_Word;
typedef signed long Dwarf_Sword;
typedef signed char Dwarf_Sbyte;
typedef unsigned char Dwarf_Ubyte;
typedef signed short Dwarf_Shalf;
typedef unsigned char *Dwarf_Byte_Ptr;
typedef unsigned __uint32_t;
typedef __uint32_t Dwarf_ufixed;
typedef int __int32_t;
typedef __int32_t Dwarf_sfixed;
typedef long long __int64_t;
typedef unsigned long long __uint64_t;
typedef __uint64_t Dwarf_ufixed64;
typedef __int64_t Dwarf_sfixed64;
typedef struct Dwarf_Abbrev_List_s *Dwarf_Abbrev_List;
typedef struct Dwarf_File_Entry_s *Dwarf_File_Entry;
typedef struct Dwarf_CU_Context_s *Dwarf_CU_Context;
typedef struct Dwarf_Hash_Table_s *Dwarf_Hash_Table;
typedef struct Dwarf_Hash_Table_Entry_s *Dwarf_Hash_Table_Entry;
typedef struct Dwarf_Alloc_Hdr_s *Dwarf_Alloc_Hdr;


struct Dwarf_File_Entry_s {
	Dwarf_Small *fi_file_name;
	Dwarf_Sword fi_dir_index;
	Dwarf_Unsigned fi_time_last_mod;
	Dwarf_Unsigned fi_file_length;
	Dwarf_File_Entry fi_next;
};


struct Dwarf_Reg_Rule_s {
	Dwarf_Sbyte ru_is_off;
	Dwarf_Sbyte ru_value_type;
	Dwarf_Half ru_register;
	Dwarf_Unsigned ru_offset_or_block_len;
	Dwarf_Small *ru_block;
};

typedef struct Dwarf_Frame_s *Dwarf_Frame;

struct Dwarf_Frame_s {
	Dwarf_Addr fr_loc;
	struct Dwarf_Reg_Rule_s fr_cfa_rule;
	unsigned long            fr_reg_count;
	struct Dwarf_Reg_Rule_s *fr_reg;
	Dwarf_Frame fr_next;
};


enum Dwarf_augmentation_type {
	aug_empty_string, /* Default empty augmentation string.  */
	aug_irix_exception_table,  /* IRIX  plain  "z",
							   for exception handling, IRIX CC compiler.
							   Proposed z1 z2 ... never implemented.  */
							   
	aug_gcc_eh_z,       /* gcc z augmentation,  (including
												   L R P variations). gcc 3.3 3.4 exception
												   handling in eh_frame.  */
	aug_irix_mti_v1,  /* IRIX "mti v1" augmentation string. Probably
																	 never in any released SGI-IRIX compiler. */
	aug_eh,           /* For gcc .eh_frame, "eh" is the string.,
																					   gcc 1,2, egcs. Older values.  */
	aug_armcc,  /* "armcc+" meaning the  cfa calculation
																								   is corrected to be standard (output by
																								   Arm C RVCT 3.0 SP1 and later). See
																								   http://sourceware.org/ml/gdb-patches/2006-12/msg00249.html
																								   for details. */
	aug_unknown,      /* Unknown augmentation, we cannot do much. */
	aug_past_last
};

typedef struct memory_list_s {
	struct memory_list_s *prev;
	struct memory_list_s *next;
} memory_list_t;

enum dwarf_sn_kind {
	dwarf_snk_pubname,  /* .debug_pubnames */
	dwarf_snk_funcname,  /* SGI extension. */
	dwarf_snk_weakname,  /* SGI extension. */
	dwarf_snk_typename,  /* SGI extension. */
	dwarf_snk_varname,   /* SGI extension. */
	dwarf_snk_pubtype,   /* .debug_pubtypes */
	dwarf_snk_entrycount /* this one must be last */
};

typedef int(*_dwarf_pro_reloc_name_func_ptr) (Dwarf_P_Debug dbg,
	int sec_index,
	Dwarf_Unsigned offset,/* r_offset */
	Dwarf_Unsigned symidx,
	enum Dwarf_Rel_Type type,
	int reltarget_length);

typedef int(*_dwarf_pro_transform_relocs_func_ptr) (Dwarf_P_Debug dbg,
	Dwarf_Signed *
	new_sec_count);

struct Dwarf_P_Per_Reloc_Sect_s {
	unsigned long pr_reloc_total_count;
	unsigned long pr_slots_per_block_to_alloc;
	int pr_sect_num_of_reloc_sect;
	struct Dwarf_P_Relocation_Block_s *pr_first_block;
	struct Dwarf_P_Relocation_Block_s *pr_last_block;
	unsigned long pr_block_count;
};

struct Dwarf_P_Marker_s {
	Dwarf_Unsigned ma_marker;
	Dwarf_Unsigned ma_offset;
};

typedef struct Dwarf_P_Marker_s * Dwarf_P_Marker;

struct Dwarf_P_String_Attr_s {
	Dwarf_Unsigned        sa_offset;
	Dwarf_Unsigned        sa_nbytes;
};

typedef struct Dwarf_P_String_Attr_s  * Dwarf_P_String_Attr;

struct Dwarf_P_Per_Sect_String_Attrs_s {
	int sect_sa_section_number;
	unsigned sect_sa_n_alloc;
	unsigned sect_sa_n_used;
	Dwarf_P_String_Attr sect_sa_list;
};

typedef struct Dwarf_P_Per_Sect_String_Attrs_s *Dwarf_P_Per_Sect_String_Attrs;

struct Dwarf_P_Line_Inits_s {
	unsigned pi_version;
	unsigned pi_default_is_stmt;
	unsigned pi_minimum_instruction_length;
	unsigned pi_maximum_operations_per_instruction;
	unsigned pi_opcode_base;
	int      pi_line_base;
	int      pi_line_range;
};

typedef int(*Dwarf_Callback_Func)(
	const char*     name,
	int             size,
	Dwarf_Unsigned  type,
	Dwarf_Unsigned  flags,
	Dwarf_Unsigned  link,
	Dwarf_Unsigned  info,
	Dwarf_Unsigned* sect_name_index,
	void *          user_data,
	int*            error);

typedef int(*_dwarf_pro_reloc_length_func_ptr) (Dwarf_P_Debug dbg,
												int sec_index, Dwarf_Unsigned offset,
												Dwarf_Unsigned start_symidx,
												Dwarf_Unsigned end_symidx,
												enum Dwarf_Rel_Type type,
												int reltarget_length);

typedef struct Dwarf_P_Die_s*         Dwarf_P_Die;

struct Dwarf_P_Die_s {
	Dwarf_Unsigned di_offset;
	char *di_abbrev;
	Dwarf_Word di_abbrev_nbytes;
	Dwarf_Tag di_tag;
	Dwarf_P_Die di_parent;
	Dwarf_P_Die di_child;
	Dwarf_P_Die di_last_child;
	Dwarf_P_Die di_left;
	Dwarf_P_Die di_right;
	Dwarf_P_Attribute di_attrs;
	Dwarf_P_Attribute di_last_attr;
	int di_n_attr;
	Dwarf_P_Debug di_dbg;
	Dwarf_Unsigned di_marker;
};


struct Dwarf_P_Debug_s {
	int de_version_magic_number;
	Dwarf_Handler de_errhand;
	void *    de_user_data;
	Dwarf_Ptr de_errarg;
	Dwarf_Callback_Func de_callback_func;
	Dwarf_Unsigned de_flags;
	Dwarf_P_Section_Data de_debug_sects;
	Dwarf_P_Section_Data de_current_active_section;
	Dwarf_Word de_n_debug_sect;
	Dwarf_P_F_Entry de_file_entries;
	Dwarf_P_F_Entry de_last_file_entry;
	Dwarf_Unsigned de_n_file_entries;
	Dwarf_P_Inc_Dir de_inc_dirs;
	Dwarf_P_Inc_Dir de_last_inc_dir;
	Dwarf_Unsigned de_n_inc_dirs;
	Dwarf_P_Line de_lines;
	Dwarf_P_Line de_last_line;
	Dwarf_P_Cie de_frame_cies;
	Dwarf_P_Cie de_last_cie;
	Dwarf_Unsigned de_n_cie;
	Dwarf_P_Fde de_frame_fdes;
	Dwarf_P_Fde de_last_fde;
	Dwarf_Unsigned de_n_fde;
	Dwarf_P_Die de_dies;
	char *de_strings;
	Dwarf_P_Arange de_arange;
	Dwarf_P_Arange de_last_arange;
	Dwarf_Sword de_arange_count;
	struct dw_macinfo_block_s *de_first_macinfo;
	struct dw_macinfo_block_s *de_current_macinfo;
	Dwarf_P_Section_Data de_first_debug_sect;
	struct Dwarf_P_Simple_name_header_s de_simple_name_headers[dwarf_snk_entrycount];
	struct Dwarf_P_Per_Reloc_Sect_s de_reloc_sect[NUM_DEBUG_SECTIONS];
	int de_reloc_next_to_return;
	int de_elf_sects[NUM_DEBUG_SECTIONS];
	Dwarf_Unsigned de_sect_name_idx[NUM_DEBUG_SECTIONS];
	int de_offset_reloc;
	int de_exc_reloc;
	int de_ptr_reloc;
	unsigned char de_irix_exc_augmentation;
	unsigned char de_offset_size;
	unsigned char de_pointer_size;
	unsigned char de_relocation_record_size;
	unsigned char de_64bit_extension;
	int de_output_version;
	int de_ar_data_attribute_form;
	int de_ar_ref_attr_form;
	_dwarf_pro_reloc_name_func_ptr de_reloc_name;
	_dwarf_pro_reloc_length_func_ptr de_reloc_pair;
	_dwarf_pro_transform_relocs_func_ptr de_transform_relocs_to_disk;
	unsigned long de_compose_avail;
	unsigned long de_compose_used_len;
	unsigned char de_same_endian;
	void *(*de_copy_word) (void *, const void *, size_t);
	Dwarf_P_Marker de_markers;
	unsigned de_marker_n_alloc;
	unsigned de_marker_n_used;
	int de_sect_sa_next_to_return;
	struct Dwarf_P_Per_Sect_String_Attrs_s de_sect_string_attr[NUM_DEBUG_SECTIONS];
	struct Dwarf_P_Line_Inits_s de_line_inits;
};

struct Dwarf_Cie_s {
	Dwarf_Unsigned ci_length;
	char *ci_augmentation;
	Dwarf_Small ci_code_alignment_factor;
	Dwarf_Sbyte ci_data_alignment_factor;
	Dwarf_Small ci_return_address_register;
	Dwarf_Small *ci_cie_start;
	Dwarf_Small *ci_cie_instr_start;
	Dwarf_Debug ci_dbg;
	Dwarf_Frame ci_initial_table;
	Dwarf_Cie ci_next;
	Dwarf_Small ci_length_size;
	Dwarf_Small ci_extension_size;
	Dwarf_Half ci_cie_version_number;
	enum Dwarf_augmentation_type ci_augmentation_type;
	Dwarf_Unsigned ci_gnu_eh_augmentation_len;
	Dwarf_Ptr      ci_gnu_eh_augmentation_bytes;
	unsigned char    ci_gnu_personality_handler_encoding;
	unsigned char    ci_gnu_lsda_encoding;
	unsigned char    ci_gnu_fde_begin_encoding;
	Dwarf_Addr     ci_gnu_personality_handler_addr;
	Dwarf_Unsigned ci_index;
	Dwarf_Small *  ci_section_ptr;
	Dwarf_Half   ci_address_size;
	Dwarf_Half   ci_segment_size;
};

struct Dwarf_Fde_s {
	Dwarf_Unsigned fd_length;
	Dwarf_Addr fd_cie_offset;
	Dwarf_Unsigned fd_cie_index;
	Dwarf_Cie fd_cie;
	Dwarf_Addr fd_initial_location;
	Dwarf_Small *fd_initial_loc_pos;
	Dwarf_Addr fd_address_range;
	Dwarf_Small *fd_fde_start;
	Dwarf_Small *fd_fde_instr_start;
	Dwarf_Debug fd_dbg;
	Dwarf_Signed fd_offset_into_exception_tables;
	Dwarf_Fde fd_next;
	Dwarf_Small fd_length_size;
	Dwarf_Small fd_extension_size;
	Dwarf_Small fd_is_eh;
	Dwarf_Unsigned fd_gnu_eh_augmentation_len;
	Dwarf_Ptr fd_gnu_eh_augmentation_bytes;
	Dwarf_Addr fd_gnu_eh_lsda; /* If 'L' augmentation letter
							   present:  is address of the
							   Language Specific Data Area (LSDA). If not 'L" is zero. */
	Dwarf_Small * fd_section_ptr;
	Dwarf_Unsigned fd_section_length;
	Dwarf_Unsigned fd_section_index;

};

struct Dwarf_Abbrev_s {
	Dwarf_Word ab_tag;
	Dwarf_Word ab_code;
	Dwarf_Small ab_has_child;
	Dwarf_Byte_Ptr ab_abbrev_ptr;
	Dwarf_Debug ab_dbg;
};

void _dwarf_error(Dwarf_Debug dbg, Dwarf_Error * error, Dwarf_Sword errval);

struct Dwarf_Error_s {
	Dwarf_Sword er_errval;
	int er_static_alloc;
};

extern struct Dwarf_Error_s _dwarf_failsafe_error;
typedef struct Dwarf_Line_Context_s *Dwarf_Line_Context;

struct Dwarf_Line_Context_s {
	Dwarf_File_Entry lc_file_entries;
	Dwarf_Sword lc_file_entry_count;
	Dwarf_Small *lc_include_directories;
	Dwarf_Sword lc_include_directories_count;
	Dwarf_Sword lc_line_count;
	Dwarf_Small *lc_compilation_directory;
	Dwarf_Debug lc_dbg;
	Dwarf_Half lc_version_number;
};

struct Dwarf_Line_s {
	Dwarf_Addr li_address;  /* pc value of machine instr */
	union addr_or_line_s {
		struct li_inner_s {
			Dwarf_Unsigned li_discriminator; /* New as of DWARF4 */
			Dwarf_Sword li_file;  /* int identifying src file */
			Dwarf_Sword li_line;  /* source file line number. */
			Dwarf_Half li_column; /* source file column number */
			Dwarf_Small li_isa;   /* New as of DWARF4. */
			unsigned char li_is_stmt : 1;
			unsigned char li_basic_block : 1;
			unsigned char li_end_sequence : 1;
			unsigned char li_prologue_end : 1;
			unsigned char li_epilogue_begin : 1;
			unsigned char li_is_addr_set : 1;
		} li_l_data;
		Dwarf_Off li_offset;  /* for rqs */
	} li_addr_line;
	Dwarf_Line_Context li_context; /* assoc Dwarf_Line_Context_s */
};


int _dwarf_line_address_offsets(Dwarf_Debug dbg,
	Dwarf_Die die,
	Dwarf_Addr ** addrs,
	Dwarf_Off ** offs,
	Dwarf_Unsigned * returncount,
	Dwarf_Error * err);

int _dwarf_internal_srclines(Dwarf_Die die,
	Dwarf_Line ** linebuf,
	Dwarf_Signed * count,
	Dwarf_Bool doaddrs,
	Dwarf_Bool dolines, Dwarf_Error * error);

struct Line_Table_File_Entry_s {
	Dwarf_Small *lte_filename;
	Dwarf_Unsigned lte_directory_index;
	Dwarf_Unsigned lte_last_modification_time;
	Dwarf_Unsigned lte_length_of_file;
};

struct Line_Table_Prefix_s {
	Dwarf_Unsigned pf_total_length;
	Dwarf_Half pf_length_field_length;
	Dwarf_Half pf_version;
	Dwarf_Unsigned pf_prologue_length;
	Dwarf_Small pf_minimum_instruction_length;
	Dwarf_Small *pf_line_ptr_start;
	Dwarf_Small *pf_line_ptr_end;
	Dwarf_Small *pf_line_prologue_start;
	Dwarf_Small pf_default_is_stmt;
	Dwarf_Ubyte pf_maximum_ops_per_instruction;
	Dwarf_Sbyte pf_line_base;
	Dwarf_Small pf_line_range;
	Dwarf_Small pf_opcode_base;
	Dwarf_Small *pf_opcode_length_table;
	Dwarf_Unsigned pf_include_directories_count;
	Dwarf_Small **pf_include_directories;
	Dwarf_Unsigned pf_files_count;
	struct Line_Table_File_Entry_s *pf_line_table_file_entries;
	Dwarf_Bool pf_std_op_count;
};

void dwarf_init_line_table_prefix(struct Line_Table_Prefix_s *pf);
void dwarf_free_line_table_prefix(struct Line_Table_Prefix_s *pf);

int dwarf_read_line_table_prefix(Dwarf_Debug dbg,
	Dwarf_Small * data_start,
	Dwarf_Unsigned data_length,
	Dwarf_Small ** updated_data_start_out,
	struct Line_Table_Prefix_s *prefix_out,
	Dwarf_Small ** bogus_bytes_ptr,
	Dwarf_Unsigned * bogus_bytes_count,
	Dwarf_Error * err,
	int * err_count_out);

typedef struct Dwarf_Global_Context_s *Dwarf_Global_Context;

struct Dwarf_Global_Context_s {
	unsigned char pu_length_size;
	unsigned char pu_extension_size;
	Dwarf_Off pu_offset_of_cu_header;
	Dwarf_Unsigned pu_info_length;
	Dwarf_Debug pu_dbg;
};

struct Dwarf_Global_s {
	Dwarf_Off gl_named_die_offset_within_cu;
	Dwarf_Small *gl_name;
	Dwarf_Global_Context gl_context;
};

int _dwarf_internal_get_pubnames_like_data(Dwarf_Debug dbg,
	Dwarf_Small *
	section_data_ptr,
	Dwarf_Unsigned
	section_length,
	Dwarf_Global ** globals,
	Dwarf_Signed * return_count,
	Dwarf_Error * error,
	int context_code,
	int global_code,
	int length_err_num,
	int version_err_num);

void
_dwarf_internal_globals_dealloc(Dwarf_Debug dbg, Dwarf_Global *dwgl,
Dwarf_Signed count,
int context_code,
int global_code,
int list_code);


struct Dwarf_Abbrev_List_s {
	Dwarf_Unsigned ab_code;
	Dwarf_Half ab_tag;
	Dwarf_Half ab_has_child;
	Dwarf_Byte_Ptr ab_abbrev_ptr;
	struct Dwarf_Abbrev_List_s *ab_next;
};

typedef struct Dwarf_Line_Context_s *Dwarf_Line_Context;

struct Dwarf_Die_s {
	Dwarf_Byte_Ptr di_debug_ptr;
	Dwarf_Abbrev_List di_abbrev_list;
	Dwarf_CU_Context di_cu_context;
	int  di_abbrev_code;
	Dwarf_Bool di_is_info;
};

struct Dwarf_Attribute_s {
	Dwarf_Half ar_attribute;             /* Attribute Value. */
	Dwarf_Half ar_attribute_form;        /* Attribute Form. */
	Dwarf_Half ar_attribute_form_direct;
	Dwarf_CU_Context ar_cu_context;
	Dwarf_Small *ar_debug_ptr;
	Dwarf_Die ar_die;/* Access to the DIE owning the attribute */
	Dwarf_Attribute ar_next;
};

typedef Dwarf_Unsigned BIGGEST_UINT;

Dwarf_Unsigned
_dwarf_decode_u_leb128(Dwarf_Small * leb128,
    Dwarf_Word * leb128_length);

Dwarf_Signed
_dwarf_decode_s_leb128(Dwarf_Small * leb128,
    Dwarf_Word * leb128_length);

int
_dwarf_get_size_of_val(Dwarf_Debug dbg,
    Dwarf_Unsigned form,
    Dwarf_Half cu_version,
    Dwarf_Half address_size,
    Dwarf_Small * val_ptr,
    int v_length_size,
    Dwarf_Unsigned *size_out,
    Dwarf_Error *error);

struct Dwarf_Hash_Table_Entry_s;

struct Dwarf_Hash_Table_s {
    unsigned long       tb_table_entry_count;
    unsigned long       tb_total_abbrev_count;
    struct  Dwarf_Hash_Table_Entry_s *tb_entries;
};

struct Dwarf_Hash_Table_Entry_s {
    Dwarf_Abbrev_List at_head;
};

Dwarf_Abbrev_List
_dwarf_get_abbrev_for_code(Dwarf_CU_Context cu_context,
    Dwarf_Unsigned code);


int _dwarf_string_valid(void *startptr, void *endptr);

Dwarf_Unsigned _dwarf_length_of_cu_header(Dwarf_Debug, Dwarf_Unsigned offset,Dwarf_Bool dinfo);

Dwarf_Unsigned _dwarf_length_of_cu_header_simple(Dwarf_Debug,Dwarf_Bool dinfo);

int  _dwarf_load_debug_info(Dwarf_Debug dbg, Dwarf_Error *error);

int  _dwarf_load_debug_types(Dwarf_Debug dbg, Dwarf_Error *error);

void _dwarf_free_abbrev_hash_table_contents(Dwarf_Debug dbg, struct Dwarf_Hash_Table_s* hash_table);

int _dwarf_get_address_size(Dwarf_Debug dbg, Dwarf_Die die);

int _dwarf_reference_outside_section(Dwarf_Die die, Dwarf_Small * startaddr, Dwarf_Small * pastend);

struct Dwarf_CU_Context_s {
	Dwarf_Debug cc_dbg;
	Dwarf_Unsigned cc_length;
	Dwarf_Small cc_length_size;
	Dwarf_Small cc_extension_size;
	Dwarf_Half cc_version_stamp;
	Dwarf_Unsigned cc_abbrev_offset;
	Dwarf_Small cc_address_size;
	Dwarf_Unsigned cc_debug_offset;
	Dwarf_Sig8  cc_type_signature;
	Dwarf_Unsigned cc_type_signature_offset;
	struct Dwarf_Debug_Fission_Per_CU_s  cc_dwp_offsets;
	Dwarf_Bool cc_type_signature_present; /* Meaning type signature
										  in TU header or, for CU header, signature in CU DIE. */
	Dwarf_Bool cc_addr_base_present;       /* Not TRUE in .dwo */
	Dwarf_Bool cc_str_ranges_base_present; /* Not TRUE in .dwo */
	Dwarf_Bool cc_str_offsets_base_present;
	Dwarf_Bool cc_cu_die_offset_present;
	Dwarf_Unsigned cc_addr_base;     /* Zero in .dwo */
	Dwarf_Unsigned cc_ranges_base;   /* Zero in .dwo */
	Dwarf_Unsigned cc_str_offsets_base;
	Dwarf_Unsigned cc_cu_die_global_sec_offset;
	Dwarf_Byte_Ptr cc_last_abbrev_ptr;
	Dwarf_Byte_Ptr cc_last_abbrev_endptr;
	Dwarf_Hash_Table cc_abbrev_hash_table;
	Dwarf_CU_Context cc_next;
	Dwarf_Bool cc_is_info; /* TRUE means context is
						   in debug_info, FALSE means is in debug_types.
						   FALSE only possible for DWARF4 .debug_types
						   section CUs.
						   For DWARF5 all DIEs are in .debug_info[.dwo]  */

	Dwarf_Half cc_unit_type; /* DW_UT_type or DW_UT_compile
							 or DW_UT_partial (from the CU header in DWARF5).
							 Zero until the value is known.
							 For DWARF 2,3,4 this is filled in initially
							 from the CU header and refined by inspecting the TAG
							 of the CU DIE to detect DW_UT_partial is applicable.  */
};

struct Dwarf_Section_s {
	Dwarf_Small *  dss_data;
	Dwarf_Unsigned dss_size;
	Dwarf_Unsigned dss_entrysize;
	Dwarf_Word     dss_index;
	Dwarf_Addr     dss_addr;
	Dwarf_Small    dss_data_was_malloc;
	Dwarf_Small    dss_is_in_use;
	Dwarf_Word     dss_link;
	Dwarf_Half     dss_reloc_index; /* Zero means ignore the reloc fields. */
	Dwarf_Small *  dss_reloc_data;
	Dwarf_Unsigned dss_reloc_size;
	Dwarf_Unsigned dss_reloc_entrysize;
	Dwarf_Addr     dss_reloc_addr;
	Dwarf_Addr     dss_reloc_symtab;
	Dwarf_Word     dss_reloc_link;
	struct Dwarf_Section_s *dss_symtab;
	const char * dss_name;
};

struct Dwarf_Harmless_s {
	unsigned dh_maxcount;
	unsigned dh_next_to_use;
	unsigned dh_first;
	unsigned dh_errs_count;
	char **  dh_errors;
};

struct Dwarf_Debug_InfoTypes_s {
	Dwarf_CU_Context de_cu_context;
	Dwarf_CU_Context de_cu_context_list;
	Dwarf_CU_Context de_cu_context_list_end;
	Dwarf_CU_Context de_offdie_cu_context;
	Dwarf_CU_Context de_offdie_cu_context_end;
	Dwarf_Unsigned de_last_offset;
	Dwarf_Byte_Ptr  de_last_di_ptr;
	Dwarf_Die  de_last_die;
};
typedef struct Dwarf_Debug_InfoTypes_s *Dwarf_Debug_InfoTypes;

struct Dwarf_dbg_sect_s {
	const char *ds_name;
	struct Dwarf_Section_s *ds_secdata;
	int ds_duperr;                     /* Error code for duplicated section */
	int ds_emptyerr;                   /* Error code for empty section */
	int ds_have_dwarf;                 /* Section contains DWARF */
};


typedef void(*dwarf_printf_callback_function_type)(void * user_pointer, const char * linecontent);

struct Dwarf_Printf_Callback_Info_s {
	void *                        dp_user_pointer;
	dwarf_printf_callback_function_type dp_fptr;
	char *                        dp_buffer;
	unsigned int                  dp_buffer_len;
	int                           dp_buffer_user_provided;
	void *                        dp_reserved;
};

struct Dwarf_Fission_Section_Offset_s {
	Dwarf_Unsigned dfs_offset;
	Dwarf_Unsigned dfs_size;
};

struct Dwarf_Fission_Per_CU_s {
	unsigned       dfp_index;
	Dwarf_Sig8     dfp_hash;
	struct Dwarf_Fission_Section_Offset_s dfp_offsets[DW_FISSION_SECT_COUNT];
};

struct Dwarf_Fission_Offsets_s {
	unsigned dfo_version; /* 2 is the only supported value.
						  defaults to zero meaning 'none'. */
	const char *   dfo_type;
	Dwarf_Bool     dfo_is_info; /* TRUE if the section is
								DWARF4 .debug_types for a "tu" . Else False. */
	Dwarf_Bool     dfo_is_type_unit; /* TRUE if this is
									 a type unit. DW_TAG_type_unit. */

	Dwarf_Unsigned dfo_columns;
	Dwarf_Unsigned dfo_entries;
	Dwarf_Unsigned dfo_slots;
	struct Dwarf_Fission_Per_CU_s *dfo_per_cu;
};


struct Dwarf_Debug_s {
	struct Dwarf_Obj_Access_Interface_s *de_obj_file;
	Dwarf_Handler de_errhand;
	Dwarf_Ptr de_errarg;
	struct Dwarf_Debug_InfoTypes_s de_info_reading;
	struct Dwarf_Debug_InfoTypes_s de_types_reading;
	Dwarf_Small de_length_size;
	Dwarf_Small de_pointer_size;
	Dwarf_Small de_assume_string_in_bounds;
	void * de_alloc_tree;
	Dwarf_Cie *de_cie_data;
	Dwarf_Signed de_cie_count;
	Dwarf_Cie *de_cie_data_eh;
	Dwarf_Signed de_cie_count_eh;
	Dwarf_Fde *de_fde_data;
	Dwarf_Unsigned de_fde_count;
	Dwarf_Fde *de_fde_data_eh;
	Dwarf_Unsigned de_fde_count_eh;
	struct Dwarf_Section_s de_debug_info;
	struct Dwarf_Section_s de_debug_types;
	struct Dwarf_Section_s de_debug_abbrev;
	struct Dwarf_Section_s de_debug_line;
	struct Dwarf_Section_s de_debug_line_str; /* New in DWARF5 */
	struct Dwarf_Section_s de_debug_loc;
	struct Dwarf_Section_s de_debug_aranges;
	struct Dwarf_Section_s de_debug_macinfo;
	struct Dwarf_Section_s de_debug_macro; /* New in DWARF5 */
	struct Dwarf_Section_s de_debug_names; /* New in DWARF5 */
	struct Dwarf_Section_s de_debug_pubnames;
	struct Dwarf_Section_s de_debug_str;
	struct Dwarf_Section_s de_debug_sup;  /* New in DWARF5 */
	struct Dwarf_Section_s de_debug_frame;
	struct Dwarf_Section_s de_debug_frame_eh_gnu;
	struct Dwarf_Section_s de_debug_pubtypes; /* DWARF3 .debug_pubtypes */
	struct Dwarf_Section_s de_debug_funcnames;
	struct Dwarf_Section_s de_debug_typenames;
	struct Dwarf_Section_s de_debug_varnames; /* SGI IRIX only. */
	struct Dwarf_Section_s de_debug_weaknames; /* SGI IRIX only. */
	struct Dwarf_Section_s de_debug_ranges;
	struct Dwarf_Section_s de_debug_str_offsets;
	struct Dwarf_Section_s de_debug_addr;
	struct Dwarf_Section_s de_debug_gdbindex;
	struct Dwarf_Section_s de_debug_cu_index;
	struct Dwarf_Section_s de_debug_tu_index;
	struct Dwarf_Section_s de_elf_symtab;
	struct Dwarf_Section_s de_elf_strtab;
	Dwarf_Xu_Index_Header  de_cu_hashindex_data;
	Dwarf_Xu_Index_Header  de_tu_hashindex_data;
	void *(*de_copy_word) (void *, const void *, size_t);
	unsigned char de_same_endian;
	unsigned char de_elf_must_close; /* If non-zero, then
									 it was dwarf_init (not dwarf_elf_init)
									 so must elf_end() */

	Dwarf_Half de_frame_rule_initial_value;
	Dwarf_Half de_frame_reg_rules_entry_count;
	Dwarf_Half de_frame_cfa_col_number;
	Dwarf_Half de_frame_same_value_number;
	Dwarf_Half de_frame_undefined_value_number;
	unsigned char de_big_endian_object;
	struct Dwarf_dbg_sect_s de_debug_sections[DWARF_MAX_DEBUG_SECTIONS];
	unsigned de_debug_sections_total_entries; /* Number actually used. */
	struct Dwarf_Harmless_s de_harmless_errors;
	struct Dwarf_Printf_Callback_Info_s  de_printf_callback;
};

int dwarf_printf(Dwarf_Debug dbg, const char * format, ...);

typedef struct Dwarf_Chain_s *Dwarf_Chain;

struct Dwarf_Chain_s {
	void *ch_item;
	Dwarf_Chain ch_next;
};

void *_dwarf_memcpy_swap_bytes(void *s1, const void *s2, size_t len);

int _dwarf_load_section(Dwarf_Debug, struct Dwarf_Section_s *, Dwarf_Error *);

int _dwarf_get_string_base_attr_value(Dwarf_Debug dbg,
	Dwarf_CU_Context context,
	Dwarf_Unsigned *sbase_out,
	Dwarf_Error *error);

int _dwarf_exract_string_offset_via_str_offsets(Dwarf_Debug dbg,
	Dwarf_Small *info_data_ptr,
	Dwarf_Half   attrnum,
	Dwarf_Half   attrform,
	Dwarf_CU_Context cu_context,
	Dwarf_Unsigned *str_sect_offset_out,
	Dwarf_Error *error);


int _dwarf_extract_address_from_debug_addr(Dwarf_Debug dbg,
	Dwarf_CU_Context context,
	Dwarf_Byte_Ptr info_ptr,
	Dwarf_Addr *addr_out,
	Dwarf_Error *error);

int _dwarf_extract_string_offset_via_str_offsets(Dwarf_Debug dbg,
	Dwarf_Small *info_data_ptr,
	Dwarf_Half   attrnum,
	Dwarf_Half   attrform,
	Dwarf_CU_Context cu_context,
	Dwarf_Unsigned *str_sect_offset_out,
	Dwarf_Error *error);

int _dwarf_get_base_and_size_given_signature(Dwarf_CU_Context *context,
	Dwarf_Sig8 *signature_in,
	/* xu_sect_index means DW_SECT_info etc. */
	Dwarf_Unsigned xu_sect_index,
	Dwarf_Unsigned *base_out,
	Dwarf_Unsigned *size_out,
	Dwarf_Error *err);

Dwarf_Bool _dwarf_file_has_debug_fission_cu_index(Dwarf_Debug dbg);
Dwarf_Bool _dwarf_file_has_debug_fission_tu_index(Dwarf_Debug dbg);
Dwarf_Bool _dwarf_file_has_debug_fission_index(Dwarf_Debug dbg);

int _dwarf_get_debugfission_for_offset(Dwarf_Debug dbg,
	Dwarf_Off   offset_wanted,
	Dwarf_Debug_Fission_Per_CU *  percu_out,
	Dwarf_Error *error);

Dwarf_Unsigned _dwarf_get_dwp_extra_offset(

struct Dwarf_Debug_Fission_Per_CU_s* dwp,
	unsigned whichone, Dwarf_Unsigned * size);


int _dwarf_get_fission_addition_die(Dwarf_Die die, int dw_sect_index,
	Dwarf_Unsigned* offset, Dwarf_Unsigned*size,
	Dwarf_Error *error);

Dwarf_Byte_Ptr _dwarf_calculate_section_end_ptr(Dwarf_CU_Context context);

typedef enum {
	ELF_K_NONE = 0,	/* must be first, 0 */
	ELF_K_AR,
	ELF_K_COFF,
	ELF_K_ELF,
	ELF_K_NUM		/* must be last */
} Elf_Kind;

typedef __int64 __time64_t;     /* 64-bit time value */
typedef __time64_t time_t;      /* time value */

typedef long off_t;

typedef struct {
	char*		ar_name;
	time_t		ar_date;
	long		ar_uid;
	long 		ar_gid;
	unsigned long	ar_mode;
	off_t		ar_size;
	char*		ar_rawname;
} Elf_Arhdr;

typedef struct Elf_Scn	Elf_Scn;

struct Elf {
	size_t	e_size;			/* file/member size */
	size_t	e_dsize;		/* size of memory image */
	Elf_Kind	e_kind;			/* kind of file */
	char*	e_data;			/* file/member data */
	char*	e_rawdata;		/* file/member raw data */
	size_t	e_idlen;		/* identifier size */
	int		e_fd;			/* file descriptor */
	unsigned	e_count;		/* activation count */
	Elf*	e_parent;		/* NULL if not an archive member */
	size_t	e_next;			/* 0 if not an archive member */
	size_t	e_base;			/* 0 if not an archive member */
	Elf*	e_link;			/* next archive member or NULL */
	Elf_Arhdr*	e_arhdr;		/* archive member header or NULL */
	size_t	e_off;			/* current member offset (for elf_begin) */
	Elf*	e_members;		/* linked list of active archive members */
	char*	e_symtab;		/* archive symbol table */
	size_t	e_symlen;		/* length of archive symbol table */
	char*	e_strtab;		/* archive string table */
	size_t	e_strlen;		/* length of archive string table */
	unsigned	e_class;		/* ELF class */
	unsigned	e_encoding;		/* ELF data encoding */
	unsigned	e_version;		/* ELF version */
	char*	e_ehdr;			/* ELF header */
	char*	e_phdr;			/* ELF program header table */
	size_t	e_phnum;		/* size of program header table */
	Elf_Scn*	e_scn_1;		/* first section */
	Elf_Scn*	e_scn_n;		/* last section */
	unsigned	e_elf_flags;		/* elf flags (ELF_F_*) */
	unsigned	e_ehdr_flags;		/* ehdr flags (ELF_F_*) */
	unsigned	e_phdr_flags;		/* phdr flags (ELF_F_*) */
	unsigned	e_readable : 1;		/* file is readable */
	unsigned	e_writable : 1;		/* file is writable */
	unsigned	e_disabled : 1;		/* e_fd has been disabled */
	unsigned	e_cooked : 1;		/* e_data was modified */
	unsigned	e_free_syms : 1;	/* e_symtab is malloc'ed */
	unsigned	e_unmap_data : 1;	/* e_data is mmap'ed */
	unsigned	e_memory : 1;		/* created by elf_memory() */
	long	e_magic;
};

typedef struct Elf Elf;
typedef struct Elf* dwarf_elf_handle;


typedef int                 Dwarf_Bool;     /* boolean type */
typedef unsigned long long  Dwarf_Off;      /* 8 byte file offset */
typedef unsigned long long  Dwarf_Unsigned; /* 8 byte unsigned value*/
typedef unsigned short      Dwarf_Half;     /* 2 byte unsigned value */
typedef unsigned char       Dwarf_Small;    /* 1 byte unsigned value */
typedef signed   long long  Dwarf_Signed;   /* 8 byte signed value */
typedef unsigned long long  Dwarf_Addr;     /* target memory address */
#define  DW_PR_DUx  "llx"
#define  DW_PR_DSx  "llx"
#define  DW_PR_DUu  "llu"
#define  DW_PR_DSd  "lld"


typedef void*        Dwarf_Ptr;          /* host machine pointer */

typedef struct {
	Dwarf_Unsigned  bl_len;         /* length of block */
	Dwarf_Ptr       bl_data;        /* uninterpreted data */
	Dwarf_Small     bl_from_loclist; /*non-0 if loclist, else debug_info*/
	Dwarf_Unsigned  bl_section_offset; /* Section (not CU) offset
										which 'data' comes from. */
} Dwarf_Block;

typedef struct {
	Dwarf_Small     lr_atom;        /* location operation */
	Dwarf_Unsigned  lr_number;      /* operand */
	Dwarf_Unsigned  lr_number2;     /* for OP_BREGx  and DW_OP_GNU_const_type*/
	Dwarf_Unsigned  lr_offset;      /* offset in locexpr for OP_BRA etc */
} Dwarf_Loc;

typedef struct {
	Dwarf_Addr      ld_lopc;        /* beginning of active range */
	Dwarf_Addr      ld_hipc;        /* end of active range */
	Dwarf_Half      ld_cents;       /* count of location records */
	Dwarf_Loc*      ld_s;           /* pointer to list of same */
	Dwarf_Small     ld_from_loclist;
	/* non-0 if loclist, else debug_info*/

	Dwarf_Unsigned  ld_section_offset; /* Section (not CU) offset
										where loc-expr begins*/
} Dwarf_Locdesc;

enum Dwarf_Ranges_Entry_Type {
	DW_RANGES_ENTRY,
	DW_RANGES_ADDRESS_SELECTION,
	DW_RANGES_END
};

typedef struct {
	Dwarf_Addr dwr_addr1;
	Dwarf_Addr dwr_addr2;
	enum Dwarf_Ranges_Entry_Type  dwr_type;
} Dwarf_Ranges;

typedef struct {
	Dwarf_Small     fp_base_op;
	Dwarf_Small     fp_extended_op;
	Dwarf_Half      fp_register;
	Dwarf_Unsigned  fp_offset;
	Dwarf_Off       fp_instr_offset;
} Dwarf_Frame_Op; /* DWARF2 */

typedef struct {
	Dwarf_Small     fp_base_op;
	Dwarf_Small     fp_extended_op;
	Dwarf_Half      fp_register;
	Dwarf_Unsigned  fp_offset_or_block_len;
	Dwarf_Small     *fp_expr_block;
	Dwarf_Off       fp_instr_offset;
} Dwarf_Frame_Op3;  /* DWARF3 and DWARF2 compatible */

typedef struct Dwarf_Frame_Op_List_s *Dwarf_Frame_Op_List;

struct Dwarf_Frame_Op_List_s {
	Dwarf_Frame_Op *fl_frame_instr;
	Dwarf_Frame_Op_List fl_next;
};

typedef struct Dwarf_Regtable_Entry_s {
	Dwarf_Small         dw_offset_relevant;
	Dwarf_Small         dw_value_type;
	Dwarf_Half          dw_regnum;
	Dwarf_Addr          dw_offset;
} Dwarf_Regtable_Entry;

typedef struct Dwarf_Regtable_s {
	struct Dwarf_Regtable_Entry_s rules[DW_REG_TABLE_SIZE];
} Dwarf_Regtable;

struct Dwarf_Reg_value3_s;
typedef struct Dwarf_Reg_value3_s Dwarf_Reg_Value3;

typedef struct Dwarf_Regtable_Entry3_s {
	Dwarf_Small         dw_offset_relevant;
	Dwarf_Small         dw_value_type;
	Dwarf_Half          dw_regnum;
	Dwarf_Unsigned      dw_offset_or_block_len;
	Dwarf_Ptr           dw_block_ptr;

}Dwarf_Regtable_Entry3;

typedef struct Dwarf_Regtable3_s {
	struct Dwarf_Regtable_Entry3_s   rt3_cfa_rule;

	Dwarf_Half                       rt3_reg_table_size;
	struct Dwarf_Regtable_Entry3_s * rt3_rules;
} Dwarf_Regtable3;

enum Dwarf_Rel_Type {
	dwarf_drt_none,        /* Should not get to caller */
	dwarf_drt_data_reloc,  /* Simple normal relocation. */
	dwarf_drt_segment_rel, /* Special reloc, exceptions. */
	/* dwarf_drt_first_of_length_pair  and drt_second
	are for for the  .word end - begin case. */
	dwarf_drt_first_of_length_pair,
	dwarf_drt_second_of_length_pair
};

typedef struct Dwarf_Relocation_Data_s  * Dwarf_Relocation_Data;

struct Dwarf_Relocation_Data_s {
	unsigned char drd_type;   /* Cast to/from Dwarf_Rel_Type
								to keep size small in struct. */
	unsigned char drd_length; /* Length in bytes of data being
								relocated. 4 for 32bit data,
								8 for 64bit data. */
	Dwarf_Unsigned       drd_offset; /* Where the data to reloc is. */
	Dwarf_Unsigned       drd_symbol_index;
};

typedef struct Dwarf_Debug_s*      Dwarf_Debug;
typedef struct Dwarf_Die_s*        Dwarf_Die;
typedef struct Dwarf_Line_s*       Dwarf_Line;
typedef struct Dwarf_Global_s*     Dwarf_Global;
typedef struct Dwarf_Func_s*       Dwarf_Func;
typedef struct Dwarf_Type_s*       Dwarf_Type;
typedef struct Dwarf_Var_s*        Dwarf_Var;
typedef struct Dwarf_Weak_s*       Dwarf_Weak;
typedef struct Dwarf_Error_s*      Dwarf_Error;
typedef struct Dwarf_Attribute_s*  Dwarf_Attribute;
typedef struct Dwarf_Abbrev_s*     Dwarf_Abbrev;
typedef struct Dwarf_Fde_s*        Dwarf_Fde;
typedef struct Dwarf_Cie_s*        Dwarf_Cie;
typedef struct Dwarf_Arange_s*     Dwarf_Arange;
typedef struct Dwarf_Gdbindex_s*   Dwarf_Gdbindex;
struct Dwarf_Xu_Index_Header_s;
typedef struct Dwarf_Xu_Index_Header_s* Dwarf_Xu_Index_Header;

typedef struct Dwarf_P_Debug_s*       Dwarf_P_Debug;
typedef struct Dwarf_P_Attribute_s*   Dwarf_P_Attribute;
typedef struct Dwarf_P_Fde_s*         Dwarf_P_Fde;
typedef struct Dwarf_P_Expr_s*        Dwarf_P_Expr;
typedef Dwarf_Unsigned                Dwarf_Tag;
typedef void(*Dwarf_Handler)(Dwarf_Error error, Dwarf_Ptr errarg);
typedef struct Dwarf_Obj_Access_Interface_s   Dwarf_Obj_Access_Interface;
typedef struct Dwarf_Obj_Access_Methods_s     Dwarf_Obj_Access_Methods;
typedef struct Dwarf_Obj_Access_Section_s     Dwarf_Obj_Access_Section;

struct Dwarf_Obj_Access_Section_s {
		Dwarf_Addr     addr;
		Dwarf_Unsigned type;
		Dwarf_Unsigned size;
		const char*    name;
		Dwarf_Unsigned link;
		Dwarf_Unsigned info;
		Dwarf_Unsigned entrysize;
	};

	typedef enum {
		DW_OBJECT_MSB,
		DW_OBJECT_LSB
	} Dwarf_Endianness;

	struct Dwarf_Obj_Access_Methods_s {
		int(*get_section_info)(void* obj, Dwarf_Half section_index,
			Dwarf_Obj_Access_Section* return_section, int* error);
		Dwarf_Endianness(*get_byte_order)(void* obj);
		Dwarf_Small(*get_length_size)(void* obj);
		Dwarf_Small(*get_pointer_size)(void* obj);
		Dwarf_Unsigned(*get_section_count)(void* obj);
		int(*load_section)(void* obj, Dwarf_Half section_index, Dwarf_Small** return_data, int* error);

		int(*relocate_a_section)(void* obj, Dwarf_Half section_index, Dwarf_Debug dbg, int* error);
	};

	struct Dwarf_Obj_Access_Interface_s {
		void* object;
		const Dwarf_Obj_Access_Methods * methods;
	};

enum Dwarf_Form_Class {
		DW_FORM_CLASS_UNKNOWN, DW_FORM_CLASS_ADDRESS,
		DW_FORM_CLASS_BLOCK, DW_FORM_CLASS_CONSTANT,
		DW_FORM_CLASS_EXPRLOC, DW_FORM_CLASS_FLAG,
		DW_FORM_CLASS_LINEPTR, DW_FORM_CLASS_LOCLISTPTR,
		DW_FORM_CLASS_MACPTR, DW_FORM_CLASS_RANGELISTPTR,
		DW_FORM_CLASS_REFERENCE, DW_FORM_CLASS_STRING,
		DW_FORM_CLASS_FRAMEPTR
	};

int dwarf_init2(char* fileName,
		Dwarf_Unsigned    access,
		Dwarf_Handler     errhand,
		Dwarf_Ptr         errarg,
		Dwarf_Debug*      dbg,
		Dwarf_Error*      error);

	int dwarf_init(int    fd,
		Dwarf_Unsigned    access,
		Dwarf_Handler     errhand,
		Dwarf_Ptr         errarg,
		Dwarf_Debug*      dbg,
		Dwarf_Error*      error);


	int dwarf_elf_init(dwarf_elf_handle elf,
		Dwarf_Unsigned    access,
		Dwarf_Handler     errhand,
		Dwarf_Ptr         errarg,
		Dwarf_Debug*      dbg,
		Dwarf_Error*      error);

	void dwarf_print_memory_stats(Dwarf_Debug  dbg);

	int dwarf_get_elf(Dwarf_Debug dbg,
		dwarf_elf_handle* return_elfptr,
		Dwarf_Error*      error);

	int dwarf_finish(Dwarf_Debug dbg, Dwarf_Error* error);


	int dwarf_object_init(Dwarf_Obj_Access_Interface* obj,
		Dwarf_Handler errhand,
		Dwarf_Ptr     errarg,
		Dwarf_Debug*  dbg,
		Dwarf_Error*  error);

	int dwarf_object_finish(Dwarf_Debug dbg,
		Dwarf_Error* error);

	int
		dwarf_get_die_section_name(Dwarf_Debug dbg,
		Dwarf_Bool    is_info,
		const char ** sec_name,
		Dwarf_Error * error);


	int dwarf_next_cu_header_d(Dwarf_Debug dbg,
		Dwarf_Bool      is_info,
		Dwarf_Unsigned* cu_header_length,
		Dwarf_Half*     version_stamp,
		Dwarf_Off*      abbrev_offset,
		Dwarf_Half*     address_size,
		Dwarf_Half*     length_size,
		Dwarf_Half*     extension_size,
		Dwarf_Sig8*     type_signature,
		Dwarf_Unsigned* typeoffset,
		Dwarf_Unsigned* next_cu_header_offset,
		Dwarf_Half    * header_cu_type,
		Dwarf_Error*    error);

	int dwarf_next_cu_header_b(Dwarf_Debug dbg,
		Dwarf_Unsigned* cu_header_length,
		Dwarf_Half*     version_stamp,
		Dwarf_Off*      abbrev_offset,
		Dwarf_Half*     address_size,
		Dwarf_Half*     length_size,
		Dwarf_Half*     extension_size,
		Dwarf_Unsigned* next_cu_header_offset,
		Dwarf_Error*    error);

	int dwarf_next_cu_header_c(Dwarf_Debug dbg,
		Dwarf_Bool      is_info,
		Dwarf_Unsigned* cu_header_length,
		Dwarf_Half*     version_stamp,
		Dwarf_Off*      abbrev_offset,
		Dwarf_Half*     address_size,
		Dwarf_Half*     length_size,
		Dwarf_Half*     extension_size,
		Dwarf_Sig8*     type_signature,
		Dwarf_Unsigned* typeoffset,
		Dwarf_Unsigned* next_cu_header_offset,
		Dwarf_Error*    error);
	/* The following is obsolete, though supported. November 2009. */
	int dwarf_next_cu_header(Dwarf_Debug /*dbg*/,
		Dwarf_Unsigned* /*cu_header_length*/,
		Dwarf_Half*     /*version_stamp*/,
		Dwarf_Off*      /*abbrev_offset*/,
		Dwarf_Half*     /*address_size*/,
		Dwarf_Unsigned* /*next_cu_header_offset*/,
		Dwarf_Error*    /*error*/);

	int dwarf_siblingof(Dwarf_Debug /*dbg*/,
		Dwarf_Die        /*die*/,
		Dwarf_Die*       /*return_siblingdie*/,
		Dwarf_Error*     /*error*/);
	/* dwarf_siblingof_b new October 2011. */
	int dwarf_siblingof_b(Dwarf_Debug /*dbg*/,
		Dwarf_Die        /*die*/,
		Dwarf_Bool       /*is_info*/,
		Dwarf_Die*       /*return_siblingdie*/,
		Dwarf_Error*     /*error*/);

	/* New 27 April 2015. */
	int dwarf_die_from_hash_signature(Dwarf_Debug dbg,
		Dwarf_Sig8 *     /*hash_sig*/,
		const char *     /*sig_type: "tu" or "cu"*/,
		Dwarf_Die*       /*returned_CU_die */,
		Dwarf_Error*     /*error*/);

	int dwarf_child(Dwarf_Die /*die*/,
		Dwarf_Die*       /*return_childdie*/,
		Dwarf_Error*     /*error*/);

	/*  Finding die given global (not CU-relative) offset.
	Applies only to debug_info. */
	int dwarf_offdie(Dwarf_Debug /*dbg*/,
		Dwarf_Off        /*offset*/,
		Dwarf_Die*       /*return_die*/,
		Dwarf_Error*     /*error*/);

	/* dwarf_offdie_b() new October 2011 */
	/*  Finding die given global (not CU-relative) offset.
	Applies to debug_info (is_info true) or debug_types (is_info false). */
	int dwarf_offdie_b(Dwarf_Debug /*dbg*/,
		Dwarf_Off        /*offset*/,
		Dwarf_Bool       /*is_info*/,
		Dwarf_Die*       /*return_die*/,
		Dwarf_Error*     /*error*/);

	Dwarf_Bool dwarf_get_die_infotypes_flag(Dwarf_Die /*die*/);

	int dwarf_tag(Dwarf_Die /*die*/,
		Dwarf_Half*      /*return_tag*/,
		Dwarf_Error*     /*error*/);

	int dwarf_dieoffset(Dwarf_Die /*die*/,
		Dwarf_Off*       /*return_offset*/,
		Dwarf_Error*     /*error*/);

	int dwarf_CU_dieoffset_given_die(Dwarf_Die /*given_die*/,
		Dwarf_Off*       /*return_offset*/,
		Dwarf_Error*     /*error*/);

	int dwarf_die_CU_offset(Dwarf_Die /*die*/,
		Dwarf_Off*       /*return_offset*/,
		Dwarf_Error*     /*error*/);

	int dwarf_die_CU_offset_range(Dwarf_Die /*die*/,
		Dwarf_Off*       /*return_CU_header_offset*/,
		Dwarf_Off*       /*return_CU_length_bytes*/,
		Dwarf_Error*     /*error*/);

	int dwarf_attr(Dwarf_Die /*die*/,
		Dwarf_Half        /*attr*/,
		Dwarf_Attribute * /*returned_attr*/,
		Dwarf_Error*      /*error*/);

	int dwarf_diename(Dwarf_Die /*die*/,
		char   **        /*diename*/,
		Dwarf_Error*     /*error*/);

	int dwarf_die_abbrev_code(Dwarf_Die /*die */);

	int dwarf_die_abbrev_children_flag(Dwarf_Die /*die*/,
		Dwarf_Half * /*ab_has_child*/);

	int dwarf_validate_die_sibling(Dwarf_Die /*sibling*/, Dwarf_Off* /*offset*/);

	int dwarf_hasattr(Dwarf_Die /*die*/,
		Dwarf_Half       /*attr*/,
		Dwarf_Bool *     /*returned_bool*/,
		Dwarf_Error*     /*error*/);

	int dwarf_loclist_n(Dwarf_Attribute /*attr*/,
		Dwarf_Locdesc*** /*llbuf*/,
		Dwarf_Signed *   /*locCount*/,
		Dwarf_Error*     /*error*/);

	int dwarf_loclist(Dwarf_Attribute /*attr*/,  /* inflexible! */
		Dwarf_Locdesc**  /*llbuf*/,
		Dwarf_Signed *   /*locCount*/,
		Dwarf_Error*     /*error*/);

	int dwarf_loclist_from_expr(Dwarf_Debug /*dbg*/,
		Dwarf_Ptr      /* expression_in*/,
		Dwarf_Unsigned /* expression_length*/,
		Dwarf_Locdesc ** /* llbuf*/,
		Dwarf_Signed * /*listlen*/,
		Dwarf_Error *  /* error*/);

	int dwarf_loclist_from_expr_a(Dwarf_Debug /*dbg*/,
		Dwarf_Ptr      /*expression_in*/,
		Dwarf_Unsigned /*expression_length*/,
		Dwarf_Half     /*addr_size*/,
		Dwarf_Locdesc ** /*llbuf*/,
		Dwarf_Signed * /*listlen*/,
		Dwarf_Error *  /*error*/);

	int
		dwarf_loclist_from_expr_b(Dwarf_Debug /*dbg*/,
		Dwarf_Ptr      /*expression_in*/,
		Dwarf_Unsigned /*expression_length*/,
		Dwarf_Half     /*addr_size*/,
		Dwarf_Half     /*offset_size*/,
		Dwarf_Small    /*dwarf_version*/,
		Dwarf_Locdesc ** /*llbuf*/,
		Dwarf_Signed * /*listlen*/,
		Dwarf_Error *  /*error*/);

	int dwarf_lowpc(Dwarf_Die /*die*/,
		Dwarf_Addr  *    /*returned_addr*/,
		Dwarf_Error*     /*error*/);

	int dwarf_highpc_b(Dwarf_Die /*die*/,
		Dwarf_Addr  *           /*return_value*/,
		Dwarf_Half  *           /*return_form*/,
		enum Dwarf_Form_Class * /*return_class*/,
		Dwarf_Error *           /*error*/);

	int dwarf_highpc(Dwarf_Die /*die*/,
		Dwarf_Addr  *    /*returned_addr*/,
		Dwarf_Error*     /*error*/);

	int dwarf_bytesize(Dwarf_Die /*die*/,
		Dwarf_Unsigned * /*returned_size*/,
		Dwarf_Error*     /*error*/);

	int dwarf_bitsize(Dwarf_Die /*die*/,
		Dwarf_Unsigned * /*returned_size*/,
		Dwarf_Error*     /*error*/);

	int dwarf_bitoffset(Dwarf_Die /*die*/,
		Dwarf_Unsigned * /*returned_offset*/,
		Dwarf_Error*     /*error*/);

	int dwarf_srclang(Dwarf_Die /*die*/,
		Dwarf_Unsigned * /*returned_lang*/,
		Dwarf_Error*     /*error*/);

	int dwarf_arrayorder(Dwarf_Die /*die*/,
		Dwarf_Unsigned * /*returned_order*/,
		Dwarf_Error*     /*error*/);

	int dwarf_attrlist(Dwarf_Die /*die*/,
		Dwarf_Attribute** /*attrbuf*/,
		Dwarf_Signed   * /*attrcount*/,
		Dwarf_Error*     /*error*/);

	int dwarf_hasform(Dwarf_Attribute /*attr*/,
		Dwarf_Half       /*form*/,
		Dwarf_Bool *     /*returned_bool*/,
		Dwarf_Error*     /*error*/);

	int dwarf_whatform(Dwarf_Attribute /*attr*/,
		Dwarf_Half *     /*returned_final_form*/,
		Dwarf_Error*     /*error*/);

	int dwarf_whatform_direct(Dwarf_Attribute /*attr*/,
		Dwarf_Half *     /*returned_initial_form*/,
		Dwarf_Error*     /*error*/);

	int dwarf_whatattr(Dwarf_Attribute /*attr*/,
		Dwarf_Half *     /*returned_attr_num*/,
		Dwarf_Error*     /*error*/);

	int dwarf_formref(Dwarf_Attribute /*attr*/,
		Dwarf_Off*       /*return_offset*/,
		Dwarf_Error*     /*error*/);

	int dwarf_global_formref(Dwarf_Attribute /*attr*/,
		Dwarf_Off*       /*return_offset*/,
		Dwarf_Error*     /*error*/);

	int dwarf_formsig8(Dwarf_Attribute /*attr*/,
		Dwarf_Sig8 * /*returned sig bytes*/,
		Dwarf_Error*     /*error*/);

	int dwarf_formsig8_const(Dwarf_Attribute /*attr*/,
		Dwarf_Sig8 * /*returned sig bytes*/,
		Dwarf_Error*     /*error*/);

	int dwarf_formaddr(Dwarf_Attribute /*attr*/,
		Dwarf_Addr   *   /*returned_addr*/,
		Dwarf_Error*     /*error*/);

	int dwarf_get_debug_addr_index(Dwarf_Attribute /*attr*/,
		Dwarf_Unsigned * /*return_index*/,
		Dwarf_Error * /*error*/);

	int dwarf_formflag(Dwarf_Attribute /*attr*/,
		Dwarf_Bool *     /*returned_bool*/,
		Dwarf_Error*     /*error*/);

	int dwarf_formudata(Dwarf_Attribute /*attr*/,
		Dwarf_Unsigned  * /*returned_val*/,
		Dwarf_Error*     /*error*/);

	int dwarf_formsdata(Dwarf_Attribute     /*attr*/,
		Dwarf_Signed  *  /*returned_val*/,
		Dwarf_Error*     /*error*/);

	int dwarf_formblock(Dwarf_Attribute /*attr*/,
		Dwarf_Block    ** /*returned_block*/,
		Dwarf_Error*     /*error*/);

	int dwarf_formstring(Dwarf_Attribute /*attr*/,
		char   **        /*returned_string*/,
		Dwarf_Error*     /*error*/);

	int
		dwarf_get_debug_str_index(Dwarf_Attribute /*attr*/,
		Dwarf_Unsigned * /*return_index*/,
		Dwarf_Error * /*error*/);


	int dwarf_formexprloc(Dwarf_Attribute /*attr*/,
		Dwarf_Unsigned * /*return_exprlen*/,
		Dwarf_Ptr  * /*block_ptr*/,
		Dwarf_Error * /*error*/);

	int dwarf_srclines(Dwarf_Die /*die*/,
		Dwarf_Line**     /*linebuf*/,
		Dwarf_Signed *   /*linecount*/,
		Dwarf_Error*     /*error*/);

	void dwarf_srclines_dealloc(Dwarf_Debug /*dbg*/,
		Dwarf_Line*       /*linebuf*/,
		Dwarf_Signed      /*count */);

	int dwarf_srcfiles(Dwarf_Die /*die*/,
		char***          /*srcfiles*/,
		Dwarf_Signed *   /*filecount*/,
		Dwarf_Error*     /*error*/);

	int dwarf_linebeginstatement(Dwarf_Line /*line*/,
		Dwarf_Bool  *    /*returned_bool*/,
		Dwarf_Error*     /*error*/);

	int dwarf_lineendsequence(Dwarf_Line /*line*/,
		Dwarf_Bool  *    /*returned_bool*/,
		Dwarf_Error*     /*error*/);

	int dwarf_lineno(Dwarf_Line /*line*/,
		Dwarf_Unsigned * /*returned_lineno*/,
		Dwarf_Error*     /*error*/);

	int dwarf_line_srcfileno(Dwarf_Line /*line*/,
		Dwarf_Unsigned * /*ret_fileno*/,
		Dwarf_Error *    /*error*/);

	/* Is the line address from DW_LNS_set_address? */
	int dwarf_line_is_addr_set(Dwarf_Line /*line*/,
		Dwarf_Bool *     /*is_addr_set*/,
		Dwarf_Error *    /*error*/);

	int dwarf_lineaddr(Dwarf_Line /*line*/,
		Dwarf_Addr *     /*returned_addr*/,
		Dwarf_Error*     /*error*/);

	int dwarf_lineoff_b(Dwarf_Line /*line*/,
		Dwarf_Unsigned * /*returned_lineoffset*/,
		Dwarf_Error*     /*error*/);

	int dwarf_linesrc(Dwarf_Line /*line*/,
		char   **        /*returned_name*/,
		Dwarf_Error*     /*error*/);

	int dwarf_lineblock(Dwarf_Line /*line*/,
		Dwarf_Bool  *    /*returned_bool*/,
		Dwarf_Error*     /*error*/);

	int dwarf_prologue_end_etc(Dwarf_Line /* line */,
		Dwarf_Bool  *    /*prologue_end*/,
		Dwarf_Bool  *    /*eplogue_begin*/,
		Dwarf_Unsigned * /* isa */,
		Dwarf_Unsigned * /* discriminator */,
		Dwarf_Error *    /*error*/);

	int dwarf_get_globals(Dwarf_Debug /*dbg*/,
		Dwarf_Global**   /*globals*/,
		Dwarf_Signed *   /*number_of_globals*/,
		Dwarf_Error*     /*error*/);

	void dwarf_globals_dealloc(Dwarf_Debug /*dbg*/,
		Dwarf_Global*    /*globals*/,
		Dwarf_Signed     /*number_of_globals*/);

	int dwarf_globname(Dwarf_Global /*glob*/,
		char   **        /*returned_name*/,
		Dwarf_Error*     /*error*/);

	int dwarf_global_die_offset(Dwarf_Global /*global*/,
		Dwarf_Off*       /*return_offset*/,
		Dwarf_Error *    /*error*/);

	int dwarf_get_cu_die_offset_given_cu_header_offset(
		Dwarf_Debug      /*dbg*/,
		Dwarf_Off        /*in_cu_header_offset*/,
		Dwarf_Off *  /*out_cu_die_offset*/,
		Dwarf_Error *    /*err*/);

	int dwarf_get_cu_die_offset_given_cu_header_offset_b(
		Dwarf_Debug      dbg,
		Dwarf_Off        in_cu_header_offset,
		Dwarf_Bool       is_info,
    	 Dwarf_Off *  out_cu_die_offset,
		 Dwarf_Error *    err);

	int dwarf_global_cu_offset(Dwarf_Global global,
		Dwarf_Off*       return_offset,
		Dwarf_Error*     error);

	int dwarf_global_name_offsets(Dwarf_Global global,
		char   **        returned_name,
		Dwarf_Off*       die_offset,
		Dwarf_Off*       cu_offset,
		Dwarf_Error*     error);

	int dwarf_get_funcs(Dwarf_Debug    dbg,
		Dwarf_Func**     funcs,
		Dwarf_Signed *   number_of_funcs,
		Dwarf_Error*     error);

	void dwarf_funcs_dealloc(Dwarf_Debug dbg,
		Dwarf_Func*      funcs,
		Dwarf_Signed     number_of_funcs);

	int dwarf_funcname(Dwarf_Func func,
		char   **        returned_name,
		Dwarf_Error*     error);

	int dwarf_func_die_offset(Dwarf_Func func,
		Dwarf_Off*       return_offset,
		Dwarf_Error*     error);

	int dwarf_func_cu_offset(Dwarf_Func func,
		Dwarf_Off*       return_offset,
		Dwarf_Error*     error);

	int dwarf_func_name_offsets(Dwarf_Func func,
		char   **        returned_name,
		Dwarf_Off*       die_offset,
		Dwarf_Off*       cu_offset,
		Dwarf_Error*     error);

	int dwarf_get_types(Dwarf_Debug    /*dbg*/,
		Dwarf_Type**     /*types*/,
		Dwarf_Signed *   /*number_of_types*/,
		Dwarf_Error*     /*error*/);

	void dwarf_types_dealloc(Dwarf_Debug /*dbg*/,
		Dwarf_Type*      /*types*/,
		Dwarf_Signed     /*number_of_types*/);


	int dwarf_typename(Dwarf_Type /*type*/,
		char   **        /*returned_name*/,
		Dwarf_Error*     /*error*/);

	int dwarf_type_die_offset(Dwarf_Type /*type*/,
		Dwarf_Off*       /*return_offset*/,
		Dwarf_Error*     /*error*/);

	int dwarf_type_cu_offset(Dwarf_Type /*type*/,
		Dwarf_Off*       /*return_offset*/,
		Dwarf_Error*     /*error*/);

	int dwarf_type_name_offsets(Dwarf_Type    /*type*/,
		char   **        /*returned_name*/,
		Dwarf_Off*       /*die_offset*/,
		Dwarf_Off*       /*cu_offset*/,
		Dwarf_Error*     /*error*/);

	int dwarf_get_pubtypes(Dwarf_Debug    /*dbg*/,
		Dwarf_Type**     /*types*/,
		Dwarf_Signed *   /*number_of_types*/,
		Dwarf_Error*     /*error*/);

	void dwarf_pubtypes_dealloc(Dwarf_Debug /*dbg*/,
		Dwarf_Type*      /*pubtypes*/,
		Dwarf_Signed     /*number_of_pubtypes*/);


	int dwarf_pubtypename(Dwarf_Type /*type*/,
		char   **        /*returned_name*/,
		Dwarf_Error*     /*error*/);

	int dwarf_pubtype_cu_offset(Dwarf_Type /*type*/,
		Dwarf_Off*       /*return_offset*/,
		Dwarf_Error*     /*error*/);

	int dwarf_pubtype_name_offsets(Dwarf_Type    /*type*/,
		char   **        /*returned_name*/,
		Dwarf_Off*       /*die_offset*/,
		Dwarf_Off*       /*cu_offset*/,
		Dwarf_Error*     /*error*/);

	int dwarf_get_vars(Dwarf_Debug    /*dbg*/,
		Dwarf_Var**      /*vars*/,
		Dwarf_Signed *   /*number_of_vars*/,
		Dwarf_Error*     /*error*/);
	void dwarf_vars_dealloc(Dwarf_Debug /*dbg*/,
		Dwarf_Var*       /*vars*/,
		Dwarf_Signed     /*number_of_vars*/);


	int dwarf_varname(Dwarf_Var /*var*/,
		char   **        /*returned_name*/,
		Dwarf_Error*     /*error*/);

	int dwarf_var_die_offset(Dwarf_Var /*var*/,
		Dwarf_Off*       /*return_offset*/,
		Dwarf_Error*     /*error*/);

	int dwarf_var_cu_offset(Dwarf_Var /*var*/,
		Dwarf_Off*       /*return_offset*/,
		Dwarf_Error*     /*error*/);

	int dwarf_var_name_offsets(Dwarf_Var /*var*/,
		char   **        /*returned_name*/,
		Dwarf_Off*       /*die_offset*/,
		Dwarf_Off*       /*cu_offset*/,
		Dwarf_Error*     /*error*/);

	int dwarf_get_weaks(Dwarf_Debug    /*dbg*/,
		Dwarf_Weak**     /*weaks*/,
		Dwarf_Signed *   /*number_of_weaks*/,
		Dwarf_Error*     /*error*/);
	void dwarf_weaks_dealloc(Dwarf_Debug /*dbg*/,
		Dwarf_Weak*      /*weaks*/,
		Dwarf_Signed     /*number_of_weaks*/);


	int dwarf_weakname(Dwarf_Weak /*weak*/,
		char   **        /*returned_name*/,
		Dwarf_Error*     /*error*/);

	int dwarf_weak_die_offset(Dwarf_Weak /*weak*/,
		Dwarf_Off*       /*return_offset*/,
		Dwarf_Error*     /*error*/);

	int dwarf_weak_cu_offset(Dwarf_Weak /*weak*/,
		Dwarf_Off*       /*return_offset*/,
		Dwarf_Error*     /*error*/);

	int dwarf_weak_name_offsets(Dwarf_Weak    /*weak*/,
		char   **        /*returned_name*/,
		Dwarf_Off*       /*die_offset*/,
		Dwarf_Off*       /*cu_offset*/,
		Dwarf_Error*     /*error*/);

	int dwarf_get_loclist_entry(Dwarf_Debug /*dbg*/,
		Dwarf_Unsigned   /*offset*/,
		Dwarf_Addr*      /*hipc*/,
		Dwarf_Addr*      /*lopc*/,
		Dwarf_Ptr*       /*data*/,
		Dwarf_Unsigned*  /*entry_len*/,
		Dwarf_Unsigned*  /*next_entry*/,
		Dwarf_Error*     /*error*/);

	int dwarf_get_abbrev(Dwarf_Debug /*dbg*/,
		Dwarf_Unsigned   /*offset*/,
		Dwarf_Abbrev  *  /*returned_abbrev*/,
		Dwarf_Unsigned*  /*length*/,
		Dwarf_Unsigned*  /*attr_count*/,
		Dwarf_Error*     /*error*/);

	int dwarf_get_abbrev_tag(Dwarf_Abbrev /*abbrev*/,
		Dwarf_Half*      /*return_tag_number*/,
		Dwarf_Error*     /*error*/);
	int dwarf_get_abbrev_code(Dwarf_Abbrev /*abbrev*/,
		Dwarf_Unsigned*  /*return_code_number*/,
		Dwarf_Error*     /*error*/);

	int dwarf_get_abbrev_count(Dwarf_Debug /*dbg*/);

	int dwarf_get_abbrev_children_flag(Dwarf_Abbrev /*abbrev*/,
		Dwarf_Signed*    /*return_flag*/,
		Dwarf_Error*     /*error*/);

	int dwarf_get_abbrev_entry(Dwarf_Abbrev /*abbrev*/,
		Dwarf_Signed     /*index*/,
		Dwarf_Half  *    /*returned_attr_num*/,
		Dwarf_Signed*    /*form*/,
		Dwarf_Off*       /*offset*/,
		Dwarf_Error*     /*error*/);

	int dwarf_get_str(Dwarf_Debug /*dbg*/,
		Dwarf_Off        /*offset*/,
		char**           /*string*/,
		Dwarf_Signed *   /*strlen_of_string*/,
		Dwarf_Error*     /*error*/);

	int dwarf_get_fde_list_eh(
		Dwarf_Debug      /*dbg*/,
		Dwarf_Cie**      /*cie_data*/,
		Dwarf_Signed*    /*cie_element_count*/,
		Dwarf_Fde**      /*fde_data*/,
		Dwarf_Signed*    /*fde_element_count*/,
		Dwarf_Error*     /*error*/);

	int dwarf_get_fde_list(Dwarf_Debug /*dbg*/,
		Dwarf_Cie**      /*cie_data*/,
		Dwarf_Signed*    /*cie_element_count*/,
		Dwarf_Fde**      /*fde_data*/,
		Dwarf_Signed*    /*fde_element_count*/,
		Dwarf_Error*     /*error*/);

	void dwarf_fde_cie_list_dealloc(Dwarf_Debug dbg,
		Dwarf_Cie *cie_data,
		Dwarf_Signed cie_element_count,
		Dwarf_Fde *fde_data,
		Dwarf_Signed fde_element_count);

	int dwarf_get_fde_range(Dwarf_Fde /*fde*/,
		Dwarf_Addr*      /*low_pc*/,
		Dwarf_Unsigned*  /*func_length*/,
		Dwarf_Ptr*       /*fde_bytes*/,
		Dwarf_Unsigned*  /*fde_byte_length*/,
		Dwarf_Off*       /*cie_offset*/,
		Dwarf_Signed*    /*cie_index*/,
		Dwarf_Off*       /*fde_offset*/,
		Dwarf_Error*     /*error*/);

	int dwarf_get_fde_exception_info(Dwarf_Fde /*fde*/,
		Dwarf_Signed*    /* offset_into_exception_tables */,
		Dwarf_Error*     /*error*/);

	int dwarf_get_cie_of_fde(Dwarf_Fde /*fde*/,
		Dwarf_Cie *      /*cie_returned*/,
		Dwarf_Error*     /*error*/);

	int dwarf_get_cie_info(Dwarf_Cie /*cie*/,
		Dwarf_Unsigned * /*bytes_in_cie*/,
		Dwarf_Small*     /*version*/,
		char        **   /*augmenter*/,
		Dwarf_Unsigned*  /*code_alignment_factor*/,
		Dwarf_Signed*    /*data_alignment_factor*/,
		Dwarf_Half*      /*return_address_register_rule*/,
		Dwarf_Ptr*       /*initial_instructions*/,
		Dwarf_Unsigned*  /*initial_instructions_length*/,
		Dwarf_Error*     /*error*/);

	int dwarf_get_cie_index(
		Dwarf_Cie /*cie*/,
		Dwarf_Signed* /*index*/,
		Dwarf_Error* /*error*/);

	int dwarf_get_fde_instr_bytes(Dwarf_Fde /*fde*/,
		Dwarf_Ptr *      /*outinstrs*/, Dwarf_Unsigned * /*outlen*/,
		Dwarf_Error *    /*error*/);

	int dwarf_get_fde_info_for_all_regs(Dwarf_Fde /*fde*/,
		Dwarf_Addr       /*pc_requested*/,
		Dwarf_Regtable*  /*reg_table*/,
		Dwarf_Addr*      /*row_pc*/,
		Dwarf_Error*     /*error*/);

	int dwarf_get_fde_info_for_all_regs3(Dwarf_Fde /*fde*/,
		Dwarf_Addr       /*pc_requested*/,
		Dwarf_Regtable3* /*reg_table*/,
		Dwarf_Addr*      /*row_pc*/,
		Dwarf_Error*     /*error*/);

	int dwarf_get_fde_info_for_reg(Dwarf_Fde /*fde*/,
		Dwarf_Half       /*table_column*/,
		Dwarf_Addr       /*pc_requested*/,
		Dwarf_Signed*    /*offset_relevant*/,
		Dwarf_Signed*    /*register*/,
		Dwarf_Signed*    /*offset*/,
		Dwarf_Addr*      /*row_pc*/,
		Dwarf_Error*     /*error*/);

	int dwarf_get_fde_info_for_reg3(Dwarf_Fde /*fde*/,
		Dwarf_Half       /*table_column*/,
		Dwarf_Addr       /*pc_requested*/,
		Dwarf_Small  *   /*value_type*/,
		Dwarf_Signed *   /*offset_relevant*/,
		Dwarf_Signed*    /*register*/,
		Dwarf_Signed*    /*offset_or_block_len*/,
		Dwarf_Ptr   *    /*block_ptr */,
		Dwarf_Addr*      /*row_pc_out*/,
		Dwarf_Error*     /*error*/);

	int dwarf_get_fde_info_for_cfa_reg3(Dwarf_Fde /*fde*/,
		Dwarf_Addr       /*pc_requested*/,
		Dwarf_Small  *   /*value_type*/,
		Dwarf_Signed *   /*offset_relevant*/,
		Dwarf_Signed*    /*register*/,
		Dwarf_Signed*    /*offset_or_block_len*/,
		Dwarf_Ptr   *    /*block_ptr */,
		Dwarf_Addr*      /*row_pc_out*/,
		Dwarf_Error*     /*error*/);

	int dwarf_get_fde_for_die(Dwarf_Debug /*dbg*/,
		Dwarf_Die        /*subr_die */,
		Dwarf_Fde  *     /*returned_fde*/,
		Dwarf_Error*     /*error*/);

	int dwarf_get_fde_n(Dwarf_Fde* /*fde_data*/,
		Dwarf_Unsigned   /*fde_index*/,
		Dwarf_Fde  *     /*returned_fde*/,
		Dwarf_Error*     /*error*/);

	int dwarf_get_fde_at_pc(Dwarf_Fde* /*fde_data*/,
		Dwarf_Addr       /*pc_of_interest*/,
		Dwarf_Fde  *     /*returned_fde*/,
		Dwarf_Addr*      /*lopc*/,
		Dwarf_Addr*      /*hipc*/,
		Dwarf_Error*     /*error*/);

	/* GNU .eh_frame augmentation information, raw form, see
	Linux Standard Base Core Specification version 3.0 . */
	int dwarf_get_cie_augmentation_data(Dwarf_Cie /* cie*/,
		Dwarf_Small **   /* augdata */,
		Dwarf_Unsigned * /* augdata_len */,
		Dwarf_Error*     /*error*/);
	/* GNU .eh_frame augmentation information, raw form, see
	Linux Standard Base Core Specification version 3.0 . */
	int dwarf_get_fde_augmentation_data(Dwarf_Fde /* fde*/,
		Dwarf_Small **   /* augdata */,
		Dwarf_Unsigned * /* augdata_len */,
		Dwarf_Error*     /*error*/);

	int dwarf_expand_frame_instructions(Dwarf_Cie /*cie*/,
		Dwarf_Ptr        /*instruction*/,
		Dwarf_Unsigned   /*i_length*/,
		Dwarf_Frame_Op** /*returned_op_list*/,
		Dwarf_Signed*    /*op_count*/,
		Dwarf_Error*     /*error*/);

	/* Operations on .debug_aranges. */
	int dwarf_get_aranges(Dwarf_Debug /*dbg*/,
		Dwarf_Arange**   /*aranges*/,
		Dwarf_Signed *   /*arange_count*/,
		Dwarf_Error*     /*error*/);



	int dwarf_get_arange(
		Dwarf_Arange*    /*aranges*/,
		Dwarf_Unsigned   /*arange_count*/,
		Dwarf_Addr       /*address*/,
		Dwarf_Arange *   /*returned_arange*/,
		Dwarf_Error*     /*error*/);

	int dwarf_get_cu_die_offset(
		Dwarf_Arange     /*arange*/,
		Dwarf_Off*       /*return_offset*/,
		Dwarf_Error*     /*error*/);

	int dwarf_get_arange_cu_header_offset(
		Dwarf_Arange     /*arange*/,
		Dwarf_Off*       /*return_cu_header_offset*/,
		Dwarf_Error*     /*error*/);
#ifdef __sgi /* pragma is sgi MIPS only */
#pragma optional dwarf_get_arange_cu_header_offset
#endif

	/* DWARF2,3 interface. No longer really adequate (it was never
	right for segmented address spaces, please switch
	to using dwarf_get_arange_info_b instead.
	There is no effective difference between these
	functions  if the address space
	of the target is not segmented.  */
	int dwarf_get_arange_info(
		Dwarf_Arange     /*arange*/,
		Dwarf_Addr*      /*start*/,
		Dwarf_Unsigned*  /*length*/,
		Dwarf_Off*       /*cu_die_offset*/,
		Dwarf_Error*     /*error*/);

	/* New for DWARF4, entries may have segment information.
	*segment is only meaningful if *segment_entry_size is non-zero. */
	int dwarf_get_arange_info_b(
		Dwarf_Arange     /*arange*/,
		Dwarf_Unsigned*  /*segment*/,
		Dwarf_Unsigned*  /*segment_entry_size*/,
		Dwarf_Addr    *  /*start*/,
		Dwarf_Unsigned*  /*length*/,
		Dwarf_Off     *  /*cu_die_offset*/,
		Dwarf_Error   *  /*error*/);


	/* consumer .debug_macinfo information interface.
	*/
	struct Dwarf_Macro_Details_s {
		Dwarf_Off    dmd_offset; /* offset, in the section,
								 of this macro info */
		Dwarf_Small  dmd_type;   /* the type, DW_MACINFO_define etc*/
		Dwarf_Signed dmd_lineno; /* the source line number where
								 applicable and vend_def number if
								 vendor_extension op */

		Dwarf_Signed dmd_fileindex;/* the source file index:
								   applies to define undef start_file */
		char *       dmd_macro;  /* macro name (with value for defineop)
								 string from vendor ext */
	};

	/*  dwarf_print_lines is for use by dwarfdump: it prints
	line info to stdout.
	The _dwarf name is obsolete. Use dwarf_ instead.
	Added extra argnument 2/2009 for better checking.
	*/
	int _dwarf_print_lines(Dwarf_Die /*cu_die*/, Dwarf_Error * /*error*/);
	int dwarf_print_lines(Dwarf_Die /*cu_die*/, Dwarf_Error * /*error*/,
		int * /*error_count_out */);

	/*  As of August 2013, dwarf_print_lines() no longer uses printf.
	Instead it calls back to the application using a function pointer
	once per line-to-print.  The lines passed back already have any needed
	newlines.    The following struct is used to initialize
	the callback mechanism.

	Failing to call the dwarf_register_printf_callback() function will
	prevent the lines from being passed back but such omission
	is not an error.
	See libdwarf2.1.mm for further documentation.

	The return value is the previous set of callback values.
	*/

	/*  If called with a NULL newvalues pointer, it simply returns
	the current set of values for this Dwarf_Debug. */
	struct  Dwarf_Printf_Callback_Info_s
		dwarf_register_printf_callback(Dwarf_Debug /*dbg*/,
	struct  Dwarf_Printf_Callback_Info_s * /*newvalues*/);


	/*  dwarf_check_lineheader lets dwarfdump get detailed messages
	about some compiler errors we detect.
	We return the count of detected errors through the
	pointer.
	*/
	void dwarf_check_lineheader(Dwarf_Die /*cu_die*/, int *errcount_out);

	/*  dwarf_ld_sort_lines helps SGI IRIX ld
	rearrange lines in .debug_line in a .o created with a text
	section per function.
	-OPT:procedure_reorder=ON
	where ld-cord (cord(1)ing by ld,
	not by cord(1)) may have changed the function order.
	The _dwarf name is obsolete. Use dwarf_ instead.
	*/
	int _dwarf_ld_sort_lines(
		void *         /*orig_buffer*/,
		unsigned long  /* buffer_len*/,
		int            /*is_64_bit*/,
		int *          /*any_change*/,
		int *          /*err_code*/);
	int dwarf_ld_sort_lines(
		void *         /*orig_buffer*/,
		unsigned long  /*buffer_len*/,
		int            /*is_64_bit*/,
		int *          /*any_change*/,
		int *          /*err_code*/);

	/* Used by dwarfdump -v to print fde offsets from debugging
	info.
	The _dwarf name is obsolete. Use dwarf_ instead.
	*/
	int _dwarf_fde_section_offset(Dwarf_Debug dbg,
		Dwarf_Fde         /*in_fde*/,
		Dwarf_Off *       /*fde_off*/,
		Dwarf_Off *       /*cie_off*/,
		Dwarf_Error *     /*err*/);
	int dwarf_fde_section_offset(Dwarf_Debug dbg,
		Dwarf_Fde         /*in_fde*/,
		Dwarf_Off *       /*fde_off*/,
		Dwarf_Off *       /*cie_off*/,
		Dwarf_Error *     /*err*/);

	/* Used by dwarfdump -v to print cie offsets from debugging
	info.
	The _dwarf name is obsolete. Use dwarf_ instead.
	*/
	int dwarf_cie_section_offset(Dwarf_Debug /*dbg*/,
		Dwarf_Cie     /*in_cie*/,
		Dwarf_Off *   /*cie_off */,
		Dwarf_Error * /*err*/);
	int _dwarf_cie_section_offset(Dwarf_Debug /*dbg*/,
		Dwarf_Cie     /*in_cie*/,
		Dwarf_Off *   /*cie_off*/,
		Dwarf_Error * /*err*/);

	typedef struct Dwarf_Macro_Details_s Dwarf_Macro_Details;

	//int dwarf_get_macro(Dwarf_Debug /*dbg*/,
	//    char *        /*requested_macro_name*/,
	//    Dwarf_Addr    /*pc_of_request*/,
	//    char **       /*returned_macro_value*/,
	//    Dwarf_Error * /*error*/);

	//int dwarf_get_all_defined_macros(Dwarf_Debug /*dbg*/,
	//    Dwarf_Addr     /*pc_of_request*/,
	//    Dwarf_Signed * /*returned_count*/,
	//    char ***       /*returned_pointers_to_macros*/,
	//    Dwarf_Error *  /*error*/);

	char *dwarf_find_macro_value_start(char * /*macro_string*/);

	int dwarf_get_macro_details(Dwarf_Debug /*dbg*/,
		Dwarf_Off            /*macro_offset*/,
		Dwarf_Unsigned       /*maximum_count*/,
		Dwarf_Signed         * /*entry_count*/,
		Dwarf_Macro_Details ** /*details*/,
		Dwarf_Error *        /*err*/);


	int dwarf_get_address_size(Dwarf_Debug /*dbg*/,
		Dwarf_Half  *    /*addr_size*/,
		Dwarf_Error *    /*error*/);
	int dwarf_get_die_address_size(Dwarf_Die /*die*/,
		Dwarf_Half  *    /*addr_size*/,
		Dwarf_Error *    /*error*/);

	enum Dwarf_Form_Class dwarf_get_form_class(
		Dwarf_Half /* dwversion */,
		Dwarf_Half /* attrnum */,
		Dwarf_Half /*offset_size */,
		Dwarf_Half /*form*/);


	/*   BEGIN gdbindex operations interfaces. */
	/*  .gdb_index section operations.
	A GDB extension.
	The section is in some executables and if present
	is used to quickly map an address or name to
	a skeleton CU or TU.  If present then there are
	.dwo or .dwp files somewhere to make detailed
	debugging possible (up to user code to
	find it/them and deal with them).

	Version 8 built by gdb, so type entries are ok as is.
	Version 7 built by the 'gold' linker and type index
	entries for a CU must be derived othewise, the
	type index is not correct... ? FIXME
	*/

	/*  Creates a Dwarf_Gdbindex, returning it and
	its values through the pointers. */
	int dwarf_gdbindex_header(Dwarf_Debug /*dbg*/,
		Dwarf_Gdbindex * /*gdbindexptr*/,
		Dwarf_Unsigned * /*version*/,
		Dwarf_Unsigned * /*cu_list_offset*/,
		Dwarf_Unsigned * /*types_cu_list_offset*/,
		Dwarf_Unsigned * /*address_area_offset*/,
		Dwarf_Unsigned * /*symbol_table_offset*/,
		Dwarf_Unsigned * /*constant_pool_offset*/,
		Dwarf_Unsigned * /*section_size*/,
		Dwarf_Unsigned * /*unused_reserved*/,
		const char    ** /*section_name*/,
		Dwarf_Error    * /*error*/);

	int dwarf_gdbindex_culist_array(Dwarf_Gdbindex /*gdbindexptr*/,
		Dwarf_Unsigned       * /*list_length*/,
		Dwarf_Error          * /*error*/);

	/*  entryindex: 0 to list_length-1 */
	int dwarf_gdbindex_culist_entry(Dwarf_Gdbindex /*gdbindexptr*/,
		Dwarf_Unsigned   /*entryindex*/,
		Dwarf_Unsigned * /*cu_offset*/,
		Dwarf_Unsigned * /*cu_length*/,
		Dwarf_Error    * /*error*/);

	int dwarf_gdbindex_types_culist_array(Dwarf_Gdbindex /*gdbindexptr*/,
		Dwarf_Unsigned            * /*types_list_length*/,
		Dwarf_Error               * /*error*/);

	/*  entryindex: 0 to types_list_length -1 */
	int dwarf_gdbindex_types_culist_entry(
		Dwarf_Gdbindex   /*gdbindexptr*/,
		Dwarf_Unsigned   /*entryindex*/,
		Dwarf_Unsigned * /*cu_offset*/,
		Dwarf_Unsigned * /*tu_offset*/,
		Dwarf_Unsigned * /*type_signature*/,
		Dwarf_Error    * /*error*/);

	int dwarf_gdbindex_addressarea(Dwarf_Gdbindex /*gdbindexptr*/,
		Dwarf_Unsigned            * /*addressarea_list_length*/,
		Dwarf_Error               * /*error*/);

	/*    entryindex: 0 to addressarea_list_length-1 */
	int dwarf_gdbindex_addressarea_entry(
		Dwarf_Gdbindex   /*gdbindexptr*/,
		Dwarf_Unsigned   /*entryindex*/,
		Dwarf_Unsigned * /*low_adddress*/,
		Dwarf_Unsigned * /*high_address*/,
		Dwarf_Unsigned * /*cu_index*/,
		Dwarf_Error    * /*error*/);

	int dwarf_gdbindex_symboltable_array(Dwarf_Gdbindex /*gdbindexptr*/,
		Dwarf_Unsigned            * /*symtab_list_length*/,
		Dwarf_Error               * /*error*/);

	/*  entryindex: 0 to symtab_list_length-1 */
	int dwarf_gdbindex_symboltable_entry(
		Dwarf_Gdbindex   /*gdbindexptr*/,
		Dwarf_Unsigned   /*entryindex*/,
		Dwarf_Unsigned * /*string_offset*/,
		Dwarf_Unsigned * /*cu_vector_offset*/,
		Dwarf_Error    * /*error*/);

	int dwarf_gdbindex_cuvector_length(Dwarf_Gdbindex /*gdbindex*/,
		Dwarf_Unsigned   /*cuvector_offset*/,
		Dwarf_Unsigned * /*innercount*/,
		Dwarf_Error    * /*error*/);


	int dwarf_gdbindex_cuvector_inner_attributes(Dwarf_Gdbindex /*gdbindex*/,
		Dwarf_Unsigned   /*cuvector_offset*/,
		Dwarf_Unsigned   /*innerindex*/,
		/* The attr_value is a field of bits. For expanded version
		use  dwarf_gdbindex_cuvector_expand_value() */
		Dwarf_Unsigned * /*attr_value*/,
		Dwarf_Error    * /*error*/);

	int dwarf_gdbindex_cuvector_instance_expand_value(Dwarf_Gdbindex /*gdbindex*/,
		Dwarf_Unsigned   /*value*/,
		Dwarf_Unsigned * /*cu_index*/,
		Dwarf_Unsigned * /*reserved1*/,
		Dwarf_Unsigned * /*symbol_kind*/,
		Dwarf_Unsigned * /*is_static*/,
		Dwarf_Error    * /*error*/);


	/*  The strings in the pool follow (in memory) the cu index
	set and are NUL terminated. */

	int dwarf_gdbindex_string_by_offset(Dwarf_Gdbindex /*gdbindexptr*/,
		Dwarf_Unsigned   /*stringoffset*/,
		const char    ** /*string_ptr*/,
		Dwarf_Error   *  /*error*/);

	void dwarf_gdbindex_free(Dwarf_Gdbindex /*gdbindexptr*/);

	/*  END gdbindex/debugfission operations. */

	/*  START debugfission dwp .debug_cu_index and .debug_tu_index operations. */

	int dwarf_get_xu_index_header(Dwarf_Debug /*dbg*/,
		const char *  section_type, /* "tu" or "cu" */
		Dwarf_Xu_Index_Header *     /*xuhdr*/,
		Dwarf_Unsigned *            /*version_number*/,
		Dwarf_Unsigned *            /*offsets_count L*/,
		Dwarf_Unsigned *            /*units_count N*/,
		Dwarf_Unsigned *            /*hash_slots_count M*/,
		const char     **           /*sect_name*/,
		Dwarf_Error *               /*err*/);

	int dwarf_get_xu_index_section_type(Dwarf_Xu_Index_Header /*xuhdr*/,
		/*  the function returns a pointer to
		the immutable string "tu" or "cu" via this arg. Do not free.  */
		const char ** /*typename*/,
		/*  the function returns a pointer to
		the immutable section name. Do not free.
		.debug_cu_index or .debug_tu_index */
		const char ** /*sectionname*/,
		Dwarf_Error * /*err*/);

	/*  Index values 0 to M-1 are valid. */
	int dwarf_get_xu_hash_entry(Dwarf_Xu_Index_Header /*xuhdr*/,
		Dwarf_Unsigned     /*index*/,

		/*  Returns the hash value. 64  bits.  */
		Dwarf_Sig8 *      /*hash_value*/,

		/* returns the index into rows of offset/size tables. */
		Dwarf_Unsigned *  /*index_to_sections*/,
		Dwarf_Error *     /*err*/);

	/*  Columns 0 to L-1,  valid. */
	int dwarf_get_xu_section_names(Dwarf_Xu_Index_Header /*xuhdr*/,
		/* Row index defined to be row zero. */
		Dwarf_Unsigned  /*column_index*/,
		Dwarf_Unsigned* /*DW_SECT_ number*/,
		const char **   /*DW_SECT_ name*/,
		Dwarf_Error *   /*err*/);

	/* Rows 1 to N col 0 to L-1  are valid */
	int dwarf_get_xu_section_offset(Dwarf_Xu_Index_Header /*xuhdr*/,
		Dwarf_Unsigned  /*row_index*/,
		Dwarf_Unsigned  /*column_index*/,
		Dwarf_Unsigned* /*sec_offset*/,
		Dwarf_Unsigned* /*sec_size*/,
		Dwarf_Error *   /*err*/);

	void dwarf_xu_header_free(Dwarf_Xu_Index_Header /*xuhdr*/);

	/*  Defined larger than necessary. This struct, being visible,
	will be difficult to change: binary compatibility. */
#define DW_FISSION_SECT_COUNT 12

	
	typedef struct Dwarf_Debug_Fission_Per_CU_s  Dwarf_Debug_Fission_Per_CU;
	/*  For any Dwarf_Die in a compilation unit, return
	the debug fission table data through
	percu_out.   Usually applications
	will pass in the CU die.
	Calling code should zero all of the
	struct Dwarf_Debug_Fission_Per_CU_s before calling this.
	If there is no debugfission data this returns
	DW_DLV_NO_ENTRY (only .dwp objects have debugfission data).  */
	int dwarf_get_debugfission_for_die(Dwarf_Die /* die */,
		Dwarf_Debug_Fission_Per_CU * /* percu_out */,
		Dwarf_Error * /* err */);

	/* Given a key (hash signature)  from a .o, find the per-cu information
	for the CU with that key. */
	int dwarf_get_debugfission_for_key(Dwarf_Debug /* dbg */,
		Dwarf_Sig8 *                 /* key, hash signature */,
		const char * key_type        /* "cu" or "tu" */,
		Dwarf_Debug_Fission_Per_CU * /* percu_out */,
		Dwarf_Error *                /* err */);

	/*  END debugfission dwp .debug_cu_index and .debug_tu_index operations. */


	/*  Utility operations */
	Dwarf_Unsigned dwarf_errno(Dwarf_Error     /*error*/);

	char* dwarf_errmsg(Dwarf_Error    /*error*/);

	/*  stringcheck zero is default and means do all
	string length validity checks.
	Call with parameter value 1 to turn off many such checks (and
	increase performance).
	Call with zero for safest running.
	Actual value saved and returned is only 8 bits! Upper bits
	ignored by libdwarf (and zero on return).
	Returns previous value.  */
	int dwarf_set_stringcheck(int /*stringcheck*/);

	/*  'apply' defaults to 1 and means do all
	'rela' relocations on reading in a dwarf object section with
	such relocations.
	Call with parameter value 0 to turn off application of
	such relocations.
	Since the static linker leaves 'bogus' data in object sections
	with a 'rela' relocation section such data cannot be read
	sensibly without processing the relocations.  Such relocations
	do not exist in executables and shared objects (.so), the
	relocations only exist in plain .o relocatable object files.
	Actual value saved and returned is only 8 bits! Upper bits
	ignored by libdwarf (and zero on return).
	Returns previous value.  */
	int dwarf_set_reloc_application(int /*apply*/);

	///* Unimplemented */
	//Dwarf_Handler dwarf_seterrhand(Dwarf_Debug /*dbg*/, Dwarf_Handler /*errhand*/);

	///* Unimplemented */
	//Dwarf_Ptr dwarf_seterrarg(Dwarf_Debug /*dbg*/, Dwarf_Ptr /*errarg*/);

	void dwarf_dealloc(Dwarf_Debug dbg, void* space, Dwarf_Unsigned type);

	int dwarf_producer_init(
		Dwarf_Unsigned        flags,
		Dwarf_Callback_Func   func,
		Dwarf_Handler         errhand,
		Dwarf_Ptr             errarg,
		void *                user_data,
		const char *isa_name, 
		const char *dwarf_version, 
		const char *extra,
		Dwarf_P_Debug * dbg_returned ,
		Dwarf_Error *   error);

	Dwarf_Signed dwarf_transform_to_disk_form(Dwarf_P_Debug dbg, Dwarf_Error* error);

	Dwarf_Ptr dwarf_get_section_bytes(Dwarf_P_Debug /*dbg*/,
		Dwarf_Signed     /*dwarf_section*/,
		Dwarf_Signed*    /*elf_section_index*/,
		Dwarf_Unsigned*  /*length*/,
		Dwarf_Error*     /*error*/);

	int  dwarf_get_relocation_info_count(
		Dwarf_P_Debug    /*dbg*/,
		Dwarf_Unsigned * /*count_of_relocation_sections*/,
		int *                /*drd_buffer_version*/,
		Dwarf_Error*     /*error*/);

	int dwarf_get_relocation_info(
		Dwarf_P_Debug           /*dbg*/,
		Dwarf_Signed          * /*elf_section_index*/,
		Dwarf_Signed          * /*elf_section_index_link*/,
		Dwarf_Unsigned        * /*relocation_buffer_count*/,
		Dwarf_Relocation_Data * /*reldata_buffer*/,
		Dwarf_Error*            /*error*/);

	Dwarf_Signed dwarf_get_die_markers(
		Dwarf_P_Debug     /*dbg*/,
		Dwarf_P_Marker *  /*marker_list*/,
		Dwarf_Unsigned *  /*marker_count*/,
		Dwarf_Error *     /*error*/);

	int dwarf_get_string_attributes_count(Dwarf_P_Debug,
		Dwarf_Unsigned *,
		int *,
		Dwarf_Error *);

	int dwarf_get_string_attributes_info(Dwarf_P_Debug,
		Dwarf_Signed *,
		Dwarf_Unsigned *,
		Dwarf_P_String_Attr *,
		Dwarf_Error *);

	void dwarf_reset_section_bytes(Dwarf_P_Debug /*dbg*/);

	Dwarf_Unsigned dwarf_producer_finish(Dwarf_P_Debug /*dbg*/,
		Dwarf_Error* /*error*/);

	/* Producer attribute addition functions. */
	Dwarf_P_Attribute dwarf_add_AT_targ_address(Dwarf_P_Debug /*dbg*/,
		Dwarf_P_Die     /*ownerdie*/,
		Dwarf_Half      /*attr*/,
		Dwarf_Unsigned  /*pc_value*/,
		Dwarf_Signed    /*sym_index*/,
		Dwarf_Error*    /*error*/);

	Dwarf_P_Attribute dwarf_add_AT_block(Dwarf_P_Debug /*dbg*/,
		Dwarf_P_Die     /*ownerdie*/,
		Dwarf_Half      /*attr*/,
		Dwarf_Small*    /*block_data*/,
		Dwarf_Unsigned  /*block_len*/,
		Dwarf_Error*    /*error*/);

	Dwarf_P_Attribute dwarf_add_AT_targ_address_b(Dwarf_P_Debug /*dbg*/,
		Dwarf_P_Die     /*ownerdie*/,
		Dwarf_Half      /*attr*/,
		Dwarf_Unsigned  /*pc_value*/,
		Dwarf_Unsigned  /*sym_index*/,
		Dwarf_Error*    /*error*/);

	Dwarf_P_Attribute dwarf_add_AT_ref_address(Dwarf_P_Debug /*dbg*/,
		Dwarf_P_Die     /*ownerdie*/,
		Dwarf_Half      /*attr*/,
		Dwarf_Unsigned  /*pc_value*/,
		Dwarf_Unsigned  /*sym_index*/,
		Dwarf_Error*    /*error*/);

	Dwarf_P_Attribute dwarf_add_AT_unsigned_const(Dwarf_P_Debug /*dbg*/,
		Dwarf_P_Die     /*ownerdie*/,
		Dwarf_Half      /*attr*/,
		Dwarf_Unsigned  /*value*/,
		Dwarf_Error*    /*error*/);

	Dwarf_P_Attribute dwarf_add_AT_signed_const(Dwarf_P_Debug /*dbg*/,
		Dwarf_P_Die     /*ownerdie*/,
		Dwarf_Half      /*attr*/,
		Dwarf_Signed    /*value*/,
		Dwarf_Error*    /*error*/);

	Dwarf_P_Attribute dwarf_add_AT_reference(Dwarf_P_Debug /*dbg*/,
		Dwarf_P_Die     /*ownerdie*/,
		Dwarf_Half      /*attr*/,
		Dwarf_P_Die     /*otherdie*/,
		Dwarf_Error*    /*error*/);

	/*  dwarf_add_AT_reference_b allows otherdie to be NULL with
	the assumption the caller will then later call
	dwarf_fixup_AT_reference_die() with a non-null target die.
	New 22 October, 2013
	*/
	Dwarf_P_Attribute dwarf_add_AT_reference_b(Dwarf_P_Debug /*dbg*/,
		Dwarf_P_Die     /*ownerdie*/,
		Dwarf_Half      /*attr*/,
		Dwarf_P_Die     /*otherdie*/,
		Dwarf_Error*    /*error*/);

	/* The following is for out-of-order cu-local
	references.  Allowing nominating the target Dwarf_P_Die
	after calling dwarf_add_AT_reference with a NULL otherdie
	after a single pass thru the DIE generation. Needed
	for forward-references.
	New 22 October, 2013.
	*/
	int
		dwarf_fixup_AT_reference_die(Dwarf_P_Debug /*dbg */,
		Dwarf_Half    /* attrnum */,
		Dwarf_P_Die   /* sourcedie*/,
		Dwarf_P_Die   /* targetdie*/,
		Dwarf_Error * /*error*/);


	Dwarf_P_Attribute dwarf_add_AT_dataref(
		Dwarf_P_Debug   /* dbg*/,
		Dwarf_P_Die     /*ownerdie*/,
		Dwarf_Half      /*attr*/,
		Dwarf_Unsigned  /*pcvalue*/,
		Dwarf_Unsigned  /*sym_index*/,
		Dwarf_Error*    /*error*/);

	Dwarf_P_Attribute dwarf_add_AT_const_value_string(Dwarf_P_Die /*ownerdie*/,
		char*           /*string_value*/,
		Dwarf_Error*    /*error*/);

	Dwarf_P_Attribute dwarf_add_AT_location_expr(Dwarf_P_Debug /*dbg*/,
		Dwarf_P_Die     /*ownerdie*/,
		Dwarf_Half      /*attr*/,
		Dwarf_P_Expr    /*loc_expr*/,
		Dwarf_Error*    /*error*/);

	Dwarf_P_Attribute dwarf_add_AT_string(Dwarf_P_Debug /*dbg*/,
		Dwarf_P_Die     /*ownerdie*/,
		Dwarf_Half      /*attr*/,
		char*           /*string*/,
		Dwarf_Error*     /*error*/);

	Dwarf_P_Attribute dwarf_add_AT_flag(Dwarf_P_Debug /*dbg*/,
		Dwarf_P_Die     /*ownerdie*/,
		Dwarf_Half      /*attr*/,
		Dwarf_Small     /*flag*/,
		Dwarf_Error*    /*error*/);

	Dwarf_P_Attribute dwarf_add_AT_producer(Dwarf_P_Die /*ownerdie*/,
		char*           /*producer_string*/,
		Dwarf_Error*    /*error*/);

	/* August 2013 sleb creator. For any attribute. */
	Dwarf_P_Attribute dwarf_add_AT_any_value_sleb(Dwarf_P_Die /*ownerdie*/,
		Dwarf_Half    /*attrnum*/,
		Dwarf_Signed  /*signed_value*/,
		Dwarf_Error * /*error*/);

	/* Original sleb creator. Only for DW_AT_const_value. */
	Dwarf_P_Attribute dwarf_add_AT_const_value_signedint(Dwarf_P_Die /*ownerdie*/,
		Dwarf_Signed    /*signed_value*/,
		Dwarf_Error*    /*error*/);

	/* August 2013 uleb creator. For any attribute. */
	Dwarf_P_Attribute dwarf_add_AT_any_value_uleb(Dwarf_P_Die /*ownerdie*/,
		Dwarf_Half      /*attrnum*/,
		Dwarf_Unsigned  /*signed_value*/,
		Dwarf_Error *   /*error*/);

	/* Original uleb creator. Only for DW_AT_const_value. */
	Dwarf_P_Attribute dwarf_add_AT_const_value_unsignedint(
		Dwarf_P_Die     /*ownerdie*/,
		Dwarf_Unsigned  /*unsigned_value*/,
		Dwarf_Error*    /*error*/);

	Dwarf_P_Attribute dwarf_add_AT_comp_dir(Dwarf_P_Die /*ownerdie*/,
		char*           /*current_working_directory*/,
		Dwarf_Error*    /*error*/);

	Dwarf_P_Attribute dwarf_add_AT_name(Dwarf_P_Die    /*die*/,
		char*           /*name*/,
		Dwarf_Error*    /*error*/);

	Dwarf_P_Attribute
		dwarf_add_AT_with_ref_sig8(
		Dwarf_P_Die   /*ownerdie */,
		Dwarf_Half    /*attrnum */,
		const Dwarf_Sig8 *  /*sig8_in*/,
		Dwarf_Error * /*error*/);


	/* Producer line creation functions (.debug_line) */
	Dwarf_Unsigned dwarf_add_directory_decl(Dwarf_P_Debug /*dbg*/,
		char*           /*name*/,
		Dwarf_Error*    /*error*/);

	Dwarf_Unsigned dwarf_add_file_decl(Dwarf_P_Debug /*dbg*/,
		char*           /*name*/,
		Dwarf_Unsigned  /*dir_index*/,
		Dwarf_Unsigned  /*time_last_modified*/,
		Dwarf_Unsigned  /*length*/,
		Dwarf_Error*    /*error*/);

	Dwarf_Unsigned dwarf_add_line_entry_b(Dwarf_P_Debug /*dbg*/,
		Dwarf_Unsigned  /*file_index*/,
		Dwarf_Addr      /*code_address*/,
		Dwarf_Unsigned  /*lineno*/,
		Dwarf_Signed    /*column_number*/,
		Dwarf_Bool      /*is_source_stmt_begin*/,
		Dwarf_Bool      /*is_basic_block_begin*/,
		Dwarf_Bool      /*is_epilogue_begin*/,
		Dwarf_Bool      /*is_prologue_end*/,
		Dwarf_Unsigned  /*isa*/,
		Dwarf_Unsigned  /*discriminator*/,
		Dwarf_Error*    /*error*/);
	Dwarf_Unsigned dwarf_add_line_entry(Dwarf_P_Debug /*dbg*/,
		Dwarf_Unsigned  /*file_index*/,
		Dwarf_Addr      /*code_address*/,
		Dwarf_Unsigned  /*lineno*/,
		Dwarf_Signed    /*column_number*/,
		Dwarf_Bool      /*is_source_stmt_begin*/,
		Dwarf_Bool      /*is_basic_block_begin*/,
		Dwarf_Error*    /*error*/);

	Dwarf_Unsigned dwarf_lne_set_address(Dwarf_P_Debug /*dbg*/,
		Dwarf_Unsigned  /*offset*/,
		Dwarf_Unsigned  /*symbol_index*/,
		Dwarf_Error*    /*error*/);

	Dwarf_Unsigned dwarf_lne_end_sequence(Dwarf_P_Debug /*dbg*/,
		Dwarf_Addr      /*end_address*/,
		Dwarf_Error*    /*error*/);

	/* Producer .debug_frame functions */
	Dwarf_Unsigned dwarf_add_frame_cie(Dwarf_P_Debug /*dbg*/,
		char*           /*augmenter*/,
		Dwarf_Small     /*code_alignment_factor*/,
		Dwarf_Small     /*data_alignment_factor*/,
		Dwarf_Small     /*return_address_reg*/,
		Dwarf_Ptr       /*initialization_bytes*/,
		Dwarf_Unsigned  /*init_byte_len*/,
		Dwarf_Error*    /*error*/);

	Dwarf_Unsigned dwarf_add_frame_fde(
		Dwarf_P_Debug   /*dbg*/,
		Dwarf_P_Fde     /*fde*/,
		Dwarf_P_Die     /*corresponding subprogram die*/,
		Dwarf_Unsigned  /*cie_to_use*/,
		Dwarf_Unsigned  /*virt_addr_of_described_code*/,
		Dwarf_Unsigned  /*length_of_code*/,
		Dwarf_Unsigned  /*symbol_index*/,
		Dwarf_Error*    /*error*/);

	Dwarf_Unsigned dwarf_add_frame_fde_b(
		Dwarf_P_Debug  /*dbg*/,
		Dwarf_P_Fde    /*fde*/,
		Dwarf_P_Die    /*die*/,
		Dwarf_Unsigned /*cie*/,
		Dwarf_Addr     /*virt_addr*/,
		Dwarf_Unsigned /*code_len*/,
		Dwarf_Unsigned /*sym_idx*/,
		Dwarf_Unsigned /*sym_idx_of_end*/,
		Dwarf_Addr     /*offset_from_end_sym*/,
		Dwarf_Error*   /*error*/);

	Dwarf_Unsigned dwarf_add_frame_info_b(
		Dwarf_P_Debug dbg   /*dbg*/,
		Dwarf_P_Fde     /*fde*/,
		Dwarf_P_Die     /*die*/,
		Dwarf_Unsigned  /*cie*/,
		Dwarf_Addr      /*virt_addr*/,
		Dwarf_Unsigned  /*code_len*/,
		Dwarf_Unsigned  /*symidx*/,
		Dwarf_Unsigned  /*end_symbol */,
		Dwarf_Addr      /*offset_from_end_symbol */,
		Dwarf_Signed    /*offset_into_exception_tables*/,
		Dwarf_Unsigned  /*exception_table_symbol*/,
		Dwarf_Error*    /*error*/);

	Dwarf_Unsigned dwarf_add_frame_info(
		Dwarf_P_Debug dbg   /*dbg*/,
		Dwarf_P_Fde     /*fde*/,
		Dwarf_P_Die     /*die*/,
		Dwarf_Unsigned  /*cie*/,
		Dwarf_Addr      /*virt_addr*/,
		Dwarf_Unsigned  /*code_len*/,
		Dwarf_Unsigned  /*symidx*/,
		Dwarf_Signed    /*offset_into_exception_tables*/,
		Dwarf_Unsigned  /*exception_table_symbol*/,
		Dwarf_Error*    /*error*/);

	Dwarf_P_Fde dwarf_add_fde_inst(
		Dwarf_P_Fde     /*fde*/,
		Dwarf_Small     /*op*/,
		Dwarf_Unsigned  /*val1*/,
		Dwarf_Unsigned  /*val2*/,
		Dwarf_Error*    /*error*/);

	/* New September 17, 2009 */
	int dwarf_insert_fde_inst_bytes(
		Dwarf_P_Debug  /*dbg*/,
		Dwarf_P_Fde    /*fde*/,
		Dwarf_Unsigned /*len*/,
		Dwarf_Ptr      /*ibytes*/,
		Dwarf_Error*   /*error*/);


	Dwarf_P_Fde dwarf_new_fde(Dwarf_P_Debug    /*dbg*/, Dwarf_Error* /*error*/);

	Dwarf_P_Fde dwarf_fde_cfa_offset(
		Dwarf_P_Fde     /*fde*/,
		Dwarf_Unsigned  /*register_number*/,
		Dwarf_Signed    /*offset*/,
		Dwarf_Error*    /*error*/);

	/* die creation & addition routines */
	Dwarf_P_Die dwarf_new_die(
		Dwarf_P_Debug    /*dbg*/,
		Dwarf_Tag         /*tag*/,
		Dwarf_P_Die     /*parent*/,
		Dwarf_P_Die     /*child*/,
		Dwarf_P_Die     /*left */,
		Dwarf_P_Die     /*right*/,
		Dwarf_Error*    /*error*/);

	Dwarf_Unsigned dwarf_add_die_to_debug(
		Dwarf_P_Debug   /*dbg*/,
		Dwarf_P_Die     /*die*/,
		Dwarf_Error*    /*error*/);

	/* Markers are not written  to DWARF2/3/4, they are user
	defined and may be used for any purpose.
	*/
	Dwarf_Unsigned dwarf_add_die_marker(
		Dwarf_P_Debug   /*dbg*/,
		Dwarf_P_Die     /*die*/,
		Dwarf_Unsigned  /*marker*/,
		Dwarf_Error *   /*error*/);

	Dwarf_Unsigned dwarf_get_die_marker(
		Dwarf_P_Debug   /*dbg*/,
		Dwarf_P_Die     /*die*/,
		Dwarf_Unsigned *  /*marker*/,
		Dwarf_Error *   /*error*/);

	Dwarf_P_Die dwarf_die_link(
		Dwarf_P_Die     /*die*/,
		Dwarf_P_Die     /*parent*/,
		Dwarf_P_Die     /*child*/,
		Dwarf_P_Die     /*left*/,
		Dwarf_P_Die     /*right*/,
		Dwarf_Error*    /*error*/);

	void dwarf_dealloc_compressed_block(
		Dwarf_P_Debug,
		void *
		);

	/*  Call this passing in return value from dwarf_uncompress_integer_block()
	to free the space the decompression allocated. */
	void dwarf_dealloc_uncompressed_block(
		Dwarf_Debug,
		void *
		);

	void * dwarf_compress_integer_block(
		Dwarf_P_Debug,    /* dbg */
		Dwarf_Bool,       /* signed==true (or unsigned) */
		Dwarf_Small,      /* size of integer units: 8, 16, 32, 64 */
		void*,            /* data */
		Dwarf_Unsigned,   /* number of elements */
		Dwarf_Unsigned*,  /* number of bytes in output block */
		Dwarf_Error*      /* error */
		);

	/*  Decode an array of signed leb integers (so of course the
	array is not composed of fixed length values, but is instead
	a sequence of sleb values).
	Returns a DW_DLV_BADADDR on error.
	Otherwise returns a pointer to an array of 32bit integers.
	The signed argument must be non-zero (the decode
	assumes sleb integers in the input data) at this time.
	Size of integer units must be 32 (32 bits each) at this time.
	Number of bytes in block is a byte count (not array count).
	Returns number of units in output block (ie, number of elements
	of the array that the return value points to) thru the argument.  */
	void * dwarf_uncompress_integer_block(
		Dwarf_Debug,      /* dbg */
		Dwarf_Bool,       /* signed==true (or unsigned) */
		Dwarf_Small,      /* size of integer units: 8, 16, 32, 64 */
		void*,            /* input data */
		Dwarf_Unsigned,   /* number of bytes in input */
		Dwarf_Unsigned*,  /* number of units in output block */
		Dwarf_Error*      /* error */
		);

	/* Operations to create location expressions. */
	Dwarf_P_Expr dwarf_new_expr(Dwarf_P_Debug /*dbg*/, Dwarf_Error* /*error*/);

	void dwarf_expr_reset(
		Dwarf_P_Expr      /*expr*/,
		Dwarf_Error*      /*error*/);

	Dwarf_Unsigned dwarf_add_expr_gen(
		Dwarf_P_Expr      /*expr*/,
		Dwarf_Small       /*opcode*/,
		Dwarf_Unsigned    /*val1*/,
		Dwarf_Unsigned    /*val2*/,
		Dwarf_Error*      /*error*/);

	Dwarf_Unsigned dwarf_add_expr_addr(
		Dwarf_P_Expr      /*expr*/,
		Dwarf_Unsigned    /*addr*/,
		Dwarf_Signed      /*sym_index*/,
		Dwarf_Error*      /*error*/);

	Dwarf_Unsigned dwarf_add_expr_addr_b(
		Dwarf_P_Expr      /*expr*/,
		Dwarf_Unsigned    /*addr*/,
		Dwarf_Unsigned    /*sym_index*/,
		Dwarf_Error*      /*error*/);

	Dwarf_Unsigned dwarf_expr_current_offset(
		Dwarf_P_Expr      /*expr*/,
		Dwarf_Error*      /*error*/);

	Dwarf_Addr dwarf_expr_into_block(
		Dwarf_P_Expr      /*expr*/,
		Dwarf_Unsigned*   /*length*/,
		Dwarf_Error*      /*error*/);

	Dwarf_Unsigned dwarf_add_arange(Dwarf_P_Debug /*dbg*/,
		Dwarf_Addr        /*begin_address*/,
		Dwarf_Unsigned    /*length*/,
		Dwarf_Signed      /*symbol_index*/,
		Dwarf_Error*      /*error*/);

	Dwarf_Unsigned dwarf_add_arange_b(
		Dwarf_P_Debug  /*dbg*/,
		Dwarf_Addr     /*begin_address*/,
		Dwarf_Unsigned /*length*/,
		Dwarf_Unsigned /*symbol_index*/,
		Dwarf_Unsigned /*end_symbol_index*/,
		Dwarf_Addr     /*offset_from_end_symbol*/,
		Dwarf_Error *  /*error*/);

	Dwarf_Unsigned dwarf_add_pubname(
		Dwarf_P_Debug      /*dbg*/,
		Dwarf_P_Die        /*die*/,
		char*              /*pubname_name*/,
		Dwarf_Error*       /*error*/);

	/* Added 17 October 2013.  Introduced in DWARF3. */
	Dwarf_Unsigned dwarf_add_pubtype(
		Dwarf_P_Debug      /*dbg*/,
		Dwarf_P_Die        /*die*/,
		char*              /*pubtype_name*/,
		Dwarf_Error*       /*error*/);


	Dwarf_Unsigned dwarf_add_funcname(
		Dwarf_P_Debug      /*dbg*/,
		Dwarf_P_Die        /*die*/,
		char*              /*func_name*/,
		Dwarf_Error*       /*error*/);

	Dwarf_Unsigned dwarf_add_typename(
		Dwarf_P_Debug     /*dbg*/,
		Dwarf_P_Die       /*die*/,
		char*             /*type_name*/,
		Dwarf_Error*      /*error*/);

	Dwarf_Unsigned dwarf_add_varname(
		Dwarf_P_Debug     /*dbg*/,
		Dwarf_P_Die       /*die*/,
		char*             /*var_name*/,
		Dwarf_Error*      /*error*/);

	Dwarf_Unsigned dwarf_add_weakname(
		Dwarf_P_Debug    /*dbg*/,
		Dwarf_P_Die      /*die*/,
		char*            /*weak_name*/,
		Dwarf_Error*     /*error*/);

	/*  .debug_macinfo producer functions
	Functions must be called in right order: the section is output
	In the order these are presented.
	*/
	int dwarf_def_macro(Dwarf_P_Debug /*dbg*/,
		Dwarf_Unsigned   /*line*/,
		char *           /*macname, with (arglist), no space before (*/,
		char *           /*macvalue*/,
		Dwarf_Error*     /*error*/);

	int dwarf_undef_macro(Dwarf_P_Debug /*dbg*/,
		Dwarf_Unsigned   /*line*/,
		char *           /*macname, no arglist, of course*/,
		Dwarf_Error*     /*error*/);

	int dwarf_start_macro_file(Dwarf_P_Debug /*dbg*/,
		Dwarf_Unsigned   /*fileindex*/,
		Dwarf_Unsigned   /*linenumber*/,
		Dwarf_Error*     /*error*/);

	int dwarf_end_macro_file(Dwarf_P_Debug /*dbg*/,
		Dwarf_Error*     /*error*/);

	int dwarf_vendor_ext(Dwarf_P_Debug /*dbg*/,
		Dwarf_Unsigned   /*constant*/,
		char *           /*string*/,
		Dwarf_Error*     /*error*/);

	/* end macinfo producer functions */

	int dwarf_attr_offset(Dwarf_Die /*die*/,
		Dwarf_Attribute /*attr of above die*/,
		Dwarf_Off     * /*returns offset thru this ptr */,
		Dwarf_Error   * /*error*/);

	/*  This is a hack so clients can verify offsets.
	Added April 2005 so that debugger can detect broken offsets
	(which happened in an IRIX executable larger than 2GB
	with MIPSpro 7.3.1.3 toolchain.).
	*/
	int
		dwarf_get_section_max_offsets(Dwarf_Debug /*dbg*/,
		Dwarf_Unsigned * /*debug_info_size*/,
		Dwarf_Unsigned * /*debug_abbrev_size*/,
		Dwarf_Unsigned * /*debug_line_size*/,
		Dwarf_Unsigned * /*debug_loc_size*/,
		Dwarf_Unsigned * /*debug_aranges_size*/,
		Dwarf_Unsigned * /*debug_macinfo_size*/,
		Dwarf_Unsigned * /*debug_pubnames_size*/,
		Dwarf_Unsigned * /*debug_str_size*/,
		Dwarf_Unsigned * /*debug_frame_size*/,
		Dwarf_Unsigned * /*debug_ranges_size*/,
		Dwarf_Unsigned * /*debug_pubtypes_size*/);

	/*  New October 2011., adds .debug_types section to the sizes
	returned. */
	int
		dwarf_get_section_max_offsets_b(Dwarf_Debug /*dbg*/,

		Dwarf_Unsigned * /*debug_info_size*/,
		Dwarf_Unsigned * /*debug_abbrev_size*/,
		Dwarf_Unsigned * /*debug_line_size*/,
		Dwarf_Unsigned * /*debug_loc_size*/,
		Dwarf_Unsigned * /*debug_aranges_size*/,
		Dwarf_Unsigned * /*debug_macinfo_size*/,
		Dwarf_Unsigned * /*debug_pubnames_size*/,
		Dwarf_Unsigned * /*debug_str_size*/,
		Dwarf_Unsigned * /*debug_frame_size*/,
		Dwarf_Unsigned * /*debug_ranges_size*/,
		Dwarf_Unsigned * /*debug_pubtypes_size*/,
		Dwarf_Unsigned * /*debug_types_size*/);

	/*  The 'set' calls here return the original (before any change
	by these set routines) of the respective fields. */
	/*  Multiple releases spelled 'initial' as 'inital' .
	The 'inital' spelling should not be used. */
	Dwarf_Half dwarf_set_frame_rule_inital_value(Dwarf_Debug /*dbg*/,
		Dwarf_Half /*value*/);
	/*  Additional interface with correct 'initial' spelling. */
	/*  It is likely you will want to call the following 6 functions
	before accessing any frame information.  All are useful
	to tailor handling of pseudo-registers needed to turn
	frame operation references into simpler forms and to
	reflect ABI specific data.  Of course altering libdwarf.h
	and dwarf.h allow the same capabilities, but such header changes
	do not let one change these values at runtime. */
	Dwarf_Half dwarf_set_frame_rule_initial_value(Dwarf_Debug /*dbg*/,
		Dwarf_Half /*value*/);
	Dwarf_Half dwarf_set_frame_rule_table_size(Dwarf_Debug /*dbg*/,
		Dwarf_Half /*value*/);
	Dwarf_Half dwarf_set_frame_cfa_value(Dwarf_Debug /*dbg*/,
		Dwarf_Half /*value*/);
	Dwarf_Half dwarf_set_frame_same_value(Dwarf_Debug /*dbg*/,
		Dwarf_Half /*value*/);
	Dwarf_Half dwarf_set_frame_undefined_value(Dwarf_Debug /*dbg*/,
		Dwarf_Half /*value*/);
	/*  dwarf_set_default_address_size only sets 'value' if value is
	greater than zero. */
	Dwarf_Small dwarf_set_default_address_size(Dwarf_Debug /*dbg*/,
		Dwarf_Small /* value */);

	/*  As of April 27, 2009, this version with no diepointer is
	obsolete though supported.  Use dwarf_get_ranges_a() instead. */
	int dwarf_get_ranges(Dwarf_Debug /*dbg*/,
		Dwarf_Off /*rangesoffset*/,
		Dwarf_Ranges ** /*rangesbuf*/,
		Dwarf_Signed * /*listlen*/,
		Dwarf_Unsigned * /*bytecount*/,
		Dwarf_Error * /*error*/);

	/* This adds the address_size argument. New April 27, 2009 */
	int dwarf_get_ranges_a(Dwarf_Debug /*dbg*/,
		Dwarf_Off /*rangesoffset*/,
		Dwarf_Die  /* diepointer */,
		Dwarf_Ranges ** /*rangesbuf*/,
		Dwarf_Signed * /*listlen*/,
		Dwarf_Unsigned * /*bytecount*/,
		Dwarf_Error * /*error*/);

	void dwarf_ranges_dealloc(Dwarf_Debug /*dbg*/,
		Dwarf_Ranges * /*rangesbuf*/,
		Dwarf_Signed /*rangecount*/);

	/* The harmless error list is a circular buffer of
	errors we note but which do not stop us from processing
	the object.  Created so dwarfdump or other tools
	can report such inconsequential errors without causing
	anything to stop early. */
#define DW_HARMLESS_ERROR_CIRCULAR_LIST_DEFAULT_SIZE 4
#define DW_HARMLESS_ERROR_MSG_STRING_SIZE   200
	/* User code supplies size of array of pointers errmsg_ptrs_array
	in count and the array of pointers (the pointers themselves
	need not be initialized).
	The pointers returned in the array of pointers
	are invalidated by ANY call to libdwarf.
	Use them before making another libdwarf call!
	The array of string pointers passed in always has
	a final null pointer, so if there are N pointers the
	and M actual strings, then MIN(M,N-1) pointers are
	set to point to error strings.  The array of pointers
	to strings always terminates with a NULL pointer.
	If 'count' is passed in zero then errmsg_ptrs_array
	is not touched.

	The function returns DW_DLV_NO_ENTRY if no harmless errors
	were noted so far.  Returns DW_DLV_OK if there are errors.
	Never returns DW_DLV_ERROR.

	Each call empties the error list (discarding all current entries).
	If newerr_count is non-NULL the count of harmless errors
	since the last call is returned through the pointer
	(some may have been discarded or not returned, it is a circular
	list...).
	If DW_DLV_NO_ENTRY is returned none of the arguments
	here are touched or used.
	*/
	int dwarf_get_harmless_error_list(Dwarf_Debug /*dbg*/,
		unsigned  /*count*/,
		const char ** /*errmsg_ptrs_array*/,
		unsigned * /*newerr_count*/);

	/*  Insertion is only for testing the harmless error code, it is not
	necessarily useful otherwise. */
	void dwarf_insert_harmless_error(Dwarf_Debug /*dbg*/,
		char * /*newerror*/);

	/*  The size of the circular list of strings may be set
	and reset as needed.  If it is shortened excess
	messages are simply dropped.  It returns the previous
	size. If zero passed in the size is unchanged
	and it simply returns the current size  */
	unsigned dwarf_set_harmless_error_list_size(Dwarf_Debug /*dbg*/,
		unsigned /*maxcount*/);
	/*  The harmless error strings (if any) are freed when the dbg
	is dwarf_finish()ed. */

	/*  When the val_in is known these dwarf_get_TAG_name (etc)
	functions return the string corresponding to the val_in passed in
	through the pointer s_out and the value returned is DW_DLV_OK.
	The strings are in static storage
	and must not be freed.
	If DW_DLV_NO_ENTRY is returned the val_in is not known and
	*s_out is not set.  DW_DLV_ERROR is never returned.*/

	/* The following copied from a generated dwarf_names.h */

	/* BEGIN FILE */

	extern int dwarf_get_TAG_name(unsigned int /*val_in*/, const char ** /*s_out */);
	extern int dwarf_get_children_name(unsigned int /*val_in*/, const char ** /*s_out */);
	extern int dwarf_get_FORM_name(unsigned int /*val_in*/, const char ** /*s_out */);
	extern int dwarf_get_AT_name(unsigned int /*val_in*/, const char ** /*s_out */);
	extern int dwarf_get_OP_name(unsigned int /*val_in*/, const char ** /*s_out */);
	extern int dwarf_get_ATE_name(unsigned int /*val_in*/, const char ** /*s_out */);
	extern int dwarf_get_DS_name(unsigned int /*val_in*/, const char ** /*s_out */);
	extern int dwarf_get_END_name(unsigned int /*val_in*/, const char ** /*s_out */);
	extern int dwarf_get_ATCF_name(unsigned int /*val_in*/, const char ** /*s_out */);
	extern int dwarf_get_ACCESS_name(unsigned int /*val_in*/, const char ** /*s_out */);
	extern int dwarf_get_VIS_name(unsigned int /*val_in*/, const char ** /*s_out */);
	extern int dwarf_get_VIRTUALITY_name(unsigned int /*val_in*/, const char ** /*s_out */);
	extern int dwarf_get_LANG_name(unsigned int /*val_in*/, const char ** /*s_out */);
	extern int dwarf_get_ID_name(unsigned int /*val_in*/, const char ** /*s_out */);
	extern int dwarf_get_CC_name(unsigned int /*val_in*/, const char ** /*s_out */);
	extern int dwarf_get_INL_name(unsigned int /*val_in*/, const char ** /*s_out */);
	extern int dwarf_get_ORD_name(unsigned int /*val_in*/, const char ** /*s_out */);
	extern int dwarf_get_DSC_name(unsigned int /*val_in*/, const char ** /*s_out */);
	extern int dwarf_get_LNS_name(unsigned int /*val_in*/, const char ** /*s_out */);
	extern int dwarf_get_LNE_name(unsigned int /*val_in*/, const char ** /*s_out */);
	extern int dwarf_get_ISA_name(unsigned int /*val_in*/, const char ** /*s_out */);
	extern int dwarf_get_MACINFO_name(unsigned int /*val_in*/, const char ** /*s_out */);
	extern int dwarf_get_CFA_name(unsigned int /*val_in*/, const char ** /*s_out */);
	extern int dwarf_get_EH_name(unsigned int /*val_in*/, const char ** /*s_out */);
	extern int dwarf_get_FRAME_name(unsigned int /*val_in*/, const char ** /*s_out */);
	extern int dwarf_get_CHILDREN_name(unsigned int /*val_in*/, const char ** /*s_out */);
	extern int dwarf_get_ADDR_name(unsigned int /*val_in*/, const char ** /*s_out */);
	extern int dwarf_get_SECT_name(unsigned int /*val_in*/, const char ** /*s_out*/);
	extern int dwarf_get_MACRO_name(unsigned int /*val_in*/, const char ** /*s_out*/);
	//extern int dwarf_get_DEFAULT_name (unsigned int /*val_in*/,const char ** /*s_out*/);
	extern int dwarf_get_IDX_name(unsigned int /*val_in*/, const char ** /*s_out*/);

	/* END FILE */

	/* Convert local offset into global offset */
	int dwarf_convert_to_global_offset(Dwarf_Attribute  /*attr*/,
		Dwarf_Off        /*offset*/,
		Dwarf_Off*       /*ret_offset*/,
		Dwarf_Error*     /*error*/);

	/* Get both offsets (local and global) */
	int dwarf_die_offsets(Dwarf_Die     /*die*/,
		Dwarf_Off*    /*global_offset*/,
		Dwarf_Off*    /*local_offset*/,
		Dwarf_Error*  /*error*/);

	/* Giving a section name, get its size and address */
	int dwarf_get_section_info_by_name(Dwarf_Debug      /*dbg*/,
		const char *     /*section_name*/,
		Dwarf_Addr*      /*section_addr*/,
		Dwarf_Unsigned*  /*section_size*/,
		Dwarf_Error*     /*error*/);

	/* Giving a section index, get its size and address */
	int dwarf_get_section_info_by_index(Dwarf_Debug      /*dbg*/,
		int              /*section_index*/,
		const char **    /*section_name*/,
		Dwarf_Addr*      /*section_addr*/,
		Dwarf_Unsigned*  /*section_size*/,
		Dwarf_Error*     /*error*/);

	/*  Get section count, of object file sections. */
	int dwarf_get_section_count(Dwarf_Debug /*dbg*/);

	/*  Get the version and offset size of a CU context.
	This is useful as a precursor to
	calling dwarf_get_form_class() at times.  */
	int dwarf_get_version_of_die(Dwarf_Die /*die*/,
		Dwarf_Half * /*version*/,
		Dwarf_Half * /*offset_size*/);

	/*  These make the  LEB encoding routines visible to libdwarf
	callers. Added November, 2012. */
	int dwarf_encode_leb128(Dwarf_Unsigned /*val*/,
		int * /*nbytes*/,
		char * /*space*/,
		int /*splen*/);
	int dwarf_encode_signed_leb128(Dwarf_Signed /*val*/,
		int * /*nbytes*/,
		char * /*space*/,
		int /*splen*/);

	/*  Record some application command line options in libdwarf.
	This is not arc/argv processing, just precooked setting
	of a flag in libdwarf based on something the application
	wants.  check_verbose_mode of TRUE means do more checking
	and sometimes print errors (from libdwarf).
	Not restricted to a single Dwarf_Debug, it applies
	to the libdwarf the executable is using.
	*/
	typedef struct {
		Dwarf_Bool check_verbose_mode;
	} Dwarf_Cmdline_Options;
	extern Dwarf_Cmdline_Options dwarf_cmdline_options;

	/* Set libdwarf to reflect some application command line options. */
	void dwarf_record_cmdline_options(Dwarf_Cmdline_Options /*options*/);

