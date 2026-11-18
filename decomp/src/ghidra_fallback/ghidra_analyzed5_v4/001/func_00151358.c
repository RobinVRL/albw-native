#include "ghidra_types.h"

extern int func_00115C8C(float *param_1,float *param_2,float *param_3);

// USA 00151358 <- EU 00151358 (Ghidra, non-matching)

undefined4 func_00151358(int *param_1)

{
  int iVar1;
  
  iVar1 = param_1[7];
  *(undefined1 *)(iVar1 + 0xa0) = 1;
  return func_00115C8C((float *)(iVar1 + 0x94),(float *)(*param_1 + 0x14),(float *)(param_1 + 4));
}

