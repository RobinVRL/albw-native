#include "ghidra_types.h"

extern int func_0031EDC4(int param_1,float *param_2,undefined1 param_3,float fparam_0);
extern int DAT_00291830;

// USA 002917D4 <- EU 002917FC (Ghidra, non-matching)
// GLOBAL DAT_00291830 int

undefined4 func_002917D4(int param_1,undefined4 param_2,float fparam_0)

{
  if (*(char *)(DAT_00291830 + *(short *)(*(int *)(param_1 + 0x14) + 0x42) * 0x10) == '\x02') {
    return func_0031EDC4(*(int *)(*(int *)(param_1 + 0x14) + 0x48),(float *)0x0,(undefined1)param_2,
                  fparam_0);
  }
  return 0;
}

