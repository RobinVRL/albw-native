#include "ghidra_types.h"


// USA 00537B38 <- EU 00537B10 (Ghidra, non-matching)

undefined4 func_00537B38(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = *(int *)(*(int *)(param_1 + 0x10) + 0x434);
  if (iVar1 == 2) {
    uVar2 = 0;
  }
  else if (iVar1 == 3) {
    uVar2 = 1;
  }
  else if (iVar1 == 4) {
    uVar2 = 2;
  }
  else if (iVar1 == 5) {
    uVar2 = 3;
  }
  else {
    uVar2 = 4;
  }
  return uVar2;
}

