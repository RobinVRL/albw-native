#include "ghidra_types.h"

extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_0065FCF8(undefined4 *param_1,undefined1 param_2);
extern float DAT_002521d8;
extern float DAT_002521dc;

// USA 00252160 <- EU 00252188 (Ghidra, non-matching)
// GLOBAL DAT_002521d8 float
// GLOBAL DAT_002521dc float

void func_00252160(int param_1)

{
  float fVar1;
  
  fVar1 = *(float *)(param_1 + 0x550);
  *(float *)(param_1 + 0x550) = fVar1 + (DAT_002521d8 - fVar1) * DAT_002521dc;
  func_00115C54((float *)(param_1 + 0x3d0),(float *)(param_1 + 0x3d0),(float *)(param_1 + 0x3dc));
  if (0x14 < *(int *)(param_1 + 0x4fc)) {
    func_0065FCF8((undefined4 *)(param_1 + 0x4fc),6);
  }
  return;
}

