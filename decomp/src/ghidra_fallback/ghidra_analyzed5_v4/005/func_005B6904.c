#include "ghidra_types.h"

extern int func_0019B51C(undefined4 *param_1,undefined4 param_2,uint param_3,int param_4,undefined4 param_5 ,undefined4 param_6,int param_7);
extern undefined4 *DAT_005b6ac0;
extern undefined4 *DAT_005b6ac4;
extern undefined4 *DAT_005b6ac8;
extern undefined4 DAT_005b6ad8;
extern undefined4 DAT_005b6b00;
extern undefined4 DAT_005b6b04;
extern undefined4 *DAT_005b6b08;
extern undefined DAT_005b6b0c;
extern undefined DAT_005b6b14;
extern undefined4 DAT_005b6b4c;
extern undefined4 *DAT_005b6b50;
extern undefined4 DAT_005b6b5c;
extern undefined4 DAT_005b6b60;
extern undefined4 DAT_005b6b64;
extern undefined4 *DAT_005b6b68;
extern undefined4 DAT_005b6b6c;
extern undefined4 DAT_005b6b70;
extern undefined DAT_005b6b74;
extern undefined4 DAT_005b6b90;
extern uint *DAT_005b6b94;
extern undefined4 DAT_005b6b98;
extern undefined4 *DAT_005b6b9c;
extern undefined4 DAT_005b6ba0;
extern char s_N_ArrowB_00_005b6adc[];
extern char s_N_ArrowL_00_005b6ae8[];
extern char s_N_ArrowR_00_005b6af4[];
extern char s_N_ArrowT_00_005b6acc[];
extern char s_NpcCommander_005b6b80[];
extern char s_shield_005b6b54[];
extern char s_step_shield_005b6b34[];
extern char s_talk_shield_005b6b40[];
extern char s_wait_shield_005b6b1c[];
extern char s_walk_shield_005b6b28[];

// USA 005B6904 <- EU 005B68DC (Ghidra, non-matching)
// GLOBAL DAT_005b6ac0 undefined4 *
// GLOBAL DAT_005b6ac4 undefined4 *
// GLOBAL DAT_005b6ac8 undefined4 *
// GLOBAL DAT_005b6ad8 undefined4
// GLOBAL DAT_005b6b00 undefined4
// GLOBAL DAT_005b6b04 undefined4
// GLOBAL DAT_005b6b08 undefined4 *
// GLOBAL DAT_005b6b0c undefined
// GLOBAL DAT_005b6b14 undefined
// GLOBAL DAT_005b6b4c undefined4
// GLOBAL DAT_005b6b50 undefined4 *
// GLOBAL DAT_005b6b5c undefined4
// GLOBAL DAT_005b6b60 undefined4
// GLOBAL DAT_005b6b64 undefined4
// GLOBAL DAT_005b6b68 undefined4 *
// GLOBAL DAT_005b6b6c undefined4
// GLOBAL DAT_005b6b70 undefined4
// GLOBAL DAT_005b6b74 undefined
// GLOBAL DAT_005b6b90 undefined4
// GLOBAL DAT_005b6b94 uint *
// GLOBAL DAT_005b6b98 undefined4
// GLOBAL DAT_005b6b9c undefined4 *
// GLOBAL DAT_005b6ba0 undefined4
// GLOBAL s_N_ArrowB_00_005b6adc string
// GLOBAL s_N_ArrowL_00_005b6ae8 string
// GLOBAL s_N_ArrowR_00_005b6af4 string
// GLOBAL s_N_ArrowT_00_005b6acc string
// GLOBAL s_NpcCommander_005b6b80 string
// GLOBAL s_shield_005b6b54 string
// GLOBAL s_step_shield_005b6b34 string
// GLOBAL s_talk_shield_005b6b40 string
// GLOBAL s_wait_shield_005b6b1c string
// GLOBAL s_walk_shield_005b6b28 string

undefined8 func_005B6904(void)

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
  puVar1 = DAT_005b6ac0;
  *DAT_005b6ac0 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  local_20 = DAT_005b6ad8;
  puVar1 = DAT_005b6ac4;
  *DAT_005b6ac4 = 0;
  puVar1[1] = 0;
  puVar1 = DAT_005b6ac8;
  DAT_005b6ac8[1] = s_N_ArrowT_00_005b6acc;
  *puVar1 = local_20;
  puVar1[3] = s_N_ArrowB_00_005b6adc;
  puVar1[2] = local_20;
  puVar1[5] = s_N_ArrowL_00_005b6ae8;
  puVar1[4] = local_20;
  puVar1[6] = local_20;
  puVar1[7] = s_N_ArrowR_00_005b6af4;
  puVar1 = DAT_005b6b08;
  DAT_005b6b08[1] = &DAT_005b6b0c;
  *puVar1 = local_20;
  puVar1[4] = &DAT_005b6b14;
  puVar1[3] = local_20;
  puVar1[7] = s_wait_shield_005b6b1c;
  puVar1[6] = local_20;
  puVar1[10] = s_walk_shield_005b6b28;
  puVar1[9] = local_20;
  puVar1[0xd] = s_step_shield_005b6b34;
  puVar1[0xc] = local_20;
  puVar1[0xf] = local_20;
  puVar1[0x10] = s_talk_shield_005b6b40;
  puVar1 = DAT_005b6b50;
  DAT_005b6b50[1] = s_shield_005b6b54;
  *puVar1 = local_20;
  uVar3 = DAT_005b6b70;
  puVar1 = DAT_005b6b68;
  uVar4 = DAT_005b6b60;
  *DAT_005b6b68 = DAT_005b6b6c;
  uVar2 = DAT_005b6b64;
  puVar1[1] = uVar3;
  puVar1[2] = uVar4;
  puVar1[3] = uVar2;
  puVar1[4] = uVar2;
  puVar1[5] = uVar4;
  puVar1[6] = 0xd;
  *(undefined2 *)(puVar1 + 7) = 0x5a;
  *(undefined2 *)((int)puVar1 + 0x1e) = 0xb4;
  *(undefined1 *)(puVar1 + 8) = 0xee;
  *(undefined1 *)((int)puVar1 + 0x21) = 0xec;
  *(undefined1 *)((int)puVar1 + 0x22) = 0xf;
  *(undefined1 *)((int)puVar1 + 0x23) = 0x1e;
  *(undefined1 *)(puVar1 + 9) = 10;
  puVar1[10] = 1;
  puVar1[0xb] = 0;
  puVar1[0xc] = 0;
  *(undefined1 *)(puVar1 + 0xd) = 0;
  *(undefined1 *)((int)puVar1 + 0x35) = 1;
  puVar1[-0xa2] = 0;
  puVar1[-0xa1] = 5;
  puVar1[-0xa0] = puVar1 + -0x9f;
  local_1c = &DAT_005b6b74;
  local_24 = s_NpcCommander_005b6b80;
  uStack_28 = local_20;
  uVar4 = func_0019B51C(DAT_005b6b9c,DAT_005b6b98,*DAT_005b6b94,(int)&uStack_28,DAT_005b6b90,
                        &local_20,0);
  return CONCAT44(DAT_005b6ba0,uVar4);
}

