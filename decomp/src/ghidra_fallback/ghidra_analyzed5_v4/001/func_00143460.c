#include "ghidra_types.h"

extern undefined4 func_00151148(int param_1,int param_2);
extern int func_004CF478(int param_1,int param_2);
extern int func_004D8548(float *param_1,float *param_2,float *param_3,float fparam_0,float fparam_1, float fparam_2,float fparam_3,float fparam_4);
extern float DAT_001435a0;
extern float DAT_001435a4;
extern float DAT_001435a8;
extern float DAT_001435ac;
extern float DAT_001435b0;

// USA 00143460 <- EU 00143460 (Ghidra, non-matching)
// GLOBAL DAT_001435a0 float
// GLOBAL DAT_001435a4 float
// GLOBAL DAT_001435a8 float
// GLOBAL DAT_001435ac float
// GLOBAL DAT_001435b0 float

void func_00143460(int param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint in_fpscr;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  if (*(uint *)(param_1 + 0x490) < *(uint *)(param_1 + 0x494)) {
    *(uint *)(param_1 + 0x490) = *(uint *)(param_1 + 0x490) + 1;
  }
  else {
    fVar7 = DAT_001435a0;
    if (*(char *)(param_1 + 0x411) == '\0') {
      if (*(int *)(param_1 + 0x48c) != 0) {
        func_00151148(*(int *)(param_1 + 0x48c),0);
      }
      func_004CF478(*(int *)(param_1 + 0x46c),1);
      *(undefined1 *)(param_1 + 0x411) = 1;
      *(float *)(param_1 + 0x448) = fVar7;
      *(float *)(param_1 + 0x44c) = fVar7;
      *(float *)(param_1 + 0x450) = fVar7;
    }
    if (*(uint *)(param_1 + 0x4a8) < *(uint *)(param_1 + 0x4ac)) {
      iVar2 = *(uint *)(param_1 + 0x4a8) + 1;
      *(int *)(param_1 + 0x4a8) = iVar2;
      fVar4 = (float)VectorUnsignedToFloat(iVar2,(byte)(in_fpscr >> 0x15) & 3);
      fVar6 = (float)VectorUnsignedToFloat(*(uint *)(param_1 + 0x4ac),(byte)(in_fpscr >> 0x15) & 3);
      fVar8 = DAT_001435a8;
      fVar9 = DAT_001435ac;
      uVar1 = func_004D8548((float *)(param_1 + 0x3d0),(float *)(param_1 + 0x460),
                            (float *)(param_1 + 0x454),fVar4,DAT_001435ac,DAT_001435a8,fVar6,
                            DAT_001435a4);
      uVar3 = *(uint *)(param_1 + 0x4ac);
      if (uVar3 != 0) {
        uVar1 = *(uint *)(param_1 + 0x4a8);
      }
      fVar4 = fVar9;
      if ((uVar3 != 0 && uVar1 != 0) && (fVar4 = fVar8, uVar1 < uVar3)) {
        fVar4 = (float)VectorUnsignedToFloat(uVar1,(byte)(in_fpscr >> 0x15) & 3);
        fVar4 = fVar4 * *(float *)(param_1 + 0x4b0);
      }
      fVar5 = fVar4 * fVar4 - fVar4;
      fVar6 = fVar5 * fVar4;
      fVar4 = fVar4 * fVar4 - fVar6 * DAT_001435b0;
      fVar7 = (fVar7 - fVar4 * fVar7) + fVar4 * fVar8 + (fVar6 - fVar5) * DAT_001435b0 +
              fVar6 * fVar9;
      *(float *)(param_1 + 0x448) = fVar7;
      *(float *)(param_1 + 0x44c) = fVar7;
      *(float *)(param_1 + 0x450) = fVar7;
    }
  }
  return;
}

