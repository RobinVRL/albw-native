#include "ghidra_types.h"

extern int func_004A3700(int param_1);

// USA 003B9F40 <- EU 003B9F1C (Ghidra, non-matching)

undefined4 func_003B9F40(int param_1)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = *(int *)(*(int *)(param_1 + 0x48) + 0xd98);
  if ((iVar2 != 0) && (*(int *)(iVar2 + 0x1c) == *(int *)(*(int *)(param_1 + 0x48) + 0xd9c))) {
    *(uint *)(iVar2 + 0x3c) = *(uint *)(iVar2 + 0x3c) & 0xffffffbb | 8;
    func_004A3700(iVar2);
  }
  piVar1 = *(int **)(*(int *)(param_1 + 0x48) + 0xbcc);
  if (piVar1 != (int *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x003b9f78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    return (**(code **)(*piVar1 + 0x14))(piVar1);
  }
  return 0;
}

