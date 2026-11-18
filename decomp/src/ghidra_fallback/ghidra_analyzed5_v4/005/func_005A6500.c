#include "ghidra_types.h"

extern int func_0019B51C(undefined4 *param_1,undefined4 param_2,uint param_3,int param_4,undefined4 param_5 ,undefined4 param_6,int param_7);
extern undefined4 *DAT_005a6700;
extern undefined4 *DAT_005a6704;
extern undefined4 *DAT_005a6708;
extern undefined4 DAT_005a6718;
extern undefined4 DAT_005a6740;
extern undefined4 DAT_005a6744;
extern undefined4 *DAT_005a6748;
extern undefined DAT_005a674c;
extern undefined DAT_005a6754;
extern undefined DAT_005a675c;
extern undefined DAT_005a6764;
extern undefined DAT_005a67c0;
extern undefined4 DAT_005a67ec;
extern undefined4 *DAT_005a67f0;
extern undefined4 DAT_005a67fc;
extern undefined4 *DAT_005a6800;
extern undefined4 DAT_005a6804;
extern undefined4 DAT_005a6808;
extern undefined4 DAT_005a680c;
extern undefined4 DAT_005a6810;
extern undefined4 DAT_005a6814;
extern undefined4 DAT_005a6818;
extern undefined DAT_005a681c;
extern undefined4 DAT_005a6830;
extern uint *DAT_005a6834;
extern undefined4 DAT_005a6838;
extern undefined4 *DAT_005a683c;
extern undefined4 DAT_005a6840;
extern char s_HandR_005a67f4[];
extern char s_N_ArrowB_00_005a671c[];
extern char s_N_ArrowL_00_005a6728[];
extern char s_N_ArrowR_00_005a6734[];
extern char s_N_ArrowT_00_005a670c[];
extern char s_NpcClimber_005a6824[];
extern char s_drink_down_005a67a8[];
extern char s_drink_ed_005a67b4[];
extern char s_happy_down_005a679c[];
extern char s_step_bar_005a67e0[];
extern char s_talk_bar_005a67d4[];
extern char s_talk_bottle_005a6790[];
extern char s_talk_down_005a6778[];
extern char s_wait_bar_005a67c8[];
extern char s_wait_bottle_005a6784[];
extern char s_wait_down_005a676c[];

// USA 005A6500 <- EU 005A64D8 (Ghidra, non-matching)
// GLOBAL DAT_005a6700 undefined4 *
// GLOBAL DAT_005a6704 undefined4 *
// GLOBAL DAT_005a6708 undefined4 *
// GLOBAL DAT_005a6718 undefined4
// GLOBAL DAT_005a6740 undefined4
// GLOBAL DAT_005a6744 undefined4
// GLOBAL DAT_005a6748 undefined4 *
// GLOBAL DAT_005a674c undefined
// GLOBAL DAT_005a6754 undefined
// GLOBAL DAT_005a675c undefined
// GLOBAL DAT_005a6764 undefined
// GLOBAL DAT_005a67c0 undefined
// GLOBAL DAT_005a67ec undefined4
// GLOBAL DAT_005a67f0 undefined4 *
// GLOBAL DAT_005a67fc undefined4
// GLOBAL DAT_005a6800 undefined4 *
// GLOBAL DAT_005a6804 undefined4
// GLOBAL DAT_005a6808 undefined4
// GLOBAL DAT_005a680c undefined4
// GLOBAL DAT_005a6810 undefined4
// GLOBAL DAT_005a6814 undefined4
// GLOBAL DAT_005a6818 undefined4
// GLOBAL DAT_005a681c undefined
// GLOBAL DAT_005a6830 undefined4
// GLOBAL DAT_005a6834 uint *
// GLOBAL DAT_005a6838 undefined4
// GLOBAL DAT_005a683c undefined4 *
// GLOBAL DAT_005a6840 undefined4
// GLOBAL s_HandR_005a67f4 string
// GLOBAL s_N_ArrowB_00_005a671c string
// GLOBAL s_N_ArrowL_00_005a6728 string
// GLOBAL s_N_ArrowR_00_005a6734 string
// GLOBAL s_N_ArrowT_00_005a670c string
// GLOBAL s_NpcClimber_005a6824 string
// GLOBAL s_drink_down_005a67a8 string
// GLOBAL s_drink_ed_005a67b4 string
// GLOBAL s_happy_down_005a679c string
// GLOBAL s_step_bar_005a67e0 string
// GLOBAL s_talk_bar_005a67d4 string
// GLOBAL s_talk_bottle_005a6790 string
// GLOBAL s_talk_down_005a6778 string
// GLOBAL s_wait_bar_005a67c8 string
// GLOBAL s_wait_bottle_005a6784 string
// GLOBAL s_wait_down_005a676c string

undefined8 func_005A6500(void)

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
  puVar1 = DAT_005a6700;
  *DAT_005a6700 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  local_20 = DAT_005a6718;
  puVar1 = DAT_005a6704;
  *DAT_005a6704 = 0;
  puVar1[1] = 0;
  puVar1 = DAT_005a6708;
  DAT_005a6708[1] = s_N_ArrowT_00_005a670c;
  *puVar1 = local_20;
  puVar1[3] = s_N_ArrowB_00_005a671c;
  puVar1[2] = local_20;
  puVar1[5] = s_N_ArrowL_00_005a6728;
  puVar1[4] = local_20;
  puVar1[6] = local_20;
  puVar1[7] = s_N_ArrowR_00_005a6734;
  puVar1 = DAT_005a6748;
  DAT_005a6748[1] = &DAT_005a674c;
  *puVar1 = local_20;
  puVar1[4] = &DAT_005a6754;
  puVar1[3] = local_20;
  puVar1[7] = &DAT_005a675c;
  puVar1[6] = local_20;
  puVar1[10] = &DAT_005a6764;
  puVar1[9] = local_20;
  puVar1[0xd] = s_wait_down_005a676c;
  puVar1[0xc] = local_20;
  puVar1[0x10] = s_talk_down_005a6778;
  puVar1[0xf] = local_20;
  puVar1[0x13] = s_wait_bottle_005a6784;
  puVar1[0x12] = local_20;
  puVar1[0x16] = s_talk_bottle_005a6790;
  puVar1[0x15] = local_20;
  puVar1[0x19] = s_happy_down_005a679c;
  puVar1[0x18] = local_20;
  puVar1[0x1c] = s_drink_down_005a67a8;
  puVar1[0x1b] = local_20;
  puVar1[0x1f] = s_drink_ed_005a67b4;
  puVar1[0x1e] = local_20;
  puVar1[0x22] = &DAT_005a67c0;
  puVar1[0x21] = local_20;
  puVar1[0x25] = s_wait_bar_005a67c8;
  puVar1[0x24] = local_20;
  puVar1[0x28] = s_talk_bar_005a67d4;
  puVar1[0x27] = local_20;
  puVar1[0x2a] = local_20;
  puVar1[0x2b] = s_step_bar_005a67e0;
  puVar1 = DAT_005a67f0;
  DAT_005a67f0[1] = s_HandR_005a67f4;
  *puVar1 = local_20;
  uVar5 = DAT_005a6818;
  uVar4 = DAT_005a6814;
  uVar3 = DAT_005a6810;
  uVar2 = DAT_005a680c;
  uVar6 = DAT_005a6808;
  puVar1 = DAT_005a6800;
  *DAT_005a6800 = DAT_005a6804;
  puVar1[1] = uVar6;
  puVar1[2] = uVar2;
  puVar1[3] = uVar3;
  puVar1[4] = uVar4;
  puVar1[5] = uVar5;
  puVar1[6] = 0xb;
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
  local_1c = &DAT_005a681c;
  local_24 = s_NpcClimber_005a6824;
  uStack_28 = local_20;
  uVar6 = func_0019B51C(DAT_005a683c,DAT_005a6838,*DAT_005a6834,(int)&uStack_28,DAT_005a6830,
                        &local_20,0);
  return CONCAT44(DAT_005a6840,uVar6);
}

