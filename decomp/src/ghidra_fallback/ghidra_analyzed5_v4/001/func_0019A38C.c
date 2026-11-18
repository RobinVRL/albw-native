#include "ghidra_types.h"

extern int func_001E01A8(int param_1,undefined4 param_2);
extern int func_0052F210(int param_1);
extern int func_00588224(int param_1,uint param_2,uint param_3);
extern int *DAT_0019a410;

// USA 0019A38C <- EU 0019A38C (Ghidra, non-matching)
// GLOBAL DAT_0019a410 int *

void func_0019A38C(int param_1)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  
  piVar1 = DAT_0019a410;
  bVar7 = *(char *)(param_1 + 0x48) != '\0';
  iVar4 = 0;
  if (bVar7) {
    iVar4 = *(int *)(param_1 + 0x30);
  }
  if (bVar7 && iVar4 != 0) {
    iVar6 = *(int *)(param_1 + 0x34);
    iVar5 = *(int *)(param_1 + 0x34);
    for (iVar4 = *(int *)(param_1 + 0x2c) - iVar6; iVar4 != (param_1 + 0x28) - iVar5;
        iVar4 = *(int *)(iVar4 + iVar6 + 4) - iVar6) {
      uVar2 = func_0052F210(iVar4);
      iVar3 = func_00588224(*piVar1,uVar2,0x4000000);
      if (iVar3 == 0) {
        func_001E01A8(iVar4,1);
      }
    }
    return;
  }
  return;
}

