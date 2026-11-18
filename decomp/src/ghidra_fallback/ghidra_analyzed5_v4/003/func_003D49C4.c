#include "ghidra_types.h"

extern float DAT_003d4c0c;
extern uint DAT_003d4c10;
extern uint DAT_003d4c14;
extern uint DAT_003d4c18;
extern float DAT_003d4c1c;

// USA 003D49C4 <- EU 003D49A4 (Ghidra, non-matching)
// PARAM param_5 Stack[0x0]:4 undefined4
// GLOBAL DAT_003d4c0c float
// GLOBAL DAT_003d4c10 uint
// GLOBAL DAT_003d4c14 uint
// GLOBAL DAT_003d4c18 uint
// GLOBAL DAT_003d4c1c float

short * func_003D49C4(short *param_1,float *param_2,float *param_3,undefined4 param_4,
                     undefined4 param_5,float fparam_0,float fparam_1,float fparam_2,float fparam_3,
                     float fparam_4,float fparam_5,float fparam_6,float fparam_7)

{
  char cVar1;
  uint in_fpscr;
  uint uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  uint uVar8;
  float fVar9;
  
  cVar1 = (char)param_1[6];
  if (cVar1 == '\0') {
    fparam_1 = (float)VectorSignedToFloat((int)param_1[7] - (int)*param_1,
                                          (byte)(in_fpscr >> 0x15) & 3);
  }
  else if (cVar1 == '\x01') {
    fparam_1 = (float)VectorSignedToFloat((int)param_1[7] - (int)param_1[1],
                                          (byte)(in_fpscr >> 0x15) & 3);
  }
  else if (cVar1 == '\x02') {
    fparam_1 = (float)VectorSignedToFloat((int)param_1[7] - (int)param_1[2],
                                          (byte)(in_fpscr >> 0x15) & 3);
  }
  fVar5 = (float)VectorSignedToFloat((int)(short)param_5 * (int)(short)param_5 +
                                     (int)(short)param_4 * (int)(short)param_4,
                                     (byte)(in_fpscr >> 0x15) & 3);
  fVar5 = SQRT(fVar5);
  uVar2 = in_fpscr & 0xfffffff;
  fVar4 = DAT_003d4c0c;
  fVar6 = DAT_003d4c0c;
  fVar3 = DAT_003d4c0c;
  if (fVar5 != DAT_003d4c0c) {
    fVar7 = *(float *)(param_1 + 0xe);
    fVar6 = (float)VectorSignedToFloat(param_4,(byte)(uVar2 >> 0x15) & 3);
    fVar3 = (float)VectorSignedToFloat(param_5,(byte)(uVar2 >> 0x15) & 3);
    fVar6 = fVar6 / fVar5;
    fVar3 = fVar3 / fVar5;
    fVar4 = fVar5 - fVar7;
    if (fVar5 < fparam_1) {
      uVar8 = uVar2 | (uint)(fVar7 < fparam_1) << 0x1f;
      if (SUB41(uVar8 >> 0x1f,0) == (NAN(fVar7) || NAN(fparam_1))) {
        *(float *)(param_1 + 0xc) = fVar4;
        uVar2 = uVar8;
      }
      else {
        fVar7 = *(float *)(param_1 + 0xc);
        if (fVar4 <= *(float *)(param_1 + 0xc)) {
          fVar7 = fVar4;
        }
        *(float *)(param_1 + 0xc) = fVar7;
      }
      fVar6 = (fVar6 * fVar5) / fparam_1;
      fVar3 = (fVar3 * fVar5) / fparam_1;
    }
    else {
      if (fparam_1 <= fVar7) {
        fVar7 = *(float *)(param_1 + 0xc);
        uVar2 = uVar2 | (uint)(fVar4 < fVar7) << 0x1f;
        if (fVar4 != fVar7 && SUB41(uVar2 >> 0x1f,0) == (NAN(fVar4) || NAN(fVar7))) {
          fVar7 = fVar4;
        }
      }
      else {
        fVar7 = *(float *)(param_1 + 0x10);
        if (fVar7 < fVar4) {
          *(float *)(param_1 + 0xc) = fVar4;
          goto LAB_003d4ad8;
        }
      }
      *(float *)(param_1 + 0xc) = fVar7;
    }
  }
LAB_003d4ad8:
  uVar2 = uVar2 & 0xfffffff | (uint)(fVar5 < fparam_1) << 0x1f;
  fVar7 = fparam_1;
  if (0x3f800000 < (int)ALBW_AS_U32(*(float *)(param_1 + 8))) {
    fVar7 = *(float *)(param_1 + 8) * fparam_1;
  }
  uVar8 = *(uint *)(param_1 + 0xc);
  if (SUB41(uVar2 >> 0x1f,0) == (NAN(fVar5) || NAN(fparam_1))) {
    if ((int)uVar8 < 0x3f800001) {
      uVar8 = DAT_003d4c10;
    }
  }
  else if (uVar8 < DAT_003d4c14) {
    uVar8 = DAT_003d4c18;
  }
  *(uint *)(param_1 + 0xc) = uVar8;
  if (cVar1 == '\0') {
    fVar9 = (float)VectorSignedToFloat((int)param_1[3] - (int)*param_1,(byte)(uVar2 >> 0x15) & 3);
    fparam_7 = fVar9 * DAT_003d4c1c;
  }
  else if (cVar1 == '\x01') {
    fVar9 = (float)VectorSignedToFloat((int)param_1[4] - (int)param_1[1],(byte)(uVar2 >> 0x15) & 3);
    fparam_7 = fVar9 * DAT_003d4c1c;
  }
  else if (cVar1 == '\x02') {
    fVar9 = (float)VectorSignedToFloat(param_1[5] + -0x28,(byte)(uVar2 >> 0x15) & 3);
    fparam_7 = fVar9 * DAT_003d4c1c;
  }
  fVar9 = *(float *)(param_1 + 10) + *(float *)(param_1 + 0xc) * fparam_7;
  *(float *)(param_1 + 10) = fVar9;
  if (fVar9 < fparam_1) {
    *(float *)(param_1 + 10) = fparam_1;
  }
  else {
    fparam_1 = fVar9;
    if (fVar7 < fVar9) {
      fparam_1 = fVar7;
    }
    *(float *)(param_1 + 10) = fparam_1;
  }
  fVar6 = (fparam_1 / fVar7) * fVar6;
  fVar3 = (fparam_1 / fVar7) * fVar3;
  fVar7 = fVar6 * fVar6 + fVar3 * fVar3;
  if (0x3f800000 < (int)ALBW_AS_U32(fVar7)) {
    fVar7 = SQRT(fVar7);
    fVar6 = fVar6 / fVar7;
    fVar3 = fVar3 / fVar7;
  }
  *(float *)(param_1 + 0xe) = fVar5;
  *(float *)(param_1 + 0x10) = fVar4;
  *param_2 = fVar6;
  *param_3 = fVar3;
  return param_1;
}

