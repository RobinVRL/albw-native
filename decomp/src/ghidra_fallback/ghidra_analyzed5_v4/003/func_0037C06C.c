#include "ghidra_types.h"

extern int func_00115DAC(float *param_1,float *param_2,float *param_3,float fparam_0);
extern float DAT_0037c2e4;
extern float DAT_0037c2e8;
extern float DAT_0037c2ec;
extern float DAT_0037c2f0;
extern float DAT_0037c2f4;
extern int DAT_0037c2f8;

// USA 0037C06C <- EU 0037C048 (Ghidra, non-matching)
// GLOBAL DAT_0037c2e4 float
// GLOBAL DAT_0037c2e8 float
// GLOBAL DAT_0037c2ec float
// GLOBAL DAT_0037c2f0 float
// GLOBAL DAT_0037c2f4 float
// GLOBAL DAT_0037c2f8 int

bool func_0037C06C(undefined4 *param_1)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  float *pfVar5;
  bool bVar6;
  bool bVar7;
  uint in_fpscr;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  
  fVar8 = DAT_0037c2e8;
  fVar9 = DAT_0037c2e4;
  if (*(char *)((int)param_1 + 0x49) == '\x01') {
    if (*(char *)(param_1 + 0x12) == '\x02') {
      uVar2 = param_1[0xd];
      uVar4 = param_1[0xe];
      if (uVar2 < uVar4) {
        param_1[0xd] = uVar2 + 1;
      }
      else {
        *(undefined1 *)(param_1 + 0x12) = 0;
      }
      pfVar5 = (float *)param_1[1];
      bVar1 = uVar2 >= uVar4;
      if (pfVar5 != (float *)0x0) {
        uVar2 = param_1[0xd];
        fVar14 = fVar9;
        if (uVar4 != 0 && uVar2 != 0) {
          fVar14 = fVar8;
        }
        if ((uVar4 != 0 && uVar2 != 0) && uVar2 < uVar4) {
          fVar14 = (float)VectorUnsignedToFloat(uVar2,(byte)(in_fpscr >> 0x15) & 3);
          fVar14 = fVar14 * ALBW_AS_F32(param_1[0xf]);
        }
        fVar10 = ALBW_AS_F32(param_1[0x10]);
        fVar8 = ALBW_AS_F32(param_1[0x11]);
        fVar11 = *pfVar5;
        bVar6 = DAT_0037c2f0 == fVar11;
        bVar7 = fVar11 <= DAT_0037c2f0;
        if (!bVar7 || bVar6) {
          bVar6 = fVar11 == DAT_0037c2ec;
          bVar7 = DAT_0037c2ec <= fVar11;
        }
        if ((((bVar7 && !bVar6) || (pfVar5[1] < DAT_0037c2f0)) || (DAT_0037c2ec < pfVar5[1])) ||
           ((pfVar5[2] < DAT_0037c2f0 || (DAT_0037c2ec < pfVar5[2])))) {
          fVar12 = pfVar5[1];
          pfVar5[1] = fVar9;
          pfVar5 = (float *)param_1[1];
          fVar13 = *pfVar5;
          fVar11 = SQRT(fVar13 * fVar13 + fVar9 * fVar9 + pfVar5[2] * pfVar5[2]);
          if (fVar9 < fVar11) {
            fVar11 = (fVar10 + (fVar8 - fVar10) * fVar14) / fVar11;
            *pfVar5 = fVar13 * fVar11;
            pfVar5[1] = pfVar5[1] * fVar11;
            pfVar5[2] = pfVar5[2] * fVar11;
          }
          *(float *)(param_1[1] + 4) = fVar12;
        }
      }
    }
    else {
      bVar1 = true;
      *(undefined1 *)(param_1 + 0x12) = 0;
    }
  }
  else {
    pfVar5 = (float *)*param_1;
    fVar14 = (ALBW_AS_F32(param_1[5]) * *pfVar5 + ALBW_AS_F32(param_1[6]) * pfVar5[1] +
             ALBW_AS_F32(param_1[7]) * pfVar5[2]) - ALBW_AS_F32(param_1[8]);
    fVar9 = DAT_0037c2e8;
    fVar8 = DAT_0037c2e4;
    func_00115DAC((float *)(param_1 + 9),(float *)(param_1 + 5),pfVar5,-fVar14);
    uVar2 = param_1[0xd];
    uVar4 = param_1[0xe];
    if ((uVar4 != 0 && uVar2 != 0) && (fVar8 = fVar9, uVar2 < uVar4)) {
      fVar8 = (float)VectorUnsignedToFloat(uVar2,(byte)(in_fpscr >> 0x15) & 3);
      fVar8 = fVar8 * ALBW_AS_F32(param_1[0xf]);
    }
    if (uVar2 < uVar4) {
      param_1[0xd] = uVar2 + 1;
    }
    bVar1 = (int)(uVar4 - uVar2) < 1;
    if (bVar1) {
      *(undefined1 *)(param_1 + 0x12) = 0;
    }
    else {
      fVar10 = (float)VectorSignedToFloat(uVar4 - uVar2,(byte)(in_fpscr >> 0x15) & 3);
      fVar9 = fVar9 / fVar10;
    }
    func_00115DAC((float *)*param_1,(float *)(param_1 + 5),(float *)*param_1,-(fVar14 * fVar9));
    iVar3 = DAT_0037c2f8;
    fVar9 = DAT_0037c2f4;
    if ((float *)param_1[1] != (float *)0x0) {
      fVar8 = ALBW_AS_F32(param_1[0x10]) + (ALBW_AS_F32(param_1[0x11]) - ALBW_AS_F32(param_1[0x10])) * fVar8;
      pfVar5 = (float *)(DAT_0037c2f8 + ((uint)param_1[0xc] >> 0x18) * 0x10);
      fVar14 = (float)VectorUnsignedToFloat(param_1[0xc] & 0xffffff,(byte)(in_fpscr >> 0x15) & 3);
      *(float *)param_1[1] = (*pfVar5 + pfVar5[1] * fVar14 * DAT_0037c2f4) * fVar8;
      iVar3 = iVar3 + ((uint)param_1[0xc] >> 0x18) * 0x10;
      fVar14 = (float)VectorUnsignedToFloat(param_1[0xc] & 0xffffff,(byte)(in_fpscr >> 0x15) & 3);
      *(float *)(param_1[1] + 8) =
           (*(float *)(iVar3 + 8) + *(float *)(iVar3 + 0xc) * fVar14 * fVar9) * fVar8;
    }
  }
  return bVar1;
}

