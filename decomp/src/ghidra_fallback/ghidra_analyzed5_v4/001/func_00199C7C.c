#include "ghidra_types.h"

extern int func_0010F1DC(int *param_1,int *param_2);
extern void func_001DF690(int param_1,float fparam_0);
extern int func_001DF744(int param_1,int param_2,float fparam_0);
extern int func_001E0090(int param_1,int *param_2,int param_3);
extern int func_001E0628(int param_1,int *param_2,int param_3,int *param_4);
extern int func_0025B6A8(int param_1,int param_2);
extern int func_0025B70C(int param_1);
extern int func_002DEAC8(int param_1,int *param_2);
extern int func_002DEB34(int param_1);
extern int func_0052EF04(int param_1,int param_2);
extern int func_00588224(int param_1,uint param_2,uint param_3);
extern int func_005883B0(int param_1,uint param_2);
extern int *DAT_00199ec4;

// USA 00199C7C <- EU 00199C7C (Ghidra, non-matching)
// PARAM param_5 Stack[0x0]:4 uint *
// GLOBAL DAT_00199ec4 int *

int * func_00199C7C(int param_1,int param_2,int param_3,int *param_4,uint *param_5)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  int *piVar7;
  int *piVar8;
  bool bVar9;
  
  cVar2 = '\x01';
  bVar9 = *(char *)(param_1 + 0x4a) != '\0';
  *(undefined1 *)(param_1 + 0x4c) = 1;
  piVar1 = DAT_00199ec4;
  iVar4 = 0;
  if (bVar9) {
    iVar4 = param_2;
  }
  if (bVar9 && iVar4 != -1) {
    cVar2 = *(char *)(param_1 + 0x49);
  }
  if ((!bVar9 || iVar4 == -1) || cVar2 == '\0') {
    return (int *)0x0;
  }
  if ((*(char *)(param_1 + 0x4b) != '\0') &&
     (iVar4 = func_005883B0(*DAT_00199ec4,iVar4), 1 < iVar4 + 0xfbfffffbU && iVar4 != 0x4000007)) {
    return (int *)0x0;
  }
  iVar4 = *(int *)(param_1 + 0x34);
  piVar7 = (int *)0x0;
  bVar9 = false;
  piVar6 = (int *)(*(int *)(param_1 + 0x2c) - iVar4);
  piVar8 = (int *)((param_1 + 0x28) - iVar4);
  if (piVar6 == piVar8) {
LAB_00199d2c:
    piVar7 = (int *)func_002DEB34(*piVar1);
    if (piVar7 == (int *)0x0) {
      return (int *)0x0;
    }
    while( true ) {
      piVar8 = (int *)(*(int *)(param_1 + 0x34) + (int)piVar7);
      piVar6 = piVar8 + 1;
      if (*piVar6 == 0) {
        piVar8 = (int *)*piVar8;
      }
      if (*piVar6 == 0 && piVar8 == (int *)0x0) break;
      func_002DEAC8(*piVar1,piVar7);
      piVar7 = (int *)func_002DEB34(*piVar1);
      if (piVar7 == (int *)0x0) {
        return (int *)0x0;
      }
    }
    bVar9 = true;
  }
  else {
    do {
      bVar3 = func_0052EF04((int)piVar6,param_2);
      if (bVar3) {
        piVar7 = piVar6;
      }
      piVar6 = (int *)(*(int *)((int)piVar6 + iVar4 + 4) - iVar4);
    } while (piVar6 != piVar8);
    if (piVar7 == (int *)0x0) goto LAB_00199d2c;
  }
  if (param_3 != 0) {
    func_0025B6A8(param_3,(int)piVar7);
  }
  iVar4 = *(int *)(param_1 + 0x14);
  if (param_4 == (int *)0x0) {
    if (iVar4 == 0) {
      iVar4 = 0;
    }
    else {
      iVar4 = iVar4 + 4;
    }
    bVar3 = func_001E0090((int)piVar7,iVar4,param_2);
  }
  else {
    if (iVar4 == 0) {
      piVar6 = (int *)0x0;
    }
    else {
      piVar6 = (int *)(iVar4 + 4);
    }
    bVar3 = func_001E0628((int)piVar7,piVar6,param_2,param_4);
  }
  if (param_5 != (uint *)0x0) {
    uVar5 = piVar7[0xc] & 0xff;
    if (uVar5 < 0x16) {
      if (0x15 < uVar5) {
        *param_5 = 0x15;
        goto LAB_00199e20;
      }
    }
    else {
      uVar5 = 0x15;
    }
    *param_5 = uVar5;
  }
LAB_00199e20:
  if (bVar3 != false) {
    if (bVar9) {
      func_0010F1DC((int *)(param_1 + 0x28),(int *)(*(int *)(param_1 + 0x34) + (int)piVar7));
      *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + 1;
      iVar4 = func_00588224(*piVar1,param_2,0x40000000);
      if (iVar4 == 0) {
        func_001DF690((int)piVar7,*(float *)(param_1 + 0x40));
        func_001DF744((int)piVar7,0,*(float *)(param_1 + 0x44));
      }
    }
    piVar7[10] = param_1;
    return piVar7;
  }
  if (bVar9) {
    func_002DEAC8(*piVar1,piVar7);
  }
  if (param_3 == 0) {
    return (int *)0x0;
  }
  func_0025B70C(param_3);
  return (int *)0x0;
}

