#include "ghidra_types.h"


// USA 0041CACC <- EU 0041CAAC (Ghidra, non-matching)

void * func_0041CACC(int param_1,undefined4 param_2,undefined1 param_3,float fparam_0)

{
  *(float *)(param_1 + 0x160) = fparam_0;
  *(undefined4 *)(param_1 + 0x168) = param_2;
  *(undefined4 *)(param_1 + 0x164) = 0;
  *(undefined1 *)(param_1 + 0x133) = param_3;
  return (void *)param_1;
}

