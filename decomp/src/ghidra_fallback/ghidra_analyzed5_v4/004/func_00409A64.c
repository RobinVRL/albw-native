#include "ghidra_types.h"

extern float DAT_00409b4c;
extern float DAT_00409b50;
extern float DAT_00409b54;
extern float DAT_00409b58;

// USA 00409A64 <- EU 00409A44 (Ghidra, non-matching)
// PARAM param_5 Stack[0x0]:4 float *
// GLOBAL DAT_00409b4c float
// GLOBAL DAT_00409b50 float
// GLOBAL DAT_00409b54 float
// GLOBAL DAT_00409b58 float

void func_00409A64(int param_1,int param_2,int param_3,float *param_4,float *param_5,float fparam_0)

{
  uint uVar1;
  byte bVar2;
  bool bVar3;
  bool bVar4;
  uint in_fpscr;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  fVar5 = *(float *)(param_1 + 0x24);
  fVar6 = *param_4;
  fVar7 = param_4[1];
  fVar8 = param_4[2];
  if (fVar5 == DAT_00409b4c) {
    *param_5 = DAT_00409b50;
  }
  else {
    uVar1 = in_fpscr & 0xfffffff | (uint)(fparam_0 < DAT_00409b4c) << 0x1f |
            (uint)(fparam_0 == DAT_00409b4c) << 0x1e;
    bVar2 = (byte)(uVar1 >> 0x18);
    bVar3 = (bool)(bVar2 >> 7);
    bVar4 = (bool)(bVar2 >> 6 & 1);
    if (!bVar4 && bVar3 == (NAN(fparam_0) || NAN(DAT_00409b4c))) {
      fVar9 = DAT_00409b50 / fparam_0;
      fVar6 = fVar6 * fVar9;
      fVar7 = fVar7 * fVar9;
      fVar8 = fVar8 * fVar9;
    }
    fVar9 = (float)VectorUnsignedToFloat((uint)*(byte *)(param_3 + 0x29),(byte)(uVar1 >> 0x15) & 3);
    if (bVar4 || bVar3 != (NAN(fparam_0) || NAN(DAT_00409b4c))) {
      fVar10 = SQRT(*(float *)(param_3 + 0xc) * *(float *)(param_3 + 0xc) +
                    *(float *)(param_3 + 0x10) * *(float *)(param_3 + 0x10) +
                    *(float *)(param_3 + 0x14) * *(float *)(param_3 + 0x14));
      fVar6 = SQRT(*(float *)(param_2 + 0x3c) * *(float *)(param_2 + 0x3c) +
                   *(float *)(param_2 + 0x40) * *(float *)(param_2 + 0x40) +
                   *(float *)(param_2 + 0x44) * *(float *)(param_2 + 0x44));
    }
    else {
      fVar10 = fVar6 * *(float *)(param_3 + 0xc) + fVar7 * *(float *)(param_3 + 0x10) +
               fVar8 * *(float *)(param_3 + 0x14);
      fVar6 = -(fVar6 * *(float *)(param_2 + 0x3c) + fVar7 * *(float *)(param_2 + 0x40) +
               fVar8 * *(float *)(param_2 + 0x44));
    }
    fVar6 = fVar6 * fVar9 * DAT_00409b54;
    fVar8 = -fVar10 * fVar9 * DAT_00409b54;
    fVar7 = DAT_00409b4c;
    if ((fVar6 <= fVar5) && (fVar7 = DAT_00409b58, fVar8 < fVar5)) {
      fVar7 = (fVar5 - fVar6) / (fVar5 - fVar8);
    }
    *param_5 = fVar7;
  }
  return;
}

