#include "ghidra_types.h"


// USA 0051D5CC <- EU 0051D5A4 (Ghidra, non-matching)

undefined4 func_0051D5CC(int *param_1)

{
  undefined4 uVar1;
  
  if ((*param_1 == 0) || (ALBW_AS_F32(param_1[0x23]) < *(float *)(*param_1 + 8))) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}

