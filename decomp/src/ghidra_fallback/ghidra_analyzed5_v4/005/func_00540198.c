#include "ghidra_types.h"

extern int func_005593E4(int param_1);
extern int DAT_0054019c;

// USA 00540198 <- EU 00540170 (Ghidra, non-matching)
// GLOBAL DAT_0054019c int

undefined4 func_00540198(int param_1)

{
  if (*(char *)(DAT_0054019c + *(short *)(*(int *)(param_1 + 0x14) + 0x42) * 0x10) == '\v') {
    return func_005593E4(*(int *)(*(int *)(param_1 + 0x14) + 0x48));
  }
  return 0;
}

