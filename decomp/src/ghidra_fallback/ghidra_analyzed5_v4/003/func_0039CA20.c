#include "ghidra_types.h"

extern int func_004D80A4(float *param_1,uint param_2,float fparam_0);
extern undefined4 DAT_0039ca60;
extern undefined4 DAT_0039ca64;
extern float DAT_0039ca68;
extern undefined4 DAT_0039ca6c;

// USA 0039CA20 <- EU 0039C9FC (Ghidra, non-matching)
// GLOBAL DAT_0039ca60 undefined4
// GLOBAL DAT_0039ca64 undefined4
// GLOBAL DAT_0039ca68 float
// GLOBAL DAT_0039ca6c undefined4

void func_0039CA20(int param_1)

{
  undefined4 uVar1;
  float fparam_0;
  
  uVar1 = DAT_0039ca60;
  *(undefined4 *)(param_1 + 0x454) = 0x19;
  *(undefined4 *)(param_1 + 0x458) = uVar1;
  *(undefined4 *)(param_1 + 0x450) = 0;
  uVar1 = DAT_0039ca64;
  *(undefined4 *)(param_1 + 0x480) = DAT_0039ca64;
  *(undefined4 *)(param_1 + 0x484) = uVar1;
  *(undefined4 *)(param_1 + 0x488) = uVar1;
  fparam_0 = DAT_0039ca68;
  *(float *)(param_1 + 0x4bc) = DAT_0039ca68;
  func_004D80A4((float *)(param_1 + 0x3dc),*(uint *)(param_1 + 1000),fparam_0);
  *(undefined4 *)(param_1 + 0x3e0) = DAT_0039ca6c;
  *(undefined4 *)(param_1 + 0x430) = 0;
  return;
}

