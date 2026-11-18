#include "ghidra_types.h"

extern float DAT_0027fb98;

// USA 0027FB10 <- EU 0027FB38 (Ghidra, non-matching)
// GLOBAL DAT_0027fb98 float

void func_0027FB10(int param_1)

{
  int iVar1;
  float fVar2;
  
  iVar1 = *(int *)(*(int *)(param_1 + 0x4b8) + 0x14);
  fVar2 = *(float *)(iVar1 + 8);
  if (*(int *)(param_1 + 0x4ec) == 0) {
    if (fVar2 != DAT_0027fb98) {
      return;
    }
  }
  else if (*(int *)(param_1 + 0x4ec) == 1) {
    if (fVar2 != 15.0) {
      return;
    }
  }
  else if (fVar2 != 35.0) {
    return;
  }
  *(float *)(iVar1 + 0x10) = DAT_0027fb98;
  return;
}

