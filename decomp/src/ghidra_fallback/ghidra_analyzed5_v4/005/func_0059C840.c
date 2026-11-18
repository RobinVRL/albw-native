#include "ghidra_types.h"

extern int func_0019B51C(undefined4 *param_1,undefined4 param_2,uint param_3,int param_4,undefined4 param_5 ,undefined4 param_6,int param_7);
extern int DAT_0059ca58;
extern undefined4 *DAT_0059ca5c;
extern undefined4 *DAT_0059ca60;
extern undefined4 DAT_0059ca70;
extern undefined4 DAT_0059ca98;
extern undefined4 DAT_0059ca9c;
extern undefined4 *DAT_0059caa0;
extern undefined DAT_0059caa4;
extern undefined DAT_0059caac;
extern undefined DAT_0059cab4;
extern undefined DAT_0059cabc;
extern undefined DAT_0059cac4;
extern undefined4 DAT_0059caf8;
extern undefined4 *DAT_0059cafc;
extern undefined4 DAT_0059cb0c;
extern undefined4 *DAT_0059cb10;
extern undefined4 DAT_0059cb14;
extern undefined4 DAT_0059cb18;
extern undefined4 DAT_0059cb1c;
extern undefined4 DAT_0059cb20;
extern undefined4 DAT_0059cb24;
extern undefined4 DAT_0059cb28;
extern undefined4 DAT_0059cb2c;
extern undefined4 DAT_0059cb30;
extern undefined4 DAT_0059cb34;
extern undefined DAT_0059cb38;
extern undefined4 DAT_0059cb50;
extern uint *DAT_0059cb54;
extern undefined4 DAT_0059cb58;
extern undefined4 *DAT_0059cb5c;
extern undefined4 DAT_0059cb60;
extern char s_N_ArrowB_00_0059ca74[];
extern char s_N_ArrowL_00_0059ca80[];
extern char s_N_ArrowR_00_0059ca8c[];
extern char s_N_ArrowT_00_0059ca64[];
extern char s_NpcMaple_0059cb44[];
extern char s_fly_call_0059caec[];
extern char s_fly_search_0059cae0[];
extern char s_fly_talk_0059cad4[];
extern char s_fly_wait_0059cac8[];
extern char s_shake_pot_0059cb00[];

// USA 0059C840 <- EU 0059C818 (Ghidra, non-matching)
// GLOBAL DAT_0059ca58 int
// GLOBAL DAT_0059ca5c undefined4 *
// GLOBAL DAT_0059ca60 undefined4 *
// GLOBAL DAT_0059ca70 undefined4
// GLOBAL DAT_0059ca98 undefined4
// GLOBAL DAT_0059ca9c undefined4
// GLOBAL DAT_0059caa0 undefined4 *
// GLOBAL DAT_0059caa4 undefined
// GLOBAL DAT_0059caac undefined
// GLOBAL DAT_0059cab4 undefined
// GLOBAL DAT_0059cabc undefined
// GLOBAL DAT_0059cac4 undefined
// GLOBAL DAT_0059caf8 undefined4
// GLOBAL DAT_0059cafc undefined4 *
// GLOBAL DAT_0059cb0c undefined4
// GLOBAL DAT_0059cb10 undefined4 *
// GLOBAL DAT_0059cb14 undefined4
// GLOBAL DAT_0059cb18 undefined4
// GLOBAL DAT_0059cb1c undefined4
// GLOBAL DAT_0059cb20 undefined4
// GLOBAL DAT_0059cb24 undefined4
// GLOBAL DAT_0059cb28 undefined4
// GLOBAL DAT_0059cb2c undefined4
// GLOBAL DAT_0059cb30 undefined4
// GLOBAL DAT_0059cb34 undefined4
// GLOBAL DAT_0059cb38 undefined
// GLOBAL DAT_0059cb50 undefined4
// GLOBAL DAT_0059cb54 uint *
// GLOBAL DAT_0059cb58 undefined4
// GLOBAL DAT_0059cb5c undefined4 *
// GLOBAL DAT_0059cb60 undefined4
// GLOBAL s_N_ArrowB_00_0059ca74 string
// GLOBAL s_N_ArrowL_00_0059ca80 string
// GLOBAL s_N_ArrowR_00_0059ca8c string
// GLOBAL s_N_ArrowT_00_0059ca64 string
// GLOBAL s_NpcMaple_0059cb44 string
// GLOBAL s_fly_call_0059caec string
// GLOBAL s_fly_search_0059cae0 string
// GLOBAL s_fly_talk_0059cad4 string
// GLOBAL s_fly_wait_0059cac8 string
// GLOBAL s_shake_pot_0059cb00 string

undefined8 func_0059C840(void)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define uStack_28 (*(undefined4 *)(albw_frame + 0x8))
  #define local_24 (*(char * *)(albw_frame + 0xc))
  #define local_20 (*(undefined4 *)(albw_frame + 0x10))
  #define local_1c (*(undefined * *)(albw_frame + 0x14))
  iVar1 = DAT_0059ca58;
  *(undefined4 *)(DAT_0059ca58 + 8) = 0xffffffff;
  *(undefined4 *)(iVar1 + 0xc) = 0xffffffff;
  local_20 = DAT_0059ca70;
  puVar2 = DAT_0059ca5c;
  *DAT_0059ca5c = 0;
  puVar2[1] = 0;
  puVar2 = DAT_0059ca60;
  DAT_0059ca60[1] = s_N_ArrowT_00_0059ca64;
  *puVar2 = local_20;
  puVar2[3] = s_N_ArrowB_00_0059ca74;
  puVar2[2] = local_20;
  puVar2[5] = s_N_ArrowL_00_0059ca80;
  puVar2[4] = local_20;
  puVar2[6] = local_20;
  puVar2[7] = s_N_ArrowR_00_0059ca8c;
  puVar2 = DAT_0059caa0;
  DAT_0059caa0[1] = &DAT_0059caa4;
  *puVar2 = local_20;
  puVar2[4] = &DAT_0059caac;
  puVar2[3] = local_20;
  puVar2[7] = &DAT_0059cab4;
  puVar2[6] = local_20;
  puVar2[10] = &DAT_0059cabc;
  puVar2[9] = local_20;
  puVar2[0xd] = &DAT_0059cac4;
  puVar2[0xc] = local_20;
  puVar2[0x10] = s_fly_wait_0059cac8;
  puVar2[0xf] = local_20;
  puVar2[0x13] = s_fly_talk_0059cad4;
  puVar2[0x12] = local_20;
  puVar2[0x16] = s_fly_search_0059cae0;
  puVar2[0x15] = local_20;
  puVar2[0x18] = local_20;
  puVar2[0x19] = s_fly_call_0059caec;
  puVar2 = DAT_0059cafc;
  DAT_0059cafc[1] = &DAT_0059caa4;
  *puVar2 = local_20;
  puVar2[4] = &DAT_0059caac;
  puVar2[3] = local_20;
  puVar2[7] = &DAT_0059cab4;
  puVar2[6] = local_20;
  puVar2[10] = &DAT_0059cabc;
  puVar2[9] = local_20;
  puVar2[0xc] = local_20;
  puVar2[0xd] = s_shake_pot_0059cb00;
  uVar6 = DAT_0059cb28;
  uVar5 = DAT_0059cb24;
  uVar4 = DAT_0059cb20;
  uVar3 = DAT_0059cb1c;
  uVar7 = DAT_0059cb18;
  puVar2 = DAT_0059cb10;
  *DAT_0059cb10 = DAT_0059cb14;
  puVar2[1] = uVar7;
  puVar2[2] = uVar3;
  puVar2[3] = uVar4;
  puVar2[4] = uVar5;
  puVar2[5] = uVar6;
  puVar2[6] = 0xe;
  *(undefined2 *)(puVar2 + 7) = 0x5a;
  *(undefined2 *)((int)puVar2 + 0x1e) = 0xb4;
  *(undefined1 *)(puVar2 + 8) = 0xec;
  *(undefined1 *)((int)puVar2 + 0x21) = 0xec;
  *(undefined1 *)((int)puVar2 + 0x22) = 0xf;
  *(undefined1 *)((int)puVar2 + 0x23) = 0x1e;
  *(undefined1 *)(puVar2 + 9) = 1;
  puVar2[10] = 1;
  puVar2[0xb] = 0;
  puVar2[0xc] = 0;
  *(undefined1 *)(puVar2 + 0xd) = 0;
  *(undefined1 *)((int)puVar2 + 0x35) = 1;
  uVar3 = DAT_0059cb34;
  uVar7 = DAT_0059cb30;
  puVar2[0xe] = DAT_0059cb2c;
  puVar2[0xf] = uVar7;
  puVar2[0x10] = uVar3;
  puVar2[-0xa2] = 0;
  puVar2[-0xa1] = 5;
  puVar2[-0xa0] = puVar2 + -0x9f;
  local_1c = &DAT_0059cb38;
  local_24 = s_NpcMaple_0059cb44;
  uStack_28 = local_20;
  uVar7 = func_0019B51C(DAT_0059cb5c,DAT_0059cb58,*DAT_0059cb54,(int)&uStack_28,DAT_0059cb50,
                        &local_20,0);
  return CONCAT44(DAT_0059cb60,uVar7);
}

