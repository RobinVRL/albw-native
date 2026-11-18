#include "ghidra_types.h"

extern int func_0019B51C(undefined4 *param_1,undefined4 param_2,uint param_3,int param_4,undefined4 param_5 ,undefined4 param_6,int param_7);
extern int func_003C5604(int param_1);
extern undefined4 *DAT_0059c704;
extern undefined4 *DAT_0059c708;
extern undefined4 DAT_0059c718;
extern undefined4 DAT_0059c740;
extern undefined4 DAT_0059c744;
extern undefined DAT_0059c748;
extern undefined DAT_0059c750;
extern undefined DAT_0059c758;
extern undefined DAT_0059c760;
extern undefined4 DAT_0059c7b4;
extern undefined4 DAT_0059c7c8;
extern undefined4 *DAT_0059c7cc;
extern undefined4 DAT_0059c7d0;
extern undefined4 DAT_0059c7d4;
extern undefined4 DAT_0059c7d8;
extern undefined4 DAT_0059c7dc;
extern undefined4 DAT_0059c7e0;
extern undefined4 DAT_0059c7e4;
extern undefined4 *DAT_0059c7e8;
extern undefined DAT_0059c7ec;
extern uint *DAT_0059c808;
extern undefined4 DAT_0059c80c;
extern undefined4 *DAT_0059c810;
extern undefined4 DAT_0059c814;
extern char s_N_ArrowB_00_0059c71c[];
extern char s_N_ArrowL_00_0059c728[];
extern char s_N_ArrowR_00_0059c734[];
extern char s_N_ArrowT_00_0059c70c[];
extern char s_NpcHinox_0059c7fc[];
extern char s_angry_loop_0059c78c[];
extern char s_angry_st_0059c780[];
extern char s_color_change_0059c7b8[];
extern char s_jump_ed_0059c7ac[];
extern char s_jump_loop_0059c7a0[];
extern char s_jump_st_0059c798[];
extern char s_talk_fear_0059c774[];
extern char s_wait_fear_0059c768[];

// USA 0059C528 <- EU 0059C500 (Ghidra, non-matching)
// GLOBAL DAT_0059c704 undefined4 *
// GLOBAL DAT_0059c708 undefined4 *
// GLOBAL DAT_0059c718 undefined4
// GLOBAL DAT_0059c740 undefined4
// GLOBAL DAT_0059c744 undefined4
// GLOBAL DAT_0059c748 undefined
// GLOBAL DAT_0059c750 undefined
// GLOBAL DAT_0059c758 undefined
// GLOBAL DAT_0059c760 undefined
// GLOBAL DAT_0059c7b4 undefined4
// GLOBAL DAT_0059c7c8 undefined4
// GLOBAL DAT_0059c7cc undefined4 *
// GLOBAL DAT_0059c7d0 undefined4
// GLOBAL DAT_0059c7d4 undefined4
// GLOBAL DAT_0059c7d8 undefined4
// GLOBAL DAT_0059c7dc undefined4
// GLOBAL DAT_0059c7e0 undefined4
// GLOBAL DAT_0059c7e4 undefined4
// GLOBAL DAT_0059c7e8 undefined4 *
// GLOBAL DAT_0059c7ec undefined
// GLOBAL DAT_0059c808 uint *
// GLOBAL DAT_0059c80c undefined4
// GLOBAL DAT_0059c810 undefined4 *
// GLOBAL DAT_0059c814 undefined4
// GLOBAL s_N_ArrowB_00_0059c71c string
// GLOBAL s_N_ArrowL_00_0059c728 string
// GLOBAL s_N_ArrowR_00_0059c734 string
// GLOBAL s_N_ArrowT_00_0059c70c string
// GLOBAL s_NpcHinox_0059c7fc string
// GLOBAL s_angry_loop_0059c78c string
// GLOBAL s_angry_st_0059c780 string
// GLOBAL s_color_change_0059c7b8 string
// GLOBAL s_jump_ed_0059c7ac string
// GLOBAL s_jump_loop_0059c7a0 string
// GLOBAL s_jump_st_0059c798 string
// GLOBAL s_talk_fear_0059c774 string
// GLOBAL s_wait_fear_0059c768 string

undefined8 func_0059C528(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  undefined4 *puVar9;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define uStack_28 (*(undefined4 *)(albw_frame + 0x8))
  #define local_24 (*(char * *)(albw_frame + 0xc))
  #define local_20 (*(undefined4 *)(albw_frame + 0x10))
  #define local_1c (*(undefined * *)(albw_frame + 0x14))
  uVar8 = DAT_0059c718;
  puVar1 = DAT_0059c704;
  DAT_0059c704[2] = 0xffffffff;
  puVar1[3] = 0xffffffff;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar7 = DAT_0059c708;
  DAT_0059c708[1] = s_N_ArrowT_00_0059c70c;
  *puVar7 = uVar8;
  puVar7[3] = s_N_ArrowB_00_0059c71c;
  puVar7[2] = uVar8;
  puVar7[5] = s_N_ArrowL_00_0059c728;
  puVar7[4] = uVar8;
  puVar7[6] = uVar8;
  puVar7[7] = s_N_ArrowR_00_0059c734;
  puVar1[9] = &DAT_0059c748;
  puVar1[8] = uVar8;
  puVar1[0xc] = &DAT_0059c750;
  puVar1[0xb] = uVar8;
  puVar1[0xf] = &DAT_0059c758;
  puVar1[0xe] = uVar8;
  puVar1[0x12] = &DAT_0059c760;
  puVar1[0x11] = uVar8;
  puVar1[0x15] = s_wait_fear_0059c768;
  puVar1[0x14] = uVar8;
  puVar1[0x18] = s_talk_fear_0059c774;
  puVar1[0x17] = uVar8;
  puVar1[0x1b] = s_angry_st_0059c780;
  puVar1[0x1a] = uVar8;
  puVar1[0x1e] = s_angry_loop_0059c78c;
  puVar1[0x1d] = uVar8;
  puVar1[0x21] = s_jump_st_0059c798;
  puVar1[0x20] = uVar8;
  puVar1[0x24] = s_jump_loop_0059c7a0;
  puVar1[0x23] = uVar8;
  puVar1[0x26] = uVar8;
  puVar1[0x27] = s_jump_ed_0059c7ac;
  puVar1[7] = s_color_change_0059c7b8;
  puVar1[6] = uVar8;
  uVar5 = DAT_0059c7e4;
  uVar4 = DAT_0059c7e0;
  uVar3 = DAT_0059c7dc;
  uVar2 = DAT_0059c7d8;
  uVar6 = DAT_0059c7d4;
  puVar7 = DAT_0059c7cc;
  *DAT_0059c7cc = DAT_0059c7d0;
  puVar7[1] = uVar6;
  puVar7[2] = uVar2;
  puVar7[3] = uVar3;
  puVar7[4] = uVar4;
  puVar7[5] = uVar5;
  puVar7[6] = 0xf;
  *(undefined2 *)(puVar7 + 7) = 0x5f;
  *(undefined2 *)((int)puVar7 + 0x1e) = 0xb4;
  *(undefined1 *)(puVar7 + 8) = 0xee;
  *(undefined1 *)((int)puVar7 + 0x21) = 0xec;
  *(undefined1 *)((int)puVar7 + 0x22) = 0xf;
  *(undefined1 *)((int)puVar7 + 0x23) = 0x28;
  *(undefined1 *)(puVar7 + 9) = 5;
  uVar6 = func_003C5604(0x11d);
  *puVar1 = uVar6;
  puVar1 = DAT_0059c7e8;
  puVar9 = DAT_0059c7e8 + 3;
  puVar7 = DAT_0059c7e8 + 1;
  *DAT_0059c7e8 = 0;
  *puVar7 = 5;
  puVar1[2] = puVar9;
  local_1c = &DAT_0059c7ec;
  local_24 = s_NpcHinox_0059c7fc;
  local_20 = uVar8;
  uStack_28 = uVar8;
  uVar8 = func_0019B51C(DAT_0059c810,DAT_0059c80c,*DAT_0059c808,(int)&uStack_28,DAT_0059c7e8,
                        &local_20,0);
  return CONCAT44(DAT_0059c814,uVar8);
}

