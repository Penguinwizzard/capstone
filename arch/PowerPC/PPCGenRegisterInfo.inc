
/* Capstone Disassembly Engine, http://www.capstone-engine.org */
/* By Nguyen Anh Quynh <aquynh@gmail.com>, 2013-2019 */

/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* Target Register Enum Values                                                *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

#ifdef GET_REGINFO_ENUM
#undef GET_REGINFO_ENUM

enum {
  PPC_NoRegister,
  PPC_BP = 1,
  PPC_CARRY = 2,
  PPC_CTR = 3,
  PPC_FP = 4,
  PPC_LR = 5,
  PPC_RM = 6,
  PPC_SPEFSCR = 7,
  PPC_VRSAVE = 8,
  PPC_XER = 9,
  PPC_ZERO = 10,
  PPC_ACC0 = 11,
  PPC_ACC1 = 12,
  PPC_ACC2 = 13,
  PPC_ACC3 = 14,
  PPC_ACC4 = 15,
  PPC_ACC5 = 16,
  PPC_ACC6 = 17,
  PPC_ACC7 = 18,
  PPC_BP8 = 19,
  PPC_CR0 = 20,
  PPC_CR1 = 21,
  PPC_CR2 = 22,
  PPC_CR3 = 23,
  PPC_CR4 = 24,
  PPC_CR5 = 25,
  PPC_CR6 = 26,
  PPC_CR7 = 27,
  PPC_CTR8 = 28,
  PPC_F0 = 29,
  PPC_F1 = 30,
  PPC_F2 = 31,
  PPC_F3 = 32,
  PPC_F4 = 33,
  PPC_F5 = 34,
  PPC_F6 = 35,
  PPC_F7 = 36,
  PPC_F8 = 37,
  PPC_F9 = 38,
  PPC_F10 = 39,
  PPC_F11 = 40,
  PPC_F12 = 41,
  PPC_F13 = 42,
  PPC_F14 = 43,
  PPC_F15 = 44,
  PPC_F16 = 45,
  PPC_F17 = 46,
  PPC_F18 = 47,
  PPC_F19 = 48,
  PPC_F20 = 49,
  PPC_F21 = 50,
  PPC_F22 = 51,
  PPC_F23 = 52,
  PPC_F24 = 53,
  PPC_F25 = 54,
  PPC_F26 = 55,
  PPC_F27 = 56,
  PPC_F28 = 57,
  PPC_F29 = 58,
  PPC_F30 = 59,
  PPC_F31 = 60,
  PPC_FP8 = 61,
  PPC_LR8 = 62,
  PPC_PSF0 = 63,
  PPC_PSF1 = 64,
  PPC_PSF2 = 65,
  PPC_PSF3 = 66,
  PPC_PSF4 = 67,
  PPC_PSF5 = 68,
  PPC_PSF6 = 69,
  PPC_PSF7 = 70,
  PPC_PSF8 = 71,
  PPC_PSF9 = 72,
  PPC_PSF10 = 73,
  PPC_PSF11 = 74,
  PPC_PSF12 = 75,
  PPC_PSF13 = 76,
  PPC_PSF14 = 77,
  PPC_PSF15 = 78,
  PPC_PSF16 = 79,
  PPC_PSF17 = 80,
  PPC_PSF18 = 81,
  PPC_PSF19 = 82,
  PPC_PSF20 = 83,
  PPC_PSF21 = 84,
  PPC_PSF22 = 85,
  PPC_PSF23 = 86,
  PPC_PSF24 = 87,
  PPC_PSF25 = 88,
  PPC_PSF26 = 89,
  PPC_PSF27 = 90,
  PPC_PSF28 = 91,
  PPC_PSF29 = 92,
  PPC_PSF30 = 93,
  PPC_PSF31 = 94,
  PPC_R0 = 95,
  PPC_R1 = 96,
  PPC_R2 = 97,
  PPC_R3 = 98,
  PPC_R4 = 99,
  PPC_R5 = 100,
  PPC_R6 = 101,
  PPC_R7 = 102,
  PPC_R8 = 103,
  PPC_R9 = 104,
  PPC_R10 = 105,
  PPC_R11 = 106,
  PPC_R12 = 107,
  PPC_R13 = 108,
  PPC_R14 = 109,
  PPC_R15 = 110,
  PPC_R16 = 111,
  PPC_R17 = 112,
  PPC_R18 = 113,
  PPC_R19 = 114,
  PPC_R20 = 115,
  PPC_R21 = 116,
  PPC_R22 = 117,
  PPC_R23 = 118,
  PPC_R24 = 119,
  PPC_R25 = 120,
  PPC_R26 = 121,
  PPC_R27 = 122,
  PPC_R28 = 123,
  PPC_R29 = 124,
  PPC_R30 = 125,
  PPC_R31 = 126,
  PPC_S0 = 127,
  PPC_S1 = 128,
  PPC_S2 = 129,
  PPC_S3 = 130,
  PPC_S4 = 131,
  PPC_S5 = 132,
  PPC_S6 = 133,
  PPC_S7 = 134,
  PPC_S8 = 135,
  PPC_S9 = 136,
  PPC_S10 = 137,
  PPC_S11 = 138,
  PPC_S12 = 139,
  PPC_S13 = 140,
  PPC_S14 = 141,
  PPC_S15 = 142,
  PPC_S16 = 143,
  PPC_S17 = 144,
  PPC_S18 = 145,
  PPC_S19 = 146,
  PPC_S20 = 147,
  PPC_S21 = 148,
  PPC_S22 = 149,
  PPC_S23 = 150,
  PPC_S24 = 151,
  PPC_S25 = 152,
  PPC_S26 = 153,
  PPC_S27 = 154,
  PPC_S28 = 155,
  PPC_S29 = 156,
  PPC_S30 = 157,
  PPC_S31 = 158,
  PPC_UACC0 = 159,
  PPC_UACC1 = 160,
  PPC_UACC2 = 161,
  PPC_UACC3 = 162,
  PPC_UACC4 = 163,
  PPC_UACC5 = 164,
  PPC_UACC6 = 165,
  PPC_UACC7 = 166,
  PPC_V0 = 167,
  PPC_V1 = 168,
  PPC_V2 = 169,
  PPC_V3 = 170,
  PPC_V4 = 171,
  PPC_V5 = 172,
  PPC_V6 = 173,
  PPC_V7 = 174,
  PPC_V8 = 175,
  PPC_V9 = 176,
  PPC_V10 = 177,
  PPC_V11 = 178,
  PPC_V12 = 179,
  PPC_V13 = 180,
  PPC_V14 = 181,
  PPC_V15 = 182,
  PPC_V16 = 183,
  PPC_V17 = 184,
  PPC_V18 = 185,
  PPC_V19 = 186,
  PPC_V20 = 187,
  PPC_V21 = 188,
  PPC_V22 = 189,
  PPC_V23 = 190,
  PPC_V24 = 191,
  PPC_V25 = 192,
  PPC_V26 = 193,
  PPC_V27 = 194,
  PPC_V28 = 195,
  PPC_V29 = 196,
  PPC_V30 = 197,
  PPC_V31 = 198,
  PPC_VF0 = 199,
  PPC_VF1 = 200,
  PPC_VF2 = 201,
  PPC_VF3 = 202,
  PPC_VF4 = 203,
  PPC_VF5 = 204,
  PPC_VF6 = 205,
  PPC_VF7 = 206,
  PPC_VF8 = 207,
  PPC_VF9 = 208,
  PPC_VF10 = 209,
  PPC_VF11 = 210,
  PPC_VF12 = 211,
  PPC_VF13 = 212,
  PPC_VF14 = 213,
  PPC_VF15 = 214,
  PPC_VF16 = 215,
  PPC_VF17 = 216,
  PPC_VF18 = 217,
  PPC_VF19 = 218,
  PPC_VF20 = 219,
  PPC_VF21 = 220,
  PPC_VF22 = 221,
  PPC_VF23 = 222,
  PPC_VF24 = 223,
  PPC_VF25 = 224,
  PPC_VF26 = 225,
  PPC_VF27 = 226,
  PPC_VF28 = 227,
  PPC_VF29 = 228,
  PPC_VF30 = 229,
  PPC_VF31 = 230,
  PPC_VSL0 = 231,
  PPC_VSL1 = 232,
  PPC_VSL2 = 233,
  PPC_VSL3 = 234,
  PPC_VSL4 = 235,
  PPC_VSL5 = 236,
  PPC_VSL6 = 237,
  PPC_VSL7 = 238,
  PPC_VSL8 = 239,
  PPC_VSL9 = 240,
  PPC_VSL10 = 241,
  PPC_VSL11 = 242,
  PPC_VSL12 = 243,
  PPC_VSL13 = 244,
  PPC_VSL14 = 245,
  PPC_VSL15 = 246,
  PPC_VSL16 = 247,
  PPC_VSL17 = 248,
  PPC_VSL18 = 249,
  PPC_VSL19 = 250,
  PPC_VSL20 = 251,
  PPC_VSL21 = 252,
  PPC_VSL22 = 253,
  PPC_VSL23 = 254,
  PPC_VSL24 = 255,
  PPC_VSL25 = 256,
  PPC_VSL26 = 257,
  PPC_VSL27 = 258,
  PPC_VSL28 = 259,
  PPC_VSL29 = 260,
  PPC_VSL30 = 261,
  PPC_VSL31 = 262,
  PPC_VSRp0 = 263,
  PPC_VSRp1 = 264,
  PPC_VSRp2 = 265,
  PPC_VSRp3 = 266,
  PPC_VSRp4 = 267,
  PPC_VSRp5 = 268,
  PPC_VSRp6 = 269,
  PPC_VSRp7 = 270,
  PPC_VSRp8 = 271,
  PPC_VSRp9 = 272,
  PPC_VSRp10 = 273,
  PPC_VSRp11 = 274,
  PPC_VSRp12 = 275,
  PPC_VSRp13 = 276,
  PPC_VSRp14 = 277,
  PPC_VSRp15 = 278,
  PPC_VSRp16 = 279,
  PPC_VSRp17 = 280,
  PPC_VSRp18 = 281,
  PPC_VSRp19 = 282,
  PPC_VSRp20 = 283,
  PPC_VSRp21 = 284,
  PPC_VSRp22 = 285,
  PPC_VSRp23 = 286,
  PPC_VSRp24 = 287,
  PPC_VSRp25 = 288,
  PPC_VSRp26 = 289,
  PPC_VSRp27 = 290,
  PPC_VSRp28 = 291,
  PPC_VSRp29 = 292,
  PPC_VSRp30 = 293,
  PPC_VSRp31 = 294,
  PPC_VSX32 = 295,
  PPC_VSX33 = 296,
  PPC_VSX34 = 297,
  PPC_VSX35 = 298,
  PPC_VSX36 = 299,
  PPC_VSX37 = 300,
  PPC_VSX38 = 301,
  PPC_VSX39 = 302,
  PPC_VSX40 = 303,
  PPC_VSX41 = 304,
  PPC_VSX42 = 305,
  PPC_VSX43 = 306,
  PPC_VSX44 = 307,
  PPC_VSX45 = 308,
  PPC_VSX46 = 309,
  PPC_VSX47 = 310,
  PPC_VSX48 = 311,
  PPC_VSX49 = 312,
  PPC_VSX50 = 313,
  PPC_VSX51 = 314,
  PPC_VSX52 = 315,
  PPC_VSX53 = 316,
  PPC_VSX54 = 317,
  PPC_VSX55 = 318,
  PPC_VSX56 = 319,
  PPC_VSX57 = 320,
  PPC_VSX58 = 321,
  PPC_VSX59 = 322,
  PPC_VSX60 = 323,
  PPC_VSX61 = 324,
  PPC_VSX62 = 325,
  PPC_VSX63 = 326,
  PPC_X0 = 327,
  PPC_X1 = 328,
  PPC_X2 = 329,
  PPC_X3 = 330,
  PPC_X4 = 331,
  PPC_X5 = 332,
  PPC_X6 = 333,
  PPC_X7 = 334,
  PPC_X8 = 335,
  PPC_X9 = 336,
  PPC_X10 = 337,
  PPC_X11 = 338,
  PPC_X12 = 339,
  PPC_X13 = 340,
  PPC_X14 = 341,
  PPC_X15 = 342,
  PPC_X16 = 343,
  PPC_X17 = 344,
  PPC_X18 = 345,
  PPC_X19 = 346,
  PPC_X20 = 347,
  PPC_X21 = 348,
  PPC_X22 = 349,
  PPC_X23 = 350,
  PPC_X24 = 351,
  PPC_X25 = 352,
  PPC_X26 = 353,
  PPC_X27 = 354,
  PPC_X28 = 355,
  PPC_X29 = 356,
  PPC_X30 = 357,
  PPC_X31 = 358,
  PPC_ZERO8 = 359,
  PPC_CR0EQ = 360,
  PPC_CR1EQ = 361,
  PPC_CR2EQ = 362,
  PPC_CR3EQ = 363,
  PPC_CR4EQ = 364,
  PPC_CR5EQ = 365,
  PPC_CR6EQ = 366,
  PPC_CR7EQ = 367,
  PPC_CR0GT = 368,
  PPC_CR1GT = 369,
  PPC_CR2GT = 370,
  PPC_CR3GT = 371,
  PPC_CR4GT = 372,
  PPC_CR5GT = 373,
  PPC_CR6GT = 374,
  PPC_CR7GT = 375,
  PPC_CR0LT = 376,
  PPC_CR1LT = 377,
  PPC_CR2LT = 378,
  PPC_CR3LT = 379,
  PPC_CR4LT = 380,
  PPC_CR5LT = 381,
  PPC_CR6LT = 382,
  PPC_CR7LT = 383,
  PPC_CR0UN = 384,
  PPC_CR1UN = 385,
  PPC_CR2UN = 386,
  PPC_CR3UN = 387,
  PPC_CR4UN = 388,
  PPC_CR5UN = 389,
  PPC_CR6UN = 390,
  PPC_CR7UN = 391,
  PPC_NUM_TARGET_REGS // 392
};

// Register classes
enum {
  PPC_VSSRCRegClassID = 0,
  PPC_GPRCRegClassID = 1,
  PPC_GPRC_NOR0RegClassID = 2,
  PPC_GPRC_and_GPRC_NOR0RegClassID = 3,
  PPC_CRBITRCRegClassID = 4,
  PPC_F4RCRegClassID = 5,
  PPC_CRRCRegClassID = 6,
  PPC_CARRYRCRegClassID = 7,
  PPC_CTRRCRegClassID = 8,
  PPC_VRSAVERCRegClassID = 9,
  PPC_SPILLTOVSRRCRegClassID = 10,
  PPC_VSFRCRegClassID = 11,
  PPC_G8RCRegClassID = 12,
  PPC_G8RC_NOX0RegClassID = 13,
  PPC_SPILLTOVSRRC_and_VSFRCRegClassID = 14,
  PPC_G8RC_and_G8RC_NOX0RegClassID = 15,
  PPC_F8RCRegClassID = 16,
  PPC_PSRCRegClassID = 17,
  PPC_SPERCRegClassID = 18,
  PPC_VFRCRegClassID = 19,
  PPC_SPERC_with_sub_32_in_GPRC_NOR0RegClassID = 20,
  PPC_SPILLTOVSRRC_and_VFRCRegClassID = 21,
  PPC_SPILLTOVSRRC_and_F4RCRegClassID = 22,
  PPC_CTRRC8RegClassID = 23,
  PPC_VSRCRegClassID = 24,
  PPC_VSRC_with_sub_64_in_SPILLTOVSRRCRegClassID = 25,
  PPC_VRRCRegClassID = 26,
  PPC_VSLRCRegClassID = 27,
  PPC_VRRC_with_sub_64_in_SPILLTOVSRRCRegClassID = 28,
  PPC_VSLRC_with_sub_64_in_SPILLTOVSRRCRegClassID = 29,
  PPC_VSRpRCRegClassID = 30,
  PPC_VSRpRC_with_sub_64_in_SPILLTOVSRRCRegClassID = 31,
  PPC_VSRpRC_with_sub_64_in_F4RCRegClassID = 32,
  PPC_VSRpRC_with_sub_64_in_VFRCRegClassID = 33,
  PPC_VSRpRC_with_sub_64_in_SPILLTOVSRRC_and_VFRCRegClassID = 34,
  PPC_VSRpRC_with_sub_64_in_SPILLTOVSRRC_and_F4RCRegClassID = 35,
  PPC_ACCRCRegClassID = 36,
  PPC_UACCRCRegClassID = 37,
  PPC_ACCRC_with_sub_64_in_SPILLTOVSRRCRegClassID = 38,
  PPC_UACCRC_with_sub_64_in_SPILLTOVSRRCRegClassID = 39,
  PPC_ACCRC_with_sub_pair1_then_sub_64_in_SPILLTOVSRRCRegClassID = 40,
  PPC_UACCRC_with_sub_pair1_then_sub_64_in_SPILLTOVSRRCRegClassID = 41,
};

#endif // GET_REGINFO_ENUM

#ifdef GET_REGINFO_MC_DESC
#undef GET_REGINFO_MC_DESC


static const MCPhysReg PPCRegDiffLists[] = {
  /* 0 */ 0, 0,
  /* 2 */ 64909, 1, 1, 1, 0,
  /* 7 */ 65497, 1, 1, 1, 0,
  /* 12 */ 65501, 1, 1, 1, 0,
  /* 17 */ 65019, 1, 0,
  /* 20 */ 65117, 1, 0,
  /* 23 */ 3, 0,
  /* 25 */ 8, 0,
  /* 27 */ 12, 0,
  /* 29 */ 18, 0,
  /* 31 */ 356, 65528, 65528, 24, 0,
  /* 36 */ 65424, 32, 65505, 32, 0,
  /* 41 */ 65425, 32, 65505, 32, 0,
  /* 46 */ 65426, 32, 65505, 32, 0,
  /* 51 */ 65427, 32, 65505, 32, 0,
  /* 56 */ 65428, 32, 65505, 32, 0,
  /* 61 */ 65429, 32, 65505, 32, 0,
  /* 66 */ 65430, 32, 65505, 32, 0,
  /* 71 */ 65431, 32, 65505, 32, 0,
  /* 76 */ 65432, 32, 65505, 32, 0,
  /* 81 */ 65433, 32, 65505, 32, 0,
  /* 86 */ 65434, 32, 65505, 32, 0,
  /* 91 */ 65435, 32, 65505, 32, 0,
  /* 96 */ 65436, 32, 65505, 32, 0,
  /* 101 */ 65437, 32, 65505, 32, 0,
  /* 106 */ 65438, 32, 65505, 32, 0,
  /* 111 */ 65439, 32, 65505, 32, 0,
  /* 116 */ 57, 0,
  /* 118 */ 73, 0,
  /* 120 */ 65504, 96, 0,
  /* 123 */ 65504, 97, 0,
  /* 126 */ 65504, 98, 0,
  /* 129 */ 65504, 99, 0,
  /* 132 */ 65504, 100, 0,
  /* 135 */ 65504, 101, 0,
  /* 138 */ 65504, 102, 0,
  /* 141 */ 65504, 103, 0,
  /* 144 */ 65504, 104, 0,
  /* 147 */ 65504, 105, 0,
  /* 150 */ 65504, 106, 0,
  /* 153 */ 65504, 107, 0,
  /* 156 */ 65504, 108, 0,
  /* 159 */ 65504, 109, 0,
  /* 162 */ 65504, 110, 0,
  /* 165 */ 65504, 111, 0,
  /* 168 */ 65504, 112, 0,
  /* 171 */ 202, 16, 65276, 148, 0,
  /* 176 */ 202, 17, 65276, 148, 0,
  /* 181 */ 202, 17, 65277, 148, 0,
  /* 186 */ 202, 18, 65277, 148, 0,
  /* 191 */ 202, 19, 65277, 148, 0,
  /* 196 */ 202, 19, 65278, 148, 0,
  /* 201 */ 202, 20, 65278, 148, 0,
  /* 206 */ 202, 21, 65278, 148, 0,
  /* 211 */ 202, 21, 65279, 148, 0,
  /* 216 */ 202, 22, 65279, 148, 0,
  /* 221 */ 202, 23, 65279, 148, 0,
  /* 226 */ 202, 23, 65280, 148, 0,
  /* 231 */ 202, 24, 65280, 148, 0,
  /* 236 */ 202, 25, 65280, 148, 0,
  /* 241 */ 202, 25, 65281, 148, 0,
  /* 246 */ 202, 26, 65281, 148, 0,
  /* 251 */ 202, 27, 65281, 148, 0,
  /* 256 */ 202, 27, 65282, 148, 0,
  /* 261 */ 202, 28, 65282, 148, 0,
  /* 266 */ 202, 29, 65282, 148, 0,
  /* 271 */ 202, 29, 65283, 148, 0,
  /* 276 */ 202, 30, 65283, 148, 0,
  /* 281 */ 202, 31, 65283, 148, 0,
  /* 286 */ 202, 31, 65284, 148, 0,
  /* 291 */ 202, 32, 65284, 148, 0,
  /* 296 */ 32, 200, 0,
  /* 299 */ 349, 0,
  /* 301 */ 64044, 0,
  /* 303 */ 64073, 0,
  /* 305 */ 64106, 0,
  /* 307 */ 64139, 0,
  /* 309 */ 65172, 0,
  /* 311 */ 65180, 0,
  /* 313 */ 65187, 0,
  /* 315 */ 65188, 0,
  /* 317 */ 65196, 0,
  /* 319 */ 65304, 0,
  /* 321 */ 65314, 0,
  /* 323 */ 65316, 0,
  /* 325 */ 65504, 65334, 203, 65334, 0,
  /* 330 */ 104, 65504, 65334, 203, 65334, 234, 65505, 65334, 203, 65334, 0,
  /* 341 */ 252, 65504, 65334, 203, 65334, 234, 65505, 65334, 203, 65334, 0,
  /* 352 */ 65506, 65334, 203, 65334, 0,
  /* 357 */ 105, 65506, 65334, 203, 65334, 232, 65507, 65334, 203, 65334, 0,
  /* 368 */ 253, 65506, 65334, 203, 65334, 232, 65507, 65334, 203, 65334, 0,
  /* 379 */ 65508, 65334, 203, 65334, 0,
  /* 384 */ 106, 65508, 65334, 203, 65334, 230, 65509, 65334, 203, 65334, 0,
  /* 395 */ 254, 65508, 65334, 203, 65334, 230, 65509, 65334, 203, 65334, 0,
  /* 406 */ 65510, 65334, 203, 65334, 0,
  /* 411 */ 107, 65510, 65334, 203, 65334, 228, 65511, 65334, 203, 65334, 0,
  /* 422 */ 255, 65510, 65334, 203, 65334, 228, 65511, 65334, 203, 65334, 0,
  /* 433 */ 65512, 65334, 203, 65334, 0,
  /* 438 */ 108, 65512, 65334, 203, 65334, 226, 65513, 65334, 203, 65334, 0,
  /* 449 */ 256, 65512, 65334, 203, 65334, 226, 65513, 65334, 203, 65334, 0,
  /* 460 */ 65514, 65334, 203, 65334, 0,
  /* 465 */ 109, 65514, 65334, 203, 65334, 224, 65515, 65334, 203, 65334, 0,
  /* 476 */ 257, 65514, 65334, 203, 65334, 224, 65515, 65334, 203, 65334, 0,
  /* 487 */ 65516, 65334, 203, 65334, 0,
  /* 492 */ 110, 65516, 65334, 203, 65334, 222, 65517, 65334, 203, 65334, 0,
  /* 503 */ 258, 65516, 65334, 203, 65334, 222, 65517, 65334, 203, 65334, 0,
  /* 514 */ 65518, 65334, 203, 65334, 0,
  /* 519 */ 111, 65518, 65334, 203, 65334, 220, 65519, 65334, 203, 65334, 0,
  /* 530 */ 259, 65518, 65334, 203, 65334, 220, 65519, 65334, 203, 65334, 0,
  /* 541 */ 65412, 0,
  /* 543 */ 65474, 0,
  /* 545 */ 65476, 0,
  /* 547 */ 65479, 0,
  /* 549 */ 65504, 0,
  /* 551 */ 65508, 0,
  /* 553 */ 65516, 0,
  /* 555 */ 65518, 0,
  /* 557 */ 65535, 0,
};

static const uint16_t PPCSubRegIdxLists[] = {
  /* 0 */ 1, 0,
  /* 2 */ 2, 0,
  /* 4 */ 5, 4, 3, 8, 0,
  /* 9 */ 9, 2, 10, 11, 0,
  /* 14 */ 6, 9, 2, 10, 11, 7, 13, 12, 14, 15, 0,
};

static const MCRegisterDesc PPCRegDesc[] = {
  { 5, 0, 0, 0, 0, 0 },
  { 1531, 1, 29, 1, 8913, 0 },
  { 1700, 1, 1, 1, 8913, 0 },
  { 1600, 1, 1, 1, 8913, 0 },
  { 1534, 1, 116, 1, 8913, 0 },
  { 1597, 1, 1, 1, 8913, 0 },
  { 1475, 1, 1, 1, 8913, 0 },
  { 1585, 1, 1, 1, 8913, 0 },
  { 1468, 1, 1, 1, 8913, 0 },
  { 1593, 1, 1, 1, 8695, 0 },
  { 1526, 1, 299, 1, 8695, 0 },
  { 139, 341, 1, 14, 196, 14 },
  { 316, 368, 1, 14, 196, 14 },
  { 459, 395, 1, 14, 196, 14 },
  { 602, 422, 1, 14, 196, 14 },
  { 739, 449, 1, 14, 196, 14 },
  { 876, 476, 1, 14, 196, 14 },
  { 1013, 503, 1, 14, 196, 14 },
  { 1150, 530, 1, 14, 196, 14 },
  { 1306, 555, 1, 0, 0, 2 },
  { 158, 31, 1, 4, 116, 6 },
  { 335, 31, 1, 4, 116, 6 },
  { 478, 31, 1, 4, 116, 6 },
  { 621, 31, 1, 4, 116, 6 },
  { 758, 31, 1, 4, 116, 6 },
  { 895, 31, 1, 4, 116, 6 },
  { 1032, 31, 1, 4, 116, 6 },
  { 1169, 31, 1, 4, 116, 6 },
  { 1318, 1, 1, 1, 1888, 0 },
  { 146, 1, 291, 1, 8849, 0 },
  { 323, 1, 286, 1, 8849, 0 },
  { 466, 1, 281, 1, 8849, 0 },
  { 609, 1, 276, 1, 8849, 0 },
  { 746, 1, 276, 1, 8849, 0 },
  { 883, 1, 271, 1, 8849, 0 },
  { 1020, 1, 266, 1, 8849, 0 },
  { 1157, 1, 261, 1, 8849, 0 },
  { 1288, 1, 261, 1, 8849, 0 },
  { 1438, 1, 256, 1, 8849, 0 },
  { 2, 1, 251, 1, 8849, 0 },
  { 179, 1, 246, 1, 8849, 0 },
  { 356, 1, 246, 1, 8849, 0 },
  { 499, 1, 241, 1, 8849, 0 },
  { 642, 1, 236, 1, 8849, 0 },
  { 779, 1, 231, 1, 8849, 0 },
  { 916, 1, 231, 1, 8849, 0 },
  { 1053, 1, 226, 1, 8849, 0 },
  { 1190, 1, 221, 1, 8849, 0 },
  { 1340, 1, 216, 1, 8849, 0 },
  { 42, 1, 216, 1, 8849, 0 },
  { 219, 1, 211, 1, 8849, 0 },
  { 396, 1, 206, 1, 8849, 0 },
  { 539, 1, 201, 1, 8849, 0 },
  { 682, 1, 201, 1, 8849, 0 },
  { 819, 1, 196, 1, 8849, 0 },
  { 956, 1, 191, 1, 8849, 0 },
  { 1093, 1, 186, 1, 8849, 0 },
  { 1230, 1, 186, 1, 8849, 0 },
  { 1380, 1, 181, 1, 8849, 0 },
  { 82, 1, 176, 1, 8849, 0 },
  { 259, 1, 171, 1, 8849, 0 },
  { 1310, 547, 1, 0, 368, 2 },
  { 1314, 1, 1, 1, 433, 0 },
  { 144, 1, 1, 1, 433, 0 },
  { 321, 1, 1, 1, 433, 0 },
  { 464, 1, 1, 1, 433, 0 },
  { 607, 1, 1, 1, 433, 0 },
  { 744, 1, 1, 1, 433, 0 },
  { 881, 1, 1, 1, 433, 0 },
  { 1018, 1, 1, 1, 433, 0 },
  { 1155, 1, 1, 1, 433, 0 },
  { 1286, 1, 1, 1, 433, 0 },
  { 1436, 1, 1, 1, 433, 0 },
  { 0, 1, 1, 1, 433, 0 },
  { 177, 1, 1, 1, 433, 0 },
  { 354, 1, 1, 1, 433, 0 },
  { 497, 1, 1, 1, 433, 0 },
  { 640, 1, 1, 1, 433, 0 },
  { 777, 1, 1, 1, 433, 0 },
  { 914, 1, 1, 1, 433, 0 },
  { 1051, 1, 1, 1, 433, 0 },
  { 1188, 1, 1, 1, 433, 0 },
  { 1338, 1, 1, 1, 433, 0 },
  { 40, 1, 1, 1, 433, 0 },
  { 217, 1, 1, 1, 433, 0 },
  { 394, 1, 1, 1, 433, 0 },
  { 537, 1, 1, 1, 433, 0 },
  { 680, 1, 1, 1, 433, 0 },
  { 817, 1, 1, 1, 433, 0 },
  { 954, 1, 1, 1, 433, 0 },
  { 1091, 1, 1, 1, 433, 0 },
  { 1228, 1, 1, 1, 433, 0 },
  { 1378, 1, 1, 1, 433, 0 },
  { 80, 1, 1, 1, 433, 0 },
  { 257, 1, 1, 1, 433, 0 },
  { 159, 1, 296, 1, 433, 0 },
  { 336, 1, 296, 1, 433, 0 },
  { 479, 1, 296, 1, 433, 0 },
  { 622, 1, 296, 1, 433, 0 },
  { 759, 1, 296, 1, 433, 0 },
  { 896, 1, 296, 1, 433, 0 },
  { 1033, 1, 296, 1, 433, 0 },
  { 1170, 1, 296, 1, 433, 0 },
  { 1315, 1, 296, 1, 433, 0 },
  { 1450, 1, 296, 1, 433, 0 },
  { 17, 1, 296, 1, 433, 0 },
  { 194, 1, 296, 1, 433, 0 },
  { 371, 1, 296, 1, 433, 0 },
  { 514, 1, 296, 1, 433, 0 },
  { 657, 1, 296, 1, 433, 0 },
  { 794, 1, 296, 1, 433, 0 },
  { 931, 1, 296, 1, 433, 0 },
  { 1068, 1, 296, 1, 433, 0 },
  { 1205, 1, 296, 1, 433, 0 },
  { 1355, 1, 296, 1, 433, 0 },
  { 57, 1, 296, 1, 433, 0 },
  { 234, 1, 296, 1, 433, 0 },
  { 411, 1, 296, 1, 433, 0 },
  { 554, 1, 296, 1, 433, 0 },
  { 697, 1, 296, 1, 433, 0 },
  { 834, 1, 296, 1, 433, 0 },
  { 971, 1, 296, 1, 433, 0 },
  { 1108, 1, 296, 1, 433, 0 },
  { 1245, 1, 296, 1, 433, 0 },
  { 1395, 1, 296, 1, 433, 0 },
  { 97, 1, 296, 1, 433, 0 },
  { 274, 1, 296, 1, 433, 0 },
  { 162, 549, 1, 0, 8849, 2 },
  { 339, 549, 1, 0, 8849, 2 },
  { 482, 549, 1, 0, 8849, 2 },
  { 625, 549, 1, 0, 8849, 2 },
  { 762, 549, 1, 0, 8849, 2 },
  { 899, 549, 1, 0, 8849, 2 },
  { 1036, 549, 1, 0, 8849, 2 },
  { 1173, 549, 1, 0, 8849, 2 },
  { 1323, 549, 1, 0, 8849, 2 },
  { 1453, 549, 1, 0, 8849, 2 },
  { 21, 549, 1, 0, 8849, 2 },
  { 198, 549, 1, 0, 8849, 2 },
  { 375, 549, 1, 0, 8849, 2 },
  { 518, 549, 1, 0, 8849, 2 },
  { 661, 549, 1, 0, 8849, 2 },
  { 798, 549, 1, 0, 8849, 2 },
  { 935, 549, 1, 0, 8849, 2 },
  { 1072, 549, 1, 0, 8849, 2 },
  { 1209, 549, 1, 0, 8849, 2 },
  { 1359, 549, 1, 0, 8849, 2 },
  { 61, 549, 1, 0, 8849, 2 },
  { 238, 549, 1, 0, 8849, 2 },
  { 415, 549, 1, 0, 8849, 2 },
  { 558, 549, 1, 0, 8849, 2 },
  { 701, 549, 1, 0, 8849, 2 },
  { 838, 549, 1, 0, 8849, 2 },
  { 975, 549, 1, 0, 8849, 2 },
  { 1112, 549, 1, 0, 8849, 2 },
  { 1249, 549, 1, 0, 8849, 2 },
  { 1399, 549, 1, 0, 8849, 2 },
  { 101, 549, 1, 0, 8849, 2 },
  { 278, 549, 1, 0, 8849, 2 },
  { 138, 330, 1, 14, 36, 14 },
  { 315, 357, 1, 14, 36, 14 },
  { 458, 384, 1, 14, 36, 14 },
  { 601, 411, 1, 14, 36, 14 },
  { 738, 438, 1, 14, 36, 14 },
  { 875, 465, 1, 14, 36, 14 },
  { 1012, 492, 1, 14, 36, 14 },
  { 1149, 519, 1, 14, 36, 14 },
  { 165, 39, 169, 2, 8817, 4 },
  { 342, 39, 166, 2, 8817, 4 },
  { 485, 39, 166, 2, 8817, 4 },
  { 628, 39, 163, 2, 8817, 4 },
  { 765, 39, 163, 2, 8817, 4 },
  { 902, 39, 160, 2, 8817, 4 },
  { 1039, 39, 160, 2, 8817, 4 },
  { 1176, 39, 157, 2, 8817, 4 },
  { 1326, 39, 157, 2, 8817, 4 },
  { 1456, 39, 154, 2, 8817, 4 },
  { 25, 39, 154, 2, 8817, 4 },
  { 202, 39, 151, 2, 8817, 4 },
  { 379, 39, 151, 2, 8817, 4 },
  { 522, 39, 148, 2, 8817, 4 },
  { 665, 39, 148, 2, 8817, 4 },
  { 802, 39, 145, 2, 8817, 4 },
  { 939, 39, 145, 2, 8817, 4 },
  { 1076, 39, 142, 2, 8817, 4 },
  { 1213, 39, 142, 2, 8817, 4 },
  { 1363, 39, 139, 2, 8817, 4 },
  { 65, 39, 139, 2, 8817, 4 },
  { 242, 39, 136, 2, 8817, 4 },
  { 419, 39, 136, 2, 8817, 4 },
  { 562, 39, 133, 2, 8817, 4 },
  { 705, 39, 133, 2, 8817, 4 },
  { 842, 39, 130, 2, 8817, 4 },
  { 979, 39, 130, 2, 8817, 4 },
  { 1116, 39, 127, 2, 8817, 4 },
  { 1253, 39, 127, 2, 8817, 4 },
  { 1403, 39, 124, 2, 8817, 4 },
  { 105, 39, 124, 2, 8817, 4 },
  { 282, 39, 121, 2, 8817, 4 },
  { 149, 1, 168, 1, 8721, 0 },
  { 326, 1, 165, 1, 8721, 0 },
  { 469, 1, 165, 1, 8721, 0 },
  { 612, 1, 162, 1, 8721, 0 },
  { 749, 1, 162, 1, 8721, 0 },
  { 886, 1, 159, 1, 8721, 0 },
  { 1023, 1, 159, 1, 8721, 0 },
  { 1160, 1, 156, 1, 8721, 0 },
  { 1291, 1, 156, 1, 8721, 0 },
  { 1441, 1, 153, 1, 8721, 0 },
  { 6, 1, 153, 1, 8721, 0 },
  { 183, 1, 150, 1, 8721, 0 },
  { 360, 1, 150, 1, 8721, 0 },
  { 503, 1, 147, 1, 8721, 0 },
  { 646, 1, 147, 1, 8721, 0 },
  { 783, 1, 144, 1, 8721, 0 },
  { 920, 1, 144, 1, 8721, 0 },
  { 1057, 1, 141, 1, 8721, 0 },
  { 1194, 1, 141, 1, 8721, 0 },
  { 1344, 1, 138, 1, 8721, 0 },
  { 46, 1, 138, 1, 8721, 0 },
  { 223, 1, 135, 1, 8721, 0 },
  { 400, 1, 135, 1, 8721, 0 },
  { 543, 1, 132, 1, 8721, 0 },
  { 686, 1, 132, 1, 8721, 0 },
  { 823, 1, 129, 1, 8721, 0 },
  { 960, 1, 129, 1, 8721, 0 },
  { 1097, 1, 126, 1, 8721, 0 },
  { 1234, 1, 126, 1, 8721, 0 },
  { 1384, 1, 123, 1, 8721, 0 },
  { 86, 1, 123, 1, 8721, 0 },
  { 263, 1, 120, 1, 8721, 0 },
  { 153, 328, 292, 2, 5137, 4 },
  { 330, 328, 287, 2, 5137, 4 },
  { 473, 328, 282, 2, 5137, 4 },
  { 616, 328, 277, 2, 5137, 4 },
  { 753, 328, 277, 2, 5137, 4 },
  { 890, 328, 272, 2, 5137, 4 },
  { 1027, 328, 267, 2, 5137, 4 },
  { 1164, 328, 262, 2, 5137, 4 },
  { 1295, 328, 262, 2, 5137, 4 },
  { 1445, 328, 257, 2, 5137, 4 },
  { 11, 328, 252, 2, 5137, 4 },
  { 188, 328, 247, 2, 5137, 4 },
  { 365, 328, 247, 2, 5137, 4 },
  { 508, 328, 242, 2, 5137, 4 },
  { 651, 328, 237, 2, 5137, 4 },
  { 788, 328, 232, 2, 5137, 4 },
  { 925, 328, 232, 2, 5137, 4 },
  { 1062, 328, 227, 2, 5137, 4 },
  { 1199, 328, 222, 2, 5137, 4 },
  { 1349, 328, 217, 2, 5137, 4 },
  { 51, 328, 217, 2, 5137, 4 },
  { 228, 328, 212, 2, 5137, 4 },
  { 405, 328, 207, 2, 5137, 4 },
  { 548, 328, 202, 2, 5137, 4 },
  { 691, 328, 202, 2, 5137, 4 },
  { 828, 328, 197, 2, 5137, 4 },
  { 965, 328, 192, 2, 5137, 4 },
  { 1102, 328, 187, 2, 5137, 4 },
  { 1239, 328, 187, 2, 5137, 4 },
  { 1389, 328, 182, 2, 5137, 4 },
  { 91, 328, 177, 2, 5137, 4 },
  { 268, 328, 172, 2, 5137, 4 },
  { 171, 325, 288, 9, 274, 11 },
  { 348, 336, 273, 9, 274, 11 },
  { 491, 352, 273, 9, 274, 11 },
  { 634, 363, 258, 9, 274, 11 },
  { 771, 379, 258, 9, 274, 11 },
  { 908, 390, 243, 9, 274, 11 },
  { 1045, 406, 243, 9, 274, 11 },
  { 1182, 417, 228, 9, 274, 11 },
  { 1332, 433, 228, 9, 274, 11 },
  { 1462, 444, 213, 9, 274, 11 },
  { 33, 460, 213, 9, 274, 11 },
  { 210, 471, 198, 9, 274, 11 },
  { 387, 487, 198, 9, 274, 11 },
  { 530, 498, 183, 9, 274, 11 },
  { 673, 514, 183, 9, 274, 11 },
  { 810, 525, 173, 9, 274, 11 },
  { 947, 36, 1, 9, 322, 11 },
  { 1084, 41, 1, 9, 322, 11 },
  { 1221, 46, 1, 9, 322, 11 },
  { 1371, 51, 1, 9, 322, 11 },
  { 73, 56, 1, 9, 322, 11 },
  { 250, 61, 1, 9, 322, 11 },
  { 427, 66, 1, 9, 322, 11 },
  { 570, 71, 1, 9, 322, 11 },
  { 713, 76, 1, 9, 322, 11 },
  { 850, 81, 1, 9, 322, 11 },
  { 987, 86, 1, 9, 322, 11 },
  { 1124, 91, 1, 9, 322, 11 },
  { 1261, 96, 1, 9, 322, 11 },
  { 1411, 101, 1, 9, 322, 11 },
  { 113, 106, 1, 9, 322, 11 },
  { 290, 111, 1, 9, 322, 11 },
  { 434, 1, 1, 1, 8657, 0 },
  { 577, 1, 1, 1, 8657, 0 },
  { 720, 1, 1, 1, 8657, 0 },
  { 857, 1, 1, 1, 8657, 0 },
  { 994, 1, 1, 1, 8657, 0 },
  { 1131, 1, 1, 1, 8657, 0 },
  { 1268, 1, 1, 1, 8657, 0 },
  { 1418, 1, 1, 1, 8657, 0 },
  { 120, 1, 1, 1, 8657, 0 },
  { 297, 1, 1, 1, 8657, 0 },
  { 440, 1, 1, 1, 8657, 0 },
  { 583, 1, 1, 1, 8657, 0 },
  { 726, 1, 1, 1, 8657, 0 },
  { 863, 1, 1, 1, 8657, 0 },
  { 1000, 1, 1, 1, 8657, 0 },
  { 1137, 1, 1, 1, 8657, 0 },
  { 1274, 1, 1, 1, 8657, 0 },
  { 1424, 1, 1, 1, 8657, 0 },
  { 126, 1, 1, 1, 8657, 0 },
  { 303, 1, 1, 1, 8657, 0 },
  { 446, 1, 1, 1, 8657, 0 },
  { 589, 1, 1, 1, 8657, 0 },
  { 732, 1, 1, 1, 8657, 0 },
  { 869, 1, 1, 1, 8657, 0 },
  { 1006, 1, 1, 1, 8657, 0 },
  { 1143, 1, 1, 1, 8657, 0 },
  { 1280, 1, 1, 1, 8657, 0 },
  { 1430, 1, 1, 1, 8657, 0 },
  { 132, 1, 1, 1, 8657, 0 },
  { 309, 1, 1, 1, 8657, 0 },
  { 452, 1, 1, 1, 8657, 0 },
  { 595, 1, 1, 1, 8657, 0 },
  { 168, 319, 1, 0, 5169, 2 },
  { 345, 319, 1, 0, 5169, 2 },
  { 488, 319, 1, 0, 5169, 2 },
  { 631, 319, 1, 0, 5169, 2 },
  { 768, 319, 1, 0, 5169, 2 },
  { 905, 319, 1, 0, 5169, 2 },
  { 1042, 319, 1, 0, 5169, 2 },
  { 1179, 319, 1, 0, 5169, 2 },
  { 1329, 319, 1, 0, 5169, 2 },
  { 1459, 319, 1, 0, 5169, 2 },
  { 29, 319, 1, 0, 5169, 2 },
  { 206, 319, 1, 0, 5169, 2 },
  { 383, 319, 1, 0, 5169, 2 },
  { 526, 319, 1, 0, 5169, 2 },
  { 669, 319, 1, 0, 5169, 2 },
  { 806, 319, 1, 0, 5169, 2 },
  { 943, 319, 1, 0, 5169, 2 },
  { 1080, 319, 1, 0, 5169, 2 },
  { 1217, 319, 1, 0, 5169, 2 },
  { 1367, 319, 1, 0, 5169, 2 },
  { 69, 319, 1, 0, 5169, 2 },
  { 246, 319, 1, 0, 5169, 2 },
  { 423, 319, 1, 0, 5169, 2 },
  { 566, 319, 1, 0, 5169, 2 },
  { 709, 319, 1, 0, 5169, 2 },
  { 846, 319, 1, 0, 5169, 2 },
  { 983, 319, 1, 0, 5169, 2 },
  { 1120, 319, 1, 0, 5169, 2 },
  { 1257, 319, 1, 0, 5169, 2 },
  { 1407, 319, 1, 0, 5169, 2 },
  { 109, 319, 1, 0, 5169, 2 },
  { 286, 319, 1, 0, 5169, 2 },
  { 1300, 313, 1, 0, 400, 2 },
  { 1537, 1, 317, 1, 4916, 0 },
  { 1543, 1, 317, 1, 4916, 0 },
  { 1549, 1, 317, 1, 4916, 0 },
  { 1555, 1, 317, 1, 4916, 0 },
  { 1561, 1, 317, 1, 4916, 0 },
  { 1567, 1, 317, 1, 4916, 0 },
  { 1573, 1, 317, 1, 4916, 0 },
  { 1579, 1, 317, 1, 4916, 0 },
  { 1604, 1, 315, 1, 4884, 0 },
  { 1610, 1, 315, 1, 4884, 0 },
  { 1616, 1, 315, 1, 4884, 0 },
  { 1622, 1, 315, 1, 4884, 0 },
  { 1628, 1, 315, 1, 4884, 0 },
  { 1634, 1, 315, 1, 4884, 0 },
  { 1640, 1, 315, 1, 4884, 0 },
  { 1646, 1, 315, 1, 4884, 0 },
  { 1652, 1, 311, 1, 4852, 0 },
  { 1658, 1, 311, 1, 4852, 0 },
  { 1664, 1, 311, 1, 4852, 0 },
  { 1670, 1, 311, 1, 4852, 0 },
  { 1676, 1, 311, 1, 4852, 0 },
  { 1682, 1, 311, 1, 4852, 0 },
  { 1688, 1, 311, 1, 4852, 0 },
  { 1694, 1, 311, 1, 4852, 0 },
  { 1478, 1, 309, 1, 4820, 0 },
  { 1484, 1, 309, 1, 4820, 0 },
  { 1490, 1, 309, 1, 4820, 0 },
  { 1496, 1, 309, 1, 4820, 0 },
  { 1502, 1, 309, 1, 4820, 0 },
  { 1508, 1, 309, 1, 4820, 0 },
  { 1514, 1, 309, 1, 4820, 0 },
  { 1520, 1, 309, 1, 4820, 0 },
};

  // VSSRC Register Class...
  static const MCPhysReg VSSRC[] = {
    PPC_F0, PPC_F1, PPC_F2, PPC_F3, PPC_F4, PPC_F5, PPC_F6, PPC_F7, PPC_F8, PPC_F9, PPC_F10, PPC_F11, PPC_F12, PPC_F13, PPC_F31, PPC_F30, PPC_F29, PPC_F28, PPC_F27, PPC_F26, PPC_F25, PPC_F24, PPC_F23, PPC_F22, PPC_F21, PPC_F20, PPC_F19, PPC_F18, PPC_F17, PPC_F16, PPC_F15, PPC_F14, PPC_VF2, PPC_VF3, PPC_VF4, PPC_VF5, PPC_VF0, PPC_VF1, PPC_VF6, PPC_VF7, PPC_VF8, PPC_VF9, PPC_VF10, PPC_VF11, PPC_VF12, PPC_VF13, PPC_VF14, PPC_VF15, PPC_VF16, PPC_VF17, PPC_VF18, PPC_VF19, PPC_VF31, PPC_VF30, PPC_VF29, PPC_VF28, PPC_VF27, PPC_VF26, PPC_VF25, PPC_VF24, PPC_VF23, PPC_VF22, PPC_VF21, PPC_VF20,
  };
  // VSSRC Bit set.
  static const uint8_t VSSRCBits[] = {
    0x00, 0x00, 0x00, 0xe0, 0xff, 0xff, 0xff, 0x1f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0xff, 0xff, 0xff, 0x7f,
  };
  // GPRC Register Class...
  static const MCPhysReg GPRC[] = {
    PPC_R2, PPC_R3, PPC_R4, PPC_R5, PPC_R6, PPC_R7, PPC_R8, PPC_R9, PPC_R10, PPC_R11, PPC_R12, PPC_R30, PPC_R29, PPC_R28, PPC_R27, PPC_R26, PPC_R25, PPC_R24, PPC_R23, PPC_R22, PPC_R21, PPC_R20, PPC_R19, PPC_R18, PPC_R17, PPC_R16, PPC_R15, PPC_R14, PPC_R13, PPC_R31, PPC_R0, PPC_R1, PPC_FP, PPC_BP,
  };
  // GPRC Bit set.
  static const uint8_t GPRCBits[] = {
    0x12, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0xff, 0xff, 0xff, 0x7f,
  };
  // GPRC_NOR0 Register Class...
  static const MCPhysReg GPRC_NOR0[] = {
    PPC_R2, PPC_R3, PPC_R4, PPC_R5, PPC_R6, PPC_R7, PPC_R8, PPC_R9, PPC_R10, PPC_R11, PPC_R12, PPC_R30, PPC_R29, PPC_R28, PPC_R27, PPC_R26, PPC_R25, PPC_R24, PPC_R23, PPC_R22, PPC_R21, PPC_R20, PPC_R19, PPC_R18, PPC_R17, PPC_R16, PPC_R15, PPC_R14, PPC_R13, PPC_R31, PPC_R1, PPC_FP, PPC_BP, PPC_ZERO,
  };
  // GPRC_NOR0 Bit set.
  static const uint8_t GPRC_NOR0Bits[] = {
    0x12, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0x7f,
  };
  // GPRC_and_GPRC_NOR0 Register Class...
  static const MCPhysReg GPRC_and_GPRC_NOR0[] = {
    PPC_R2, PPC_R3, PPC_R4, PPC_R5, PPC_R6, PPC_R7, PPC_R8, PPC_R9, PPC_R10, PPC_R11, PPC_R12, PPC_R30, PPC_R29, PPC_R28, PPC_R27, PPC_R26, PPC_R25, PPC_R24, PPC_R23, PPC_R22, PPC_R21, PPC_R20, PPC_R19, PPC_R18, PPC_R17, PPC_R16, PPC_R15, PPC_R14, PPC_R13, PPC_R31, PPC_R1, PPC_FP, PPC_BP,
  };
  // GPRC_and_GPRC_NOR0 Bit set.
  static const uint8_t GPRC_and_GPRC_NOR0Bits[] = {
    0x12, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0x7f,
  };
  // CRBITRC Register Class...
  static const MCPhysReg CRBITRC[] = {
    PPC_CR2LT, PPC_CR2GT, PPC_CR2EQ, PPC_CR2UN, PPC_CR3LT, PPC_CR3GT, PPC_CR3EQ, PPC_CR3UN, PPC_CR4LT, PPC_CR4GT, PPC_CR4EQ, PPC_CR4UN, PPC_CR5LT, PPC_CR5GT, PPC_CR5EQ, PPC_CR5UN, PPC_CR6LT, PPC_CR6GT, PPC_CR6EQ, PPC_CR6UN, PPC_CR7LT, PPC_CR7GT, PPC_CR7EQ, PPC_CR7UN, PPC_CR1LT, PPC_CR1GT, PPC_CR1EQ, PPC_CR1UN, PPC_CR0LT, PPC_CR0GT, PPC_CR0EQ, PPC_CR0UN,
  };
  // CRBITRC Bit set.
  static const uint8_t CRBITRCBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff,
  };
  // F4RC Register Class...
  static const MCPhysReg F4RC[] = {
    PPC_F0, PPC_F1, PPC_F2, PPC_F3, PPC_F4, PPC_F5, PPC_F6, PPC_F7, PPC_F8, PPC_F9, PPC_F10, PPC_F11, PPC_F12, PPC_F13, PPC_F31, PPC_F30, PPC_F29, PPC_F28, PPC_F27, PPC_F26, PPC_F25, PPC_F24, PPC_F23, PPC_F22, PPC_F21, PPC_F20, PPC_F19, PPC_F18, PPC_F17, PPC_F16, PPC_F15, PPC_F14,
  };
  // F4RC Bit set.
  static const uint8_t F4RCBits[] = {
    0x00, 0x00, 0x00, 0xe0, 0xff, 0xff, 0xff, 0x1f,
  };
  // CRRC Register Class...
  static const MCPhysReg CRRC[] = {
    PPC_CR0, PPC_CR1, PPC_CR5, PPC_CR6, PPC_CR7, PPC_CR2, PPC_CR3, PPC_CR4,
  };
  // CRRC Bit set.
  static const uint8_t CRRCBits[] = {
    0x00, 0x00, 0xf0, 0x0f,
  };
  // CARRYRC Register Class...
  static const MCPhysReg CARRYRC[] = {
    PPC_CARRY, PPC_XER,
  };
  // CARRYRC Bit set.
  static const uint8_t CARRYRCBits[] = {
    0x04, 0x02,
  };
  // CTRRC Register Class...
  static const MCPhysReg CTRRC[] = {
    PPC_CTR,
  };
  // CTRRC Bit set.
  static const uint8_t CTRRCBits[] = {
    0x08,
  };
  // VRSAVERC Register Class...
  static const MCPhysReg VRSAVERC[] = {
    PPC_VRSAVE,
  };
  // VRSAVERC Bit set.
  static const uint8_t VRSAVERCBits[] = {
    0x00, 0x01,
  };
  // SPILLTOVSRRC Register Class...
  static const MCPhysReg SPILLTOVSRRC[] = {
    PPC_X2, PPC_X3, PPC_X4, PPC_X5, PPC_X6, PPC_X7, PPC_X8, PPC_X9, PPC_X10, PPC_X11, PPC_X12, PPC_X30, PPC_X29, PPC_X28, PPC_X27, PPC_X26, PPC_X25, PPC_X24, PPC_X23, PPC_X22, PPC_X21, PPC_X20, PPC_X19, PPC_X18, PPC_X17, PPC_X16, PPC_X15, PPC_X14, PPC_X31, PPC_X13, PPC_X0, PPC_X1, PPC_FP8, PPC_BP8, PPC_F0, PPC_F1, PPC_F2, PPC_F3, PPC_F4, PPC_F5, PPC_F6, PPC_F7, PPC_F8, PPC_F9, PPC_F10, PPC_F11, PPC_F12, PPC_F13, PPC_VF2, PPC_VF3, PPC_VF4, PPC_VF5, PPC_VF0, PPC_VF1, PPC_VF6, PPC_VF7, PPC_VF8, PPC_VF9, PPC_VF10, PPC_VF11, PPC_VF12, PPC_VF13, PPC_VF14, PPC_VF15, PPC_VF16, PPC_VF17, PPC_VF18, PPC_VF19,
  };
  // SPILLTOVSRRC Bit set.
  static const uint8_t SPILLTOVSRRCBits[] = {
    0x00, 0x00, 0x08, 0xe0, 0xff, 0x07, 0x00, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0xff, 0xff, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0xff, 0xff, 0xff, 0x7f,
  };
  // VSFRC Register Class...
  static const MCPhysReg VSFRC[] = {
    PPC_F0, PPC_F1, PPC_F2, PPC_F3, PPC_F4, PPC_F5, PPC_F6, PPC_F7, PPC_F8, PPC_F9, PPC_F10, PPC_F11, PPC_F12, PPC_F13, PPC_F31, PPC_F30, PPC_F29, PPC_F28, PPC_F27, PPC_F26, PPC_F25, PPC_F24, PPC_F23, PPC_F22, PPC_F21, PPC_F20, PPC_F19, PPC_F18, PPC_F17, PPC_F16, PPC_F15, PPC_F14, PPC_VF2, PPC_VF3, PPC_VF4, PPC_VF5, PPC_VF0, PPC_VF1, PPC_VF6, PPC_VF7, PPC_VF8, PPC_VF9, PPC_VF10, PPC_VF11, PPC_VF12, PPC_VF13, PPC_VF14, PPC_VF15, PPC_VF16, PPC_VF17, PPC_VF18, PPC_VF19, PPC_VF31, PPC_VF30, PPC_VF29, PPC_VF28, PPC_VF27, PPC_VF26, PPC_VF25, PPC_VF24, PPC_VF23, PPC_VF22, PPC_VF21, PPC_VF20,
  };
  // VSFRC Bit set.
  static const uint8_t VSFRCBits[] = {
    0x00, 0x00, 0x00, 0xe0, 0xff, 0xff, 0xff, 0x1f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0xff, 0xff, 0xff, 0x7f,
  };
  // G8RC Register Class...
  static const MCPhysReg G8RC[] = {
    PPC_X2, PPC_X3, PPC_X4, PPC_X5, PPC_X6, PPC_X7, PPC_X8, PPC_X9, PPC_X10, PPC_X11, PPC_X12, PPC_X30, PPC_X29, PPC_X28, PPC_X27, PPC_X26, PPC_X25, PPC_X24, PPC_X23, PPC_X22, PPC_X21, PPC_X20, PPC_X19, PPC_X18, PPC_X17, PPC_X16, PPC_X15, PPC_X14, PPC_X31, PPC_X13, PPC_X0, PPC_X1, PPC_FP8, PPC_BP8,
  };
  // G8RC Bit set.
  static const uint8_t G8RCBits[] = {
    0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x00, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0xff, 0xff, 0xff, 0x7f,
  };
  // G8RC_NOX0 Register Class...
  static const MCPhysReg G8RC_NOX0[] = {
    PPC_X2, PPC_X3, PPC_X4, PPC_X5, PPC_X6, PPC_X7, PPC_X8, PPC_X9, PPC_X10, PPC_X11, PPC_X12, PPC_X30, PPC_X29, PPC_X28, PPC_X27, PPC_X26, PPC_X25, PPC_X24, PPC_X23, PPC_X22, PPC_X21, PPC_X20, PPC_X19, PPC_X18, PPC_X17, PPC_X16, PPC_X15, PPC_X14, PPC_X31, PPC_X13, PPC_X1, PPC_FP8, PPC_BP8, PPC_ZERO8,
  };
  // G8RC_NOX0 Bit set.
  static const uint8_t G8RC_NOX0Bits[] = {
    0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x00, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff,
  };
  // SPILLTOVSRRC_and_VSFRC Register Class...
  static const MCPhysReg SPILLTOVSRRC_and_VSFRC[] = {
    PPC_F0, PPC_F1, PPC_F2, PPC_F3, PPC_F4, PPC_F5, PPC_F6, PPC_F7, PPC_F8, PPC_F9, PPC_F10, PPC_F11, PPC_F12, PPC_F13, PPC_VF2, PPC_VF3, PPC_VF4, PPC_VF5, PPC_VF0, PPC_VF1, PPC_VF6, PPC_VF7, PPC_VF8, PPC_VF9, PPC_VF10, PPC_VF11, PPC_VF12, PPC_VF13, PPC_VF14, PPC_VF15, PPC_VF16, PPC_VF17, PPC_VF18, PPC_VF19,
  };
  // SPILLTOVSRRC_and_VSFRC Bit set.
  static const uint8_t SPILLTOVSRRC_and_VSFRCBits[] = {
    0x00, 0x00, 0x00, 0xe0, 0xff, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0xff, 0xff, 0x07,
  };
  // G8RC_and_G8RC_NOX0 Register Class...
  static const MCPhysReg G8RC_and_G8RC_NOX0[] = {
    PPC_X2, PPC_X3, PPC_X4, PPC_X5, PPC_X6, PPC_X7, PPC_X8, PPC_X9, PPC_X10, PPC_X11, PPC_X12, PPC_X30, PPC_X29, PPC_X28, PPC_X27, PPC_X26, PPC_X25, PPC_X24, PPC_X23, PPC_X22, PPC_X21, PPC_X20, PPC_X19, PPC_X18, PPC_X17, PPC_X16, PPC_X15, PPC_X14, PPC_X31, PPC_X13, PPC_X1, PPC_FP8, PPC_BP8,
  };
  // G8RC_and_G8RC_NOX0 Bit set.
  static const uint8_t G8RC_and_G8RC_NOX0Bits[] = {
    0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x00, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0x7f,
  };
  // F8RC Register Class...
  static const MCPhysReg F8RC[] = {
    PPC_F0, PPC_F1, PPC_F2, PPC_F3, PPC_F4, PPC_F5, PPC_F6, PPC_F7, PPC_F8, PPC_F9, PPC_F10, PPC_F11, PPC_F12, PPC_F13, PPC_F31, PPC_F30, PPC_F29, PPC_F28, PPC_F27, PPC_F26, PPC_F25, PPC_F24, PPC_F23, PPC_F22, PPC_F21, PPC_F20, PPC_F19, PPC_F18, PPC_F17, PPC_F16, PPC_F15, PPC_F14,
  };
  // F8RC Bit set.
  static const uint8_t F8RCBits[] = {
    0x00, 0x00, 0x00, 0xe0, 0xff, 0xff, 0xff, 0x1f,
  };
  // PSRC Register Class...
  static const MCPhysReg PSRC[] = {
    PPC_PSF0, PPC_PSF1, PPC_PSF2, PPC_PSF3, PPC_PSF4, PPC_PSF5, PPC_PSF6, PPC_PSF7, PPC_PSF8, PPC_PSF9, PPC_PSF10, PPC_PSF11, PPC_PSF12, PPC_PSF13, PPC_PSF31, PPC_PSF30, PPC_PSF29, PPC_PSF28, PPC_PSF27, PPC_PSF26, PPC_PSF25, PPC_PSF24, PPC_PSF23, PPC_PSF22, PPC_PSF21, PPC_PSF20, PPC_PSF19, PPC_PSF18, PPC_PSF17, PPC_PSF16, PPC_PSF15, PPC_PSF14,
  };
  // PSRC Bit set.
  static const uint8_t PSRCBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0xff, 0xff, 0xff, 0x7f,
  };
  // SPERC Register Class...
  static const MCPhysReg SPERC[] = {
    PPC_S2, PPC_S3, PPC_S4, PPC_S5, PPC_S6, PPC_S7, PPC_S8, PPC_S9, PPC_S10, PPC_S11, PPC_S12, PPC_S30, PPC_S29, PPC_S28, PPC_S27, PPC_S26, PPC_S25, PPC_S24, PPC_S23, PPC_S22, PPC_S21, PPC_S20, PPC_S19, PPC_S18, PPC_S17, PPC_S16, PPC_S15, PPC_S14, PPC_S13, PPC_S31, PPC_S0, PPC_S1,
  };
  // SPERC Bit set.
  static const uint8_t SPERCBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0xff, 0xff, 0xff, 0x7f,
  };
  // VFRC Register Class...
  static const MCPhysReg VFRC[] = {
    PPC_VF2, PPC_VF3, PPC_VF4, PPC_VF5, PPC_VF0, PPC_VF1, PPC_VF6, PPC_VF7, PPC_VF8, PPC_VF9, PPC_VF10, PPC_VF11, PPC_VF12, PPC_VF13, PPC_VF14, PPC_VF15, PPC_VF16, PPC_VF17, PPC_VF18, PPC_VF19, PPC_VF31, PPC_VF30, PPC_VF29, PPC_VF28, PPC_VF27, PPC_VF26, PPC_VF25, PPC_VF24, PPC_VF23, PPC_VF22, PPC_VF21, PPC_VF20,
  };
  // VFRC Bit set.
  static const uint8_t VFRCBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0xff, 0xff, 0xff, 0x7f,
  };
  // SPERC_with_sub_32_in_GPRC_NOR0 Register Class...
  static const MCPhysReg SPERC_with_sub_32_in_GPRC_NOR0[] = {
    PPC_S2, PPC_S3, PPC_S4, PPC_S5, PPC_S6, PPC_S7, PPC_S8, PPC_S9, PPC_S10, PPC_S11, PPC_S12, PPC_S30, PPC_S29, PPC_S28, PPC_S27, PPC_S26, PPC_S25, PPC_S24, PPC_S23, PPC_S22, PPC_S21, PPC_S20, PPC_S19, PPC_S18, PPC_S17, PPC_S16, PPC_S15, PPC_S14, PPC_S13, PPC_S31, PPC_S1,
  };
  // SPERC_with_sub_32_in_GPRC_NOR0 Bit set.
  static const uint8_t SPERC_with_sub_32_in_GPRC_NOR0Bits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0x7f,
  };
  // SPILLTOVSRRC_and_VFRC Register Class...
  static const MCPhysReg SPILLTOVSRRC_and_VFRC[] = {
    PPC_VF2, PPC_VF3, PPC_VF4, PPC_VF5, PPC_VF0, PPC_VF1, PPC_VF6, PPC_VF7, PPC_VF8, PPC_VF9, PPC_VF10, PPC_VF11, PPC_VF12, PPC_VF13, PPC_VF14, PPC_VF15, PPC_VF16, PPC_VF17, PPC_VF18, PPC_VF19,
  };
  // SPILLTOVSRRC_and_VFRC Bit set.
  static const uint8_t SPILLTOVSRRC_and_VFRCBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0xff, 0xff, 0x07,
  };
  // SPILLTOVSRRC_and_F4RC Register Class...
  static const MCPhysReg SPILLTOVSRRC_and_F4RC[] = {
    PPC_F0, PPC_F1, PPC_F2, PPC_F3, PPC_F4, PPC_F5, PPC_F6, PPC_F7, PPC_F8, PPC_F9, PPC_F10, PPC_F11, PPC_F12, PPC_F13,
  };
  // SPILLTOVSRRC_and_F4RC Bit set.
  static const uint8_t SPILLTOVSRRC_and_F4RCBits[] = {
    0x00, 0x00, 0x00, 0xe0, 0xff, 0x07,
  };
  // CTRRC8 Register Class...
  static const MCPhysReg CTRRC8[] = {
    PPC_CTR8,
  };
  // CTRRC8 Bit set.
  static const uint8_t CTRRC8Bits[] = {
    0x00, 0x00, 0x00, 0x10,
  };
  // VSRC Register Class...
  static const MCPhysReg VSRC[] = {
    PPC_VSL0, PPC_VSL1, PPC_VSL2, PPC_VSL3, PPC_VSL4, PPC_VSL5, PPC_VSL6, PPC_VSL7, PPC_VSL8, PPC_VSL9, PPC_VSL10, PPC_VSL11, PPC_VSL12, PPC_VSL13, PPC_VSL31, PPC_VSL30, PPC_VSL29, PPC_VSL28, PPC_VSL27, PPC_VSL26, PPC_VSL25, PPC_VSL24, PPC_VSL23, PPC_VSL22, PPC_VSL21, PPC_VSL20, PPC_VSL19, PPC_VSL18, PPC_VSL17, PPC_VSL16, PPC_VSL15, PPC_VSL14, PPC_V2, PPC_V3, PPC_V4, PPC_V5, PPC_V0, PPC_V1, PPC_V6, PPC_V7, PPC_V8, PPC_V9, PPC_V10, PPC_V11, PPC_V12, PPC_V13, PPC_V14, PPC_V15, PPC_V16, PPC_V17, PPC_V18, PPC_V19, PPC_V31, PPC_V30, PPC_V29, PPC_V28, PPC_V27, PPC_V26, PPC_V25, PPC_V24, PPC_V23, PPC_V22, PPC_V21, PPC_V20,
  };
  // VSRC Bit set.
  static const uint8_t VSRCBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0xff, 0xff, 0xff, 0x7f, 0x00, 0x00, 0x00, 0x80, 0xff, 0xff, 0xff, 0x7f,
  };
  // VSRC_with_sub_64_in_SPILLTOVSRRC Register Class...
  static const MCPhysReg VSRC_with_sub_64_in_SPILLTOVSRRC[] = {
    PPC_VSL0, PPC_VSL1, PPC_VSL2, PPC_VSL3, PPC_VSL4, PPC_VSL5, PPC_VSL6, PPC_VSL7, PPC_VSL8, PPC_VSL9, PPC_VSL10, PPC_VSL11, PPC_VSL12, PPC_VSL13, PPC_V2, PPC_V3, PPC_V4, PPC_V5, PPC_V0, PPC_V1, PPC_V6, PPC_V7, PPC_V8, PPC_V9, PPC_V10, PPC_V11, PPC_V12, PPC_V13, PPC_V14, PPC_V15, PPC_V16, PPC_V17, PPC_V18, PPC_V19,
  };
  // VSRC_with_sub_64_in_SPILLTOVSRRC Bit set.
  static const uint8_t VSRC_with_sub_64_in_SPILLTOVSRRCBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0xff, 0xff, 0x07, 0x00, 0x00, 0x00, 0x00, 0x80, 0xff, 0x1f,
  };
  // VRRC Register Class...
  static const MCPhysReg VRRC[] = {
    PPC_V2, PPC_V3, PPC_V4, PPC_V5, PPC_V0, PPC_V1, PPC_V6, PPC_V7, PPC_V8, PPC_V9, PPC_V10, PPC_V11, PPC_V12, PPC_V13, PPC_V14, PPC_V15, PPC_V16, PPC_V17, PPC_V18, PPC_V19, PPC_V31, PPC_V30, PPC_V29, PPC_V28, PPC_V27, PPC_V26, PPC_V25, PPC_V24, PPC_V23, PPC_V22, PPC_V21, PPC_V20,
  };
  // VRRC Bit set.
  static const uint8_t VRRCBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0xff, 0xff, 0xff, 0x7f,
  };
  // VSLRC Register Class...
  static const MCPhysReg VSLRC[] = {
    PPC_VSL0, PPC_VSL1, PPC_VSL2, PPC_VSL3, PPC_VSL4, PPC_VSL5, PPC_VSL6, PPC_VSL7, PPC_VSL8, PPC_VSL9, PPC_VSL10, PPC_VSL11, PPC_VSL12, PPC_VSL13, PPC_VSL31, PPC_VSL30, PPC_VSL29, PPC_VSL28, PPC_VSL27, PPC_VSL26, PPC_VSL25, PPC_VSL24, PPC_VSL23, PPC_VSL22, PPC_VSL21, PPC_VSL20, PPC_VSL19, PPC_VSL18, PPC_VSL17, PPC_VSL16, PPC_VSL15, PPC_VSL14,
  };
  // VSLRC Bit set.
  static const uint8_t VSLRCBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0xff, 0xff, 0xff, 0x7f,
  };
  // VRRC_with_sub_64_in_SPILLTOVSRRC Register Class...
  static const MCPhysReg VRRC_with_sub_64_in_SPILLTOVSRRC[] = {
    PPC_V2, PPC_V3, PPC_V4, PPC_V5, PPC_V0, PPC_V1, PPC_V6, PPC_V7, PPC_V8, PPC_V9, PPC_V10, PPC_V11, PPC_V12, PPC_V13, PPC_V14, PPC_V15, PPC_V16, PPC_V17, PPC_V18, PPC_V19,
  };
  // VRRC_with_sub_64_in_SPILLTOVSRRC Bit set.
  static const uint8_t VRRC_with_sub_64_in_SPILLTOVSRRCBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0xff, 0xff, 0x07,
  };
  // VSLRC_with_sub_64_in_SPILLTOVSRRC Register Class...
  static const MCPhysReg VSLRC_with_sub_64_in_SPILLTOVSRRC[] = {
    PPC_VSL0, PPC_VSL1, PPC_VSL2, PPC_VSL3, PPC_VSL4, PPC_VSL5, PPC_VSL6, PPC_VSL7, PPC_VSL8, PPC_VSL9, PPC_VSL10, PPC_VSL11, PPC_VSL12, PPC_VSL13,
  };
  // VSLRC_with_sub_64_in_SPILLTOVSRRC Bit set.
  static const uint8_t VSLRC_with_sub_64_in_SPILLTOVSRRCBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0xff, 0x1f,
  };
  // VSRpRC Register Class...
  static const MCPhysReg VSRpRC[] = {
    PPC_VSRp0, PPC_VSRp1, PPC_VSRp2, PPC_VSRp3, PPC_VSRp4, PPC_VSRp5, PPC_VSRp6, PPC_VSRp15, PPC_VSRp14, PPC_VSRp13, PPC_VSRp12, PPC_VSRp11, PPC_VSRp10, PPC_VSRp9, PPC_VSRp8, PPC_VSRp7, PPC_VSRp17, PPC_VSRp18, PPC_VSRp16, PPC_VSRp19, PPC_VSRp20, PPC_VSRp21, PPC_VSRp22, PPC_VSRp23, PPC_VSRp24, PPC_VSRp25, PPC_VSRp31, PPC_VSRp30, PPC_VSRp29, PPC_VSRp28, PPC_VSRp27, PPC_VSRp26,
  };
  // VSRpRC Bit set.
  static const uint8_t VSRpRCBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0xff, 0xff, 0xff, 0x7f,
  };
  // VSRpRC_with_sub_64_in_SPILLTOVSRRC Register Class...
  static const MCPhysReg VSRpRC_with_sub_64_in_SPILLTOVSRRC[] = {
    PPC_VSRp0, PPC_VSRp1, PPC_VSRp2, PPC_VSRp3, PPC_VSRp4, PPC_VSRp5, PPC_VSRp6, PPC_VSRp17, PPC_VSRp18, PPC_VSRp16, PPC_VSRp19, PPC_VSRp20, PPC_VSRp21, PPC_VSRp22, PPC_VSRp23, PPC_VSRp24, PPC_VSRp25,
  };
  // VSRpRC_with_sub_64_in_SPILLTOVSRRC Bit set.
  static const uint8_t VSRpRC_with_sub_64_in_SPILLTOVSRRCBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x3f, 0x80, 0xff, 0x01,
  };
  // VSRpRC_with_sub_64_in_F4RC Register Class...
  static const MCPhysReg VSRpRC_with_sub_64_in_F4RC[] = {
    PPC_VSRp0, PPC_VSRp1, PPC_VSRp2, PPC_VSRp3, PPC_VSRp4, PPC_VSRp5, PPC_VSRp6, PPC_VSRp15, PPC_VSRp14, PPC_VSRp13, PPC_VSRp12, PPC_VSRp11, PPC_VSRp10, PPC_VSRp9, PPC_VSRp8, PPC_VSRp7,
  };
  // VSRpRC_with_sub_64_in_F4RC Bit set.
  static const uint8_t VSRpRC_with_sub_64_in_F4RCBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0xff, 0x7f,
  };
  // VSRpRC_with_sub_64_in_VFRC Register Class...
  static const MCPhysReg VSRpRC_with_sub_64_in_VFRC[] = {
    PPC_VSRp17, PPC_VSRp18, PPC_VSRp16, PPC_VSRp19, PPC_VSRp20, PPC_VSRp21, PPC_VSRp22, PPC_VSRp23, PPC_VSRp24, PPC_VSRp25, PPC_VSRp31, PPC_VSRp30, PPC_VSRp29, PPC_VSRp28, PPC_VSRp27, PPC_VSRp26,
  };
  // VSRpRC_with_sub_64_in_VFRC Bit set.
  static const uint8_t VSRpRC_with_sub_64_in_VFRCBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0xff, 0x7f,
  };
  // VSRpRC_with_sub_64_in_SPILLTOVSRRC_and_VFRC Register Class...
  static const MCPhysReg VSRpRC_with_sub_64_in_SPILLTOVSRRC_and_VFRC[] = {
    PPC_VSRp17, PPC_VSRp18, PPC_VSRp16, PPC_VSRp19, PPC_VSRp20, PPC_VSRp21, PPC_VSRp22, PPC_VSRp23, PPC_VSRp24, PPC_VSRp25,
  };
  // VSRpRC_with_sub_64_in_SPILLTOVSRRC_and_VFRC Bit set.
  static const uint8_t VSRpRC_with_sub_64_in_SPILLTOVSRRC_and_VFRCBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0xff, 0x01,
  };
  // VSRpRC_with_sub_64_in_SPILLTOVSRRC_and_F4RC Register Class...
  static const MCPhysReg VSRpRC_with_sub_64_in_SPILLTOVSRRC_and_F4RC[] = {
    PPC_VSRp0, PPC_VSRp1, PPC_VSRp2, PPC_VSRp3, PPC_VSRp4, PPC_VSRp5, PPC_VSRp6,
  };
  // VSRpRC_with_sub_64_in_SPILLTOVSRRC_and_F4RC Bit set.
  static const uint8_t VSRpRC_with_sub_64_in_SPILLTOVSRRC_and_F4RCBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x3f,
  };
  // ACCRC Register Class...
  static const MCPhysReg ACCRC[] = {
    PPC_ACC0, PPC_ACC1, PPC_ACC2, PPC_ACC3, PPC_ACC4, PPC_ACC5, PPC_ACC6, PPC_ACC7,
  };
  // ACCRC Bit set.
  static const uint8_t ACCRCBits[] = {
    0x00, 0xf8, 0x07,
  };
  // UACCRC Register Class...
  static const MCPhysReg UACCRC[] = {
    PPC_UACC0, PPC_UACC1, PPC_UACC2, PPC_UACC3, PPC_UACC4, PPC_UACC5, PPC_UACC6, PPC_UACC7,
  };
  // UACCRC Bit set.
  static const uint8_t UACCRCBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x7f,
  };
  // ACCRC_with_sub_64_in_SPILLTOVSRRC Register Class...
  static const MCPhysReg ACCRC_with_sub_64_in_SPILLTOVSRRC[] = {
    PPC_ACC0, PPC_ACC1, PPC_ACC2, PPC_ACC3,
  };
  // ACCRC_with_sub_64_in_SPILLTOVSRRC Bit set.
  static const uint8_t ACCRC_with_sub_64_in_SPILLTOVSRRCBits[] = {
    0x00, 0x78,
  };
  // UACCRC_with_sub_64_in_SPILLTOVSRRC Register Class...
  static const MCPhysReg UACCRC_with_sub_64_in_SPILLTOVSRRC[] = {
    PPC_UACC0, PPC_UACC1, PPC_UACC2, PPC_UACC3,
  };
  // UACCRC_with_sub_64_in_SPILLTOVSRRC Bit set.
  static const uint8_t UACCRC_with_sub_64_in_SPILLTOVSRRCBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x07,
  };
  // ACCRC_with_sub_pair1_then_sub_64_in_SPILLTOVSRRC Register Class...
  static const MCPhysReg ACCRC_with_sub_pair1_then_sub_64_in_SPILLTOVSRRC[] = {
    PPC_ACC0, PPC_ACC1, PPC_ACC2,
  };
  // ACCRC_with_sub_pair1_then_sub_64_in_SPILLTOVSRRC Bit set.
  static const uint8_t ACCRC_with_sub_pair1_then_sub_64_in_SPILLTOVSRRCBits[] = {
    0x00, 0x38,
  };
  // UACCRC_with_sub_pair1_then_sub_64_in_SPILLTOVSRRC Register Class...
  static const MCPhysReg UACCRC_with_sub_pair1_then_sub_64_in_SPILLTOVSRRC[] = {
    PPC_UACC0, PPC_UACC1, PPC_UACC2,
  };
  // UACCRC_with_sub_pair1_then_sub_64_in_SPILLTOVSRRC Bit set.
  static const uint8_t UACCRC_with_sub_pair1_then_sub_64_in_SPILLTOVSRRCBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x03,
  };


static const MCRegisterClass PPCMCRegisterClasses[] = {
  { VSSRC, VSSRCBits, sizeof(VSSRCBits) },
  { GPRC, GPRCBits, sizeof(GPRCBits) },
  { GPRC_NOR0, GPRC_NOR0Bits, sizeof(GPRC_NOR0Bits) },
  { GPRC_and_GPRC_NOR0, GPRC_and_GPRC_NOR0Bits, sizeof(GPRC_and_GPRC_NOR0Bits) },
  { CRBITRC, CRBITRCBits, sizeof(CRBITRCBits) },
  { F4RC, F4RCBits, sizeof(F4RCBits) },
  { CRRC, CRRCBits, sizeof(CRRCBits) },
  { CARRYRC, CARRYRCBits, sizeof(CARRYRCBits) },
  { CTRRC, CTRRCBits, sizeof(CTRRCBits) },
  { VRSAVERC, VRSAVERCBits, sizeof(VRSAVERCBits) },
  { SPILLTOVSRRC, SPILLTOVSRRCBits, sizeof(SPILLTOVSRRCBits) },
  { VSFRC, VSFRCBits, sizeof(VSFRCBits) },
  { G8RC, G8RCBits, sizeof(G8RCBits) },
  { G8RC_NOX0, G8RC_NOX0Bits, sizeof(G8RC_NOX0Bits) },
  { SPILLTOVSRRC_and_VSFRC, SPILLTOVSRRC_and_VSFRCBits, sizeof(SPILLTOVSRRC_and_VSFRCBits) },
  { G8RC_and_G8RC_NOX0, G8RC_and_G8RC_NOX0Bits, sizeof(G8RC_and_G8RC_NOX0Bits) },
  { F8RC, F8RCBits, sizeof(F8RCBits) },
  { PSRC, PSRCBits, sizeof(PSRCBits) },
  { SPERC, SPERCBits, sizeof(SPERCBits) },
  { VFRC, VFRCBits, sizeof(VFRCBits) },
  { SPERC_with_sub_32_in_GPRC_NOR0, SPERC_with_sub_32_in_GPRC_NOR0Bits, sizeof(SPERC_with_sub_32_in_GPRC_NOR0Bits) },
  { SPILLTOVSRRC_and_VFRC, SPILLTOVSRRC_and_VFRCBits, sizeof(SPILLTOVSRRC_and_VFRCBits) },
  { SPILLTOVSRRC_and_F4RC, SPILLTOVSRRC_and_F4RCBits, sizeof(SPILLTOVSRRC_and_F4RCBits) },
  { CTRRC8, CTRRC8Bits, sizeof(CTRRC8Bits) },
  { VSRC, VSRCBits, sizeof(VSRCBits) },
  { VSRC_with_sub_64_in_SPILLTOVSRRC, VSRC_with_sub_64_in_SPILLTOVSRRCBits, sizeof(VSRC_with_sub_64_in_SPILLTOVSRRCBits) },
  { VRRC, VRRCBits, sizeof(VRRCBits) },
  { VSLRC, VSLRCBits, sizeof(VSLRCBits) },
  { VRRC_with_sub_64_in_SPILLTOVSRRC, VRRC_with_sub_64_in_SPILLTOVSRRCBits, sizeof(VRRC_with_sub_64_in_SPILLTOVSRRCBits) },
  { VSLRC_with_sub_64_in_SPILLTOVSRRC, VSLRC_with_sub_64_in_SPILLTOVSRRCBits, sizeof(VSLRC_with_sub_64_in_SPILLTOVSRRCBits) },
  { VSRpRC, VSRpRCBits, sizeof(VSRpRCBits) },
  { VSRpRC_with_sub_64_in_SPILLTOVSRRC, VSRpRC_with_sub_64_in_SPILLTOVSRRCBits, sizeof(VSRpRC_with_sub_64_in_SPILLTOVSRRCBits) },
  { VSRpRC_with_sub_64_in_F4RC, VSRpRC_with_sub_64_in_F4RCBits, sizeof(VSRpRC_with_sub_64_in_F4RCBits) },
  { VSRpRC_with_sub_64_in_VFRC, VSRpRC_with_sub_64_in_VFRCBits, sizeof(VSRpRC_with_sub_64_in_VFRCBits) },
  { VSRpRC_with_sub_64_in_SPILLTOVSRRC_and_VFRC, VSRpRC_with_sub_64_in_SPILLTOVSRRC_and_VFRCBits, sizeof(VSRpRC_with_sub_64_in_SPILLTOVSRRC_and_VFRCBits) },
  { VSRpRC_with_sub_64_in_SPILLTOVSRRC_and_F4RC, VSRpRC_with_sub_64_in_SPILLTOVSRRC_and_F4RCBits, sizeof(VSRpRC_with_sub_64_in_SPILLTOVSRRC_and_F4RCBits) },
  { ACCRC, ACCRCBits, sizeof(ACCRCBits) },
  { UACCRC, UACCRCBits, sizeof(UACCRCBits) },
  { ACCRC_with_sub_64_in_SPILLTOVSRRC, ACCRC_with_sub_64_in_SPILLTOVSRRCBits, sizeof(ACCRC_with_sub_64_in_SPILLTOVSRRCBits) },
  { UACCRC_with_sub_64_in_SPILLTOVSRRC, UACCRC_with_sub_64_in_SPILLTOVSRRCBits, sizeof(UACCRC_with_sub_64_in_SPILLTOVSRRCBits) },
  { ACCRC_with_sub_pair1_then_sub_64_in_SPILLTOVSRRC, ACCRC_with_sub_pair1_then_sub_64_in_SPILLTOVSRRCBits, sizeof(ACCRC_with_sub_pair1_then_sub_64_in_SPILLTOVSRRCBits) },
  { UACCRC_with_sub_pair1_then_sub_64_in_SPILLTOVSRRC, UACCRC_with_sub_pair1_then_sub_64_in_SPILLTOVSRRCBits, sizeof(UACCRC_with_sub_pair1_then_sub_64_in_SPILLTOVSRRCBits) },
};

#endif // GET_REGINFO_MC_DESC
