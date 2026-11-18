#include "ghidra_types.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern int func_0010BAB4(undefined4 param_1);
extern int func_0012C9C4(undefined4 *param_1);
extern int func_00166C20(int *param_1,uint param_2,int *param_3,int param_4);
extern int func_0017A520(undefined4 *param_1,undefined2 param_2,int *param_3,int param_4);
extern int func_004A3CC8(int param_1,int *param_2,int *param_3);
extern int func_004B948C(int param_1,int param_2);
extern int func_005229AC(int *param_1,int *param_2);
extern int func_005826A4(int param_1,int *param_2,int *param_3,int *param_4);
extern int func_00689728(undefined4 *param_1,undefined4 param_2,uint param_3,undefined4 param_4,...);
extern undefined4 DAT_003a1000;
extern undefined4 DAT_003a1004;
extern undefined *DAT_003a1008;
extern undefined DAT_003a100c;
extern int DAT_003a1018;
extern int *DAT_003a106c;
extern int *DAT_003a1070;
extern char s_CountComplete_003a1030[];
extern char s_CountRecord_003a1024[];
extern char s_L_Panel__02d_003a1050[];
extern char s_LoopComplete_003a1040[];
extern char s_ScrollB_003a101c[];
extern char s_T_Medal_00_003a1060[];
extern char s__ScrollT_003a100f[];
extern char s_cf_003a1050[];
extern undefined4 _DAT_003a100c;

// USA 003A0D7C <- EU 003A0D58 (Ghidra, non-matching)
// GLOBAL DAT_003a1000 undefined4
// GLOBAL DAT_003a1004 undefined4
// GLOBAL DAT_003a1008 undefined *
// GLOBAL DAT_003a100c undefined
// GLOBAL DAT_003a1018 int
// GLOBAL DAT_003a106c int *
// GLOBAL DAT_003a1070 int *
// GLOBAL s_CountComplete_003a1030 string
// GLOBAL s_CountRecord_003a1024 string
// GLOBAL s_cf_003a1050 string
// GLOBAL s_LoopComplete_003a1040 string
// GLOBAL s_ScrollB_003a101c string
// GLOBAL s_T_Medal_00_003a1060 string

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int func_003A0D7C(undefined4 *param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  undefined4 uVar9;
  uint uVar10;
  _Alignas(8) unsigned char albw_frame[0x60];
  #define local_58 (*(int *)(albw_frame + 0x8))
  #define local_54 (*(char * *)(albw_frame + 0xc))
  #define local_50 (*(int *)(albw_frame + 0x10))
  #define local_4c (*(int * *)(albw_frame + 0x14))
  #define local_48 (*(int *)(albw_frame + 0x18))
  #define local_44 (*(char * *)(albw_frame + 0x1c))
  #define local_40 (*(int *)(albw_frame + 0x20))
  #define local_3c (*(undefined4 *)(albw_frame + 0x24))
  puVar3 = func_0012C9C4(param_1);
  *puVar3 = DAT_003a1000;
  puVar3[7] = param_2;
  puVar3[8] = param_3;
  uVar9 = DAT_003a1004;
  *(undefined2 *)(puVar3 + 9) = 0;
  *(undefined2 *)((int)puVar3 + 0x26) = 0xffff;
  puVar3[10] = uVar9;
  puVar3[0xb] = 0;
  *(undefined2 *)(puVar3 + 0xc) = 0;
  *(undefined2 *)((int)puVar3 + 0x32) = 0xffff;
  puVar3[0xd] = uVar9;
  puVar3[0xe] = 0;
  *(undefined2 *)(puVar3 + 0xf) = 0;
  *(undefined2 *)((int)puVar3 + 0x3e) = 0xffff;
  puVar3[0x10] = uVar9;
  puVar3[0x11] = 0;
  puVar4 = (undefined4 *)func_0010BAB4(0x78);
  puVar5 = (undefined4 *)0x0;
  if (puVar4 != (undefined4 *)0x0) {
    puVar5 = func_0017A520(puVar4,0x400,(int *)0x0,0);
  }
  puVar3[0x12] = puVar5;
  puVar3[0x13] = 0;
  puVar5 = (undefined4 *)func_0010BAB4(0x10);
  if (puVar5 != (undefined4 *)0x0) {
    *puVar5 = 0;
    puVar5[1] = 0;
    puVar5[2] = 0;
    puVar5[3] = 0xffffffff;
  }
  puVar3[0x14] = puVar5;
  iVar6 = func_00100118((int)(puVar3 + 0x15),DAT_003a1008,0x88,6);
  *(undefined4 *)(iVar6 + 0x330) = 0;
  *(undefined4 *)(iVar6 + 0x334) = 0;
  *(undefined4 *)(iVar6 + 0x338) = 0;
  uVar9 = _DAT_003a100c;
  *(undefined4 *)(iVar6 + 0x344) = 0xfffffffe;
  *(undefined4 *)(iVar6 + 0x340) = 0xffffffff;
  *(undefined4 *)(iVar6 + 0x34c) = uVar9;
  iVar1 = DAT_003a1018;
  local_54 = s__ScrollT_003a100f + 1;
  local_58 = DAT_003a1018;
  func_00166C20(*(int **)(iVar6 + -0x34),0,&local_58,0);
  local_54 = s_ScrollB_003a101c;
  local_58 = iVar1;
  func_00166C20(*(int **)(iVar6 + -0x34),1,&local_58,0);
  local_54 = s_CountRecord_003a1024;
  local_58 = iVar1;
  func_00166C20(*(int **)(iVar6 + -0x38),0,&local_58,0);
  local_54 = s_CountComplete_003a1030;
  local_58 = iVar1;
  func_00166C20(*(int **)(iVar6 + -0x38),1,&local_58,0);
  local_54 = s_LoopComplete_003a1040;
  uVar9 = 0;
  local_58 = iVar1;
  func_00166C20(*(int **)(iVar6 + -0x38),2,&local_58,0);
  *(undefined4 *)(iVar6 + -0x28) = *(undefined4 *)(iVar6 + -0x38);
  *(undefined2 *)(iVar6 + -0x2e) = 2;
  *(undefined2 *)(iVar6 + -0x30) = 0;
  func_004B948C(param_4,iVar6 + -0x54);
  uVar10 = 0;
  do {
    func_00689728(&local_50,s_L_Panel__02d_003a1050,uVar10,uVar9);
    iVar7 = iVar6;
    if (uVar10 < 6) {
      iVar7 = iVar6 + uVar10 * 0x88;
    }
    func_004A3CC8(iVar7,*(int **)(iVar6 + -0x34),&local_50);
    iVar7 = iVar6;
    if (uVar10 < 6) {
      iVar7 = iVar6 + uVar10 * 0x88;
    }
    func_004B948C(param_4,iVar7);
    uVar10 = uVar10 + 1;
  } while ((int)uVar10 < 6);
  local_3c = *(undefined4 *)(**(int **)(iVar6 + -0x38) + 0x20);
  local_40 = iVar1;
  local_48 = iVar1;
  local_44 = s_T_Medal_00_003a1060;
  piVar8 = (int *)func_005229AC(*(int **)(iVar6 + -0x38),&local_48);
  piVar2 = DAT_003a106c;
  local_4c = (int *)0x0;
  if (piVar8 != (int *)0x0) {
    local_4c = (int *)(**(code **)(*piVar8 + 8))(piVar8);
    do {
      if (local_4c == piVar2) goto LAB_003a0fc0;
      local_4c = (int *)*local_4c;
    } while (local_4c != (int *)0x0);
  }
  piVar8 = (int *)0x0;
LAB_003a0fc0:
  *(int **)(iVar6 + -8) = piVar8;
  if (piVar8 != (int *)0x0) {
    local_4c = (int *)piVar8[0x2a];
  }
  if (piVar8 != (int *)0x0 && local_4c != (int *)0x0) {
    local_50 = iVar1;
    func_005826A4(*DAT_003a1070,*(int **)(iVar6 + -4),&local_40,&local_50);
  }
  return iVar6 + -0x54;
}

