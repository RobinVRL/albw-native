#include "ghidra_types.h"


// USA 001E5EDC <- EU 001E5EDC (Ghidra, non-matching)

undefined4 func_001E5EDC(int param_1)

{
  undefined4 uVar1;
  
  if ((*(float *)(param_1 + 0x480) == *(float *)(param_1 + 0x498)) &&
     (*(float *)(param_1 + 0x478) == *(float *)(param_1 + 0x490))) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

