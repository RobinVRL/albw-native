#include "ghidra_types.h"


// USA 003E655C <- EU 003E653C (Ghidra, non-matching)

/* WARNING: Removing unreachable block (ram,0x003e6588) */

uint * func_003E655C(uint *param_1,int param_2,int param_3)

{
  uint uVar1;
  
  uVar1 = 0;
  if (param_3 != 0) {
    if ((param_3 == 1) || (param_3 != 2)) goto LAB_003e6560;
    uVar1 = *param_1;
  }
  param_1[1] = uVar1;
LAB_003e6560:
  if (param_2 != 0) {
    uVar1 = *param_1;
    if (param_1[1] + param_2 <= *param_1) {
      uVar1 = param_1[1] + param_2;
    }
    param_1[1] = uVar1;
  }
  return param_1;
}

