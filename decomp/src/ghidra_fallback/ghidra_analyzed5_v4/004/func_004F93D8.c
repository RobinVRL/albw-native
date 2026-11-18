#include "ghidra_types.h"

extern int func_0054D884(int param_1,uint param_2);

// USA 004F93D8 <- EU 004F93B0 (Ghidra, non-matching)

float func_004F93D8(int param_1,uint param_2)

{
  int iVar1;
  
  iVar1 = func_0054D884(*(int *)(param_1 + 0x2d0) + 0x18,param_2);
  return *(float *)(param_1 + 0x14) * *(float *)(iVar1 + 4);
}

