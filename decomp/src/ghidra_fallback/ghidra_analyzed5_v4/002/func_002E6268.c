#include "ghidra_types.h"

extern int func_004D80A4(float *param_1,uint param_2,float fparam_0);
extern int func_004FABDC(int param_1,undefined4 param_2,uint param_3,int param_4);
extern float DAT_002e634c;
extern undefined4 DAT_002e6350;
extern undefined4 DAT_002e6354;
extern float DAT_002e6358;
extern float DAT_002e635c;
extern float DAT_002e6360;
extern float DAT_002e6364;
extern float DAT_002e6368;

// USA 002E6268 <- EU 002E6244 (Ghidra, non-matching)
// GLOBAL DAT_002e634c float
// GLOBAL DAT_002e6350 undefined4
// GLOBAL DAT_002e6354 undefined4
// GLOBAL DAT_002e6358 float
// GLOBAL DAT_002e635c float
// GLOBAL DAT_002e6360 float
// GLOBAL DAT_002e6364 float
// GLOBAL DAT_002e6368 float

undefined4 func_002E6268(int param_1)

{
  undefined4 uVar1;
  float fVar2;
  int iVar3;
  uint uVar4;
  uint in_fpscr;
  float fVar5;
  float fVar6;
  
  fVar6 = DAT_002e634c;
  *(undefined4 *)(param_1 + 0xa3c) = *(undefined4 *)(param_1 + 1000);
  *(undefined4 *)(param_1 + 0xa40) = *(undefined4 *)(param_1 + 0xa24);
  *(float *)(param_1 + 0xa28) = fVar6;
  *(float *)(param_1 + 0xa38) = fVar6;
  *(float *)(param_1 + 0xa34) = fVar6;
  uVar1 = DAT_002e6354;
  *(undefined4 *)(param_1 + 0xa2c) = DAT_002e6350;
  *(undefined4 *)(param_1 + 0xa30) = uVar1;
  uVar4 = *(uint *)(param_1 + 0xa24);
  func_004D80A4((float *)(param_1 + 0xa64),uVar4,DAT_002e6358);
  func_004D80A4((float *)(param_1 + 0x3dc),uVar4,DAT_002e635c);
  *(undefined4 *)(param_1 + 0xa44) = *(undefined4 *)(param_1 + 0x3dc);
  *(undefined4 *)(param_1 + 0xa48) = *(undefined4 *)(param_1 + 0x3e0);
  *(undefined4 *)(param_1 + 0xa4c) = *(undefined4 *)(param_1 + 0x3e4);
  fVar2 = DAT_002e6364;
  *(float *)(param_1 + 0xa54) =
       SQRT(*(float *)(param_1 + 0x3dc) * *(float *)(param_1 + 0x3dc) +
            *(float *)(param_1 + 0x3e4) * *(float *)(param_1 + 0x3e4)) * DAT_002e6360;
  iVar3 = *(int *)(param_1 + 0xa24) - *(int *)(param_1 + 0xa20);
  fVar5 = (float)VectorUnsignedToFloat(iVar3,(byte)(in_fpscr >> 0x15) & 3);
  fVar5 = fVar5 * fVar2;
  if (iVar3 < 0) {
    fVar5 = fVar5 - DAT_002e6368;
  }
  if (fVar5 <= fVar6) {
    return func_004FABDC(param_1,6,0x18,0);
  }
  return func_004FABDC(param_1,5,0x18,0);
}

