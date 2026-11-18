#include "ghidra_types.h"

extern float DAT_00420db8;
extern float DAT_00420dbc;
extern float DAT_00420dc0;
extern float DAT_00420dc4;

// USA 00420CB8 <- EU 00420C98 (Ghidra, non-matching)
// GLOBAL DAT_00420db8 float
// GLOBAL DAT_00420dbc float
// GLOBAL DAT_00420dc0 float
// GLOBAL DAT_00420dc4 float

uint func_00420CB8(float *param_1,undefined4 param_2)

{
  float fVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  float fVar5;
  uint uVar6;
  
  fVar5 = *param_1;
  fVar1 = DAT_00420db8;
  if ((fVar5 <= DAT_00420db8) && (fVar1 = DAT_00420dbc, DAT_00420dbc <= fVar5)) {
    fVar1 = fVar5;
  }
  uVar3 = VectorFloatToUnsigned(DAT_00420dc4 + fVar1 * DAT_00420dc0,3);
  fVar5 = param_1[1];
  fVar1 = DAT_00420db8;
  if ((fVar5 <= DAT_00420db8) && (fVar1 = DAT_00420dbc, DAT_00420dbc <= fVar5)) {
    fVar1 = fVar5;
  }
  uVar4 = VectorFloatToUnsigned(DAT_00420dc4 + fVar1 * DAT_00420dc0,3);
  fVar5 = param_1[2];
  fVar1 = DAT_00420db8;
  if ((fVar5 <= DAT_00420db8) && (fVar1 = fVar5, fVar5 < DAT_00420dbc)) {
    fVar1 = DAT_00420dbc;
  }
  uVar6 = VectorFloatToUnsigned(DAT_00420dc4 + fVar1 * DAT_00420dc0,3);
  fVar5 = param_1[3];
  fVar1 = DAT_00420db8;
  if ((fVar5 <= DAT_00420db8) && (fVar1 = DAT_00420dbc, DAT_00420dbc <= fVar5)) {
    fVar1 = fVar5;
  }
  iVar2 = VectorFloatToUnsigned(DAT_00420dc4 + fVar1 * DAT_00420dc0,3);
  return (uVar4 & 0xff) << 8 | uVar3 & 0xff | (uVar6 & 0xff) << 0x10 | iVar2 << 0x18;
}

