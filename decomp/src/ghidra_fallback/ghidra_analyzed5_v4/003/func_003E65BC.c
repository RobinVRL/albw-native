#include "ghidra_types.h"


// USA 003E65BC <- EU 003E659C (Ghidra, non-matching)

/* WARNING: Removing unreachable block (ram,0x003e65cc) */

uint func_003E65BC(uint *param_1,int param_2)

{
  uint uVar1;
  
  if (param_2 != 0) {
    uVar1 = *param_1;
    if (param_2 + param_1[1] <= uVar1) {
      uVar1 = param_2 + param_1[1];
    }
    param_1[1] = uVar1;
  }
  return param_1[1];
}

