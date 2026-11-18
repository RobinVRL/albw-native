#include "ghidra_types.h"

extern int func_0019B51C(undefined4 *param_1,undefined4 param_2,uint param_3,int param_4,undefined4 param_5 ,undefined4 param_6,int param_7);
extern undefined4 *DAT_00599838;
extern undefined4 *DAT_0059983c;
extern undefined4 *DAT_00599840;
extern undefined4 DAT_00599850;
extern undefined4 DAT_00599878;
extern undefined4 DAT_0059987c;
extern undefined4 *DAT_00599880;
extern undefined DAT_00599884;
extern undefined DAT_0059988c;
extern undefined DAT_00599894;
extern undefined DAT_0059989c;
extern undefined4 DAT_005998b0;
extern undefined4 *DAT_005998b4;
extern undefined4 DAT_005998b8;
extern undefined4 DAT_005998bc;
extern undefined4 DAT_005998c0;
extern undefined4 DAT_005998c4;
extern undefined4 DAT_005998c8;
extern undefined4 DAT_005998cc;
extern undefined4 *DAT_005998d0;
extern undefined4 DAT_005998d4;
extern undefined4 DAT_005998d8;
extern undefined4 *DAT_005998dc;
extern undefined DAT_005998e0;
extern uint *DAT_005998fc;
extern undefined4 DAT_00599900;
extern undefined4 *DAT_00599904;
extern undefined4 DAT_00599908;
extern undefined4 *DAT_0059990c;
extern undefined DAT_00599910;
extern uint *DAT_00599934;
extern undefined4 DAT_00599938;
extern undefined4 *DAT_0059993c;
extern char s_N_ArrowB_00_00599854[];
extern char s_N_ArrowL_00_00599860[];
extern char s_N_ArrowR_00_0059986c[];
extern char s_N_ArrowT_00_00599844[];
extern char s_NpcBardLute_00599928[];
extern char s_NpcBard_005998f4[];
extern char s_play_turn_005998a4[];

// USA 005995EC <- EU 005995C4 (Ghidra, non-matching)
// GLOBAL DAT_00599838 undefined4 *
// GLOBAL DAT_0059983c undefined4 *
// GLOBAL DAT_00599840 undefined4 *
// GLOBAL DAT_00599850 undefined4
// GLOBAL DAT_00599878 undefined4
// GLOBAL DAT_0059987c undefined4
// GLOBAL DAT_00599880 undefined4 *
// GLOBAL DAT_00599884 undefined
// GLOBAL DAT_0059988c undefined
// GLOBAL DAT_00599894 undefined
// GLOBAL DAT_0059989c undefined
// GLOBAL DAT_005998b0 undefined4
// GLOBAL DAT_005998b4 undefined4 *
// GLOBAL DAT_005998b8 undefined4
// GLOBAL DAT_005998bc undefined4
// GLOBAL DAT_005998c0 undefined4
// GLOBAL DAT_005998c4 undefined4
// GLOBAL DAT_005998c8 undefined4
// GLOBAL DAT_005998cc undefined4
// GLOBAL DAT_005998d0 undefined4 *
// GLOBAL DAT_005998d4 undefined4
// GLOBAL DAT_005998d8 undefined4
// GLOBAL DAT_005998dc undefined4 *
// GLOBAL DAT_005998e0 undefined
// GLOBAL DAT_005998fc uint *
// GLOBAL DAT_00599900 undefined4
// GLOBAL DAT_00599904 undefined4 *
// GLOBAL DAT_00599908 undefined4
// GLOBAL DAT_0059990c undefined4 *
// GLOBAL DAT_00599910 undefined
// GLOBAL DAT_00599934 uint *
// GLOBAL DAT_00599938 undefined4
// GLOBAL DAT_0059993c undefined4 *
// GLOBAL s_N_ArrowB_00_00599854 string
// GLOBAL s_N_ArrowL_00_00599860 string
// GLOBAL s_N_ArrowR_00_0059986c string
// GLOBAL s_N_ArrowT_00_00599844 string
// GLOBAL s_NpcBardLute_00599928 string
// GLOBAL s_NpcBard_005998f4 string
// GLOBAL s_play_turn_005998a4 string

undefined8 func_005995EC(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 *puVar9;
  _Alignas(8) unsigned char albw_frame[0x40];
  #define local_38 (*(undefined4 *)(albw_frame + 0x8))
  #define local_34 (*(char * *)(albw_frame + 0xc))
  #define local_30 (*(undefined4 *)(albw_frame + 0x10))
  #define local_2c (*(undefined * *)(albw_frame + 0x14))
  #define local_28 (*(undefined4 *)(albw_frame + 0x18))
  #define local_24 (*(char * *)(albw_frame + 0x1c))
  #define local_20 (*(undefined4 *)(albw_frame + 0x20))
  #define local_1c (*(undefined * *)(albw_frame + 0x24))
  puVar1 = DAT_00599838;
  *DAT_00599838 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  uVar8 = DAT_00599850;
  puVar1 = DAT_0059983c;
  *DAT_0059983c = 0;
  puVar1[1] = 0;
  puVar1 = DAT_00599840;
  DAT_00599840[1] = s_N_ArrowT_00_00599844;
  *puVar1 = uVar8;
  puVar1[3] = s_N_ArrowB_00_00599854;
  puVar1[2] = uVar8;
  puVar1[5] = s_N_ArrowL_00_00599860;
  puVar1[4] = uVar8;
  puVar1[6] = uVar8;
  puVar1[7] = s_N_ArrowR_00_0059986c;
  puVar1 = DAT_00599880;
  DAT_00599880[1] = &DAT_00599884;
  *puVar1 = uVar8;
  puVar1[4] = &DAT_0059988c;
  puVar1[3] = uVar8;
  puVar1[7] = &DAT_00599894;
  puVar1[6] = uVar8;
  puVar1[10] = &DAT_0059989c;
  puVar1[9] = uVar8;
  puVar1[0xc] = uVar8;
  puVar1[0xd] = s_play_turn_005998a4;
  puVar1 = DAT_005998b4;
  DAT_005998b4[1] = &DAT_00599884;
  *puVar1 = uVar8;
  puVar1[4] = &DAT_0059988c;
  puVar1[3] = uVar8;
  puVar1[6] = uVar8;
  puVar1[7] = &DAT_0059989c;
  uVar7 = DAT_005998d4;
  puVar1 = DAT_005998d0;
  uVar6 = DAT_005998cc;
  uVar5 = DAT_005998c8;
  uVar4 = DAT_005998c4;
  uVar3 = DAT_005998c0;
  uVar2 = DAT_005998bc;
  *DAT_005998d0 = DAT_005998bc;
  puVar1[1] = uVar3;
  puVar1[2] = uVar4;
  puVar1[3] = uVar5;
  puVar1[4] = uVar6;
  puVar1[5] = uVar7;
  puVar1[6] = 10;
  *(undefined2 *)(puVar1 + 7) = 0x5f;
  *(undefined2 *)((int)puVar1 + 0x1e) = 0xb4;
  *(undefined1 *)(puVar1 + 8) = 0xee;
  *(undefined1 *)((int)puVar1 + 0x21) = 0xec;
  *(undefined1 *)((int)puVar1 + 0x22) = 0xf;
  *(undefined1 *)((int)puVar1 + 0x23) = 1;
  *(undefined1 *)(puVar1 + 9) = 1;
  uVar7 = DAT_005998d8;
  puVar1[10] = uVar2;
  puVar1[0xb] = uVar3;
  puVar1[0xc] = uVar4;
  puVar1[0xd] = uVar5;
  puVar1[0xe] = uVar6;
  puVar1[0xf] = uVar7;
  puVar1[0x10] = 0xc;
  *(undefined2 *)(puVar1 + 0x11) = 0x5f;
  *(undefined2 *)((int)puVar1 + 0x46) = 0xb4;
  *(undefined1 *)(puVar1 + 0x12) = 0xec;
  *(undefined1 *)((int)puVar1 + 0x49) = 0xec;
  *(undefined1 *)((int)puVar1 + 0x4a) = 0xf;
  *(undefined1 *)((int)puVar1 + 0x4b) = 0x1e;
  *(undefined1 *)(puVar1 + 0x13) = 5;
  puVar1 = DAT_005998dc;
  puVar9 = DAT_005998dc + 3;
  DAT_005998dc[1] = 5;
  puVar1[2] = puVar9;
  *puVar1 = 0;
  local_2c = &DAT_005998e0;
  local_34 = s_NpcBard_005998f4;
  local_30 = uVar8;
  local_38 = uVar8;
  func_0019B51C(DAT_00599904,DAT_00599900,*DAT_005998fc,(int)&local_38,DAT_005998dc,&local_30,0);
  puVar1 = DAT_0059990c;
  DAT_0059990c[2] = DAT_0059990c + 3;
  puVar1[1] = 5;
  *puVar1 = 0;
  local_1c = &DAT_00599910;
  local_24 = s_NpcBardLute_00599928;
  local_20 = uVar8;
  local_28 = uVar8;
  uVar8 = func_0019B51C(DAT_0059993c,DAT_00599938,*DAT_00599934,(int)&local_28,DAT_0059990c,
                        &local_20,0);
  return CONCAT44(DAT_00599908,uVar8);
}

