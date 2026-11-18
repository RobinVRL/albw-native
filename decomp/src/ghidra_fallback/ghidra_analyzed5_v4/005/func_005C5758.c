#include "ghidra_types.h"

extern int func_0019B51C(undefined4 *param_1,undefined4 param_2,uint param_3,int param_4,undefined4 param_5 ,undefined4 param_6,int param_7);
extern undefined4 *DAT_005c58b8;
extern undefined4 *DAT_005c58bc;
extern undefined4 *DAT_005c58c0;
extern undefined4 DAT_005c58d0;
extern undefined4 DAT_005c58f8;
extern undefined4 DAT_005c58fc;
extern undefined4 *DAT_005c5900;
extern undefined DAT_005c5904;
extern undefined DAT_005c590c;
extern undefined DAT_005c5914;
extern undefined DAT_005c591c;
extern undefined4 DAT_005c5924;
extern undefined4 *DAT_005c5928;
extern undefined4 DAT_005c592c;
extern undefined4 DAT_005c5930;
extern undefined4 DAT_005c5934;
extern undefined4 DAT_005c5938;
extern undefined4 DAT_005c593c;
extern undefined4 DAT_005c5940;
extern undefined DAT_005c5944;
extern undefined4 DAT_005c5964;
extern uint *DAT_005c5968;
extern undefined4 DAT_005c596c;
extern undefined4 *DAT_005c5970;
extern undefined4 DAT_005c5974;
extern char s_N_ArrowB_00_005c58d4[];
extern char s_N_ArrowL_00_005c58e0[];
extern char s_N_ArrowR_00_005c58ec[];
extern char s_N_ArrowT_00_005c58c4[];
extern char s_NpcGameOctorok_005c5954[];

// USA 005C5758 <- EU 005C5730 (Ghidra, non-matching)
// GLOBAL DAT_005c58b8 undefined4 *
// GLOBAL DAT_005c58bc undefined4 *
// GLOBAL DAT_005c58c0 undefined4 *
// GLOBAL DAT_005c58d0 undefined4
// GLOBAL DAT_005c58f8 undefined4
// GLOBAL DAT_005c58fc undefined4
// GLOBAL DAT_005c5900 undefined4 *
// GLOBAL DAT_005c5904 undefined
// GLOBAL DAT_005c590c undefined
// GLOBAL DAT_005c5914 undefined
// GLOBAL DAT_005c591c undefined
// GLOBAL DAT_005c5924 undefined4
// GLOBAL DAT_005c5928 undefined4 *
// GLOBAL DAT_005c592c undefined4
// GLOBAL DAT_005c5930 undefined4
// GLOBAL DAT_005c5934 undefined4
// GLOBAL DAT_005c5938 undefined4
// GLOBAL DAT_005c593c undefined4
// GLOBAL DAT_005c5940 undefined4
// GLOBAL DAT_005c5944 undefined
// GLOBAL DAT_005c5964 undefined4
// GLOBAL DAT_005c5968 uint *
// GLOBAL DAT_005c596c undefined4
// GLOBAL DAT_005c5970 undefined4 *
// GLOBAL DAT_005c5974 undefined4
// GLOBAL s_N_ArrowB_00_005c58d4 string
// GLOBAL s_N_ArrowL_00_005c58e0 string
// GLOBAL s_N_ArrowR_00_005c58ec string
// GLOBAL s_N_ArrowT_00_005c58c4 string
// GLOBAL s_NpcGameOctorok_005c5954 string

undefined8 func_005C5758(void)

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
  puVar1 = DAT_005c58b8;
  *DAT_005c58b8 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  local_20 = DAT_005c58d0;
  puVar1 = DAT_005c58bc;
  *DAT_005c58bc = 0;
  puVar1[1] = 0;
  puVar1 = DAT_005c58c0;
  DAT_005c58c0[1] = s_N_ArrowT_00_005c58c4;
  *puVar1 = local_20;
  puVar1[3] = s_N_ArrowB_00_005c58d4;
  puVar1[2] = local_20;
  puVar1[5] = s_N_ArrowL_00_005c58e0;
  puVar1[4] = local_20;
  puVar1[6] = local_20;
  puVar1[7] = s_N_ArrowR_00_005c58ec;
  puVar1 = DAT_005c5900;
  DAT_005c5900[1] = &DAT_005c5904;
  *puVar1 = local_20;
  puVar1[4] = &DAT_005c590c;
  puVar1[3] = local_20;
  puVar1[7] = &DAT_005c5914;
  puVar1[6] = local_20;
  puVar1[9] = local_20;
  puVar1[10] = &DAT_005c591c;
  uVar5 = DAT_005c5940;
  uVar4 = DAT_005c593c;
  uVar3 = DAT_005c5938;
  uVar2 = DAT_005c5934;
  uVar6 = DAT_005c5930;
  puVar1 = DAT_005c5928;
  *DAT_005c5928 = DAT_005c592c;
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
  *(undefined1 *)((int)puVar1 + 0x23) = 0x28;
  *(undefined1 *)(puVar1 + 9) = 0x14;
  puVar1[-0xa2] = 0;
  puVar1[-0xa1] = 5;
  puVar1[-0xa0] = puVar1 + -0x9f;
  local_1c = &DAT_005c5944;
  local_24 = s_NpcGameOctorok_005c5954;
  uStack_28 = local_20;
  uVar6 = func_0019B51C(DAT_005c5970,DAT_005c596c,*DAT_005c5968,(int)&uStack_28,DAT_005c5964,
                        &local_20,0);
  return CONCAT44(DAT_005c5974,uVar6);
}

