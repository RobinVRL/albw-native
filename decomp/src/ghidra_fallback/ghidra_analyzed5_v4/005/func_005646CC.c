#include "ghidra_types.h"

extern float DAT_0056479c;
extern float DAT_005647a0;
extern float DAT_005647a4;
extern float DAT_005647a8;

// USA 005646CC <- EU 005646A4 (Ghidra, non-matching)
// GLOBAL DAT_0056479c float
// GLOBAL DAT_005647a0 float
// GLOBAL DAT_005647a4 float
// GLOBAL DAT_005647a8 float

undefined4 func_005646CC(undefined1 *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  undefined4 uVar3;
  float fVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  float fVar7;
  
  fVar2 = DAT_005647a8;
  fVar1 = DAT_005647a4;
  fVar7 = *param_2;
  fVar4 = DAT_0056479c;
  if ((fVar7 <= DAT_0056479c) && (fVar4 = fVar7, fVar7 < DAT_005647a0)) {
    fVar4 = DAT_005647a0;
  }
  fVar7 = param_2[1];
  uVar5 = VectorFloatToUnsigned(DAT_005647a8 + fVar4 * DAT_005647a4,3);
  fVar4 = DAT_0056479c;
  if ((fVar7 <= DAT_0056479c) && (fVar4 = fVar7, fVar7 < DAT_005647a0)) {
    fVar4 = DAT_005647a0;
  }
  fVar7 = param_2[2];
  uVar6 = VectorFloatToUnsigned(DAT_005647a8 + fVar4 * DAT_005647a4,3);
  fVar4 = DAT_0056479c;
  if ((fVar7 <= DAT_0056479c) && (fVar4 = DAT_005647a0, DAT_005647a0 <= fVar7)) {
    fVar4 = fVar7;
  }
  uVar3 = VectorFloatToUnsigned(DAT_005647a8 + fVar4 * DAT_005647a4,3);
  fVar7 = param_2[3];
  fVar4 = DAT_0056479c;
  if ((fVar7 <= DAT_0056479c) && (fVar4 = fVar7, fVar7 < DAT_005647a0)) {
    fVar4 = DAT_005647a0;
  }
  *param_1 = (char)uVar5;
  param_1[1] = (char)uVar6;
  param_1[2] = (char)uVar3;
  uVar5 = VectorFloatToUnsigned(fVar2 + fVar4 * fVar1,3);
  param_1[3] = (char)uVar5;
  return (undefined4)param_1;
}

