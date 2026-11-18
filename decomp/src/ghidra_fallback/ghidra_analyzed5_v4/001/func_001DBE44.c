#include "ghidra_types.h"

extern int func_003879AC(int param_1,float *param_2);
extern int *DAT_001dbee0;

// USA 001DBE44 <- EU 001DBE44 (Ghidra, non-matching)
// GLOBAL DAT_001dbee0 int *

void func_001DBE44(int param_1,undefined4 *param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  
  iVar2 = *(int *)(param_1 + 0x10);
  uVar4 = param_2[1];
  uVar7 = param_2[2];
  *(undefined4 *)(iVar2 + 0x368) = *param_2;
  *(undefined4 *)(iVar2 + 0x36c) = uVar4;
  *(undefined4 *)(iVar2 + 0x370) = uVar7;
  uVar7 = param_2[1];
  uVar4 = param_2[2];
  *(undefined4 *)(iVar2 + 0x3d0) = *param_2;
  *(undefined4 *)(iVar2 + 0x3d4) = uVar7;
  *(undefined4 *)(iVar2 + 0x3d8) = uVar4;
  piVar1 = DAT_001dbee0;
  *(undefined4 *)(iVar2 + 1000) = param_3;
  uVar3 = 0;
  iVar6 = *piVar1;
  if (0 < *(int *)(iVar6 + 0x90)) {
    do {
      if (uVar3 < *(uint *)(iVar6 + 0x90)) {
        iVar5 = *(int *)(*(int *)(iVar6 + 0x98) + uVar3 * 4);
      }
      else {
        iVar5 = 0;
      }
      if (*(int *)(iVar5 + 0x20) != 0) {
        func_003879AC(*(int *)(iVar5 + 0x20),(float *)(iVar2 + 0x3d0));
      }
      if (*(int *)(iVar5 + 0x24) != 0) {
        func_003879AC(*(int *)(iVar5 + 0x24),(float *)(iVar2 + 0x3d0));
      }
      uVar3 = uVar3 + 1;
    } while ((int)uVar3 < *(int *)(iVar6 + 0x90));
  }
  return;
}

