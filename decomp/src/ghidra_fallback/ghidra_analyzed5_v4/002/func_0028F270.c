#include "ghidra_types.h"

extern int func_003776F8(int param_1,float *param_2,int param_3,int param_4);
extern int DAT_0028f2cc;

// USA 0028F270 <- EU 0028F298 (Ghidra, non-matching)
// GLOBAL DAT_0028f2cc int

undefined4 func_0028F270(int param_1,float *param_2,int param_3,int param_4)

{
  if ((*(char *)(DAT_0028f2cc + *(short *)(param_1 + 0x42) * 0x10) == '\v') &&
     (*(int *)(param_1 + 0x48) != 0)) {
    return func_003776F8(*(int *)(param_1 + 0x48),param_2,param_3,param_4);
  }
  return 0;
}

