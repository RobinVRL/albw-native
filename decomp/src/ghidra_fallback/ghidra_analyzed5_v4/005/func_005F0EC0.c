#include "ghidra_types.h"

extern undefined8 func_00114608(uint param_1,uint param_2);
extern undefined1 *DAT_005f11f0;
extern undefined4 *DAT_005f11f4;
extern undefined4 *DAT_005f11f8;
extern undefined DAT_005f11fc;
extern undefined4 DAT_005f1204;
extern undefined DAT_005f1208;
extern undefined DAT_005f120c;
extern undefined DAT_005f1210;
extern undefined DAT_005f1214;
extern undefined DAT_005f1220;
extern undefined DAT_005f122c;
extern undefined DAT_005f1240;
extern undefined DAT_005f1250;
extern undefined DAT_005f1260;
extern undefined DAT_005f1274;
extern undefined DAT_005f1280;
extern undefined DAT_005f1290;
extern undefined DAT_005f12a0;
extern undefined DAT_005f12a8;
extern undefined DAT_005f12b4;
extern undefined DAT_005f12c4;
extern undefined DAT_005f12d0;
extern undefined DAT_005f12dc;
extern undefined DAT_005f12e8;
extern undefined DAT_005f12f4;
extern undefined DAT_005f1300;
extern undefined DAT_005f1308;
extern undefined DAT_005f1310;
extern undefined DAT_005f131c;
extern undefined DAT_005f1328;
extern undefined DAT_005f1330;
extern undefined DAT_005f1338;
extern undefined DAT_005f1344;
extern undefined DAT_005f1350;
extern undefined DAT_005f1364;
extern undefined DAT_005f136c;
extern undefined4 DAT_005f1378;
extern undefined4 DAT_005f137c;
extern undefined4 *DAT_005f1380;
extern undefined4 DAT_005f1390;
extern undefined4 *DAT_005f1394;
extern undefined4 *DAT_005f13a0;
extern undefined4 *DAT_005f13b0;
extern undefined4 *DAT_005f13c0;
extern undefined4 *DAT_005f13d0;
extern undefined4 *DAT_005f13e4;
extern undefined4 *DAT_005f13f4;
extern undefined4 *DAT_005f1404;
extern undefined4 DAT_005f1408;
extern uint DAT_005f140c;
extern char s_Lshoulder_jnt_005f13d4[];
extern char s_center_005f1398[];
extern char s_cl_LhandA_005f13a4[];
extern char s_cl_RhandA_005f13b4[];
extern char s_head_jnt_005f13c4[];
extern char s_skl_root_005f1384[];
extern char s_stomach_jnt_005f13e8[];
extern char s_waist_jnt_005f13f8[];

// USA 005F0EC0 <- EU 005F0E98 (Ghidra, non-matching)
// GLOBAL DAT_005f11f0 undefined1 *
// GLOBAL DAT_005f11f4 undefined4 *
// GLOBAL DAT_005f11f8 undefined4 *
// GLOBAL DAT_005f11fc undefined
// GLOBAL DAT_005f1204 undefined4
// GLOBAL DAT_005f1208 undefined
// GLOBAL DAT_005f120c undefined
// GLOBAL DAT_005f1210 undefined
// GLOBAL DAT_005f1214 undefined
// GLOBAL DAT_005f1220 undefined
// GLOBAL DAT_005f122c undefined
// GLOBAL DAT_005f1240 undefined
// GLOBAL DAT_005f1250 undefined
// GLOBAL DAT_005f1260 undefined
// GLOBAL DAT_005f1274 undefined
// GLOBAL DAT_005f1280 undefined
// GLOBAL DAT_005f1290 undefined
// GLOBAL DAT_005f12a0 undefined
// GLOBAL DAT_005f12a8 undefined
// GLOBAL DAT_005f12b4 undefined
// GLOBAL DAT_005f12c4 undefined
// GLOBAL DAT_005f12d0 undefined
// GLOBAL DAT_005f12dc undefined
// GLOBAL DAT_005f12e8 undefined
// GLOBAL DAT_005f12f4 undefined
// GLOBAL DAT_005f1300 undefined
// GLOBAL DAT_005f1308 undefined
// GLOBAL DAT_005f1310 undefined
// GLOBAL DAT_005f131c undefined
// GLOBAL DAT_005f1328 undefined
// GLOBAL DAT_005f1330 undefined
// GLOBAL DAT_005f1338 undefined
// GLOBAL DAT_005f1344 undefined
// GLOBAL DAT_005f1350 undefined
// GLOBAL DAT_005f1364 undefined
// GLOBAL DAT_005f136c undefined
// GLOBAL DAT_005f1378 undefined4
// GLOBAL DAT_005f137c undefined4
// GLOBAL DAT_005f1380 undefined4 *
// GLOBAL DAT_005f1390 undefined4
// GLOBAL DAT_005f1394 undefined4 *
// GLOBAL DAT_005f13a0 undefined4 *
// GLOBAL DAT_005f13b0 undefined4 *
// GLOBAL DAT_005f13c0 undefined4 *
// GLOBAL DAT_005f13d0 undefined4 *
// GLOBAL DAT_005f13e4 undefined4 *
// GLOBAL DAT_005f13f4 undefined4 *
// GLOBAL DAT_005f1404 undefined4 *
// GLOBAL DAT_005f1408 undefined4
// GLOBAL DAT_005f140c uint
// GLOBAL s_Lshoulder_jnt_005f13d4 string
// GLOBAL s_center_005f1398 string
// GLOBAL s_cl_LhandA_005f13a4 string
// GLOBAL s_cl_RhandA_005f13b4 string
// GLOBAL s_head_jnt_005f13c4 string
// GLOBAL s_skl_root_005f1384 string
// GLOBAL s_stomach_jnt_005f13e8 string
// GLOBAL s_waist_jnt_005f13f8 string

void func_005F0EC0(void)

{
  undefined1 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  
  puVar1 = DAT_005f11f0;
  *(undefined4 *)(DAT_005f11f0 + 0x18) = 0xffffffff;
  *(undefined4 *)(puVar1 + 0x1c) = 0xffffffff;
  uVar3 = DAT_005f1204;
  puVar2 = DAT_005f11f4;
  *DAT_005f11f4 = 0;
  puVar2[1] = 0;
  puVar2 = DAT_005f11f8;
  DAT_005f11f8[1] = &DAT_005f11fc;
  *puVar2 = uVar3;
  puVar2[3] = &DAT_005f1208;
  puVar2[2] = uVar3;
  puVar2[5] = &DAT_005f120c;
  puVar2[4] = uVar3;
  puVar2[7] = &DAT_005f1210;
  puVar2[6] = uVar3;
  puVar2[9] = &DAT_005f1214;
  puVar2[8] = uVar3;
  puVar2[0xb] = &DAT_005f1220;
  puVar2[10] = uVar3;
  puVar2[0xd] = &DAT_005f122c;
  puVar2[0xc] = uVar3;
  puVar2[0xf] = &DAT_005f1240;
  puVar2[0xe] = uVar3;
  puVar2[0x11] = &DAT_005f1250;
  puVar2[0x10] = uVar3;
  puVar2[0x13] = &DAT_005f1260;
  puVar2[0x12] = uVar3;
  puVar2[0x15] = &DAT_005f1274;
  puVar2[0x14] = uVar3;
  puVar2[0x17] = &DAT_005f1280;
  puVar2[0x16] = uVar3;
  puVar2[0x19] = &DAT_005f1290;
  puVar2[0x18] = uVar3;
  puVar2[0x1b] = &DAT_005f12a0;
  puVar2[0x1a] = uVar3;
  puVar2[0x1d] = &DAT_005f12a8;
  puVar2[0x1c] = uVar3;
  puVar2[0x1f] = &DAT_005f12b4;
  puVar2[0x1e] = uVar3;
  puVar2[0x21] = &DAT_005f12c4;
  puVar2[0x20] = uVar3;
  puVar2[0x23] = &DAT_005f12d0;
  puVar2[0x22] = uVar3;
  puVar2[0x25] = &DAT_005f12dc;
  puVar2[0x24] = uVar3;
  puVar2[0x27] = &DAT_005f12e8;
  puVar2[0x26] = uVar3;
  puVar2[0x29] = &DAT_005f12f4;
  puVar2[0x28] = uVar3;
  puVar2[0x2b] = &DAT_005f1300;
  puVar2[0x2a] = uVar3;
  puVar2[0x2d] = &DAT_005f1308;
  puVar2[0x2c] = uVar3;
  puVar2[0x2f] = &DAT_005f1310;
  puVar2[0x2e] = uVar3;
  puVar2[0x31] = &DAT_005f131c;
  puVar2[0x30] = uVar3;
  puVar2[0x33] = &DAT_005f1328;
  puVar2[0x32] = uVar3;
  puVar2[0x35] = &DAT_005f1330;
  puVar2[0x34] = uVar3;
  puVar2[0x37] = &DAT_005f1338;
  puVar2[0x36] = uVar3;
  puVar2[0x39] = &DAT_005f1344;
  puVar2[0x38] = uVar3;
  puVar2[0x3b] = &DAT_005f1350;
  puVar2[0x3a] = uVar3;
  puVar2[0x3d] = &DAT_005f1364;
  puVar2[0x3c] = uVar3;
  puVar2[0x3e] = uVar3;
  puVar2[0x3f] = &DAT_005f136c;
  puVar2 = DAT_005f1380;
  DAT_005f1380[1] = s_skl_root_005f1384;
  *puVar2 = uVar3;
  puVar2 = DAT_005f1394;
  DAT_005f1394[1] = s_center_005f1398;
  *puVar2 = uVar3;
  puVar2 = DAT_005f13a0;
  DAT_005f13a0[1] = s_cl_LhandA_005f13a4;
  *puVar2 = uVar3;
  puVar2 = DAT_005f13b0;
  DAT_005f13b0[1] = s_cl_RhandA_005f13b4;
  *puVar2 = uVar3;
  puVar2 = DAT_005f13c0;
  DAT_005f13c0[1] = s_head_jnt_005f13c4;
  *puVar2 = uVar3;
  puVar2 = DAT_005f13d0;
  DAT_005f13d0[1] = s_Lshoulder_jnt_005f13d4;
  *puVar2 = uVar3;
  puVar2 = DAT_005f13e4;
  DAT_005f13e4[1] = s_stomach_jnt_005f13e8;
  *puVar2 = uVar3;
  puVar2 = DAT_005f13f4;
  DAT_005f13f4[1] = s_waist_jnt_005f13f8;
  *puVar2 = uVar3;
  puVar2 = DAT_005f1404;
  DAT_005f1404[1] = s_skl_root_005f1384;
  *puVar2 = uVar3;
  puVar2[2] = uVar3;
  puVar2[3] = s_center_005f1398;
  puVar1 = DAT_005f11f0;
  *DAT_005f11f0 = 0xff;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0xff;
  puVar1[5] = 0;
  puVar1[6] = 0x1a;
  puVar1[7] = 0xff;
  puVar1[8] = 0xff;
  puVar1[9] = 0xc4;
  puVar1[10] = 0x88;
  puVar1[0xb] = 0xbf;
  puVar1[0xc] = 0xff;
  puVar1[0xd] = 0;
  puVar1[0xe] = 0x8a;
  puVar1[0xf] = 0x6a;
  uVar4 = func_00114608(DAT_005f140c,0x8a);
  *(int *)(puVar1 + 0x10) = (int)uVar4;
  *(int *)(puVar1 + 0x14) = (int)uVar4;
  return;
}

