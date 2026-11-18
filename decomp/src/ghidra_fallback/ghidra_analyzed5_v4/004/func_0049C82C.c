#include "ghidra_types.h"


// USA 0049C82C <- EU 0049C804 (Ghidra, function missing from the decomp table)

/* WARNING: Unknown calling convention */

undefined4 func_0049C82C(int param_1,int param_2)

{
  undefined4 uVar1;
  
  if (param_1 - param_2 < 0) {
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}

