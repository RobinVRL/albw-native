#include "ghidra_types.h"

extern int func_0019B51C(undefined4 *param_1,undefined4 param_2,uint param_3,int param_4,undefined4 param_5 ,undefined4 param_6,int param_7);
extern undefined4 *DAT_005ce370;
extern undefined4 *DAT_005ce374;
extern undefined DAT_005ce378;
extern undefined4 DAT_005ce380;
extern undefined4 DAT_005ce384;
extern undefined4 DAT_005ce388;
extern undefined4 *DAT_005ce38c;
extern undefined DAT_005ce390;
extern uint *DAT_005ce3bc;
extern undefined4 DAT_005ce3c0;
extern undefined4 *DAT_005ce3c4;
extern undefined4 DAT_005ce3c8;
extern undefined4 *DAT_005ce3cc;
extern undefined DAT_005ce3d0;
extern uint *DAT_005ce400;
extern undefined4 DAT_005ce404;
extern undefined4 *DAT_005ce408;
extern undefined4 *DAT_005ce40c;
extern undefined DAT_005ce410;
extern uint *DAT_005ce440;
extern undefined4 DAT_005ce444;
extern undefined4 *DAT_005ce448;
extern char s_MojDoorWallHideCastle_005ce428[];
extern char s_MojDoorWallHideDokuro_005ce3e8[];
extern char s_MojDoorWallHideWater_005ce3a4[];

// USA 005CE208 <- EU 005CE1E0 (Ghidra, non-matching)
// GLOBAL DAT_005ce370 undefined4 *
// GLOBAL DAT_005ce374 undefined4 *
// GLOBAL DAT_005ce378 undefined
// GLOBAL DAT_005ce380 undefined4
// GLOBAL DAT_005ce384 undefined4
// GLOBAL DAT_005ce388 undefined4
// GLOBAL DAT_005ce38c undefined4 *
// GLOBAL DAT_005ce390 undefined
// GLOBAL DAT_005ce3bc uint *
// GLOBAL DAT_005ce3c0 undefined4
// GLOBAL DAT_005ce3c4 undefined4 *
// GLOBAL DAT_005ce3c8 undefined4
// GLOBAL DAT_005ce3cc undefined4 *
// GLOBAL DAT_005ce3d0 undefined
// GLOBAL DAT_005ce400 uint *
// GLOBAL DAT_005ce404 undefined4
// GLOBAL DAT_005ce408 undefined4 *
// GLOBAL DAT_005ce40c undefined4 *
// GLOBAL DAT_005ce410 undefined
// GLOBAL DAT_005ce440 uint *
// GLOBAL DAT_005ce444 undefined4
// GLOBAL DAT_005ce448 undefined4 *
// GLOBAL s_MojDoorWallHideCastle_005ce428 string
// GLOBAL s_MojDoorWallHideDokuro_005ce3e8 string
// GLOBAL s_MojDoorWallHideWater_005ce3a4 string

undefined8 func_005CE208(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  _Alignas(8) unsigned char albw_frame[0x40];
  #define local_40 (*(undefined4 *)(albw_frame + 0x0))
  #define local_3c (*(char * *)(albw_frame + 0x4))
  #define local_38 (*(undefined4 *)(albw_frame + 0x8))
  #define local_34 (*(undefined * *)(albw_frame + 0xc))
  #define local_30 (*(undefined4 *)(albw_frame + 0x10))
  #define local_2c (*(char * *)(albw_frame + 0x14))
  #define local_28 (*(undefined4 *)(albw_frame + 0x18))
  #define local_24 (*(undefined * *)(albw_frame + 0x1c))
  #define local_20 (*(undefined4 *)(albw_frame + 0x20))
  #define local_1c (*(char * *)(albw_frame + 0x24))
  #define local_18 (*(undefined4 *)(albw_frame + 0x28))
  #define local_14 (*(undefined * *)(albw_frame + 0x2c))
  puVar1 = DAT_005ce370;
  *DAT_005ce370 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  uVar2 = DAT_005ce380;
  puVar1 = DAT_005ce374;
  *DAT_005ce374 = 0;
  puVar1[1] = 0;
  puVar1[3] = &DAT_005ce378;
  puVar1[2] = uVar2;
  puVar1 = DAT_005ce38c;
  puVar3 = DAT_005ce38c + 3;
  DAT_005ce38c[1] = 5;
  puVar1[2] = puVar3;
  *puVar1 = 0;
  local_34 = &DAT_005ce390;
  local_3c = s_MojDoorWallHideWater_005ce3a4;
  local_38 = uVar2;
  local_40 = uVar2;
  func_0019B51C(DAT_005ce3c4,DAT_005ce3c0,*DAT_005ce3bc,(int)&local_40,DAT_005ce38c,&local_38,0);
  puVar1 = DAT_005ce3cc;
  puVar3 = DAT_005ce3cc + 3;
  DAT_005ce3cc[1] = 5;
  puVar1[2] = puVar3;
  *puVar1 = 0;
  local_24 = &DAT_005ce3d0;
  local_2c = s_MojDoorWallHideDokuro_005ce3e8;
  local_28 = uVar2;
  local_30 = uVar2;
  func_0019B51C(DAT_005ce408,DAT_005ce404,*DAT_005ce400,(int)&local_30,DAT_005ce3cc,&local_28,0);
  puVar1 = DAT_005ce40c;
  puVar3 = DAT_005ce40c + 3;
  DAT_005ce40c[1] = 5;
  puVar1[2] = puVar3;
  *puVar1 = 0;
  local_14 = &DAT_005ce410;
  local_1c = s_MojDoorWallHideCastle_005ce428;
  local_18 = uVar2;
  local_20 = uVar2;
  uVar2 = func_0019B51C(DAT_005ce448,DAT_005ce444,*DAT_005ce440,(int)&local_20,DAT_005ce40c,
                        &local_18,0);
  return CONCAT44(DAT_005ce3c8,uVar2);
}

