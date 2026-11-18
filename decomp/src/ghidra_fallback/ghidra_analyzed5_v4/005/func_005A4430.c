#include "ghidra_types.h"

extern int func_0019B51C(undefined4 *param_1,undefined4 param_2,uint param_3,int param_4,undefined4 param_5 ,undefined4 param_6,int param_7);
extern int func_004FC5F8(undefined4 *param_1,int *param_2,undefined4 param_3,uint param_4,undefined4 param_5, undefined4 *param_6,undefined4 param_7);
extern int *DAT_005a4588;
extern int *DAT_005a458c;
extern int DAT_005a45a0;
extern undefined4 DAT_005a4634;
extern undefined4 DAT_005a4638;
extern undefined4 *DAT_005a464c;
extern undefined4 DAT_005a4650;
extern undefined4 *DAT_005a4654;
extern undefined DAT_005a4658;
extern int DAT_005a4670;
extern uint *DAT_005a4674;
extern undefined4 DAT_005a4678;
extern undefined4 *DAT_005a467c;
extern undefined4 DAT_005a4680;
extern char s_EnemyGiibo_005a4664[];
extern char s_Giibo_nucleus_005a463c[];
extern char s_damage_nucleus_005a45ec[];
extern char s_dead_nucleus_005a4624[];
extern char s_division_nucleus_005a45b8[];
extern char s_jitabata_nucleus_005a45fc[];
extern char s_piyopiyo_nucleus_005a4610[];
extern char s_rebound_nucleus_005a45dc[];
extern char s_union_nucleus_005a45cc[];
extern char s_wait_inside_nucleus_005a45a4[];
extern char s_wait_nucleus_005a4590[];

// USA 005A4430 <- EU 005A4408 (Ghidra, non-matching)
// GLOBAL DAT_005a4588 int *
// GLOBAL DAT_005a458c int *
// GLOBAL DAT_005a45a0 int
// GLOBAL DAT_005a4634 undefined4
// GLOBAL DAT_005a4638 undefined4
// GLOBAL DAT_005a464c undefined4 *
// GLOBAL DAT_005a4650 undefined4
// GLOBAL DAT_005a4654 undefined4 *
// GLOBAL DAT_005a4658 undefined
// GLOBAL DAT_005a4670 int
// GLOBAL DAT_005a4674 uint *
// GLOBAL DAT_005a4678 undefined4
// GLOBAL DAT_005a467c undefined4 *
// GLOBAL DAT_005a4680 undefined4
// GLOBAL s_EnemyGiibo_005a4664 string
// GLOBAL s_Giibo_nucleus_005a463c string
// GLOBAL s_damage_nucleus_005a45ec string
// GLOBAL s_dead_nucleus_005a4624 string
// GLOBAL s_division_nucleus_005a45b8 string
// GLOBAL s_jitabata_nucleus_005a45fc string
// GLOBAL s_piyopiyo_nucleus_005a4610 string
// GLOBAL s_rebound_nucleus_005a45dc string
// GLOBAL s_union_nucleus_005a45cc string
// GLOBAL s_wait_inside_nucleus_005a45a4 string
// GLOBAL s_wait_nucleus_005a4590 string

undefined8 func_005A4430(void)

{
  int *piVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 *puVar6;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_30 (*(undefined1 *)(albw_frame + 0x0))
  #define local_2f (*(undefined1 *)(albw_frame + 0x1))
  #define local_2e (*(undefined1 *)(albw_frame + 0x2))
  #define local_2d (*(undefined1 *)(albw_frame + 0x3))
  #define local_2c (*(undefined1 *)(albw_frame + 0x4))
  #define local_28 (*(int *)(albw_frame + 0x8))
  #define local_24 (*(char * *)(albw_frame + 0xc))
  #define local_20 (*(int *)(albw_frame + 0x10))
  #define puStack_1c (*(undefined * *)(albw_frame + 0x14))
  #define iStack_18 (*(int *)(albw_frame + 0x18))
  #define local_14 (*(char * *)(albw_frame + 0x1c))
  piVar1 = DAT_005a4588;
  DAT_005a4588[2] = -1;
  piVar1[3] = -1;
  iVar5 = DAT_005a45a0;
  piVar1[4] = 0;
  piVar1[5] = 0;
  piVar2 = DAT_005a458c;
  DAT_005a458c[1] = (int)s_wait_nucleus_005a4590;
  *piVar2 = iVar5;
  piVar2[3] = (int)s_wait_inside_nucleus_005a45a4;
  piVar2[2] = iVar5;
  piVar2[5] = (int)s_division_nucleus_005a45b8;
  piVar2[4] = iVar5;
  piVar2[7] = (int)s_union_nucleus_005a45cc;
  piVar2[6] = iVar5;
  piVar2[9] = (int)s_rebound_nucleus_005a45dc;
  piVar2[8] = iVar5;
  piVar2[0xb] = (int)s_damage_nucleus_005a45ec;
  piVar2[10] = iVar5;
  piVar2[0xd] = (int)s_jitabata_nucleus_005a45fc;
  piVar2[0xc] = iVar5;
  piVar2[0xf] = (int)s_piyopiyo_nucleus_005a4610;
  piVar2[0xe] = iVar5;
  piVar2[0x10] = iVar5;
  piVar2[0x11] = (int)s_dead_nucleus_005a4624;
  local_30 = 0;
  local_2f = 0;
  local_2e = 0;
  local_2c = 0xff;
  local_24 = s_Giibo_nucleus_005a463c;
  local_2d = 0xff;
  local_28 = iVar5;
  func_004FC5F8(DAT_005a464c,&local_28,0,1,0,(undefined4 *)&local_30,0xb);
  puVar3 = DAT_005a4654;
  puVar6 = DAT_005a4654 + 3;
  DAT_005a4654[1] = 5;
  puVar3[2] = puVar6;
  *puVar3 = 0;
  local_20 = iVar5;
  puStack_1c = &DAT_005a4658;
  iStack_18 = iVar5;
  local_14 = s_EnemyGiibo_005a4664;
  iVar5 = *piVar1;
  if (*piVar1 == 0) {
    iVar5 = DAT_005a4670;
  }
  uVar4 = func_0019B51C(DAT_005a467c,DAT_005a4678,*DAT_005a4674,(int)&iStack_18,DAT_005a4654,
                        &local_20,iVar5);
  return CONCAT44(DAT_005a4680,uVar4);
}

