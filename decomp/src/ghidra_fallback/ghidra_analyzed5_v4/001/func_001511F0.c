#include "ghidra_types.h"

extern int func_00115C8C(float *param_1,float *param_2,float *param_3);

// USA 001511F0 <- EU 001511F0 (Ghidra, non-matching)

undefined4 func_001511F0(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *param_1;
  iVar2 = param_1[7];
  *(undefined1 *)(iVar2 + 0xa0) = 1;
  return func_00115C8C((float *)(iVar2 + 0x94),(float *)(iVar1 + 0x14),(float *)(param_1 + 4));
}

