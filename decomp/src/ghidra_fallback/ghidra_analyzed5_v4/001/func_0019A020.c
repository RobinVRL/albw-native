#include "ghidra_types.h"

extern int func_0010F1DC(int *param_1,int *param_2);
extern int func_001DF624(int param_1,int *param_2,int *param_3,int param_4);
extern void func_001DF690(int param_1,float fparam_0);
extern int func_001DF744(int param_1,int param_2,float fparam_0);
extern int func_001E01A8(int param_1,undefined4 param_2);
extern int func_001E02B4(int param_1,int *param_2,int *param_3);
extern int func_002DEAC8(int param_1,int *param_2);
extern int func_002DEB34(int param_1);
extern int func_00587FCC(int param_1,int *param_2);
extern int func_005881C8(int param_1,int *param_2,uint param_3);
extern int func_005883B0(int param_1,uint param_2);
extern int *DAT_0019a238;

// USA 0019A020 <- EU 0019A020 (Ghidra, non-matching)
// GLOBAL DAT_0019a238 int *

int * func_0019A020(int param_1,int *param_2,int param_3,uint *param_4)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  
  piVar1 = DAT_0019a238;
  piVar2 = (int *)func_002DEB34(*DAT_0019a238);
  if (piVar2 == (int *)0x0) {
    return (int *)0x0;
  }
  while( true ) {
    piVar3 = (int *)(*(int *)(param_1 + 0x34) + (int)piVar2);
    piVar6 = piVar3 + 1;
    if (*piVar6 == 0) {
      piVar3 = (int *)*piVar3;
    }
    if (*piVar6 == 0 && piVar3 == (int *)0x0) break;
    func_002DEAC8(*piVar1,piVar2);
    piVar2 = (int *)func_002DEB34(*piVar1);
    if (piVar2 == (int *)0x0) {
      return (int *)0x0;
    }
  }
  iVar4 = func_00587FCC(*piVar1,param_2);
  if (((iVar4 == -1) || (*(char *)(param_1 + 0x49) == '\0')) ||
     ((*(char *)(param_1 + 0x4b) != '\0' &&
      (iVar4 = func_005883B0(*piVar1,iVar4), 1 < iVar4 + 0xfbfffffbU && iVar4 != 0x4000007)))) {
    func_002DEAC8(*piVar1,piVar2);
    return (int *)0x0;
  }
  iVar4 = *(int *)(param_1 + 0x14);
  if (param_3 == 0) {
    if (iVar4 == 0) {
      piVar6 = (int *)0x0;
    }
    else {
      piVar6 = (int *)(iVar4 + 4);
    }
    iVar4 = func_001E02B4((int)piVar2,piVar6,param_2);
  }
  else {
    if (iVar4 == 0) {
      piVar6 = (int *)0x0;
    }
    else {
      piVar6 = (int *)(iVar4 + 4);
    }
    iVar4 = func_001DF624((int)piVar2,piVar6,param_2,param_3);
  }
  if (param_4 != (uint *)0x0) {
    uVar5 = piVar2[0xc] & 0xff;
    if (uVar5 < 0x16) {
      if (0x15 < uVar5) {
        *param_4 = 0x15;
        goto LAB_0019a1a0;
      }
    }
    else {
      uVar5 = 0x15;
    }
    *param_4 = uVar5;
  }
LAB_0019a1a0:
  if (iVar4 == 0) {
    func_002DEAC8(*piVar1,piVar2);
    return (int *)0x0;
  }
  func_0010F1DC((int *)(param_1 + 0x28),(int *)(*(int *)(param_1 + 0x34) + (int)piVar2));
  *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + 1;
  if (*(char *)(param_1 + 0x48) != '\0') {
    func_001E01A8((int)piVar2,0);
  }
  iVar4 = func_005881C8(*piVar1,param_2,0x40000000);
  if (iVar4 == 0) {
    func_001DF690((int)piVar2,*(float *)(param_1 + 0x40));
    func_001DF744((int)piVar2,0,*(float *)(param_1 + 0x44));
  }
  piVar2[10] = param_1;
  return piVar2;
}

