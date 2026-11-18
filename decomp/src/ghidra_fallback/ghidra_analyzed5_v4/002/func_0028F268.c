#include "ghidra_types.h"

extern int func_003776F8(int param_1,float *param_2,int param_3,int param_4);
extern int DAT_0028f2cc;

// USA 0028F268 <- EU 0028F290 (Ghidra, non-matching)
// GLOBAL DAT_0028f2cc int

undefined4 func_0028F268(int param_1,float *param_2,int param_3,int param_4)

{
  int iVar1;
  
  if ((*(char *)(DAT_0028f2cc + *(short *)(*(int *)(param_1 + 0x14) + 0x42) * 0x10) == '\v') &&
     (iVar1 = *(int *)(*(int *)(param_1 + 0x14) + 0x48), iVar1 != 0)) {
    return func_003776F8(iVar1,param_2,param_3,param_4);
  }
  return 0;
}

