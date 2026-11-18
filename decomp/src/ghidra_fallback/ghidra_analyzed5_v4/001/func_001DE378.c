#include "ghidra_types.h"

extern int func_001DC9C8(int param_1,undefined4 param_2,undefined4 param_3,int *param_4);
extern int func_00341240(int param_1);
extern int func_003879AC(int param_1,float *param_2);
extern int *DAT_001de41c;

// USA 001DE378 <- EU 001DE378 (Ghidra, non-matching)
// GLOBAL DAT_001de41c int *

void func_001DE378(int param_1,undefined4 *param_2,undefined4 param_3)

{
  undefined4 extraout_r1;
  int *piVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  
  uVar3 = param_2[1];
  uVar6 = param_2[2];
  *(undefined4 *)(param_1 + 0x368) = *param_2;
  *(undefined4 *)(param_1 + 0x36c) = uVar3;
  *(undefined4 *)(param_1 + 0x370) = uVar6;
  piVar1 = (int *)*param_2;
  uVar3 = param_2[1];
  *(undefined4 *)(param_1 + 0x3d8) = param_2[2];
  *(int **)(param_1 + 0x3d0) = piVar1;
  *(undefined4 *)(param_1 + 0x3d4) = uVar3;
  *(undefined4 *)(param_1 + 1000) = param_3;
  func_00341240(*(int *)(param_1 + 0x604));
  func_001DC9C8(param_1,extraout_r1,param_3,piVar1);
  uVar2 = 0;
  iVar5 = *DAT_001de41c;
  if (0 < *(int *)(iVar5 + 0x90)) {
    do {
      if (uVar2 < *(uint *)(iVar5 + 0x90)) {
        iVar4 = *(int *)(*(int *)(iVar5 + 0x98) + uVar2 * 4);
      }
      else {
        iVar4 = 0;
      }
      if (*(int *)(iVar4 + 0x20) != 0) {
        func_003879AC(*(int *)(iVar4 + 0x20),(float *)(param_1 + 0x3d0));
      }
      if (*(int *)(iVar4 + 0x24) != 0) {
        func_003879AC(*(int *)(iVar4 + 0x24),(float *)(param_1 + 0x3d0));
      }
      uVar2 = uVar2 + 1;
    } while ((int)uVar2 < *(int *)(iVar5 + 0x90));
  }
  return;
}

