// MAPFIX-INTEGRATED v1
#include "ghidra_types.h"


// USA 00255980 <- EU 002559A8 (Ghidra, non-matching)
// MAPFIX: tools/ghidra_name_fixes.json applied (do not apply again)

undefined4 func_00255980(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = *(int *)(param_1 + 0x10);
  if (*(char *)(iVar1 + 0x504) == '\0') {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined4 *)(iVar1 + 0x500);
    *(undefined4 *)(iVar1 + 0x500) = 0;
  }
  return uVar2;
}

