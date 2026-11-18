#include "ghidra_types.h"

extern int func_0066B070(undefined4 *param_1,undefined1 param_2);
extern float DAT_00500008;

// USA 004FFFDC <- EU 004FFFB4 (Ghidra, non-matching)
// GLOBAL DAT_00500008 float

undefined4 func_004FFFDC(int param_1)

{
  undefined1 uVar1;
  
  if (*(char *)(*(int *)(param_1 + 0x510) + 4) == '\0') {
    if (*(short *)(param_1 + 0x508) < 1) {
      uVar1 = 3;
    }
    else {
      uVar1 = 0;
    }
    return func_0066B070((undefined4 *)(param_1 + 0x8bc),uVar1);
  }
  *(float *)(param_1 + 0x574) =
       *(float *)(param_1 + 0x574) + -*(float *)(param_1 + 0x574) * DAT_00500008;
  return 0;
}

