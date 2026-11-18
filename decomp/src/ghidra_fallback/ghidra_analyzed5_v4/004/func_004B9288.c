#include "ghidra_types.h"

extern int func_00232384(int param_1);
extern int func_0051E300(int param_1);

// USA 004B9288 <- EU 004B9260 (Ghidra, non-matching)

undefined4 func_004B9288(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  
  iVar1 = func_0051E300(param_1);
  if (iVar1 == 0) {
    return 0;
  }
  iVar4 = *(int *)(param_1 + 0x54);
  iVar1 = *(int *)(param_1 + 0x4c);
  while (piVar3 = (int *)(iVar1 - iVar4),
        piVar3 != (int *)((param_1 + 0x48) - *(int *)(param_1 + 0x54))) {
    (**(code **)(*piVar3 + 8))(piVar3);
    iVar1 = *(int *)((int)piVar3 + iVar4 + 4);
  }
  uVar2 = func_00232384(param_1);
  return uVar2;
}

