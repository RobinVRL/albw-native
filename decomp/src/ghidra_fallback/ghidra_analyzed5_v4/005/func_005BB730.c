#include "ghidra_types.h"

extern undefined8 func_00114608(uint param_1,uint param_2);
extern int func_0019B51C(undefined4 *param_1,undefined4 param_2,uint param_3,int param_4,undefined4 param_5 ,undefined4 param_6,int param_7);
extern int func_004FC5F8(undefined4 *param_1,int *param_2,undefined4 param_3,uint param_4,undefined4 param_5, undefined4 *param_6,undefined4 param_7);
extern int *DAT_005bb9bc;
extern int *DAT_005bb9c0;
extern undefined DAT_005bb9c4;
extern int DAT_005bb9cc;
extern undefined DAT_005bb9d0;
extern undefined DAT_005bb9d8;
extern undefined DAT_005bb9f8;
extern undefined4 DAT_005bba00;
extern undefined4 DAT_005bba04;
extern int *DAT_005bba08;
extern uint DAT_005bba64;
extern uint DAT_005bba68;
extern undefined DAT_005bba6c;
extern undefined4 *DAT_005bba80;
extern undefined4 DAT_005bba84;
extern undefined4 *DAT_005bba88;
extern undefined DAT_005bba8c;
extern int DAT_005bbaac;
extern uint *DAT_005bbab0;
extern undefined4 DAT_005bbab4;
extern undefined4 *DAT_005bbab8;
extern undefined4 DAT_005bbabc;
extern undefined4 *DAT_005bbac0;
extern undefined DAT_005bbac4;
extern int DAT_005bbae8;
extern uint *DAT_005bbaec;
extern undefined4 DAT_005bbaf0;
extern undefined4 *DAT_005bbaf4;
extern undefined4 DAT_005bbaf8;
extern undefined4 *DAT_005bbafc;
extern undefined4 *DAT_005bbb10;
extern char s_EnemyHockBockBullet_005bbad4[];
extern char s_EnemyHockBock_005bba9c[];
extern char s_HockBock_Body_005bbb00[];
extern char s_LHockBock_Head_005bba6f[];
extern char s_bound_005bba5c[];
extern char s_dead_body_005bba24[];
extern char s_jitabata_005bb9ec[];
extern char s_jitabata_body_005bba40[];
extern char s_jump_body_005bba18[];
extern char s_lift_body_005bba50[];
extern char s_piyopiyo_005bb9e0[];
extern char s_piyopiyo_body_005bba30[];
extern char s_wait_body_005bba0c[];
extern undefined4 _DAT_005bba6c;

// USA 005BB730 <- EU 005BB708 (Ghidra, non-matching)
// GLOBAL DAT_005bb9bc int *
// GLOBAL DAT_005bb9c0 int *
// GLOBAL DAT_005bb9c4 undefined
// GLOBAL DAT_005bb9cc int
// GLOBAL DAT_005bb9d0 undefined
// GLOBAL DAT_005bb9d8 undefined
// GLOBAL DAT_005bb9f8 undefined
// GLOBAL DAT_005bba00 undefined4
// GLOBAL DAT_005bba04 undefined4
// GLOBAL DAT_005bba08 int *
// GLOBAL DAT_005bba64 uint
// GLOBAL DAT_005bba68 uint
// GLOBAL DAT_005bba6c undefined
// GLOBAL DAT_005bba80 undefined4 *
// GLOBAL DAT_005bba84 undefined4
// GLOBAL DAT_005bba88 undefined4 *
// GLOBAL DAT_005bba8c undefined
// GLOBAL DAT_005bbaac int
// GLOBAL DAT_005bbab0 uint *
// GLOBAL DAT_005bbab4 undefined4
// GLOBAL DAT_005bbab8 undefined4 *
// GLOBAL DAT_005bbabc undefined4
// GLOBAL DAT_005bbac0 undefined4 *
// GLOBAL DAT_005bbac4 undefined
// GLOBAL DAT_005bbae8 int
// GLOBAL DAT_005bbaec uint *
// GLOBAL DAT_005bbaf0 undefined4
// GLOBAL DAT_005bbaf4 undefined4 *
// GLOBAL DAT_005bbaf8 undefined4
// GLOBAL DAT_005bbafc undefined4 *
// GLOBAL DAT_005bbb10 undefined4 *
// GLOBAL s_EnemyHockBockBullet_005bbad4 string
// GLOBAL s_EnemyHockBock_005bba9c string
// GLOBAL s_HockBock_Body_005bbb00 string
// GLOBAL s_LHockBock_Head_005bba6f string
// GLOBAL s_bound_005bba5c string
// GLOBAL s_dead_body_005bba24 string
// GLOBAL s_jitabata_005bb9ec string
// GLOBAL s_jitabata_body_005bba40 string
// GLOBAL s_jump_body_005bba18 string
// GLOBAL s_lift_body_005bba50 string
// GLOBAL s_piyopiyo_005bb9e0 string
// GLOBAL s_piyopiyo_body_005bba30 string
// GLOBAL s_wait_body_005bba0c string

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 func_005BB730(void)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined8 uVar8;
  _Alignas(8) unsigned char albw_frame[0x60];
  #define local_58 (*(int *)(albw_frame + 0x8))
  #define local_54 (*(char * *)(albw_frame + 0xc))
  #define local_50 (*(undefined1 *)(albw_frame + 0x10))
  #define local_4f (*(undefined1 *)(albw_frame + 0x11))
  #define local_4e (*(undefined1 *)(albw_frame + 0x12))
  #define local_4d (*(undefined1 *)(albw_frame + 0x13))
  #define local_4c (*(undefined1 *)(albw_frame + 0x14))
  #define local_48 (*(int *)(albw_frame + 0x18))
  #define local_44 (*(char * *)(albw_frame + 0x1c))
  #define local_40 (*(undefined1 *)(albw_frame + 0x20))
  #define local_3f (*(undefined1 *)(albw_frame + 0x21))
  #define local_3e (*(undefined1 *)(albw_frame + 0x22))
  #define local_3d (*(undefined1 *)(albw_frame + 0x23))
  #define local_3c (*(undefined1 *)(albw_frame + 0x24))
  #define local_38 (*(int *)(albw_frame + 0x28))
  #define local_34 (*(char * *)(albw_frame + 0x2c))
  #define local_30 (*(int *)(albw_frame + 0x30))
  #define local_2c (*(undefined * *)(albw_frame + 0x34))
  #define local_28 (*(int *)(albw_frame + 0x38))
  #define local_24 (*(undefined * *)(albw_frame + 0x3c))
  #define local_20 (*(int *)(albw_frame + 0x40))
  #define local_1c (*(char * *)(albw_frame + 0x44))
  iVar3 = DAT_005bb9cc;
  piVar1 = DAT_005bb9bc;
  DAT_005bb9bc[4] = -1;
  piVar1[5] = -1;
  piVar1[6] = 0;
  piVar1[7] = 0;
  piVar2 = DAT_005bb9c0;
  DAT_005bb9c0[1] = (int)&DAT_005bb9c4;
  *piVar2 = iVar3;
  piVar2[3] = (int)&DAT_005bb9d0;
  piVar2[2] = iVar3;
  piVar2[5] = (int)&DAT_005bb9d8;
  piVar2[4] = iVar3;
  piVar2[7] = (int)s_piyopiyo_005bb9e0;
  piVar2[6] = iVar3;
  piVar2[9] = (int)s_jitabata_005bb9ec;
  piVar2[8] = iVar3;
  piVar2[10] = iVar3;
  piVar2[0xb] = (int)&DAT_005bb9f8;
  piVar2 = DAT_005bba08;
  DAT_005bba08[1] = (int)s_wait_body_005bba0c;
  *piVar2 = iVar3;
  piVar2[3] = (int)s_jump_body_005bba18;
  piVar2[2] = iVar3;
  piVar2[5] = (int)s_dead_body_005bba24;
  piVar2[4] = iVar3;
  piVar2[7] = (int)s_piyopiyo_body_005bba30;
  piVar2[6] = iVar3;
  piVar2[9] = (int)s_jitabata_body_005bba40;
  piVar2[8] = iVar3;
  piVar2[0xb] = (int)s_lift_body_005bba50;
  piVar2[10] = iVar3;
  piVar2[0xc] = iVar3;
  piVar2[0xd] = (int)s_bound_005bba5c;
  uVar8 = func_00114608(DAT_005bba68,DAT_005bba64);
  piVar1[2] = (int)uVar8;
  uVar8 = func_00114608(_DAT_005bba6c,(uint)((ulonglong)uVar8 >> 0x20));
  piVar1[3] = (int)uVar8;
  local_40 = 0;
  local_3f = 0;
  local_3e = 0;
  local_3d = 0xff;
  local_54 = s_LHockBock_Head_005bba6f + 1;
  local_3c = 0xff;
  local_58 = iVar3;
  func_004FC5F8(DAT_005bba80,&local_58,0,1,0,(undefined4 *)&local_40,0xb);
  puVar5 = DAT_005bba88;
  puVar7 = DAT_005bba88 + 3;
  DAT_005bba88[1] = 5;
  puVar5[2] = puVar7;
  *puVar5 = 0;
  local_2c = &DAT_005bba8c;
  local_30 = iVar3;
  local_34 = s_EnemyHockBock_005bba9c;
  local_38 = iVar3;
  iVar6 = *piVar1;
  if (*piVar1 == 0) {
    iVar6 = DAT_005bbaac;
  }
  func_0019B51C(DAT_005bbab8,DAT_005bbab4,*DAT_005bbab0,(int)&local_38,DAT_005bba88,&local_30,iVar6)
  ;
  puVar5 = DAT_005bbac0;
  puVar7 = DAT_005bbac0 + 3;
  DAT_005bbac0[1] = 5;
  puVar5[2] = puVar7;
  *puVar5 = 0;
  local_24 = &DAT_005bbac4;
  local_28 = iVar3;
  local_44 = s_EnemyHockBockBullet_005bbad4;
  local_48 = iVar3;
  iVar6 = piVar1[1];
  if (piVar1[1] == 0) {
    iVar6 = DAT_005bbae8;
  }
  func_0019B51C(DAT_005bbaf4,DAT_005bbaf0,*DAT_005bbaec,(int)&local_48,DAT_005bbac0,&local_28,iVar6)
  ;
  puVar5 = DAT_005bbafc;
  uVar4 = DAT_005bbaf8;
  *DAT_005bbafc = DAT_005bbaf8;
  puVar5[1] = uVar4;
  puVar5[2] = uVar4;
  local_50 = 0;
  local_4f = 0;
  local_4e = 0;
  local_20 = iVar3;
  local_1c = s_HockBock_Body_005bbb00;
  local_4d = 0xff;
  local_4c = 0xff;
  puVar5 = func_004FC5F8(DAT_005bbb10,&local_20,1,1,0,(undefined4 *)&local_50,0xb);
  return CONCAT44(DAT_005bba84,puVar5);
}

