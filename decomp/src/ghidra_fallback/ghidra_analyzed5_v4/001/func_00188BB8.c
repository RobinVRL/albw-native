#include "ghidra_types.h"

extern int func_00115C54(float *param_1,float *param_2,float *param_3);

// USA 00188BB8 <- EU 00188BB8 (Ghidra, non-matching)

void func_00188BB8(int param_1)

{
  func_00115C54((float *)(param_1 + 0x3d0),(float *)(param_1 + 0x3d0),(float *)(param_1 + 0x3dc));
  if (0x50 < *(int *)(param_1 + 0x4fc)) {
    *(undefined1 *)(param_1 + 0x2d7) = 1;
  }
  return;
}

