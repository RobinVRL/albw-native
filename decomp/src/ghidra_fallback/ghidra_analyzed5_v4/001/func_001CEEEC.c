#include "ghidra_types.h"

extern float DAT_001cef7c;

// USA 001CEEEC <- EU 001CEEEC (Ghidra, non-matching)
// GLOBAL DAT_001cef7c float

undefined4 func_001CEEEC(int param_1)

{
  float fVar1;
  int iVar2;
  float fVar3;
  
  fVar1 = DAT_001cef7c;
  fVar3 = *(float *)(*(int *)(param_1 + 0x430) + 0x158);
  if (fVar3 != DAT_001cef7c) {
    fVar3 = fVar3 - *(float *)(param_1 + 0x448);
    if (fVar3 < DAT_001cef7c) {
      fVar3 = DAT_001cef7c;
    }
    *(float *)(*(int *)(param_1 + 0x430) + 0x158) = fVar3;
  }
  iVar2 = *(int *)(*(int *)(param_1 + 0x434) + 0x14);
  if (*(char *)(iVar2 + 0x1c) == '\0') {
    if (*(float *)(iVar2 + 0x10) < fVar1) {
      if (fVar1 < *(float *)(iVar2 + 8)) {
        return (undefined4)param_1;
      }
    }
    else if (*(float *)(iVar2 + 8) != *(float *)(iVar2 + 0x14)) {
      return (undefined4)param_1;
    }
    *(undefined1 *)(param_1 + 0x2d7) = 1;
  }
  return (undefined4)param_1;
}

