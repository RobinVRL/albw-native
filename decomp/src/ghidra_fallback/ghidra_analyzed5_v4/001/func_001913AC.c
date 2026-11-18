#include "ghidra_types.h"

extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_003929C4(int *param_1);

// USA 001913AC <- EU 001913AC (Ghidra, non-matching)

void func_001913AC(int param_1)

{
  int iVar1;
  
  func_00115C54((float *)(param_1 + 0x3d0),(float *)(param_1 + 0x3d0),(float *)(param_1 + 0x3dc));
  iVar1 = func_003929C4((int *)(param_1 + 0x5c0));
  if (iVar1 != 0) {
    *(undefined1 *)(param_1 + 0x588) = 1;
  }
  return;
}

