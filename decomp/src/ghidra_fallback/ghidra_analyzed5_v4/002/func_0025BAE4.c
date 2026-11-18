#include "ghidra_types.h"

extern int func_0010F1DC(int *param_1,int *param_2);
extern int func_001E0090(int param_1,int *param_2,int param_3);
extern int func_002DEAC8(int param_1,int *param_2);
extern int func_002DEB34(int param_1);
extern int func_0052EF04(int param_1,int param_2);
extern int func_005883B0(int param_1,uint param_2);
extern int *DAT_0025bc80;

// USA 0025BAE4 <- EU 0025BB0C (Ghidra, non-matching)
// GLOBAL DAT_0025bc80 int *

int * func_0025BAE4(int param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  int *piVar6;
  int *piVar7;
  
  piVar2 = DAT_0025bc80;
  if ((*(char *)(param_1 + 0x84) == '\0') &&
     (iVar5 = func_005883B0(*DAT_0025bc80,param_2), iVar5 != 0x4000003)) {
    if (1 < iVar5 + 0xfbfffffbU && iVar5 != 0x4000007) {
      return (int *)0x0;
    }
    if (*(char *)(param_1 + 0x85) == '\0') {
      return (int *)0x0;
    }
  }
  if (*(int *)(param_1 + 0x60) != 0) {
    iVar5 = *(int *)(param_1 + 100);
    for (piVar7 = (int *)(*(int *)(param_1 + 0x5c) - iVar5);
        piVar7 != (int *)((param_1 + 0x58) - iVar5);
        piVar7 = (int *)(*(int *)((int)piVar7 + iVar5 + 4) - iVar5)) {
      bVar3 = func_0052EF04((int)piVar7,param_2);
      if (bVar3) {
        bVar3 = false;
        if (piVar7 != (int *)0x0) goto LAB_0025bc18;
        break;
      }
    }
  }
  piVar7 = (int *)func_002DEB34(*piVar2);
  if (piVar7 == (int *)0x0) {
    return (int *)0x0;
  }
  while( true ) {
    piVar6 = (int *)(*(int *)(param_1 + 100) + (int)piVar7);
    piVar1 = piVar6 + 1;
    if (*piVar1 == 0) {
      piVar6 = (int *)*piVar6;
    }
    if (*piVar1 == 0 && piVar6 == (int *)0x0) break;
    func_002DEAC8(*piVar2,piVar7);
    piVar7 = (int *)func_002DEB34(*piVar2);
    if (piVar7 == (int *)0x0) {
      return (int *)0x0;
    }
  }
  bVar3 = true;
LAB_0025bc18:
  bVar4 = func_001E0090((int)piVar7,param_1,param_2);
  if (bVar4) {
    if (!bVar3) {
      return piVar7;
    }
    func_0010F1DC((int *)(param_1 + 0x58),(int *)(*(int *)(param_1 + 100) + (int)piVar7));
    *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 1;
    return piVar7;
  }
  if (!bVar3) {
    return (int *)0x0;
  }
  func_002DEAC8(*piVar2,piVar7);
  return (int *)0x0;
}

