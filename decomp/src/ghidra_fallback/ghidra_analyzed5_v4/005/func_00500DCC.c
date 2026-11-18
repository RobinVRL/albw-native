#include "ghidra_types.h"

extern int func_0066B1B4(undefined4 *param_1,undefined1 param_2);
extern float DAT_00500df8;

// USA 00500DCC <- EU 00500DA4 (Ghidra, non-matching)
// GLOBAL DAT_00500df8 float

undefined4 func_00500DCC(int param_1)

{
  undefined1 uVar1;
  
  if (*(char *)(*(int *)(param_1 + 0x510) + 4) == '\0') {
    if (*(short *)(param_1 + 0x508) < 1) {
      uVar1 = 4;
    }
    else {
      uVar1 = 2;
    }
    return func_0066B1B4((undefined4 *)(param_1 + 0x8bc),uVar1);
  }
  *(float *)(param_1 + 0x574) =
       *(float *)(param_1 + 0x574) + -*(float *)(param_1 + 0x574) * DAT_00500df8;
  return 0;
}

