#include "ghidra_types.h"

extern int func_0019B51C(undefined4 *param_1,undefined4 param_2,uint param_3,int param_4,undefined4 param_5 ,undefined4 param_6,int param_7);
extern undefined4 *DAT_005abff0;
extern undefined4 *DAT_005abff4;
extern undefined4 *DAT_005abff8;
extern undefined4 DAT_005ac008;
extern undefined4 DAT_005ac030;
extern undefined4 DAT_005ac034;
extern undefined4 *DAT_005ac038;
extern undefined DAT_005ac03c;
extern undefined DAT_005ac044;
extern undefined DAT_005ac04c;
extern undefined DAT_005ac054;
extern undefined DAT_005ac05c;
extern undefined4 DAT_005ac064;
extern undefined4 *DAT_005ac068;
extern undefined4 DAT_005ac06c;
extern undefined4 DAT_005ac070;
extern undefined4 DAT_005ac074;
extern undefined4 *DAT_005ac078;
extern undefined4 DAT_005ac07c;
extern undefined4 DAT_005ac080;
extern undefined DAT_005ac084;
extern undefined4 DAT_005ac098;
extern uint *DAT_005ac09c;
extern undefined4 DAT_005ac0a0;
extern undefined4 *DAT_005ac0a4;
extern undefined4 DAT_005ac0a8;
extern char s_N_ArrowB_00_005ac00c[];
extern char s_N_ArrowL_00_005ac018[];
extern char s_N_ArrowR_00_005ac024[];
extern char s_N_ArrowT_00_005abffc[];
extern char s_NpcFairyBig_005ac08c[];

// USA 005ABE40 <- EU 005ABE18 (Ghidra, non-matching)
// GLOBAL DAT_005abff0 undefined4 *
// GLOBAL DAT_005abff4 undefined4 *
// GLOBAL DAT_005abff8 undefined4 *
// GLOBAL DAT_005ac008 undefined4
// GLOBAL DAT_005ac030 undefined4
// GLOBAL DAT_005ac034 undefined4
// GLOBAL DAT_005ac038 undefined4 *
// GLOBAL DAT_005ac03c undefined
// GLOBAL DAT_005ac044 undefined
// GLOBAL DAT_005ac04c undefined
// GLOBAL DAT_005ac054 undefined
// GLOBAL DAT_005ac05c undefined
// GLOBAL DAT_005ac064 undefined4
// GLOBAL DAT_005ac068 undefined4 *
// GLOBAL DAT_005ac06c undefined4
// GLOBAL DAT_005ac070 undefined4
// GLOBAL DAT_005ac074 undefined4
// GLOBAL DAT_005ac078 undefined4 *
// GLOBAL DAT_005ac07c undefined4
// GLOBAL DAT_005ac080 undefined4
// GLOBAL DAT_005ac084 undefined
// GLOBAL DAT_005ac098 undefined4
// GLOBAL DAT_005ac09c uint *
// GLOBAL DAT_005ac0a0 undefined4
// GLOBAL DAT_005ac0a4 undefined4 *
// GLOBAL DAT_005ac0a8 undefined4
// GLOBAL s_N_ArrowB_00_005ac00c string
// GLOBAL s_N_ArrowL_00_005ac018 string
// GLOBAL s_N_ArrowR_00_005ac024 string
// GLOBAL s_N_ArrowT_00_005abffc string
// GLOBAL s_NpcFairyBig_005ac08c string

undefined8 func_005ABE40(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define uStack_28 (*(undefined4 *)(albw_frame + 0x8))
  #define local_24 (*(char * *)(albw_frame + 0xc))
  #define local_20 (*(undefined4 *)(albw_frame + 0x10))
  #define local_1c (*(undefined * *)(albw_frame + 0x14))
  puVar1 = DAT_005abff0;
  *DAT_005abff0 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  local_20 = DAT_005ac008;
  puVar1 = DAT_005abff4;
  *DAT_005abff4 = 0;
  puVar1[1] = 0;
  puVar1 = DAT_005abff8;
  DAT_005abff8[1] = s_N_ArrowT_00_005abffc;
  *puVar1 = local_20;
  puVar1[3] = s_N_ArrowB_00_005ac00c;
  puVar1[2] = local_20;
  puVar1[5] = s_N_ArrowL_00_005ac018;
  puVar1[4] = local_20;
  puVar1[6] = local_20;
  puVar1[7] = s_N_ArrowR_00_005ac024;
  puVar1 = DAT_005ac038;
  DAT_005ac038[1] = &DAT_005ac03c;
  *puVar1 = local_20;
  puVar1[4] = &DAT_005ac044;
  puVar1[3] = local_20;
  puVar1[7] = &DAT_005ac04c;
  puVar1[6] = local_20;
  puVar1[10] = &DAT_005ac054;
  puVar1[9] = local_20;
  puVar1[0xc] = local_20;
  puVar1[0xd] = &DAT_005ac05c;
  puVar1 = DAT_005ac068;
  DAT_005ac068[1] = &DAT_005ac05c;
  *puVar1 = local_20;
  uVar3 = DAT_005ac080;
  puVar1 = DAT_005ac078;
  uVar4 = DAT_005ac070;
  *DAT_005ac078 = DAT_005ac07c;
  uVar2 = DAT_005ac074;
  puVar1[1] = uVar3;
  puVar1[2] = uVar4;
  puVar1[3] = uVar2;
  puVar1[4] = uVar2;
  puVar1[5] = uVar4;
  puVar1[6] = 10;
  *(undefined2 *)(puVar1 + 7) = 0x5f;
  *(undefined2 *)((int)puVar1 + 0x1e) = 0xb4;
  *(undefined1 *)(puVar1 + 8) = 0xee;
  *(undefined1 *)((int)puVar1 + 0x21) = 0xec;
  *(undefined1 *)((int)puVar1 + 0x22) = 0xf;
  *(undefined1 *)((int)puVar1 + 0x23) = 0x32;
  *(undefined1 *)(puVar1 + 9) = 0x1e;
  puVar1[10] = 1;
  puVar1[0xb] = 0;
  puVar1[0xc] = 0;
  *(undefined1 *)(puVar1 + 0xd) = 0;
  *(undefined1 *)((int)puVar1 + 0x35) = 1;
  puVar1[-0xa2] = 0;
  puVar1[-0xa1] = 5;
  puVar1[-0xa0] = puVar1 + -0x9f;
  local_1c = &DAT_005ac084;
  local_24 = s_NpcFairyBig_005ac08c;
  uStack_28 = local_20;
  uVar4 = func_0019B51C(DAT_005ac0a4,DAT_005ac0a0,*DAT_005ac09c,(int)&uStack_28,DAT_005ac098,
                        &local_20,0);
  return CONCAT44(DAT_005ac0a8,uVar4);
}

