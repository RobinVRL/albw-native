#include "ghidra_types.h"

extern int func_0067E848(int param_1,float fparam_0);

// USA 0067A868 <- EU 0067A840 (Ghidra, non-matching)

uint func_0067A868(int param_1,float fparam_0)

{
  uint *puVar1;
  uint in_fpscr;
  
  puVar1 = func_0067E848(param_1,fparam_0);
  VectorUnsignedToFloat(*puVar1 >> 0xc,(byte)(in_fpscr >> 0x15) & 3);
  return *puVar1 >> 0xc;
}

