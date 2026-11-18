#include "ghidra_types.h"

extern float DAT_00188318;
extern float DAT_0018831c;

// USA 001882B0 <- EU 001882B0 (Ghidra, non-matching)
// GLOBAL DAT_00188318 float
// GLOBAL DAT_0018831c float

undefined4 func_001882B0(int param_1,undefined4 param_2,float fparam_0)

{
  float fVar1;
  float fVar2;
  
  fVar1 = DAT_0018831c;
  fVar2 = DAT_00188318;
  if ((*(char *)(param_1 + 0x6b6) == '\0') && (*(char *)(param_1 + 0x500) == '\x02')) {
    *(undefined4 *)(param_1 + 1000) = param_2;
    if ((fVar2 <= fparam_0) && (fVar2 = fparam_0, fVar1 < fparam_0)) {
      fVar2 = fVar1;
    }
    *(float *)(param_1 + 0x6dc) = fVar2;
    *(undefined1 *)(param_1 + 0x6b6) = 1;
    *(undefined1 *)(param_1 + 0x6e0) = 2;
    return 1;
  }
  return 0;
}

