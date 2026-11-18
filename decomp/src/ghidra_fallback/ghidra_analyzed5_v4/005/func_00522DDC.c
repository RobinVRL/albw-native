#include "ghidra_types.h"


// USA 00522DDC <- EU 00522DB4 (Ghidra, non-matching)

undefined4 func_00522DDC(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if ((*(int *)(param_1 + 0xf74) == 0) ||
     (iVar1 = *(int *)(*(int *)(param_1 + 0xf74) + 0x14), iVar1 == 0)) {
    uVar2 = 3;
  }
  else {
    uVar2 = *(undefined4 *)(iVar1 + 4);
  }
  return uVar2;
}

