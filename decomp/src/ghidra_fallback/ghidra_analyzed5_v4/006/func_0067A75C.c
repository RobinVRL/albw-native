#include "ghidra_types.h"

extern int func_0067D648(int param_1,float fparam_0);

// USA 0067A75C <- EU 0067A734 (Ghidra, non-matching)

uint func_0067A75C(int param_1,float fparam_0)

{
  ushort *puVar1;
  uint in_fpscr;
  
  puVar1 = func_0067D648(param_1,fparam_0);
  VectorUnsignedToFloat((uint)puVar1[1],(byte)(in_fpscr >> 0x15) & 3);
  return (uint)puVar1[1];
}

