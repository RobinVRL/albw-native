#include "ghidra_types.h"

extern int func_0011F278(undefined1 *param_1,undefined1 *param_2,uint param_3);

// USA 0011E9EC <- EU 0011E9EC (Ghidra, non-matching)

undefined4 func_0011E9EC(int param_1,int param_2,undefined1 *param_3)

{
  uint uVar1;
  int *piVar2;
  undefined4 *puVar3;
  uint uVar4;
  
  puVar3 = (undefined4 *)(*(int *)(param_1 + 0xc) + *(int *)(param_1 + 0x10) * 0x10);
  piVar2 = (int *)*puVar3;
  uVar1 = *piVar2 * 8 + 4;
  while( true ) {
    if ((uint)puVar3[2] <= uVar1) {
      return 0;
    }
    uVar4 = (uint)*(byte *)((int)piVar2 + uVar1);
    if (*(int *)((int)piVar2 + uVar4 + 1 + uVar1) == param_2) break;
    uVar1 = uVar1 + uVar4 + 5;
  }
  func_0011F278(param_3,(undefined1 *)((int)piVar2 + uVar1 + 1),uVar4);
  param_3[uVar4] = 0;
  return 1;
}

