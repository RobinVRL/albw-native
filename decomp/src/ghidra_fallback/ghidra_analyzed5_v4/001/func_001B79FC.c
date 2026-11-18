#include "ghidra_types.h"

extern int func_0010CEE0(undefined4 param_1,int *param_2,undefined4 param_3);
extern int func_0010DB90(void);
extern longlong func_001104E4(int param_1,int param_2);
extern undefined4 DAT_001b7bd0;

// USA 001B79FC <- EU 001B79FC (Ghidra, non-matching)
// GLOBAL DAT_001b7bd0 undefined4

int func_001B79FC(int param_1,uint param_2,uint param_3,int param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int *piVar5;
  int *piVar6;
  int iVar7;
  longlong lVar8;
  
  piVar6 = *(int **)(param_1 + 0x20);
  iVar1 = piVar6[2];
  if (iVar1 < 0) {
    lVar8 = func_001104E4((iVar1 - param_3) + 1,param_3);
    iVar2 = (int)lVar8;
  }
  else {
    lVar8 = func_001104E4((iVar1 + param_3) - 1,param_3);
    iVar2 = (int)lVar8;
  }
  piVar5 = *(int **)(param_1 + 0x24);
  iVar7 = piVar5[2];
  if (iVar2 * param_3 < (uint)(piVar6[1] + *piVar6)) {
    uVar4 = (piVar6[1] + *piVar6) - iVar2 * param_3;
  }
  else {
    uVar4 = 0;
  }
  if (iVar7 < 0) {
    lVar8 = func_001104E4((iVar7 - param_3) + 1,param_3);
    iVar2 = (int)lVar8;
  }
  else {
    lVar8 = func_001104E4((iVar7 + param_3) - 1,param_3);
    iVar2 = (int)lVar8;
  }
  if (iVar2 * param_3 < (uint)(piVar5[1] + *piVar5)) {
    uVar3 = (piVar5[1] + *piVar5) - iVar2 * param_3;
  }
  else {
    uVar3 = 0;
  }
  if (param_4 == 0) {
    if (param_2 <= uVar4) goto LAB_001b7b44;
joined_r0x001b7ae8:
    if (param_2 <= uVar3) {
LAB_001b7b8c:
      if (iVar7 < 0) {
        lVar8 = func_001104E4((iVar7 - param_3) + 1,param_3);
        iVar1 = (int)lVar8;
      }
      else {
        lVar8 = func_001104E4((iVar7 + param_3) - 1,param_3);
        iVar1 = (int)lVar8;
      }
      piVar5[2] = iVar1 * param_3 + param_2;
      return iVar1 * param_3;
    }
  }
  else {
    if (param_4 == 1) {
      if (param_2 <= uVar3) goto LAB_001b7b8c;
    }
    else if (uVar4 <= uVar3) goto joined_r0x001b7ae8;
    if (param_2 <= uVar4) {
LAB_001b7b44:
      if (iVar1 < 0) {
        lVar8 = func_001104E4((iVar1 - param_3) + 1,param_3);
        iVar1 = (int)lVar8;
      }
      else {
        lVar8 = func_001104E4((iVar1 + param_3) - 1,param_3);
        iVar1 = (int)lVar8;
      }
      piVar6[2] = iVar1 * param_3 + param_2;
      return iVar1 * param_3;
    }
  }
  if ((int)param_2 < 1) {
    return 0;
  }
  piVar6 = *(int **)(param_1 + 0x28);
  if (piVar6 == (int *)0x0) {
    piVar6 = (int *)func_0010DB90();
  }
  iVar1 = func_0010CEE0(param_2,piVar6,param_3);
  return iVar1;
}

