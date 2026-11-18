#include "ghidra_types.h"

extern undefined8 func_00114608(uint param_1,uint param_2);
extern int func_0019B51C(undefined4 *param_1,undefined4 param_2,uint param_3,int param_4,undefined4 param_5 ,undefined4 param_6,int param_7);
extern undefined4 *DAT_005cf8c4;
extern undefined4 *DAT_005cf8c8;
extern undefined4 *DAT_005cf8cc;
extern undefined4 DAT_005cf8dc;
extern undefined4 DAT_005cf904;
extern undefined4 DAT_005cf908;
extern undefined4 *DAT_005cf90c;
extern undefined DAT_005cf910;
extern undefined4 DAT_005cf97c;
extern undefined4 *DAT_005cf980;
extern undefined DAT_005cf984;
extern uint DAT_005cf988;
extern undefined4 *DAT_005cf98c;
extern undefined4 DAT_005cf990;
extern undefined4 DAT_005cf994;
extern undefined4 DAT_005cf998;
extern uint DAT_005cf99c;
extern uint DAT_005cf9a0;
extern undefined4 DAT_005cf9a4;
extern undefined4 *DAT_005cf9a8;
extern undefined4 DAT_005cf9ac;
extern uint DAT_005cf9b0;
extern undefined4 *DAT_005cf9b4;
extern undefined4 DAT_005cf9b8;
extern undefined DAT_005cf9bc;
extern undefined4 DAT_005cf9d8;
extern uint *DAT_005cf9dc;
extern undefined4 DAT_005cf9e0;
extern undefined4 *DAT_005cf9e4;
extern undefined4 DAT_005cf9e8;
extern char s_N_ArrowB_00_005cf8e0[];
extern char s_N_ArrowL_00_005cf8ec[];
extern char s_N_ArrowR_00_005cf8f8[];
extern char s_N_ArrowT_00_005cf8d0[];
extern char s_ObjPictureZelda_005cf9c8[];
extern char s_appear_005cf92c[];
extern char s_carry_005cf918[];
extern char s_carry_wait_005cf920[];
extern char s_catch_005cf934[];
extern char s_magic_hold_005cf93c[];
extern char s_magic_hold_loop_005cf948[];
extern char s_step_carry_005cf970[];
extern char s_talk_hold_005cf964[];
extern char s_wait_hold_005cf958[];

// USA 005CF6CC <- EU 005CF6A4 (Ghidra, non-matching)
// GLOBAL DAT_005cf8c4 undefined4 *
// GLOBAL DAT_005cf8c8 undefined4 *
// GLOBAL DAT_005cf8cc undefined4 *
// GLOBAL DAT_005cf8dc undefined4
// GLOBAL DAT_005cf904 undefined4
// GLOBAL DAT_005cf908 undefined4
// GLOBAL DAT_005cf90c undefined4 *
// GLOBAL DAT_005cf910 undefined
// GLOBAL DAT_005cf97c undefined4
// GLOBAL DAT_005cf980 undefined4 *
// GLOBAL DAT_005cf984 undefined
// GLOBAL DAT_005cf988 uint
// GLOBAL DAT_005cf98c undefined4 *
// GLOBAL DAT_005cf990 undefined4
// GLOBAL DAT_005cf994 undefined4
// GLOBAL DAT_005cf998 undefined4
// GLOBAL DAT_005cf99c uint
// GLOBAL DAT_005cf9a0 uint
// GLOBAL DAT_005cf9a4 undefined4
// GLOBAL DAT_005cf9a8 undefined4 *
// GLOBAL DAT_005cf9ac undefined4
// GLOBAL DAT_005cf9b0 uint
// GLOBAL DAT_005cf9b4 undefined4 *
// GLOBAL DAT_005cf9b8 undefined4
// GLOBAL DAT_005cf9bc undefined
// GLOBAL DAT_005cf9d8 undefined4
// GLOBAL DAT_005cf9dc uint *
// GLOBAL DAT_005cf9e0 undefined4
// GLOBAL DAT_005cf9e4 undefined4 *
// GLOBAL DAT_005cf9e8 undefined4
// GLOBAL s_N_ArrowB_00_005cf8e0 string
// GLOBAL s_N_ArrowL_00_005cf8ec string
// GLOBAL s_N_ArrowR_00_005cf8f8 string
// GLOBAL s_N_ArrowT_00_005cf8d0 string
// GLOBAL s_ObjPictureZelda_005cf9c8 string
// GLOBAL s_appear_005cf92c string
// GLOBAL s_carry_005cf918 string
// GLOBAL s_carry_wait_005cf920 string
// GLOBAL s_catch_005cf934 string
// GLOBAL s_magic_hold_005cf93c string
// GLOBAL s_magic_hold_loop_005cf948 string
// GLOBAL s_step_carry_005cf970 string
// GLOBAL s_talk_hold_005cf964 string
// GLOBAL s_wait_hold_005cf958 string

undefined8 func_005CF6CC(void)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_28 (*(undefined4 *)(albw_frame + 0x8))
  #define puStack_24 (*(undefined * *)(albw_frame + 0xc))
  #define uStack_20 (*(undefined4 *)(albw_frame + 0x10))
  #define local_1c (*(char * *)(albw_frame + 0x14))
  puVar1 = DAT_005cf8c4;
  DAT_005cf8c4[6] = 0xffffffff;
  puVar1[7] = 0xffffffff;
  uVar5 = DAT_005cf8dc;
  puVar1 = DAT_005cf8c8;
  *DAT_005cf8c8 = 0;
  puVar1[1] = 0;
  puVar1 = DAT_005cf8cc;
  DAT_005cf8cc[1] = s_N_ArrowT_00_005cf8d0;
  *puVar1 = uVar5;
  puVar1[3] = s_N_ArrowB_00_005cf8e0;
  puVar1[2] = uVar5;
  puVar1[5] = s_N_ArrowL_00_005cf8ec;
  puVar1[4] = uVar5;
  puVar1[6] = uVar5;
  puVar1[7] = s_N_ArrowR_00_005cf8f8;
  puVar1 = DAT_005cf90c;
  DAT_005cf90c[1] = &DAT_005cf910;
  *puVar1 = uVar5;
  puVar1[3] = s_carry_005cf918;
  puVar1[2] = uVar5;
  puVar1[5] = s_carry_wait_005cf920;
  puVar1[4] = uVar5;
  puVar1[7] = s_appear_005cf92c;
  puVar1[6] = uVar5;
  puVar1[9] = s_catch_005cf934;
  puVar1[8] = uVar5;
  puVar1[0xb] = s_magic_hold_005cf93c;
  puVar1[10] = uVar5;
  puVar1[0xd] = s_magic_hold_loop_005cf948;
  puVar1[0xc] = uVar5;
  puVar1[0xf] = s_wait_hold_005cf958;
  puVar1[0xe] = uVar5;
  puVar1[0x11] = s_talk_hold_005cf964;
  puVar1[0x10] = uVar5;
  puVar1[0x12] = uVar5;
  puVar1[0x13] = s_step_carry_005cf970;
  puVar1 = DAT_005cf980;
  DAT_005cf980[1] = &DAT_005cf984;
  *puVar1 = uVar5;
  uVar6 = DAT_005cf998;
  uVar4 = DAT_005cf994;
  puVar3 = DAT_005cf98c;
  uVar2 = DAT_005cf988;
  puVar1 = DAT_005cf8c4;
  *DAT_005cf98c = DAT_005cf990;
  puVar3[1] = uVar4;
  puVar3[2] = uVar6;
  uVar7 = func_00114608(DAT_005cf99c,uVar2);
  *puVar1 = (int)uVar7;
  uVar7 = func_00114608(DAT_005cf9a0,(uint)((ulonglong)uVar7 >> 0x20));
  puVar1[1] = (int)uVar7;
  uVar6 = DAT_005cf9a4;
  uVar7 = func_00114608(0,(uint)((ulonglong)uVar7 >> 0x20));
  puVar1[2] = (int)uVar7;
  uVar4 = DAT_005cf9ac;
  puVar3 = DAT_005cf9a8;
  *DAT_005cf9a8 = uVar6;
  puVar3[1] = uVar4;
  puVar3[2] = uVar6;
  uVar8 = func_00114608(DAT_005cf9b0,(uint)((ulonglong)uVar7 >> 0x20));
  puVar1[3] = (int)uVar8;
  uVar4 = DAT_005cf9b8;
  puVar3 = DAT_005cf9b4;
  puVar1[4] = (int)uVar7;
  *puVar3 = uVar6;
  puVar3[1] = uVar6;
  puVar3[2] = uVar4;
  puVar3[-0xbc] = 0;
  puVar3[-0xbb] = 5;
  puVar3[-0xba] = puVar3 + -0xb9;
  local_28 = uVar5;
  puStack_24 = &DAT_005cf9bc;
  uStack_20 = uVar5;
  local_1c = s_ObjPictureZelda_005cf9c8;
  uVar5 = func_0019B51C(DAT_005cf9e4,DAT_005cf9e0,*DAT_005cf9dc,(int)&uStack_20,DAT_005cf9d8,
                        &local_28,0);
  return CONCAT44(DAT_005cf9e8,uVar5);
}

