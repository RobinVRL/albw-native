#include "ghidra_types.h"

extern int func_00232384(int param_1);

// USA 00464DFC <- EU 00464DD4 (Ghidra, non-matching)

void func_00464DFC(int param_1)

{
  int *piVar1;
  uint uVar2;
  
  func_00232384(param_1);
  uVar2 = 0;
  do {
    if (uVar2 < *(uint *)(param_1 + 0x148)) {
      piVar1 = *(int **)(*(int *)(param_1 + 0x150) + uVar2 * 4);
    }
    else {
      piVar1 = (int *)0x0;
    }
    (**(code **)(*piVar1 + 8))(piVar1);
    uVar2 = uVar2 + 1;
  } while ((int)uVar2 < 0x21);
  return;
}

