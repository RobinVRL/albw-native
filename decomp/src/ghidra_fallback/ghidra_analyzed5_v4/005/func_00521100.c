// MAPFIX-INTEGRATED v1
#include "ghidra_types.h"

extern int *DAT_00521120;

// USA 00521100 <- EU 005210D8 (Ghidra, non-matching)
// MAPFIX: tools/ghidra_name_fixes.json applied (do not apply again)
// GLOBAL DAT_00521120 int *

undefined4 func_00521100(int param_1,float fparam_0)

{
  undefined4 uVar1;
  float fVar2;
  
  fVar2 = *(float *)(*(int *)(*DAT_00521120 + 0x1c) + 4) - (*(float *)(param_1 + 0x3d4) + fparam_0);
  if ((fVar2 <= *(float *)(param_1 + 0x3b0)) || (*(float *)(param_1 + 0x3b4) <= fVar2)) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}

