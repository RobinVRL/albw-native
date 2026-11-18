#include "ghidra_types.h"

extern int func_00346C4C(int param_1,float *param_2,float fparam_0);
extern int DAT_00291a5c;

// USA 00291A04 <- EU 00291A2C (Ghidra, non-matching)
// GLOBAL DAT_00291a5c int

undefined4 func_00291A04(int param_1,float fparam_0)

{
  if (*(char *)(DAT_00291a5c + *(short *)(*(int *)(param_1 + 0x14) + 0x42) * 0x10) == '\x06') {
    return func_00346C4C(*(int *)(*(int *)(param_1 + 0x14) + 0x48),(float *)0x0,fparam_0);
  }
  return 0;
}

