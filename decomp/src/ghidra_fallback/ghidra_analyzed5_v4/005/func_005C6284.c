#include "ghidra_types.h"

extern int func_0019B51C(undefined4 *param_1,undefined4 param_2,uint param_3,int param_4,undefined4 param_5 ,undefined4 param_6,int param_7);
extern undefined4 *DAT_005c6414;
extern undefined4 *DAT_005c6418;
extern undefined4 *DAT_005c641c;
extern undefined4 DAT_005c642c;
extern undefined4 DAT_005c6454;
extern undefined4 DAT_005c6458;
extern undefined4 *DAT_005c645c;
extern undefined DAT_005c6460;
extern undefined DAT_005c6468;
extern undefined DAT_005c6470;
extern undefined DAT_005c6478;
extern undefined4 DAT_005c6480;
extern undefined4 *DAT_005c6484;
extern undefined4 DAT_005c6488;
extern undefined4 DAT_005c648c;
extern undefined4 DAT_005c6490;
extern undefined4 DAT_005c6494;
extern undefined4 DAT_005c6498;
extern undefined4 DAT_005c649c;
extern undefined4 *DAT_005c64a0;
extern undefined4 DAT_005c64bc;
extern undefined4 *DAT_005c64c0;
extern undefined4 *DAT_005c64e0;
extern undefined DAT_005c64e4;
extern uint *DAT_005c6500;
extern undefined4 DAT_005c6504;
extern undefined4 *DAT_005c6508;
extern undefined4 DAT_005c650c;
extern char s_Entry_DaibakudanDome_005c64a4[];
extern char s_Entry_Dark1B_DaibakudanDome_005c64c4[];
extern char s_N_ArrowB_00_005c6430[];
extern char s_N_ArrowL_00_005c643c[];
extern char s_N_ArrowR_00_005c6448[];
extern char s_N_ArrowT_00_005c6420[];
extern char s_NpcShopManBomb_005c64f0[];

// USA 005C6284 <- EU 005C625C (Ghidra, non-matching)
// GLOBAL DAT_005c6414 undefined4 *
// GLOBAL DAT_005c6418 undefined4 *
// GLOBAL DAT_005c641c undefined4 *
// GLOBAL DAT_005c642c undefined4
// GLOBAL DAT_005c6454 undefined4
// GLOBAL DAT_005c6458 undefined4
// GLOBAL DAT_005c645c undefined4 *
// GLOBAL DAT_005c6460 undefined
// GLOBAL DAT_005c6468 undefined
// GLOBAL DAT_005c6470 undefined
// GLOBAL DAT_005c6478 undefined
// GLOBAL DAT_005c6480 undefined4
// GLOBAL DAT_005c6484 undefined4 *
// GLOBAL DAT_005c6488 undefined4
// GLOBAL DAT_005c648c undefined4
// GLOBAL DAT_005c6490 undefined4
// GLOBAL DAT_005c6494 undefined4
// GLOBAL DAT_005c6498 undefined4
// GLOBAL DAT_005c649c undefined4
// GLOBAL DAT_005c64a0 undefined4 *
// GLOBAL DAT_005c64bc undefined4
// GLOBAL DAT_005c64c0 undefined4 *
// GLOBAL DAT_005c64e0 undefined4 *
// GLOBAL DAT_005c64e4 undefined
// GLOBAL DAT_005c6500 uint *
// GLOBAL DAT_005c6504 undefined4
// GLOBAL DAT_005c6508 undefined4 *
// GLOBAL DAT_005c650c undefined4
// GLOBAL s_Entry_DaibakudanDome_005c64a4 string
// GLOBAL s_Entry_Dark1B_DaibakudanDome_005c64c4 string
// GLOBAL s_N_ArrowB_00_005c6430 string
// GLOBAL s_N_ArrowL_00_005c643c string
// GLOBAL s_N_ArrowR_00_005c6448 string
// GLOBAL s_N_ArrowT_00_005c6420 string
// GLOBAL s_NpcShopManBomb_005c64f0 string

undefined8 func_005C6284(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define uStack_28 (*(undefined4 *)(albw_frame + 0x8))
  #define local_24 (*(char * *)(albw_frame + 0xc))
  #define local_20 (*(undefined4 *)(albw_frame + 0x10))
  #define local_1c (*(undefined * *)(albw_frame + 0x14))
  puVar1 = DAT_005c6414;
  *DAT_005c6414 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  local_20 = DAT_005c642c;
  puVar1 = DAT_005c6418;
  *DAT_005c6418 = 0;
  puVar1[1] = 0;
  puVar1 = DAT_005c641c;
  DAT_005c641c[1] = s_N_ArrowT_00_005c6420;
  *puVar1 = local_20;
  puVar1[3] = s_N_ArrowB_00_005c6430;
  puVar1[2] = local_20;
  puVar1[5] = s_N_ArrowL_00_005c643c;
  puVar1[4] = local_20;
  puVar1[6] = local_20;
  puVar1[7] = s_N_ArrowR_00_005c6448;
  puVar1 = DAT_005c645c;
  DAT_005c645c[1] = &DAT_005c6460;
  *puVar1 = local_20;
  puVar1[4] = &DAT_005c6468;
  puVar1[3] = local_20;
  puVar1[7] = &DAT_005c6470;
  puVar1[6] = local_20;
  puVar1[9] = local_20;
  puVar1[10] = &DAT_005c6478;
  uVar5 = DAT_005c649c;
  uVar4 = DAT_005c6498;
  uVar3 = DAT_005c6494;
  uVar2 = DAT_005c6490;
  uVar6 = DAT_005c648c;
  puVar1 = DAT_005c6484;
  *DAT_005c6484 = DAT_005c6488;
  puVar1[1] = uVar6;
  puVar1[2] = uVar2;
  puVar1[3] = uVar3;
  puVar1[4] = uVar4;
  puVar1[5] = uVar5;
  puVar1[6] = 0xf;
  *(undefined2 *)(puVar1 + 7) = 0x5f;
  *(undefined2 *)((int)puVar1 + 0x1e) = 0xb4;
  *(undefined1 *)(puVar1 + 8) = 0xee;
  *(undefined1 *)((int)puVar1 + 0x21) = 0xec;
  *(undefined1 *)((int)puVar1 + 0x22) = 0xf;
  *(undefined1 *)((int)puVar1 + 0x23) = 0x32;
  *(undefined1 *)(puVar1 + 9) = 0x1e;
  puVar1 = DAT_005c64a0;
  DAT_005c64a0[1] = s_Entry_DaibakudanDome_005c64a4;
  *puVar1 = local_20;
  puVar1 = DAT_005c64c0;
  DAT_005c64c0[1] = s_Entry_Dark1B_DaibakudanDome_005c64c4;
  *puVar1 = local_20;
  puVar1 = DAT_005c64e0;
  puVar7 = DAT_005c64e0 + 3;
  *DAT_005c64e0 = 0;
  puVar1[1] = 5;
  puVar1[2] = puVar7;
  local_1c = &DAT_005c64e4;
  local_24 = s_NpcShopManBomb_005c64f0;
  uStack_28 = local_20;
  uVar6 = func_0019B51C(DAT_005c6508,DAT_005c6504,*DAT_005c6500,(int)&uStack_28,DAT_005c64e0,
                        &local_20,0);
  return CONCAT44(DAT_005c650c,uVar6);
}

