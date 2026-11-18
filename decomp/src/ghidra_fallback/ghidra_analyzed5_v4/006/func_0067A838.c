#include "ghidra_types.h"

extern int func_0067E150(int param_1,float fparam_0);

// USA 0067A838 <- EU 0067A810 (Ghidra, non-matching)

int func_0067A838(int param_1,float fparam_0)

{
  byte *pbVar1;
  int iVar2;
  uint in_fpscr;
  
  pbVar1 = func_0067E150(param_1,fparam_0);
  iVar2 = (uint)pbVar1[1] + (uint)pbVar1[2] * 0x100;
  VectorUnsignedToFloat(iVar2,(byte)(in_fpscr >> 0x15) & 3);
  return iVar2;
}

