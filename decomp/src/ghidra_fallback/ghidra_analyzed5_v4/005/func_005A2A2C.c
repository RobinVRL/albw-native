#include "ghidra_types.h"

extern int func_0019B51C(undefined4 *param_1,undefined4 param_2,uint param_3,int param_4,undefined4 param_5 ,undefined4 param_6,int param_7);
extern undefined4 *DAT_005a2bac;
extern undefined4 *DAT_005a2bb0;
extern undefined4 *DAT_005a2bb4;
extern undefined4 DAT_005a2bc4;
extern undefined4 DAT_005a2bec;
extern undefined4 DAT_005a2bf0;
extern undefined4 *DAT_005a2bf4;
extern undefined DAT_005a2bf8;
extern undefined DAT_005a2c00;
extern undefined DAT_005a2c08;
extern undefined DAT_005a2c10;
extern undefined DAT_005a2c24;
extern undefined DAT_005a2c2c;
extern undefined4 DAT_005a2c30;
extern undefined4 *DAT_005a2c34;
extern undefined4 DAT_005a2c38;
extern undefined4 DAT_005a2c3c;
extern undefined4 DAT_005a2c40;
extern undefined4 DAT_005a2c44;
extern undefined4 DAT_005a2c48;
extern undefined4 DAT_005a2c4c;
extern undefined DAT_005a2c50;
extern undefined4 DAT_005a2c68;
extern uint *DAT_005a2c6c;
extern undefined4 DAT_005a2c70;
extern undefined4 *DAT_005a2c74;
extern undefined4 DAT_005a2c78;
extern char s_N_ArrowB_00_005a2bc8[];
extern char s_N_ArrowL_00_005a2bd4[];
extern char s_N_ArrowR_00_005a2be0[];
extern char s_N_ArrowT_00_005a2bb8[];
extern char s_NpcMobman_005a2c5c[];
extern char s_surpriseA_005a2c18[];

// USA 005A2A2C <- EU 005A2A04 (Ghidra, non-matching)
// GLOBAL DAT_005a2bac undefined4 *
// GLOBAL DAT_005a2bb0 undefined4 *
// GLOBAL DAT_005a2bb4 undefined4 *
// GLOBAL DAT_005a2bc4 undefined4
// GLOBAL DAT_005a2bec undefined4
// GLOBAL DAT_005a2bf0 undefined4
// GLOBAL DAT_005a2bf4 undefined4 *
// GLOBAL DAT_005a2bf8 undefined
// GLOBAL DAT_005a2c00 undefined
// GLOBAL DAT_005a2c08 undefined
// GLOBAL DAT_005a2c10 undefined
// GLOBAL DAT_005a2c24 undefined
// GLOBAL DAT_005a2c2c undefined
// GLOBAL DAT_005a2c30 undefined4
// GLOBAL DAT_005a2c34 undefined4 *
// GLOBAL DAT_005a2c38 undefined4
// GLOBAL DAT_005a2c3c undefined4
// GLOBAL DAT_005a2c40 undefined4
// GLOBAL DAT_005a2c44 undefined4
// GLOBAL DAT_005a2c48 undefined4
// GLOBAL DAT_005a2c4c undefined4
// GLOBAL DAT_005a2c50 undefined
// GLOBAL DAT_005a2c68 undefined4
// GLOBAL DAT_005a2c6c uint *
// GLOBAL DAT_005a2c70 undefined4
// GLOBAL DAT_005a2c74 undefined4 *
// GLOBAL DAT_005a2c78 undefined4
// GLOBAL s_N_ArrowB_00_005a2bc8 string
// GLOBAL s_N_ArrowL_00_005a2bd4 string
// GLOBAL s_N_ArrowR_00_005a2be0 string
// GLOBAL s_N_ArrowT_00_005a2bb8 string
// GLOBAL s_NpcMobman_005a2c5c string
// GLOBAL s_surpriseA_005a2c18 string

undefined8 func_005A2A2C(void)

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
  puVar1 = DAT_005a2bac;
  *DAT_005a2bac = 0xffffffff;
  puVar1[1] = 0xffffffff;
  local_20 = DAT_005a2bc4;
  puVar1 = DAT_005a2bb0;
  *DAT_005a2bb0 = 0;
  puVar1[1] = 0;
  puVar1 = DAT_005a2bb4;
  DAT_005a2bb4[1] = s_N_ArrowT_00_005a2bb8;
  *puVar1 = local_20;
  puVar1[3] = s_N_ArrowB_00_005a2bc8;
  puVar1[2] = local_20;
  puVar1[5] = s_N_ArrowL_00_005a2bd4;
  puVar1[4] = local_20;
  puVar1[6] = local_20;
  puVar1[7] = s_N_ArrowR_00_005a2be0;
  puVar1 = DAT_005a2bf4;
  DAT_005a2bf4[1] = &DAT_005a2bf8;
  *puVar1 = local_20;
  puVar1[4] = &DAT_005a2c00;
  puVar1[3] = local_20;
  puVar1[7] = &DAT_005a2c08;
  puVar1[6] = local_20;
  puVar1[10] = &DAT_005a2c10;
  puVar1[9] = local_20;
  puVar1[0xd] = s_surpriseA_005a2c18;
  puVar1[0xc] = local_20;
  puVar1[0x10] = &DAT_005a2c24;
  puVar1[0xf] = local_20;
  puVar1[0x12] = local_20;
  puVar1[0x13] = &DAT_005a2c2c;
  uVar5 = DAT_005a2c4c;
  uVar4 = DAT_005a2c48;
  uVar3 = DAT_005a2c44;
  uVar2 = DAT_005a2c40;
  uVar6 = DAT_005a2c3c;
  puVar1 = DAT_005a2c34;
  *DAT_005a2c34 = DAT_005a2c38;
  puVar1[1] = uVar6;
  puVar1[2] = uVar2;
  puVar1[3] = uVar3;
  puVar1[4] = uVar4;
  puVar1[5] = uVar5;
  puVar1[6] = 10;
  *(undefined2 *)(puVar1 + 7) = 0x5f;
  *(undefined2 *)((int)puVar1 + 0x1e) = 0xb4;
  *(undefined1 *)(puVar1 + 8) = 0xee;
  *(undefined1 *)((int)puVar1 + 0x21) = 0xec;
  *(undefined1 *)((int)puVar1 + 0x22) = 0xf;
  *(undefined1 *)((int)puVar1 + 0x23) = 0x32;
  *(undefined1 *)(puVar1 + 9) = 0x1e;
  puVar1[-0xa2] = 0;
  puVar1[-0xa1] = 5;
  puVar1[-0xa0] = puVar1 + -0x9f;
  local_1c = &DAT_005a2c50;
  local_24 = s_NpcMobman_005a2c5c;
  uStack_28 = local_20;
  uVar6 = func_0019B51C(DAT_005a2c74,DAT_005a2c70,*DAT_005a2c6c,(int)&uStack_28,DAT_005a2c68,
                        &local_20,0);
  return CONCAT44(DAT_005a2c78,uVar6);
}

