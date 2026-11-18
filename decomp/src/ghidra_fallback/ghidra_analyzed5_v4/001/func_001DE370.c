#include "ghidra_types.h"

extern int func_001DC9C8(int param_1,undefined4 param_2,undefined4 param_3,int *param_4);
extern int func_00341240(int param_1);
extern int func_003879AC(int param_1,float *param_2);
extern int *DAT_001de41c;

// USA 001DE370 <- EU 001DE370 (Ghidra, non-matching)
// GLOBAL DAT_001de41c int *

void func_001DE370(int param_1,undefined4 *param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 extraout_r1;
  int *piVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  
  iVar1 = *(int *)(param_1 + 0x10);
  uVar4 = param_2[1];
  uVar7 = param_2[2];
  *(undefined4 *)(iVar1 + 0x368) = *param_2;
  *(undefined4 *)(iVar1 + 0x36c) = uVar4;
  *(undefined4 *)(iVar1 + 0x370) = uVar7;
  piVar2 = (int *)*param_2;
  uVar4 = param_2[1];
  *(undefined4 *)(iVar1 + 0x3d8) = param_2[2];
  *(int **)(iVar1 + 0x3d0) = piVar2;
  *(undefined4 *)(iVar1 + 0x3d4) = uVar4;
  *(undefined4 *)(iVar1 + 1000) = param_3;
  func_00341240(*(int *)(iVar1 + 0x604));
  func_001DC9C8(iVar1,extraout_r1,param_3,piVar2);
  uVar3 = 0;
  iVar6 = *DAT_001de41c;
  if (0 < *(int *)(iVar6 + 0x90)) {
    do {
      if (uVar3 < *(uint *)(iVar6 + 0x90)) {
        iVar5 = *(int *)(*(int *)(iVar6 + 0x98) + uVar3 * 4);
      }
      else {
        iVar5 = 0;
      }
      if (*(int *)(iVar5 + 0x20) != 0) {
        func_003879AC(*(int *)(iVar5 + 0x20),(float *)(iVar1 + 0x3d0));
      }
      if (*(int *)(iVar5 + 0x24) != 0) {
        func_003879AC(*(int *)(iVar5 + 0x24),(float *)(iVar1 + 0x3d0));
      }
      uVar3 = uVar3 + 1;
    } while ((int)uVar3 < *(int *)(iVar6 + 0x90));
  }
  return;
}

