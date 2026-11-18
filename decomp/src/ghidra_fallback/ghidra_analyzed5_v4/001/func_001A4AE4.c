#include "ghidra_types.h"

extern int func_0065A5B8(undefined4 *param_1,undefined1 param_2);
extern uint DAT_001a4b60;
extern int *DAT_001a4b64;

// USA 001A4AE4 <- EU 001A4AE4 (Ghidra, non-matching)
// GLOBAL DAT_001a4b60 uint
// GLOBAL DAT_001a4b64 int *

undefined4 func_001A4AE4(int param_1)

{
  float fVar1;
  
  if (*(int *)(param_1 + 0x8bc) < 0x14) {
    if (*(char *)(param_1 + 0x8fe) != '\0') {
      fVar1 = *(float *)(*(int *)(*DAT_001a4b64 + 0x1c) + 4) - *(float *)(param_1 + 0x3d4);
      if (((int)DAT_001a4b60 < (int)ALBW_AS_U32(fVar1)) || ((DAT_001a4b60 | DAT_001a4b60 << 10) < (uint)ALBW_AS_U32(fVar1))) {
        return func_0065A5B8((undefined4 *)(param_1 + 0x8bc),0);
      }
    }
  }
  else {
    func_0065A5B8((undefined4 *)(param_1 + 0x8bc),3);
  }
  return 0;
}

