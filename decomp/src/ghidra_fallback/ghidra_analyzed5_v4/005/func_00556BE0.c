#include "ghidra_types.h"

extern int *DAT_00556b9c;

// GLOBAL DAT_00556b9c int *
// USA 00556BE0 <- EU 00556B6C (Ghidra, function missing from the decomp table)

undefined4 func_00556BE0(int param_1)

{
  undefined4 uVar1;
  
  if ((*(int *)(*DAT_00556b9c + 0x44) == 0) ||
     (*(int *)(*DAT_00556b9c + 0x44) != *(int *)(*(int *)(param_1 + 0x14) + 0x6c))) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}

