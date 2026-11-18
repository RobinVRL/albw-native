#include "ghidra_types.h"

extern int func_0038C2E8(int param_1,float *param_2,float fparam_0);
extern int DAT_00292034;

// USA 00291FE0 <- EU 00292008 (Ghidra, non-matching)
// GLOBAL DAT_00292034 int

undefined4 func_00291FE0(int param_1,float *param_2,float fparam_0)

{
  if (*(char *)(DAT_00292034 + *(short *)(*(int *)(param_1 + 0x14) + 0x42) * 0x10) == '\x17') {
    return func_0038C2E8(*(int *)(*(int *)(param_1 + 0x14) + 0x48),param_2,fparam_0);
  }
  return 0;
}

