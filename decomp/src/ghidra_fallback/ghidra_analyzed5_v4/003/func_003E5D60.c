#include "ghidra_types.h"

extern float DAT_003e5efc;
extern float DAT_003e5f00;
extern float DAT_003e5f04;
extern float DAT_003e5f08;

// USA 003E5D60 <- EU 003E5D40 (Ghidra, non-matching)
// PARAM param_5 Stack[0x0]:4 undefined4
// PARAM param_6 Stack[0x4]:4 int
// GLOBAL DAT_003e5efc float
// GLOBAL DAT_003e5f00 float
// GLOBAL DAT_003e5f04 float
// GLOBAL DAT_003e5f08 float

undefined4 func_003E5D60(undefined2 *param_1,undefined2 *param_2,int param_3,int param_4,
                  undefined4 param_5,int param_6)

{
  uint uVar1;
  uint uVar2;
  uint in_fpscr;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  fVar5 = (float)VectorSignedToFloat(param_4 * param_4 + param_3 * param_3,
                                     (byte)(in_fpscr >> 0x15) & 3);
  uVar1 = in_fpscr & 0xfffffff;
  uVar2 = uVar1 | (uint)(fVar5 == DAT_003e5efc) << 0x1e;
  if (!SUB41(uVar2 >> 0x1e,0)) {
    if (param_4 * param_4 < param_3 * param_3) {
      if (param_3 < 0) {
        fVar3 = (float)VectorSignedToFloat(param_4,(byte)(uVar2 >> 0x15) & 3);
        fVar6 = (float)VectorSignedToFloat(param_3,(byte)(uVar2 >> 0x15) & 3);
        fVar3 = (DAT_003e5f00 * fVar3) / fVar6;
        fVar6 = DAT_003e5f00;
      }
      else {
        fVar3 = (float)VectorSignedToFloat(param_4,(byte)(uVar2 >> 0x15) & 3);
        fVar6 = (float)VectorSignedToFloat(param_3,(byte)(uVar2 >> 0x15) & 3);
        fVar3 = (DAT_003e5f04 * fVar3) / fVar6;
        fVar6 = DAT_003e5f04;
      }
    }
    else if (param_4 < 0) {
      fVar3 = (float)VectorSignedToFloat(param_3,(byte)(uVar2 >> 0x15) & 3);
      fVar6 = (float)VectorSignedToFloat(param_4,(byte)(uVar2 >> 0x15) & 3);
      fVar6 = (DAT_003e5f00 * fVar3) / fVar6;
      fVar3 = DAT_003e5f00;
    }
    else {
      fVar3 = (float)VectorSignedToFloat(param_3,(byte)(uVar2 >> 0x15) & 3);
      fVar6 = (float)VectorSignedToFloat(param_4,(byte)(uVar2 >> 0x15) & 3);
      fVar6 = (DAT_003e5f04 * fVar3) / fVar6;
      fVar3 = DAT_003e5f04;
    }
    fVar3 = fVar6 * fVar6 + fVar3 * fVar3;
    if (DAT_003e5f08 <= fVar3) {
      fVar3 = DAT_003e5f08;
    }
    uVar2 = uVar1 | (uint)(fVar3 <= fVar5) << 0x1d;
    if (SUB41(uVar2 >> 0x1d,0)) {
      fVar7 = (float)VectorSignedToFloat(param_6,(byte)(uVar2 >> 0x15) & 3);
      fVar9 = (float)VectorSignedToFloat(param_6 * param_6,(byte)(uVar2 >> 0x15) & 3);
      uVar1 = uVar1 | (uint)(fVar5 < fVar9) << 0x1f;
      fVar4 = SQRT(fVar5);
      fVar8 = fVar4 - SQRT(fVar3);
      fVar6 = (float)VectorSignedToFloat(param_6 + -0x28,(byte)(uVar1 >> 0x15) & 3);
      if (SUB41(uVar1 >> 0x1f,0) == (NAN(fVar5) || NAN(fVar9))) {
        fVar5 = (float)VectorSignedToFloat(param_3,(byte)(uVar1 >> 0x15) & 3);
        fVar3 = (float)VectorSignedToFloat(param_4,(byte)(uVar1 >> 0x15) & 3);
        *param_1 = (short)(int)((fVar5 * fVar6) / fVar4);
        *param_2 = (short)(int)((fVar3 * fVar6) / fVar4);
        return (undefined4)param_1;
      }
      fVar5 = (float)VectorSignedToFloat(param_3,(byte)(uVar1 >> 0x15) & 3);
      fVar4 = (fVar7 - SQRT(fVar3)) * fVar4;
      fVar3 = (float)VectorSignedToFloat(param_4,(byte)(uVar1 >> 0x15) & 3);
      *param_1 = (short)(int)((fVar5 * fVar6 * fVar8) / fVar4);
      *param_2 = (short)(int)((fVar3 * fVar6 * fVar8) / fVar4);
      return (undefined4)param_1;
    }
  }
  *param_1 = 0;
  *param_2 = 0;
  return (undefined4)param_1;
}

