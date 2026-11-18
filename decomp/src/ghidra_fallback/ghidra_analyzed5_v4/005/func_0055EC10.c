#include "ghidra_types.h"

extern int func_004EA9FC(int param_1,int param_2,float fparam_0);
extern int *DAT_0055ebfc;

// USA 0055EC10 <- EU 0055EBE8 (Ghidra, non-matching)
// GLOBAL DAT_0055ebfc int *

undefined4 func_0055EC10(int param_1)

{
  return func_004EA9FC(*DAT_0055ebfc,*(int *)(param_1 + 0x10),*(float *)(param_1 + 0xc));
}

