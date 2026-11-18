#include "ghidra_types.h"

extern int *DAT_00165e78;

// USA 00165E20 <- EU 00165E24 (Ghidra, non-matching)
// GLOBAL DAT_00165e78 int *

undefined4 func_00165E20(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  piVar1 = DAT_00165e78;
  *(undefined2 *)(param_1 + 0xec) = 0;
  iVar2 = *piVar1;
  iVar3 = 0;
  if (iVar2 != 0) {
    iVar3 = *(int *)(iVar2 + 0x44);
  }
  if ((iVar2 != 0 && iVar3 != 0) && (iVar3 == param_1)) {
    *(undefined1 *)(param_1 + 0xf8) = 1;
    *(undefined1 *)(param_1 + 0xfa) = 0;
    *(undefined1 *)(param_1 + 0xf9) = 1;
    *(undefined2 *)(param_1 + 0xb2) = 0;
    return 1;
  }
  return 0;
}

