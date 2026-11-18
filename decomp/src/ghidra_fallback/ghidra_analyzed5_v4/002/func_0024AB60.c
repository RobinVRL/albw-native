// MAPFIX-INTEGRATED v1
#include "ghidra_types.h"

extern int func_0014FAFC(int param_1,uint param_2,float fparam_0);
extern undefined4 func_00151148(int param_1,int param_2);
extern int func_0024ADF4(int param_1,undefined4 param_2,float fparam_0,float fparam_1);
extern int func_004CF478(int param_1,int param_2);
extern float DAT_0024ac24;
extern float DAT_0024ac28;
extern float DAT_0024ac2c;
extern float DAT_0024ac30;
extern float DAT_0024ac34;
extern float DAT_0024ac38;

// USA 0024AB60 <- EU 0024AB60 (Ghidra, non-matching)
// GLOBAL DAT_0024ac24 float
// GLOBAL DAT_0024ac28 float
// GLOBAL DAT_0024ac2c float
// GLOBAL DAT_0024ac30 float
// GLOBAL DAT_0024ac34 float
// GLOBAL DAT_0024ac38 float

void func_0024AB60(int param_1)

{
  float fparam_0;
  float fVar1;
  float fVar2;
  
  func_0024ADF4(param_1,0,DAT_0024ac28,DAT_0024ac24);
  *(float *)(param_1 + 0x3d4) = *(float *)(param_1 + 0xc) + DAT_0024ac2c;
  *(undefined4 *)(param_1 + 0x47c) = *(undefined4 *)(param_1 + 0x3d0);
  *(undefined4 *)(param_1 + 0x480) = *(undefined4 *)(param_1 + 0x3d4);
  *(float *)(param_1 + 0x484) = *(float *)(param_1 + 0x3d8);
  fparam_0 = DAT_0024ac30;
  fVar2 = *(float *)(param_1 + 0x47c) - *(float *)(param_1 + 8);
  fVar1 = *(float *)(param_1 + 0x3d8) - *(float *)(param_1 + 0x10);
  *(float *)(param_1 + 0x488) = SQRT(fVar2 * fVar2 + fVar1 * fVar1);
  *(uint *)(param_1 + 1000) = *(uint *)(param_1 + 0x24);
  func_0014FAFC(param_1,*(uint *)(param_1 + 0x24),fparam_0);
  *(float *)(param_1 + 0x3e0) = DAT_0024ac38 / (*(float *)(param_1 + 0x488) * DAT_0024ac34);
  func_004CF478(*(int *)(param_1 + 0x40c),1);
  func_00151148(*(int *)(param_1 + 0x418),1);
  *(undefined4 *)(param_1 + 0x444) = 0;
  return;
}

