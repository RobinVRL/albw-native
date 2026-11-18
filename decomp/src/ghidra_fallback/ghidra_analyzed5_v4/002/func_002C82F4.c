#include "ghidra_types.h"

extern int func_00663434(undefined4 *param_1,undefined1 param_2);
extern float DAT_002c8310;
extern undefined4 DAT_002c8314;

// USA 002C82F4 <- EU 002C82D0 (Ghidra, non-matching)
// GLOBAL DAT_002c8310 float
// GLOBAL DAT_002c8314 undefined4

undefined4 func_002C82F4(int param_1)

{
  float fVar1;
  
  fVar1 = *(float *)(param_1 + 0x488) + DAT_002c8310;
  *(float *)(param_1 + 0x488) = fVar1;
  if ((int)ALBW_AS_U32(fVar1) < 0x3f800000) {
    return 0;
  }
  *(undefined4 *)(param_1 + 0x488) = DAT_002c8314;
  return func_00663434((undefined4 *)(param_1 + 0x40c),3);
}

