#include "ghidra_types.h"

extern int *DAT_002fcc4c;

// USA 002FCC2C <- EU 002FCC08 (Ghidra, non-matching)
// GLOBAL DAT_002fcc4c int *

undefined4 func_002FCC2C(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *DAT_002fcc4c;
  iVar2 = 0;
  if (iVar1 != 0) {
    iVar2 = *(int *)(iVar1 + 0x44);
  }
  if ((iVar1 != 0 && iVar2 != 0) && (iVar2 == *(int *)(param_1 + 0x488))) {
    *(undefined1 *)(*(int *)(param_1 + 0x488) + 0xae) = 1;
    return 1;
  }
  return 0;
}

