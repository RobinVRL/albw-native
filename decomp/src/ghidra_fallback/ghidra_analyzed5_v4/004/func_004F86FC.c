#include "ghidra_types.h"


// USA 004F86FC <- EU 004F86D4 (Ghidra, non-matching)

undefined4 func_004F86FC(int param_1,undefined1 param_2,float fparam_0)

{
  float fVar1;
  
  fVar1 = *(float *)(param_1 + 0x4c4) + fparam_0;
  *(float *)(param_1 + 0x84c) = fVar1 * fVar1;
  *(undefined1 *)(param_1 + 0x850) = param_2;
  return (undefined4)param_1;
}

