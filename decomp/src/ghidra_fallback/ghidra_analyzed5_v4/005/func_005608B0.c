#include "ghidra_types.h"

extern int func_004EB8B8(int param_1,uint param_2,undefined4 param_3,float fparam_0);
extern int *DAT_005608a0;

// USA 005608B0 <- EU 00560888 (Ghidra, non-matching)
// GLOBAL DAT_005608a0 int *

undefined4 func_005608B0(int param_1)

{
  return func_004EB8B8(*DAT_005608a0,*(uint *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x14),
                *(float *)(param_1 + 0x10));
}

