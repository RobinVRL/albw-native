#include "ghidra_types.h"

extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_00392C20(int param_1);

// USA 001910EC <- EU 001910EC (Ghidra, non-matching)

void func_001910EC(int param_1)

{
  int iVar1;
  
  func_00115C54((float *)(param_1 + 0x3d0),(float *)(param_1 + 0x3d0),(float *)(param_1 + 0x3dc));
  iVar1 = func_00392C20(param_1 + 0x5c0);
  if (iVar1 != 0) {
    *(undefined1 *)(param_1 + 0x588) = 1;
  }
  return;
}

