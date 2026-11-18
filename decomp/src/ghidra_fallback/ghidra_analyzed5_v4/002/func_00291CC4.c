#include "ghidra_types.h"

extern int func_002919CC(int param_1);
extern int DAT_00291d14;

// USA 00291CC4 <- EU 00291CEC (Ghidra, non-matching)
// GLOBAL DAT_00291d14 int

undefined4 func_00291CC4(int param_1)

{
  if (*(char *)(DAT_00291d14 + *(short *)(*(int *)(param_1 + 0x14) + 0x42) * 0x10) == '\x15') {
    return func_002919CC(*(int *)(*(int *)(param_1 + 0x14) + 0x48));
  }
  return 0;
}

