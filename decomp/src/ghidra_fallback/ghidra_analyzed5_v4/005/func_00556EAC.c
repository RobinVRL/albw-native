#include "ghidra_types.h"


// USA 00556EAC <- EU 00556E54 (Ghidra, function missing from the decomp table)

bool func_00556EAC(int param_1,int param_2)

{
  return *(short *)(*(int *)(param_1 + 0x14) + 0x42) == param_2;
}

