#include "ghidra_types.h"

extern int func_00115C8C(float *param_1,float *param_2,float *param_3);

// USA 00151150 <- EU 00151150 (Ghidra, non-matching)

undefined4 func_00151150(int param_1,float *param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x1c);
  *(undefined1 *)(iVar1 + 0xa0) = 1;
  return func_00115C8C((float *)(iVar1 + 0x94),param_2,(float *)(param_1 + 0x10));
}

