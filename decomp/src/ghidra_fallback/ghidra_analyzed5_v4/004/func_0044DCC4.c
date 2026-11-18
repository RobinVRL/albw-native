#include "ghidra_types.h"

extern int func_00231448(int param_1);
extern float DAT_0044dcfc;
extern float DAT_0044dd00;
extern float DAT_0044dd04;
extern float DAT_0044dd08;
extern float DAT_0044dd0c;
extern float DAT_0044dd10;

// USA 0044DCC4 <- EU 0044DC9C (Ghidra, non-matching)
// GLOBAL DAT_0044dcfc float
// GLOBAL DAT_0044dd00 float
// GLOBAL DAT_0044dd04 float
// GLOBAL DAT_0044dd08 float
// GLOBAL DAT_0044dd0c float
// GLOBAL DAT_0044dd10 float

void func_0044DCC4(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  func_00231448(param_1 + 0x74);
  fVar2 = DAT_0044dd08;
  fVar1 = DAT_0044dd04;
  *(float *)(param_1 + 0xf0) =
       (DAT_0044dcfc - *(float *)(*(int *)(param_1 + 0x11c) + 0x1c)) * DAT_0044dd00;
  fVar3 = *(float *)(*(int *)(param_1 + 0x11c) + 0x20);
  *(float *)(param_1 + 0xf4) = fVar3;
  fVar3 = fVar3 - fVar1;
  if (fVar3 <= fVar2) {
    fVar3 = -fVar3;
  }
  *(float *)(param_1 + 0xf8) = DAT_0044dd10 - fVar3 * DAT_0044dd0c;
  return;
}

