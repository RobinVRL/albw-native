#include "ghidra_types.h"


// USA 00556ED0 <- EU 00556E78 (Ghidra, function missing from the decomp table)

undefined4 func_00556ED0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = *(int *)(param_1 + 0x18);
  if ((((*(byte *)(iVar1 + 0x324) & 1) == 0 && (*(byte *)(iVar1 + 0x324) & 8) == 0) &&
      (*(char *)(iVar1 + 0x168) == '\0')) || ((*(uint *)(iVar1 + 0x328) & 4) == 0)) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}

