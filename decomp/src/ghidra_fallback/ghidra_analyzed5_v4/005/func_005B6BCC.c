#include "ghidra_types.h"

extern int func_0019B51C(undefined4 *param_1,undefined4 param_2,uint param_3,int param_4,undefined4 param_5 ,undefined4 param_6,int param_7);
extern undefined4 *DAT_005b6d38;
extern undefined4 *DAT_005b6d3c;
extern undefined4 *DAT_005b6d40;
extern undefined4 DAT_005b6d50;
extern undefined4 DAT_005b6d78;
extern undefined4 DAT_005b6d7c;
extern undefined4 *DAT_005b6d80;
extern undefined DAT_005b6d84;
extern undefined DAT_005b6d8c;
extern undefined DAT_005b6d94;
extern undefined4 DAT_005b6d9c;
extern undefined4 *DAT_005b6da0;
extern undefined4 DAT_005b6db4;
extern undefined4 *DAT_005b6db8;
extern undefined4 DAT_005b6dbc;
extern undefined4 DAT_005b6dc0;
extern undefined4 DAT_005b6dc4;
extern undefined4 DAT_005b6dc8;
extern undefined4 DAT_005b6dcc;
extern undefined4 DAT_005b6dd0;
extern undefined DAT_005b6dd4;
extern undefined4 DAT_005b6df0;
extern uint *DAT_005b6df4;
extern undefined4 DAT_005b6df8;
extern undefined4 *DAT_005b6dfc;
extern undefined4 DAT_005b6e00;
extern char s_N_ArrowB_00_005b6d54[];
extern char s_N_ArrowL_00_005b6d60[];
extern char s_N_ArrowR_00_005b6d6c[];
extern char s_N_ArrowT_00_005b6d44[];
extern char s_NpcGameKokko_005b6de0[];
extern char s_kokko_finish_005b6da4[];

// USA 005B6BCC <- EU 005B6BA4 (Ghidra, non-matching)
// GLOBAL DAT_005b6d38 undefined4 *
// GLOBAL DAT_005b6d3c undefined4 *
// GLOBAL DAT_005b6d40 undefined4 *
// GLOBAL DAT_005b6d50 undefined4
// GLOBAL DAT_005b6d78 undefined4
// GLOBAL DAT_005b6d7c undefined4
// GLOBAL DAT_005b6d80 undefined4 *
// GLOBAL DAT_005b6d84 undefined
// GLOBAL DAT_005b6d8c undefined
// GLOBAL DAT_005b6d94 undefined
// GLOBAL DAT_005b6d9c undefined4
// GLOBAL DAT_005b6da0 undefined4 *
// GLOBAL DAT_005b6db4 undefined4
// GLOBAL DAT_005b6db8 undefined4 *
// GLOBAL DAT_005b6dbc undefined4
// GLOBAL DAT_005b6dc0 undefined4
// GLOBAL DAT_005b6dc4 undefined4
// GLOBAL DAT_005b6dc8 undefined4
// GLOBAL DAT_005b6dcc undefined4
// GLOBAL DAT_005b6dd0 undefined4
// GLOBAL DAT_005b6dd4 undefined
// GLOBAL DAT_005b6df0 undefined4
// GLOBAL DAT_005b6df4 uint *
// GLOBAL DAT_005b6df8 undefined4
// GLOBAL DAT_005b6dfc undefined4 *
// GLOBAL DAT_005b6e00 undefined4
// GLOBAL s_N_ArrowB_00_005b6d54 string
// GLOBAL s_N_ArrowL_00_005b6d60 string
// GLOBAL s_N_ArrowR_00_005b6d6c string
// GLOBAL s_N_ArrowT_00_005b6d44 string
// GLOBAL s_NpcGameKokko_005b6de0 string
// GLOBAL s_kokko_finish_005b6da4 string

undefined8 func_005B6BCC(void)

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
  puVar1 = DAT_005b6d38;
  *DAT_005b6d38 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  local_20 = DAT_005b6d50;
  puVar1 = DAT_005b6d3c;
  *DAT_005b6d3c = 0;
  puVar1[1] = 0;
  puVar1 = DAT_005b6d40;
  DAT_005b6d40[1] = s_N_ArrowT_00_005b6d44;
  *puVar1 = local_20;
  puVar1[3] = s_N_ArrowB_00_005b6d54;
  puVar1[2] = local_20;
  puVar1[5] = s_N_ArrowL_00_005b6d60;
  puVar1[4] = local_20;
  puVar1[6] = local_20;
  puVar1[7] = s_N_ArrowR_00_005b6d6c;
  puVar1 = DAT_005b6d80;
  DAT_005b6d80[1] = &DAT_005b6d84;
  *puVar1 = local_20;
  puVar1[4] = &DAT_005b6d8c;
  puVar1[3] = local_20;
  puVar1[6] = local_20;
  puVar1[7] = &DAT_005b6d94;
  puVar1 = DAT_005b6da0;
  DAT_005b6da0[1] = s_kokko_finish_005b6da4;
  *puVar1 = local_20;
  uVar5 = DAT_005b6dd0;
  uVar4 = DAT_005b6dcc;
  uVar3 = DAT_005b6dc8;
  uVar2 = DAT_005b6dc4;
  uVar6 = DAT_005b6dc0;
  puVar1 = DAT_005b6db8;
  *DAT_005b6db8 = DAT_005b6dbc;
  puVar1[1] = uVar6;
  puVar1[2] = uVar2;
  puVar1[3] = uVar3;
  puVar1[4] = uVar4;
  puVar1[5] = uVar5;
  puVar1[6] = 0xd;
  *(undefined2 *)(puVar1 + 7) = 0x5f;
  *(undefined2 *)((int)puVar1 + 0x1e) = 0xb4;
  *(undefined1 *)(puVar1 + 8) = 0xee;
  *(undefined1 *)((int)puVar1 + 0x21) = 0xec;
  *(undefined1 *)((int)puVar1 + 0x22) = 0xf;
  *(undefined1 *)((int)puVar1 + 0x23) = 0x1e;
  *(undefined1 *)(puVar1 + 9) = 0xf;
  puVar1[-0xa2] = 0;
  puVar1[-0xa1] = 5;
  puVar1[-0xa0] = puVar1 + -0x9f;
  local_1c = &DAT_005b6dd4;
  local_24 = s_NpcGameKokko_005b6de0;
  uStack_28 = local_20;
  uVar6 = func_0019B51C(DAT_005b6dfc,DAT_005b6df8,*DAT_005b6df4,(int)&uStack_28,DAT_005b6df0,
                        &local_20,0);
  return CONCAT44(DAT_005b6e00,uVar6);
}

