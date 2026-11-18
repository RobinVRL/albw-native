#include "ghidra_types.h"

extern int func_0019B51C(undefined4 *param_1,undefined4 param_2,uint param_3,int param_4,undefined4 param_5 ,undefined4 param_6,int param_7);
extern undefined4 *DAT_005e27c8;
extern undefined4 *DAT_005e27cc;
extern undefined4 *DAT_005e27d0;
extern undefined4 DAT_005e27e0;
extern undefined4 DAT_005e2808;
extern undefined4 DAT_005e280c;
extern undefined4 *DAT_005e2810;
extern undefined DAT_005e2814;
extern undefined DAT_005e281c;
extern undefined DAT_005e2824;
extern undefined DAT_005e282c;
extern undefined4 DAT_005e2854;
extern undefined4 *DAT_005e2858;
extern undefined4 DAT_005e2864;
extern undefined4 *DAT_005e2868;
extern undefined4 DAT_005e286c;
extern undefined4 DAT_005e2870;
extern undefined4 DAT_005e2874;
extern undefined4 DAT_005e2878;
extern undefined4 DAT_005e287c;
extern undefined4 DAT_005e2880;
extern undefined DAT_005e2884;
extern undefined4 DAT_005e28a8;
extern uint *DAT_005e28ac;
extern undefined4 DAT_005e28b0;
extern undefined4 *DAT_005e28b4;
extern undefined4 DAT_005e28b8;
extern char s_N_ArrowB_00_005e27e4[];
extern char s_N_ArrowL_00_005e27f0[];
extern char s_N_ArrowR_00_005e27fc[];
extern char s_N_ArrowT_00_005e27d4[];
extern char s_NpcZoraAttendant_005e2894[];
extern char s_color_005e285c[];
extern char s_surprise_005e2830[];
extern char s_talk_panic_005e2848[];
extern char s_wait_panic_005e283c[];

// USA 005E2614 <- EU 005E25EC (Ghidra, non-matching)
// GLOBAL DAT_005e27c8 undefined4 *
// GLOBAL DAT_005e27cc undefined4 *
// GLOBAL DAT_005e27d0 undefined4 *
// GLOBAL DAT_005e27e0 undefined4
// GLOBAL DAT_005e2808 undefined4
// GLOBAL DAT_005e280c undefined4
// GLOBAL DAT_005e2810 undefined4 *
// GLOBAL DAT_005e2814 undefined
// GLOBAL DAT_005e281c undefined
// GLOBAL DAT_005e2824 undefined
// GLOBAL DAT_005e282c undefined
// GLOBAL DAT_005e2854 undefined4
// GLOBAL DAT_005e2858 undefined4 *
// GLOBAL DAT_005e2864 undefined4
// GLOBAL DAT_005e2868 undefined4 *
// GLOBAL DAT_005e286c undefined4
// GLOBAL DAT_005e2870 undefined4
// GLOBAL DAT_005e2874 undefined4
// GLOBAL DAT_005e2878 undefined4
// GLOBAL DAT_005e287c undefined4
// GLOBAL DAT_005e2880 undefined4
// GLOBAL DAT_005e2884 undefined
// GLOBAL DAT_005e28a8 undefined4
// GLOBAL DAT_005e28ac uint *
// GLOBAL DAT_005e28b0 undefined4
// GLOBAL DAT_005e28b4 undefined4 *
// GLOBAL DAT_005e28b8 undefined4
// GLOBAL s_N_ArrowB_00_005e27e4 string
// GLOBAL s_N_ArrowL_00_005e27f0 string
// GLOBAL s_N_ArrowR_00_005e27fc string
// GLOBAL s_N_ArrowT_00_005e27d4 string
// GLOBAL s_NpcZoraAttendant_005e2894 string
// GLOBAL s_color_005e285c string
// GLOBAL s_surprise_005e2830 string
// GLOBAL s_talk_panic_005e2848 string
// GLOBAL s_wait_panic_005e283c string

undefined8 func_005E2614(void)

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
  puVar1 = DAT_005e27c8;
  *DAT_005e27c8 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  local_20 = DAT_005e27e0;
  puVar1 = DAT_005e27cc;
  *DAT_005e27cc = 0;
  puVar1[1] = 0;
  puVar1 = DAT_005e27d0;
  DAT_005e27d0[1] = s_N_ArrowT_00_005e27d4;
  *puVar1 = local_20;
  puVar1[3] = s_N_ArrowB_00_005e27e4;
  puVar1[2] = local_20;
  puVar1[5] = s_N_ArrowL_00_005e27f0;
  puVar1[4] = local_20;
  puVar1[6] = local_20;
  puVar1[7] = s_N_ArrowR_00_005e27fc;
  puVar1 = DAT_005e2810;
  DAT_005e2810[1] = &DAT_005e2814;
  *puVar1 = local_20;
  puVar1[4] = &DAT_005e281c;
  puVar1[3] = local_20;
  puVar1[7] = &DAT_005e2824;
  puVar1[6] = local_20;
  puVar1[10] = &DAT_005e282c;
  puVar1[9] = local_20;
  puVar1[0xd] = s_surprise_005e2830;
  puVar1[0xc] = local_20;
  puVar1[0x10] = s_wait_panic_005e283c;
  puVar1[0xf] = local_20;
  puVar1[0x12] = local_20;
  puVar1[0x13] = s_talk_panic_005e2848;
  puVar1 = DAT_005e2858;
  DAT_005e2858[1] = s_color_005e285c;
  *puVar1 = local_20;
  uVar5 = DAT_005e2880;
  uVar4 = DAT_005e287c;
  uVar3 = DAT_005e2878;
  uVar2 = DAT_005e2874;
  uVar6 = DAT_005e2870;
  puVar1 = DAT_005e2868;
  *DAT_005e2868 = DAT_005e286c;
  puVar1[1] = uVar6;
  puVar1[2] = uVar2;
  puVar1[3] = uVar3;
  puVar1[4] = uVar4;
  puVar1[5] = uVar5;
  puVar1[6] = 0xf;
  *(undefined2 *)(puVar1 + 7) = 0x5f;
  *(undefined2 *)((int)puVar1 + 0x1e) = 0xb4;
  *(undefined1 *)(puVar1 + 8) = 0xee;
  *(undefined1 *)((int)puVar1 + 0x21) = 0xec;
  *(undefined1 *)((int)puVar1 + 0x22) = 0xf;
  *(undefined1 *)((int)puVar1 + 0x23) = 0x1e;
  *(undefined1 *)(puVar1 + 9) = 0x1e;
  puVar1[10] = 1;
  puVar1[0xb] = 0;
  puVar1[0xc] = 0;
  *(undefined1 *)(puVar1 + 0xd) = 0;
  *(undefined1 *)((int)puVar1 + 0x35) = 1;
  puVar1[-0xa2] = 0;
  puVar1[-0xa1] = 5;
  puVar1[-0xa0] = puVar1 + -0x9f;
  local_1c = &DAT_005e2884;
  local_24 = s_NpcZoraAttendant_005e2894;
  uStack_28 = local_20;
  uVar6 = func_0019B51C(DAT_005e28b4,DAT_005e28b0,*DAT_005e28ac,(int)&uStack_28,DAT_005e28a8,
                        &local_20,0);
  return CONCAT44(DAT_005e28b8,uVar6);
}

