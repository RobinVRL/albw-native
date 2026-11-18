#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern undefined8 func_00114608(uint param_1,uint param_2);
extern int func_0028C8EC(int param_1,undefined4 param_2,undefined4 param_3,int *param_4);
extern int func_003AE580(int param_1);
extern int func_004EA104(int param_1,int *param_2,int param_3);
extern int func_004EAF8C(int param_1,int *param_2,int param_3);
extern int func_004ED46C(int param_1,int param_2);
extern int func_0052FBA0(int param_1,uint param_2);
extern int func_0054C998(int param_1,int param_2);
extern int *DAT_00377650;
extern int DAT_00377654;
extern uint *DAT_00377658;
extern undefined4 *DAT_0037765c;
extern undefined4 DAT_00377660;
extern undefined DAT_00377664;
extern int *DAT_003776a0;
extern int *DAT_003776c4;
extern uint *DAT_003776c8;
extern undefined4 *DAT_003776cc;
extern undefined4 DAT_003776d0;
extern char s_MSE_PL_HookShot_SET_00377667[];
extern char s_SE_PL_HIT_WALL_003776a4[];
extern char s_SE_PL_HookShot_SHOT_0037767c[];
extern char s_SE_PV_DAMAGE_003776b4[];
extern char s_SE_PV_PUSH_PULL_00377690[];
extern undefined4 _DAT_00377664;

// USA 003773F8 <- EU 003773D4 (Ghidra, non-matching)
// GLOBAL DAT_00377650 int *
// GLOBAL DAT_00377654 int
// GLOBAL DAT_00377658 uint *
// GLOBAL DAT_0037765c undefined4 *
// GLOBAL DAT_00377660 undefined4
// GLOBAL DAT_00377664 undefined
// GLOBAL DAT_003776a0 int *
// GLOBAL DAT_003776c4 int *
// GLOBAL DAT_003776c8 uint *
// GLOBAL DAT_003776cc undefined4 *
// GLOBAL DAT_003776d0 undefined4
// GLOBAL s_MSE_PL_HookShot_SET_00377667 string
// GLOBAL s_SE_PL_HIT_WALL_003776a4 string
// GLOBAL s_SE_PL_HookShot_SHOT_0037767c string
// GLOBAL s_SE_PV_DAMAGE_003776b4 string
// GLOBAL s_SE_PV_PUSH_PULL_00377690 string

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 func_003773F8(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  undefined1 uVar3;
  int iVar4;
  uint extraout_r1;
  undefined4 uVar5;
  int *piVar6;
  undefined4 *puVar7;
  undefined8 uVar8;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_20 (*(int *)(albw_frame + 0x0))
  #define local_1c (*(char * *)(albw_frame + 0x4))
  iVar2 = DAT_00377654;
  piVar1 = DAT_00377650;
  piVar6 = (int *)*DAT_00377650;
  switch(*(undefined2 *)(param_2 + 2)) {
  case 0x4c:
    puVar7 = *(undefined4 **)(param_1 + 0x70);
    if (((*DAT_00377658 & 1) == 0) && (iVar4 = func_00100174((int *)DAT_00377658), iVar4 != 0)) {
      *DAT_0037765c = DAT_00377660;
    }
    if ((puVar7 == (undefined4 *)0x0) ||
       (iVar4 = (**(code **)*puVar7)(puVar7,DAT_0037765c), iVar4 == 0)) {
      puVar7 = (undefined4 *)0x0;
    }
    func_003AE580((int)puVar7);
    iVar4 = func_0054C998(*(int *)(param_1 + 0x48),**(int **)(param_1 + 0x3c));
    uVar8 = func_00114608(_DAT_00377664,extraout_r1);
    *(uint *)(param_1 + 0x58) = (int)uVar8 + iVar4 & 0xe0000000;
    local_1c = s_MSE_PL_HookShot_SET_00377667 + 1;
    piVar6 = (int *)*piVar1;
    break;
  case 0x4d:
    local_1c = s_SE_PL_HookShot_SHOT_0037767c;
    break;
  default:
    goto switchD_003773fc_caseD_4e;
  case 0x4f:
    if (*(int *)(param_2 + 8) != 0) {
      *(undefined4 *)(param_1 + 0x74) = *(undefined4 *)(*(int *)(param_2 + 8) + 0x2cc);
    }
    *(undefined4 *)(param_1 + 0x78) = 0;
    *(undefined1 *)(param_1 + 0x7c) = 0;
    return 0;
  case 0x50:
    *(undefined1 *)(param_1 + 0x7e) = 0;
    goto LAB_00377644;
  case 0x51:
    func_004ED46C(*DAT_003776a0,7);
    local_1c = s_SE_PL_HIT_WALL_003776a4;
    local_20 = iVar2;
    func_004EA104(*piVar1,&local_20,0);
    local_1c = s_SE_PV_DAMAGE_003776b4;
    local_20 = iVar2;
    uVar5 = 0;
    func_004EAF8C(*piVar1,&local_20,0);
    return func_0028C8EC(*(int *)(param_1 + 0x4c),2,uVar5,piVar6);
  case 0x52:
    *(undefined1 *)(param_1 + 0x7d) = 0;
    piVar6 = (int *)func_0052FBA0(*DAT_003776c4 + 0x3dbbc,*(uint *)(param_1 + 0x74));
    if (((*DAT_003776c8 & 1) == 0) && (iVar4 = func_00100174((int *)DAT_003776c8), iVar4 != 0)) {
      *DAT_003776cc = DAT_003776d0;
    }
    if ((piVar6 == (int *)0x0) || (iVar4 = (**(code **)*piVar6)(piVar6,DAT_003776cc), iVar4 == 0)) {
      piVar6 = (int *)0x0;
    }
    if (piVar6 != (int *)0x0) {
      uVar3 = (**(code **)(*piVar6 + 100))(piVar6);
      *(undefined1 *)(param_1 + 0x7f) = uVar3;
    }
    piVar6 = (int *)*piVar1;
LAB_00377644:
    local_1c = s_SE_PV_PUSH_PULL_00377690;
    local_20 = iVar2;
    return func_004EAF8C((int)piVar6,&local_20,0);
  }
  local_20 = iVar2;
  func_004EA104((int)piVar6,&local_20,0);
switchD_003773fc_caseD_4e:
  return 0;
}

