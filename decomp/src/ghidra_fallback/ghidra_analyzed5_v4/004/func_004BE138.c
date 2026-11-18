#include "ghidra_types.h"

extern int func_0016898C(int param_1,uint *param_2);
extern int func_00168E9C(int *param_1,int param_2,int *param_3);
extern int func_0016A02C(int param_1,int param_2,int *param_3,int param_4);
extern int func_002C11E8(int *param_1,undefined4 param_2,int param_3,undefined1 param_4);
extern int func_00584CC8(int param_1,int *param_2);
extern undefined DAT_004be2a0;
extern int DAT_004be2a4;
extern undefined4 DAT_004be2b0;
extern undefined4 DAT_004be2b4;
extern char s_mouth_004be2a8[];

// USA 004BE138 <- EU 004BE110 (Ghidra, non-matching)
// GLOBAL DAT_004be2a0 undefined
// GLOBAL DAT_004be2a4 int
// GLOBAL DAT_004be2b0 undefined4
// GLOBAL DAT_004be2b4 undefined4
// GLOBAL s_mouth_004be2a8 string

void func_004BE138(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  uint *puVar4;
  uint uVar5;
  undefined4 uVar6;
  _Alignas(8) unsigned char albw_frame[0x90];
  #define local_88 (*(int *)(albw_frame + 0x8))
  #define local_84 (*(char * *)(albw_frame + 0xc))
  #define aiStack_80 ((int *)(albw_frame + 0x10))
  if (param_2 != 0) {
    func_0016A02C(param_1[0x1eb],-1,(int *)0xffffffff,0);
    if (param_1[0x1ec] != 0) {
      func_0016A02C(param_1[0x1ec],-1,(int *)0xffffffff,0);
    }
  }
  iVar2 = DAT_004be2a4;
  local_84 = &DAT_004be2a0;
  local_88 = DAT_004be2a4;
  iVar1 = func_00584CC8(param_1[0x1e8],&local_88);
  param_1[0x238] = iVar1;
  local_84 = s_mouth_004be2a8;
  local_88 = iVar2;
  iVar2 = func_00584CC8(param_1[0x1e8],&local_88);
  param_1[0x239] = iVar2;
  (**(code **)(*param_1 + 0xac))(param_1,0);
  func_00168E9C((int *)param_1[0x1eb],param_1[0x1e8],(int *)0x0);
  uVar6 = DAT_004be2b0;
  uVar5 = *(uint *)(param_1[0x1eb] + 0xc);
  *(undefined4 *)(*(int *)(param_1[0x1eb] + 0x14) + 0x10) = DAT_004be2b0;
  piVar3 = (int *)param_1[0x1ec];
  if (piVar3 != (int *)0x0) {
    uVar5 = (uint)*(byte *)((int)param_1 + 0x916);
  }
  if (piVar3 != (int *)0x0 && uVar5 != 0) {
    func_00168E9C(piVar3,param_1[0x1e8],(int *)0x0);
    *(undefined4 *)(*(int *)(param_1[0x1ec] + 0x14) + 0x10) = uVar6;
  }
  if ((int *)param_1[0x1ee] != (int *)0x0) {
    if (*(char *)((int)param_1 + 0x917) == '\0') {
      puVar4 = (uint *)func_002C11E8(aiStack_80,0,0,0);
      func_0016898C(param_1[0x1ee],puVar4);
      *(undefined4 *)(*(int *)(param_1[0x1ee] + 0x14) + 0x10) = DAT_004be2b4;
      return;
    }
    func_00168E9C((int *)param_1[0x1ee],param_1[0x1e9],(int *)0x0);
    *(undefined4 *)(*(int *)(param_1[0x1ee] + 0x14) + 0x10) = uVar6;
  }
  return;
}

