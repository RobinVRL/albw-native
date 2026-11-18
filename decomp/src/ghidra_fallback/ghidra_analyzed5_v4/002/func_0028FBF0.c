#include "ghidra_types.h"

extern int func_00377820(int param_1,float *param_2);
extern int DAT_0028fc48;

// USA 0028FBF0 <- EU 0028FC18 (Ghidra, non-matching)
// GLOBAL DAT_0028fc48 int

undefined4 func_0028FBF0(int param_1,float *param_2)

{
  int iVar1;
  
  if ((*(char *)(DAT_0028fc48 + *(short *)(*(int *)(param_1 + 0x14) + 0x42) * 0x10) == '\v') &&
     (iVar1 = *(int *)(*(int *)(param_1 + 0x14) + 0x48), iVar1 != 0)) {
    return func_00377820(iVar1,param_2);
  }
  return 0;
}

