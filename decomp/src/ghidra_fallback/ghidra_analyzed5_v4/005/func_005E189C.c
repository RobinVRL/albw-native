#include "ghidra_types.h"

extern undefined8 func_00114608(uint param_1,uint param_2);
extern int func_0019B51C(undefined4 *param_1,undefined4 param_2,uint param_3,int param_4,undefined4 param_5 ,undefined4 param_6,int param_7);
extern undefined4 *DAT_005e1a58;
extern undefined4 *DAT_005e1a5c;
extern undefined4 DAT_005e1a6c;
extern undefined4 DAT_005e1a94;
extern undefined4 DAT_005e1a98;
extern undefined DAT_005e1a9c;
extern undefined DAT_005e1aa4;
extern undefined DAT_005e1aac;
extern undefined DAT_005e1ab4;
extern undefined4 DAT_005e1abc;
extern undefined4 *DAT_005e1ac0;
extern uint DAT_005e1acc;
extern uint DAT_005e1ad0;
extern undefined4 DAT_005e1ad4;
extern undefined4 DAT_005e1ad8;
extern undefined4 *DAT_005e1adc;
extern undefined4 DAT_005e1ae0;
extern undefined4 DAT_005e1ae4;
extern undefined DAT_005e1ae8;
extern undefined4 DAT_005e1b0c;
extern uint *DAT_005e1b10;
extern undefined4 DAT_005e1b14;
extern undefined4 *DAT_005e1b18;
extern undefined4 DAT_005e1b1c;
extern char s_N_ArrowB_00_005e1a70[];
extern char s_N_ArrowL_00_005e1a7c[];
extern char s_N_ArrowR_00_005e1a88[];
extern char s_N_ArrowT_00_005e1a60[];
extern char s_NpcFairyBigRupee_005e1af8[];
extern char s_appear_005e1ac4[];

// USA 005E189C <- EU 005E1874 (Ghidra, non-matching)
// GLOBAL DAT_005e1a58 undefined4 *
// GLOBAL DAT_005e1a5c undefined4 *
// GLOBAL DAT_005e1a6c undefined4
// GLOBAL DAT_005e1a94 undefined4
// GLOBAL DAT_005e1a98 undefined4
// GLOBAL DAT_005e1a9c undefined
// GLOBAL DAT_005e1aa4 undefined
// GLOBAL DAT_005e1aac undefined
// GLOBAL DAT_005e1ab4 undefined
// GLOBAL DAT_005e1abc undefined4
// GLOBAL DAT_005e1ac0 undefined4 *
// GLOBAL DAT_005e1acc uint
// GLOBAL DAT_005e1ad0 uint
// GLOBAL DAT_005e1ad4 undefined4
// GLOBAL DAT_005e1ad8 undefined4
// GLOBAL DAT_005e1adc undefined4 *
// GLOBAL DAT_005e1ae0 undefined4
// GLOBAL DAT_005e1ae4 undefined4
// GLOBAL DAT_005e1ae8 undefined
// GLOBAL DAT_005e1b0c undefined4
// GLOBAL DAT_005e1b10 uint *
// GLOBAL DAT_005e1b14 undefined4
// GLOBAL DAT_005e1b18 undefined4 *
// GLOBAL DAT_005e1b1c undefined4
// GLOBAL s_N_ArrowB_00_005e1a70 string
// GLOBAL s_N_ArrowL_00_005e1a7c string
// GLOBAL s_N_ArrowR_00_005e1a88 string
// GLOBAL s_N_ArrowT_00_005e1a60 string
// GLOBAL s_NpcFairyBigRupee_005e1af8 string
// GLOBAL s_appear_005e1ac4 string

undefined8 func_005E189C(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define uStack_28 (*(undefined4 *)(albw_frame + 0x8))
  #define local_24 (*(char * *)(albw_frame + 0xc))
  #define local_20 (*(undefined4 *)(albw_frame + 0x10))
  #define local_1c (*(undefined * *)(albw_frame + 0x14))
  uVar6 = DAT_005e1a6c;
  puVar1 = DAT_005e1a58;
  DAT_005e1a58[2] = 0xffffffff;
  puVar1[3] = 0xffffffff;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar2 = DAT_005e1a5c;
  DAT_005e1a5c[1] = s_N_ArrowT_00_005e1a60;
  *puVar2 = uVar6;
  puVar2[3] = s_N_ArrowB_00_005e1a70;
  puVar2[2] = uVar6;
  puVar2[5] = s_N_ArrowL_00_005e1a7c;
  puVar2[4] = uVar6;
  puVar2[6] = uVar6;
  puVar2[7] = s_N_ArrowR_00_005e1a88;
  puVar1[7] = &DAT_005e1a9c;
  puVar1[6] = uVar6;
  puVar1[10] = &DAT_005e1aa4;
  puVar1[9] = uVar6;
  puVar1[0xd] = &DAT_005e1aac;
  puVar1[0xc] = uVar6;
  puVar1[0xf] = uVar6;
  puVar1[0x10] = &DAT_005e1ab4;
  puVar2 = DAT_005e1ac0;
  DAT_005e1ac0[1] = s_appear_005e1ac4;
  *puVar2 = uVar6;
  puVar2[2] = uVar6;
  puVar2[3] = &DAT_005e1ab4;
  uVar7 = func_00114608(DAT_005e1ad0,DAT_005e1acc);
  *puVar1 = (int)uVar7;
  uVar5 = DAT_005e1ae4;
  puVar1 = DAT_005e1adc;
  uVar3 = DAT_005e1ad4;
  *DAT_005e1adc = DAT_005e1ae0;
  uVar4 = DAT_005e1ad8;
  puVar1[1] = uVar5;
  puVar1[2] = uVar3;
  puVar1[3] = uVar4;
  puVar1[4] = uVar4;
  puVar1[5] = uVar3;
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
  puVar1[-0xa6] = 0;
  puVar1[-0xa5] = 5;
  puVar1[-0xa4] = puVar1 + -0xa3;
  local_1c = &DAT_005e1ae8;
  local_24 = s_NpcFairyBigRupee_005e1af8;
  local_20 = uVar6;
  uStack_28 = uVar6;
  uVar6 = func_0019B51C(DAT_005e1b18,DAT_005e1b14,*DAT_005e1b10,(int)&uStack_28,DAT_005e1b0c,
                        &local_20,0);
  return CONCAT44(DAT_005e1b1c,uVar6);
}

