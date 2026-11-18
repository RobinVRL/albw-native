#include "ghidra_types.h"

extern int func_0019B51C(undefined4 *param_1,undefined4 param_2,uint param_3,int param_4,undefined4 param_5 ,undefined4 param_6,int param_7);
extern undefined4 *DAT_005ace48;
extern undefined4 *DAT_005ace4c;
extern undefined4 *DAT_005ace50;
extern undefined4 DAT_005ace60;
extern undefined4 DAT_005ace88;
extern undefined4 DAT_005ace8c;
extern undefined4 *DAT_005ace90;
extern undefined DAT_005ace94;
extern undefined DAT_005ace9c;
extern undefined DAT_005acea4;
extern undefined DAT_005aceac;
extern undefined DAT_005aceb4;
extern undefined4 DAT_005acec0;
extern undefined4 *DAT_005acec4;
extern undefined4 DAT_005acec8;
extern undefined4 DAT_005acecc;
extern undefined4 DAT_005aced0;
extern undefined4 DAT_005aced4;
extern undefined4 DAT_005aced8;
extern undefined4 DAT_005acedc;
extern undefined DAT_005acee0;
extern undefined4 DAT_005acef8;
extern uint *DAT_005acefc;
extern undefined4 DAT_005acf00;
extern undefined4 *DAT_005acf04;
extern undefined4 DAT_005acf08;
extern char s_N_ArrowB_00_005ace64[];
extern char s_N_ArrowL_00_005ace70[];
extern char s_N_ArrowR_00_005ace7c[];
extern char s_N_ArrowT_00_005ace54[];
extern char s_NpcMobwoman_005aceec[];
extern char s_random_005aceb8[];

// USA 005ACCD4 <- EU 005ACCAC (Ghidra, non-matching)
// GLOBAL DAT_005ace48 undefined4 *
// GLOBAL DAT_005ace4c undefined4 *
// GLOBAL DAT_005ace50 undefined4 *
// GLOBAL DAT_005ace60 undefined4
// GLOBAL DAT_005ace88 undefined4
// GLOBAL DAT_005ace8c undefined4
// GLOBAL DAT_005ace90 undefined4 *
// GLOBAL DAT_005ace94 undefined
// GLOBAL DAT_005ace9c undefined
// GLOBAL DAT_005acea4 undefined
// GLOBAL DAT_005aceac undefined
// GLOBAL DAT_005aceb4 undefined
// GLOBAL DAT_005acec0 undefined4
// GLOBAL DAT_005acec4 undefined4 *
// GLOBAL DAT_005acec8 undefined4
// GLOBAL DAT_005acecc undefined4
// GLOBAL DAT_005aced0 undefined4
// GLOBAL DAT_005aced4 undefined4
// GLOBAL DAT_005aced8 undefined4
// GLOBAL DAT_005acedc undefined4
// GLOBAL DAT_005acee0 undefined
// GLOBAL DAT_005acef8 undefined4
// GLOBAL DAT_005acefc uint *
// GLOBAL DAT_005acf00 undefined4
// GLOBAL DAT_005acf04 undefined4 *
// GLOBAL DAT_005acf08 undefined4
// GLOBAL s_N_ArrowB_00_005ace64 string
// GLOBAL s_N_ArrowL_00_005ace70 string
// GLOBAL s_N_ArrowR_00_005ace7c string
// GLOBAL s_N_ArrowT_00_005ace54 string
// GLOBAL s_NpcMobwoman_005aceec string
// GLOBAL s_random_005aceb8 string

undefined8 func_005ACCD4(void)

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
  puVar1 = DAT_005ace48;
  *DAT_005ace48 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  local_20 = DAT_005ace60;
  puVar1 = DAT_005ace4c;
  *DAT_005ace4c = 0;
  puVar1[1] = 0;
  puVar1 = DAT_005ace50;
  DAT_005ace50[1] = s_N_ArrowT_00_005ace54;
  *puVar1 = local_20;
  puVar1[3] = s_N_ArrowB_00_005ace64;
  puVar1[2] = local_20;
  puVar1[5] = s_N_ArrowL_00_005ace70;
  puVar1[4] = local_20;
  puVar1[6] = local_20;
  puVar1[7] = s_N_ArrowR_00_005ace7c;
  puVar1 = DAT_005ace90;
  DAT_005ace90[1] = &DAT_005ace94;
  *puVar1 = local_20;
  puVar1[4] = &DAT_005ace9c;
  puVar1[3] = local_20;
  puVar1[7] = &DAT_005acea4;
  puVar1[6] = local_20;
  puVar1[10] = &DAT_005aceac;
  puVar1[9] = local_20;
  puVar1[0xd] = &DAT_005aceb4;
  puVar1[0xc] = local_20;
  puVar1[0xf] = local_20;
  puVar1[0x10] = s_random_005aceb8;
  uVar5 = DAT_005acedc;
  uVar4 = DAT_005aced8;
  uVar3 = DAT_005aced4;
  uVar2 = DAT_005aced0;
  uVar6 = DAT_005acecc;
  puVar1 = DAT_005acec4;
  *DAT_005acec4 = DAT_005acec8;
  puVar1[1] = uVar6;
  puVar1[2] = uVar2;
  puVar1[3] = uVar3;
  puVar1[4] = uVar4;
  puVar1[5] = uVar5;
  puVar1[6] = 10;
  *(undefined2 *)(puVar1 + 7) = 0x5f;
  *(undefined2 *)((int)puVar1 + 0x1e) = 0xb4;
  *(undefined1 *)(puVar1 + 8) = 0xec;
  *(undefined1 *)((int)puVar1 + 0x21) = 0xec;
  *(undefined1 *)((int)puVar1 + 0x22) = 0xf;
  *(undefined1 *)((int)puVar1 + 0x23) = 0x1e;
  *(undefined1 *)(puVar1 + 9) = 0x14;
  puVar1[-0xa2] = 0;
  puVar1[-0xa1] = 5;
  puVar1[-0xa0] = puVar1 + -0x9f;
  local_1c = &DAT_005acee0;
  local_24 = s_NpcMobwoman_005aceec;
  uStack_28 = local_20;
  uVar6 = func_0019B51C(DAT_005acf04,DAT_005acf00,*DAT_005acefc,(int)&uStack_28,DAT_005acef8,
                        &local_20,0);
  return CONCAT44(DAT_005acf08,uVar6);
}

