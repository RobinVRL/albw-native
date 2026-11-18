#include "ghidra_types.h"


// USA 00433ABC <- EU 00433A9C (Ghidra, non-matching)

int * func_00433ABC(int *param_1,int *param_2,int param_3)

{
  int *piVar1;
  
  *param_1 = (int)param_2;
  param_1[1] = param_3;
  param_1[2] = param_3 - param_2[2] >> 4;
  piVar1 = (int *)(*param_2 + (uint)*(ushort *)(param_3 + 4) * 0xc);
  param_1[3] = *piVar1;
  param_1[4] = piVar1[1];
  param_1[5] = piVar1[2];
  param_1[6] = *(int *)(*param_1 + 0x10);
  return param_1;
}

