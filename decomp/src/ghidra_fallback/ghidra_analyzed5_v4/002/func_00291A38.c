#include "ghidra_types.h"

extern int func_00346C4C(int param_1,float *param_2,float fparam_0);
extern int DAT_00291a8c;

// USA 00291A38 <- EU 00291A60 (Ghidra, non-matching)
// GLOBAL DAT_00291a8c int

undefined4 func_00291A38(int param_1,float *param_2,float fparam_0)

{
  undefined4 uVar1;
  
  if (*(char *)(DAT_00291a8c + *(short *)(*(int *)(param_1 + 0x14) + 0x42) * 0x10) == '\x06') {
    uVar1 = func_00346C4C(*(int *)(*(int *)(param_1 + 0x14) + 0x48),param_2,fparam_0);
    return uVar1;
  }
  return 0;
}

