#include "ghidra_types.h"

extern float *DAT_0048f3a8;
extern float DAT_0048f3ac;

// USA 0048F330 <- EU 0048F308 (Ghidra, non-matching)
// GLOBAL DAT_0048f3a8 float *
// GLOBAL DAT_0048f3ac float

undefined4 func_0048F330(int param_1)

{
  bool bVar1;
  
  if ((((*(int *)(param_1 + 0x110) == 0) && ((*(uint *)(param_1 + 0x10) & 1) == 0)) &&
      (*(float *)(param_1 + 0x11c) == *DAT_0048f3a8)) &&
     (((*(float *)(param_1 + 0x120) == DAT_0048f3a8[1] &&
       (*(float *)(param_1 + 0x124) == *DAT_0048f3a8)) &&
      (*(float *)(param_1 + 0x128) == DAT_0048f3a8[1])))) {
    bVar1 = false;
    if (*(float *)(param_1 + 300) == DAT_0048f3ac) {
      bVar1 = *(float *)(param_1 + 0x130) == DAT_0048f3ac;
    }
    if (bVar1) {
      return 1;
    }
  }
  return 0;
}

