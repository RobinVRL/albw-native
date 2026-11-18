#include "ghidra_types.h"

extern int func_004D80A4(float *param_1,uint param_2,float fparam_0);
extern undefined4 DAT_0039cac0;
extern float DAT_0039cac4;
extern undefined4 DAT_0039cac8;

// USA 0039CA94 <- EU 0039CA70 (Ghidra, non-matching)
// GLOBAL DAT_0039cac0 undefined4
// GLOBAL DAT_0039cac4 float
// GLOBAL DAT_0039cac8 undefined4

void func_0039CA94(int param_1)

{
  undefined4 uVar1;
  float fparam_0;
  
  uVar1 = DAT_0039cac0;
  *(undefined4 *)(param_1 + 0x454) = 0x5a;
  *(undefined4 *)(param_1 + 0x458) = uVar1;
  *(undefined4 *)(param_1 + 0x450) = 0;
  fparam_0 = DAT_0039cac4;
  *(float *)(param_1 + 0x4bc) = DAT_0039cac4;
  func_004D80A4((float *)(param_1 + 0x3dc),*(uint *)(param_1 + 1000),fparam_0);
  *(undefined4 *)(param_1 + 0x3e0) = DAT_0039cac8;
  *(undefined4 *)(param_1 + 0x430) = 0;
  return;
}

