#include "ghidra_types.h"

extern int func_0065A5B8(undefined4 *param_1,undefined1 param_2);
extern int DAT_001a4ad8;
extern int *DAT_001a4adc;
extern float DAT_001a4ae0;

// USA 001A4A88 <- EU 001A4A88 (Ghidra, non-matching)
// GLOBAL DAT_001a4ad8 int
// GLOBAL DAT_001a4adc int *
// GLOBAL DAT_001a4ae0 float

undefined4 func_001A4A88(int param_1)

{
  float fVar1;
  
  fVar1 = *(float *)(*(int *)(*DAT_001a4adc + 0x1c) + 4) - *(float *)(param_1 + 0x3d4);
  if (DAT_001a4ad8 < (int)ALBW_AS_U32(fVar1)) {
    return 0;
  }
  if ((uint)ALBW_AS_U32(DAT_001a4ae0) < (uint)ALBW_AS_U32(fVar1)) {
    return 0;
  }
  return func_0065A5B8((undefined4 *)(param_1 + 0x8bc),1);
}

