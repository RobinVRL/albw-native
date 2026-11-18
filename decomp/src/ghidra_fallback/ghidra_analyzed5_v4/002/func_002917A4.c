#include "ghidra_types.h"

extern int func_0031EDC4(int param_1,float *param_2,undefined1 param_3,float fparam_0);
extern int DAT_002917f8;

// USA 002917A4 <- EU 002917CC (Ghidra, non-matching)
// GLOBAL DAT_002917f8 int

undefined4 func_002917A4(int param_1,float *param_2,undefined4 param_3,float fparam_0)

{
  undefined4 uVar1;
  
  if (*(char *)(DAT_002917f8 + *(short *)(*(int *)(param_1 + 0x14) + 0x42) * 0x10) == '\x02') {
    uVar1 = func_0031EDC4(*(int *)(*(int *)(param_1 + 0x14) + 0x48),param_2,(undefined1)param_3,
                          fparam_0);
    return uVar1;
  }
  return 0;
}

