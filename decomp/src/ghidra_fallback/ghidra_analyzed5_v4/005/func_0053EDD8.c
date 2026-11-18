#include "ghidra_types.h"

extern float DAT_0053edf4;

// GLOBAL DAT_0053edf4 float
// USA 0053EDD8 <- EU 0053ED94 (Ghidra, function missing from the decomp table)

undefined4 func_0053EDD8(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(*(int *)(param_1 + 0x10) + 0x14);
  if (*(char *)(iVar1 + 0x1c) == '\0') {
    if (*(float *)(iVar1 + 0x10) < DAT_0053edf4) {
      if (*(float *)(iVar1 + 8) <= DAT_0053edf4) {
        return 1;
      }
    }
    else if (*(float *)(iVar1 + 8) == *(float *)(iVar1 + 0x14)) {
      return 1;
    }
  }
  return 0;
}

