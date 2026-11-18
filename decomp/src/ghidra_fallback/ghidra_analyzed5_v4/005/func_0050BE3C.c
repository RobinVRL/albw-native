#include "ghidra_types.h"


// USA 0050BE3C <- EU 0050BE18 (Ghidra, function missing from the decomp table)

/* WARNING: Unknown calling convention */

undefined4 func_0050BE3C(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  
  if ((*(int *)(param_2 + 0x2c) == 0) || (*(char *)(*(int *)(param_2 + 0x2c) + 1) != '\x02')) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}

