#include "ghidra_types.h"


// USA 00522E00 <- EU 00522DD8 (Ghidra, non-matching)

undefined4 func_00522E00(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  if ((*(int *)(param_1 + 0xf74) != 0) &&
     (iVar1 = *(int *)(*(int *)(param_1 + 0xf74) + 8), uVar2 = 0, iVar1 != 0)) {
    uVar2 = *(undefined4 *)(iVar1 + 4);
  }
  return uVar2;
}

