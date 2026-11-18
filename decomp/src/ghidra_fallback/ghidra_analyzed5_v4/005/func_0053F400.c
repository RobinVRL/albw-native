#include "ghidra_types.h"


// USA 0053F400 <- EU 0053F3D8 (Ghidra, non-matching)

undefined4 func_0053F400(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = *(int *)(*(int *)(param_1 + 0x14) + 0x48);
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar2 = *(undefined4 *)(iVar1 + 0x58);
  }
  return uVar2;
}

