#include "ghidra_types.h"

extern float DAT_00420eb0;
extern float DAT_00420eb4;
extern float DAT_00420eb8;
extern float DAT_00420ebc;

// USA 00420DE8 <- EU 00420DC8 (Ghidra, non-matching)
// GLOBAL DAT_00420eb0 float
// GLOBAL DAT_00420eb4 float
// GLOBAL DAT_00420eb8 float
// GLOBAL DAT_00420ebc float

uint func_00420DE8(float *param_1,int param_2,undefined4 param_3)

{
  float fVar1;
  uint uVar2;
  float fVar3;
  uint uVar4;
  uint uVar5;
  
  fVar3 = *param_1;
  fVar1 = DAT_00420eb0;
  if ((fVar3 <= DAT_00420eb0) && (fVar1 = fVar3, fVar3 < DAT_00420eb4)) {
    fVar1 = DAT_00420eb4;
  }
  uVar4 = VectorFloatToUnsigned(DAT_00420ebc + fVar1 * DAT_00420eb8,3);
  fVar3 = param_1[1];
  fVar1 = DAT_00420eb0;
  if ((fVar3 <= DAT_00420eb0) && (fVar1 = fVar3, fVar3 < DAT_00420eb4)) {
    fVar1 = DAT_00420eb4;
  }
  uVar5 = VectorFloatToUnsigned(DAT_00420ebc + fVar1 * DAT_00420eb8,3);
  fVar3 = param_1[2];
  fVar1 = DAT_00420eb0;
  if ((fVar3 <= DAT_00420eb0) && (fVar1 = DAT_00420eb4, DAT_00420eb4 <= fVar3)) {
    fVar1 = fVar3;
  }
  uVar2 = VectorFloatToUnsigned(DAT_00420ebc + fVar1 * DAT_00420eb8,3);
  return (uVar2 & 0xff) << 0x10 | uVar4 & 0xff | (uVar5 & 0xff) << 8 | param_2 << 0x18;
}

