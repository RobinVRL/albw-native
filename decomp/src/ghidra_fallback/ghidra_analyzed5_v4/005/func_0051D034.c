#include "ghidra_types.h"

extern int func_00111A64(uint *param_1);
extern float DAT_0051d07c;
extern float DAT_0051d080;
extern float DAT_0051d084;

// USA 0051D034 <- EU 0051D00C (Ghidra, non-matching)
// GLOBAL DAT_0051d07c float
// GLOBAL DAT_0051d080 float
// GLOBAL DAT_0051d084 float

float func_0051D034(uint *param_1,float fparam_0)

{
  uint uVar1;
  int iVar2;
  uint in_fpscr;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  iVar2 = 0;
  fVar5 = DAT_0051d07c;
  fVar6 = DAT_0051d080;
  fVar4 = DAT_0051d07c;
  do {
    uVar1 = func_00111A64(param_1);
    iVar2 = iVar2 + 1;
    fVar3 = (float)VectorUnsignedToFloat(uVar1,(byte)(in_fpscr >> 0x15) & 3);
    fVar5 = fVar5 + fVar3 * fVar6 * fparam_0;
  } while (iVar2 < 3);
  fVar5 = fVar5 * DAT_0051d084;
  if ((fVar4 <= fVar5) && (fVar4 = fVar5, fparam_0 < fVar5)) {
    fVar4 = fparam_0;
  }
  return fVar4;
}

