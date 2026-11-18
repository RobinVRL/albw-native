#include "ghidra_types.h"

extern int func_0019B51C(undefined4 *param_1,undefined4 param_2,uint param_3,int param_4,undefined4 param_5 ,undefined4 param_6,int param_7);
extern undefined4 *DAT_005cf2d4;
extern undefined4 *DAT_005cf2d8;
extern undefined4 *DAT_005cf2dc;
extern undefined4 DAT_005cf2ec;
extern undefined4 DAT_005cf314;
extern undefined4 DAT_005cf318;
extern undefined4 *DAT_005cf31c;
extern undefined DAT_005cf320;
extern undefined DAT_005cf328;
extern undefined4 DAT_005cf330;
extern undefined4 *DAT_005cf334;
extern undefined DAT_005cf338;
extern undefined4 DAT_005cf340;
extern undefined4 DAT_005cf344;
extern undefined4 DAT_005cf348;
extern undefined4 DAT_005cf34c;
extern undefined4 DAT_005cf350;
extern undefined4 *DAT_005cf354;
extern undefined4 DAT_005cf358;
extern undefined4 *DAT_005cf35c;
extern undefined4 DAT_005cf368;
extern undefined4 *DAT_005cf36c;
extern undefined4 *DAT_005cf378;
extern undefined DAT_005cf37c;
extern uint *DAT_005cf3a0;
extern undefined4 DAT_005cf3a4;
extern undefined4 *DAT_005cf3a8;
extern undefined4 DAT_005cf3ac;
extern undefined4 *DAT_005cf3b0;
extern undefined DAT_005cf3b4;
extern uint *DAT_005cf3dc;
extern undefined4 DAT_005cf3e0;
extern undefined4 *DAT_005cf3e4;
extern char s_HandR_005cf360[];
extern char s_N_ArrowB_00_005cf2f0[];
extern char s_N_ArrowL_00_005cf2fc[];
extern char s_N_ArrowR_00_005cf308[];
extern char s_N_ArrowT_00_005cf2e0[];
extern char s_NpcShopManMagicUra_005cf3c8[];
extern char s_NpcShopManMagic_005cf390[];
extern char s_PotShop_005cf370[];

// USA 005CF050 <- EU 005CF028 (Ghidra, non-matching)
// GLOBAL DAT_005cf2d4 undefined4 *
// GLOBAL DAT_005cf2d8 undefined4 *
// GLOBAL DAT_005cf2dc undefined4 *
// GLOBAL DAT_005cf2ec undefined4
// GLOBAL DAT_005cf314 undefined4
// GLOBAL DAT_005cf318 undefined4
// GLOBAL DAT_005cf31c undefined4 *
// GLOBAL DAT_005cf320 undefined
// GLOBAL DAT_005cf328 undefined
// GLOBAL DAT_005cf330 undefined4
// GLOBAL DAT_005cf334 undefined4 *
// GLOBAL DAT_005cf338 undefined
// GLOBAL DAT_005cf340 undefined4
// GLOBAL DAT_005cf344 undefined4
// GLOBAL DAT_005cf348 undefined4
// GLOBAL DAT_005cf34c undefined4
// GLOBAL DAT_005cf350 undefined4
// GLOBAL DAT_005cf354 undefined4 *
// GLOBAL DAT_005cf358 undefined4
// GLOBAL DAT_005cf35c undefined4 *
// GLOBAL DAT_005cf368 undefined4
// GLOBAL DAT_005cf36c undefined4 *
// GLOBAL DAT_005cf378 undefined4 *
// GLOBAL DAT_005cf37c undefined
// GLOBAL DAT_005cf3a0 uint *
// GLOBAL DAT_005cf3a4 undefined4
// GLOBAL DAT_005cf3a8 undefined4 *
// GLOBAL DAT_005cf3ac undefined4
// GLOBAL DAT_005cf3b0 undefined4 *
// GLOBAL DAT_005cf3b4 undefined
// GLOBAL DAT_005cf3dc uint *
// GLOBAL DAT_005cf3e0 undefined4
// GLOBAL DAT_005cf3e4 undefined4 *
// GLOBAL s_HandR_005cf360 string
// GLOBAL s_N_ArrowB_00_005cf2f0 string
// GLOBAL s_N_ArrowL_00_005cf2fc string
// GLOBAL s_N_ArrowR_00_005cf308 string
// GLOBAL s_N_ArrowT_00_005cf2e0 string
// GLOBAL s_NpcShopManMagicUra_005cf3c8 string
// GLOBAL s_NpcShopManMagic_005cf390 string
// GLOBAL s_PotShop_005cf370 string

undefined8 func_005CF050(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  _Alignas(8) unsigned char albw_frame[0x40];
  #define local_38 (*(undefined4 *)(albw_frame + 0x8))
  #define local_34 (*(char * *)(albw_frame + 0xc))
  #define local_30 (*(undefined4 *)(albw_frame + 0x10))
  #define local_2c (*(undefined * *)(albw_frame + 0x14))
  #define local_28 (*(undefined4 *)(albw_frame + 0x18))
  #define local_24 (*(char * *)(albw_frame + 0x1c))
  #define local_20 (*(undefined4 *)(albw_frame + 0x20))
  #define local_1c (*(undefined * *)(albw_frame + 0x24))
  puVar1 = DAT_005cf2d4;
  *DAT_005cf2d4 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  uVar7 = DAT_005cf2ec;
  puVar1 = DAT_005cf2d8;
  *DAT_005cf2d8 = 0;
  puVar1[1] = 0;
  puVar1 = DAT_005cf2dc;
  DAT_005cf2dc[1] = s_N_ArrowT_00_005cf2e0;
  *puVar1 = uVar7;
  puVar1[3] = s_N_ArrowB_00_005cf2f0;
  puVar1[2] = uVar7;
  puVar1[5] = s_N_ArrowL_00_005cf2fc;
  puVar1[4] = uVar7;
  puVar1[6] = uVar7;
  puVar1[7] = s_N_ArrowR_00_005cf308;
  puVar1 = DAT_005cf31c;
  DAT_005cf31c[1] = &DAT_005cf320;
  *puVar1 = uVar7;
  puVar1[3] = uVar7;
  puVar1[4] = &DAT_005cf328;
  puVar1 = DAT_005cf334;
  DAT_005cf334[1] = &DAT_005cf320;
  *puVar1 = uVar7;
  puVar1[4] = &DAT_005cf328;
  puVar1[3] = uVar7;
  puVar1[6] = uVar7;
  puVar1[7] = &DAT_005cf338;
  puVar1 = DAT_005cf354;
  uVar4 = DAT_005cf34c;
  uVar3 = DAT_005cf348;
  uVar2 = DAT_005cf344;
  *DAT_005cf354 = DAT_005cf344;
  puVar1[1] = uVar3;
  uVar5 = DAT_005cf350;
  puVar1[2] = uVar4;
  puVar1[3] = uVar4;
  puVar1[4] = uVar5;
  puVar1[5] = uVar4;
  puVar1[6] = 0xf;
  *(undefined2 *)(puVar1 + 7) = 0x5f;
  *(undefined2 *)((int)puVar1 + 0x1e) = 0xb4;
  *(undefined1 *)(puVar1 + 8) = 0xee;
  *(undefined1 *)((int)puVar1 + 0x21) = 0xec;
  *(undefined1 *)((int)puVar1 + 0x22) = 0xf;
  *(undefined1 *)((int)puVar1 + 0x23) = 0x28;
  *(undefined1 *)(puVar1 + 9) = 1;
  uVar6 = DAT_005cf358;
  puVar1[10] = uVar2;
  puVar1[0xb] = uVar3;
  puVar1[0xc] = uVar3;
  puVar1[0xd] = uVar4;
  puVar1[0xe] = uVar5;
  puVar1[0xf] = uVar6;
  puVar1[0x10] = 10;
  *(undefined2 *)(puVar1 + 0x11) = 0x5f;
  *(undefined2 *)((int)puVar1 + 0x46) = 0xb4;
  *(undefined1 *)(puVar1 + 0x12) = 0xec;
  *(undefined1 *)((int)puVar1 + 0x49) = 0xec;
  *(undefined1 *)((int)puVar1 + 0x4a) = 0xf;
  *(undefined1 *)((int)puVar1 + 0x4b) = 0x1e;
  *(undefined1 *)(puVar1 + 0x13) = 1;
  puVar1 = DAT_005cf35c;
  DAT_005cf35c[1] = s_HandR_005cf360;
  *puVar1 = uVar7;
  puVar1 = DAT_005cf36c;
  DAT_005cf36c[1] = s_PotShop_005cf370;
  *puVar1 = uVar7;
  puVar1 = DAT_005cf378;
  DAT_005cf378[2] = DAT_005cf378 + 3;
  puVar1[1] = 5;
  *puVar1 = 0;
  local_2c = &DAT_005cf37c;
  local_34 = s_NpcShopManMagic_005cf390;
  local_30 = uVar7;
  local_38 = uVar7;
  func_0019B51C(DAT_005cf3a8,DAT_005cf3a4,*DAT_005cf3a0,(int)&local_38,DAT_005cf378,&local_30,0);
  puVar1 = DAT_005cf3b0;
  puVar8 = DAT_005cf3b0 + 3;
  DAT_005cf3b0[1] = 5;
  puVar1[2] = puVar8;
  *puVar1 = 0;
  local_1c = &DAT_005cf3b4;
  local_24 = s_NpcShopManMagicUra_005cf3c8;
  local_20 = uVar7;
  local_28 = uVar7;
  uVar7 = func_0019B51C(DAT_005cf3e4,DAT_005cf3e0,*DAT_005cf3dc,(int)&local_28,DAT_005cf3b0,
                        &local_20,0);
  return CONCAT44(DAT_005cf3ac,uVar7);
}

