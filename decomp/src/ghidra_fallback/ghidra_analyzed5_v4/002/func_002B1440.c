#include "ghidra_types.h"


// USA 002B1440 <- EU 002B141C (Ghidra, non-matching)

void func_002B1440(int param_1,int param_2,ushort param_3,undefined1 param_4)

{
  int iVar1;
  undefined1 uVar2;
  
  iVar1 = *(int *)(param_1 + 0x510);
  if (param_2 < 0) {
    uVar2 = 4;
  }
  else {
    uVar2 = (undefined1)param_2;
  }
  *(undefined1 *)(iVar1 + 0x248) = uVar2;
  *(ushort *)(iVar1 + 0x254) = param_3 | *(ushort *)(iVar1 + 0x254);
  *(undefined1 *)(iVar1 + 0x24a) = param_4;
  return;
}

