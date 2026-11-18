#include "ghidra_types.h"

extern int func_0065888C(undefined4 *param_1,undefined1 param_2);
extern int *DAT_0016e814;
extern float DAT_0016e818;
extern float DAT_0016e81c;

// USA 0016E7AC <- EU 0016E7AC (Ghidra, non-matching)
// GLOBAL DAT_0016e814 int *
// GLOBAL DAT_0016e818 float
// GLOBAL DAT_0016e81c float

undefined4 func_0016E7AC(int param_1)

{
  float fVar1;
  
  if (*(int *)(*DAT_0016e814 + 0x34) != 0) {
    return 0;
  }
  if (*(int *)(*DAT_0016e814 + 0x3db94) != 0) {
    return 0;
  }
  fVar1 = *(float *)(param_1 + 0x3f8) + DAT_0016e818;
  if (DAT_0016e81c < fVar1) {
    fVar1 = DAT_0016e81c;
  }
  *(float *)(param_1 + 0x3f8) = fVar1;
  if ((int)ALBW_AS_U32(fVar1) < 0x3f800000) {
    return 0;
  }
  return func_0065888C((undefined4 *)(param_1 + 0x2e0),2);
}

