#include "ghidra_types.h"

extern int func_0019B51C(undefined4 *param_1,undefined4 param_2,uint param_3,int param_4,undefined4 param_5 ,undefined4 param_6,int param_7);
extern undefined4 *DAT_005a6a28;
extern undefined4 *DAT_005a6a2c;
extern undefined4 *DAT_005a6a30;
extern undefined4 DAT_005a6a40;
extern undefined4 DAT_005a6a68;
extern undefined4 DAT_005a6a6c;
extern undefined4 *DAT_005a6a70;
extern undefined DAT_005a6a74;
extern undefined DAT_005a6a7c;
extern undefined DAT_005a6a84;
extern undefined DAT_005a6a8c;
extern undefined DAT_005a6a94;
extern undefined4 DAT_005a6aa8;
extern undefined4 *DAT_005a6aac;
extern undefined DAT_005a6ab0;
extern undefined4 DAT_005a6ab8;
extern undefined4 *DAT_005a6abc;
extern undefined4 DAT_005a6ac0;
extern undefined4 DAT_005a6ac4;
extern undefined4 DAT_005a6ac8;
extern undefined4 DAT_005a6acc;
extern undefined4 DAT_005a6ad0;
extern undefined4 DAT_005a6ad4;
extern undefined DAT_005a6ad8;
extern undefined4 DAT_005a6aec;
extern uint *DAT_005a6af0;
extern undefined4 DAT_005a6af4;
extern undefined4 *DAT_005a6af8;
extern undefined4 DAT_005a6afc;
extern char s_N_ArrowB_00_005a6a44[];
extern char s_N_ArrowL_00_005a6a50[];
extern char s_N_ArrowR_00_005a6a5c[];
extern char s_N_ArrowT_00_005a6a34[];
extern char s_NpcSoldier_005a6ae0[];
extern char s_clean_005a6aa0[];
extern char s_cutturn_005a6a98[];

// USA 005A686C <- EU 005A6844 (Ghidra, non-matching)
// GLOBAL DAT_005a6a28 undefined4 *
// GLOBAL DAT_005a6a2c undefined4 *
// GLOBAL DAT_005a6a30 undefined4 *
// GLOBAL DAT_005a6a40 undefined4
// GLOBAL DAT_005a6a68 undefined4
// GLOBAL DAT_005a6a6c undefined4
// GLOBAL DAT_005a6a70 undefined4 *
// GLOBAL DAT_005a6a74 undefined
// GLOBAL DAT_005a6a7c undefined
// GLOBAL DAT_005a6a84 undefined
// GLOBAL DAT_005a6a8c undefined
// GLOBAL DAT_005a6a94 undefined
// GLOBAL DAT_005a6aa8 undefined4
// GLOBAL DAT_005a6aac undefined4 *
// GLOBAL DAT_005a6ab0 undefined
// GLOBAL DAT_005a6ab8 undefined4
// GLOBAL DAT_005a6abc undefined4 *
// GLOBAL DAT_005a6ac0 undefined4
// GLOBAL DAT_005a6ac4 undefined4
// GLOBAL DAT_005a6ac8 undefined4
// GLOBAL DAT_005a6acc undefined4
// GLOBAL DAT_005a6ad0 undefined4
// GLOBAL DAT_005a6ad4 undefined4
// GLOBAL DAT_005a6ad8 undefined
// GLOBAL DAT_005a6aec undefined4
// GLOBAL DAT_005a6af0 uint *
// GLOBAL DAT_005a6af4 undefined4
// GLOBAL DAT_005a6af8 undefined4 *
// GLOBAL DAT_005a6afc undefined4
// GLOBAL s_N_ArrowB_00_005a6a44 string
// GLOBAL s_N_ArrowL_00_005a6a50 string
// GLOBAL s_N_ArrowR_00_005a6a5c string
// GLOBAL s_N_ArrowT_00_005a6a34 string
// GLOBAL s_NpcSoldier_005a6ae0 string
// GLOBAL s_clean_005a6aa0 string
// GLOBAL s_cutturn_005a6a98 string

undefined8 func_005A686C(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define uStack_28 (*(undefined4 *)(albw_frame + 0x8))
  #define local_24 (*(char * *)(albw_frame + 0xc))
  #define local_20 (*(undefined4 *)(albw_frame + 0x10))
  #define local_1c (*(undefined * *)(albw_frame + 0x14))
  puVar1 = DAT_005a6a28;
  *DAT_005a6a28 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  local_20 = DAT_005a6a40;
  puVar1 = DAT_005a6a2c;
  *DAT_005a6a2c = 0;
  puVar1[1] = 0;
  puVar1 = DAT_005a6a30;
  DAT_005a6a30[1] = s_N_ArrowT_00_005a6a34;
  *puVar1 = local_20;
  puVar1[3] = s_N_ArrowB_00_005a6a44;
  puVar1[2] = local_20;
  puVar1[5] = s_N_ArrowL_00_005a6a50;
  puVar1[4] = local_20;
  puVar1[6] = local_20;
  puVar1[7] = s_N_ArrowR_00_005a6a5c;
  puVar1 = DAT_005a6a70;
  DAT_005a6a70[1] = &DAT_005a6a74;
  *puVar1 = local_20;
  puVar1[4] = &DAT_005a6a7c;
  puVar1[3] = local_20;
  puVar1[7] = &DAT_005a6a84;
  puVar1[6] = local_20;
  puVar1[10] = &DAT_005a6a8c;
  puVar1[9] = local_20;
  puVar1[0xd] = &DAT_005a6a94;
  puVar1[0xc] = local_20;
  puVar1[0x10] = s_cutturn_005a6a98;
  puVar1[0xf] = local_20;
  puVar1[0x12] = local_20;
  puVar1[0x13] = s_clean_005a6aa0;
  puVar1 = DAT_005a6aac;
  DAT_005a6aac[1] = &DAT_005a6ab0;
  *puVar1 = local_20;
  uVar5 = DAT_005a6ad4;
  uVar4 = DAT_005a6ad0;
  uVar3 = DAT_005a6acc;
  uVar2 = DAT_005a6ac8;
  uVar6 = DAT_005a6ac4;
  puVar1 = DAT_005a6abc;
  *DAT_005a6abc = DAT_005a6ac0;
  puVar1[1] = uVar6;
  puVar1[2] = uVar2;
  puVar1[3] = uVar3;
  puVar1[4] = uVar4;
  puVar1[5] = uVar5;
  puVar1[6] = 0xe;
  *(undefined2 *)(puVar1 + 7) = 0x5a;
  *(undefined2 *)((int)puVar1 + 0x1e) = 0xb4;
  *(undefined1 *)(puVar1 + 8) = 0xee;
  *(undefined1 *)((int)puVar1 + 0x21) = 0xec;
  *(undefined1 *)((int)puVar1 + 0x22) = 0xf;
  *(undefined1 *)((int)puVar1 + 0x23) = 0x1e;
  *(undefined1 *)(puVar1 + 9) = 0x14;
  puVar1[10] = 1;
  puVar1[0xb] = 0;
  puVar1[0xc] = 0;
  *(undefined1 *)(puVar1 + 0xd) = 0;
  *(undefined1 *)((int)puVar1 + 0x35) = 1;
  puVar1[-0xa2] = 0;
  puVar1[-0xa1] = 5;
  puVar1[-0xa0] = puVar1 + -0x9f;
  local_1c = &DAT_005a6ad8;
  local_24 = s_NpcSoldier_005a6ae0;
  uStack_28 = local_20;
  uVar6 = func_0019B51C(DAT_005a6af8,DAT_005a6af4,*DAT_005a6af0,(int)&uStack_28,DAT_005a6aec,
                        &local_20,0);
  return CONCAT44(DAT_005a6afc,uVar6);
}

