#include "ghidra_types.h"

extern int DAT_0040e2ec;
extern undefined4 DAT_0040e2f0;
extern float DAT_0040e2f4;

// USA 0040E2D0 <- EU 0040E2B0 (Ghidra, non-matching)
// GLOBAL DAT_0040e2ec int
// GLOBAL DAT_0040e2f0 undefined4
// GLOBAL DAT_0040e2f4 float

undefined4 func_0040E2D0(undefined1 *param_1,float fparam_0)

{
  undefined4 uVar1;
  float fVar2;
  
  uVar1 = DAT_0040e2f0;
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(DAT_0040e2ec + 0x1fc);
  *(undefined2 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 8) = uVar1;
  param_1[0x18] = 0x7f;
  *(undefined4 *)(param_1 + 0xc) = uVar1;
  fVar2 = DAT_0040e2f4;
  *param_1 = 0;
  *(float *)(param_1 + 4) = fparam_0 * fVar2;
  return (undefined4)param_1;
}

