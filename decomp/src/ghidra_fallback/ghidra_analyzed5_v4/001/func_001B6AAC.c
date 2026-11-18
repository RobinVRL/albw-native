#include "ghidra_types.h"

extern int func_00532C2C(int param_1);

// USA 001B6AAC <- EU 001B6AAC (Ghidra, non-matching)

undefined4 func_001B6AAC(int *param_1)

{
  int iVar1;
  uint uVar2;
  
  if ((((*(byte *)((int)param_1 + 0x9d) & 2) != 0) &&
      (iVar1 = func_00532C2C((int)(param_1 + 8)), iVar1 < 0x10)) &&
     (uVar2 = func_00532C2C((int)(param_1 + 8)), (uVar2 & 3) == 0)) {
    (**(code **)(*param_1 + 0x3c))(param_1);
  }
  uVar2 = (uint)*(short *)((int)param_1 + 0x22);
  if (-1 < (int)uVar2) {
    iVar1 = *(int *)(param_1[7] + 0xc);
    if (uVar2 < *(uint *)(param_1[7] + 8)) {
      iVar1 = iVar1 + uVar2 * 0x38;
    }
    if (*(char *)(iVar1 + 0x35) != '\0') {
      return 0;
    }
  }
  return 1;
}

