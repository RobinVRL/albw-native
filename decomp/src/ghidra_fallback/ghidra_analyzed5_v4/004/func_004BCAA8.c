#include "ghidra_types.h"

extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern undefined4 DAT_004bcaac;

// USA 004BCAA8 <- EU 004BCA80 (Ghidra, non-matching)
// GLOBAL DAT_004bcaac undefined4

void func_004BCAA8(int param_1)

{
  undefined4 uVar1;
  
  func_00115C54((float *)(param_1 + 0x3d0),(float *)(param_1 + 0x3d0),(float *)(param_1 + 0x3dc));
  uVar1 = DAT_004bcaac;
  *(undefined4 *)(param_1 + 0x3dc) = DAT_004bcaac;
  *(undefined4 *)(param_1 + 0x3e0) = uVar1;
  *(undefined4 *)(param_1 + 0x3e4) = uVar1;
  return;
}

