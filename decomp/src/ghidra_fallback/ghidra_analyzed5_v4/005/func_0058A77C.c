#include "ghidra_types.h"

extern int *DAT_0058a7a8;

// USA 0058A77C <- EU 0058A754 (Ghidra, non-matching)
// GLOBAL DAT_0058a7a8 int *

float func_0058A77C(int param_1,int param_2)

{
  float fVar1;
  
  if (param_2 == 0xc) {
LAB_0058a794:
    fVar1 = *(float *)(*(int *)(*DAT_0058a7a8 + 0x1c) + 4);
  }
  else {
    if (param_2 < 0xd) {
      if ((param_2 == 5 || param_2 == 8) || param_2 == 9) goto LAB_0058a794;
    }
    else if ((param_2 == 0xd || param_2 == 0xe) || param_2 == 0x1f) goto LAB_0058a794;
    fVar1 = *(float *)(param_1 + 0x3d4);
  }
  return fVar1 + *(float *)(param_1 + 0x798);
}

