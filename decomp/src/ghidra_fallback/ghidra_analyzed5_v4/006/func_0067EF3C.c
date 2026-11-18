#include "ghidra_types.h"

extern float func_00590D4C(float fparam_0);
extern float DAT_0067f228;
extern float DAT_0067f22c;
extern float DAT_0067f230;
extern float DAT_0067f234;
extern float DAT_0067f238;
extern float DAT_0067f23c;
extern float DAT_0067f240;

// USA 0067EF3C <- EU 0067EF14 (Ghidra, non-matching)
// GLOBAL DAT_0067f228 float
// GLOBAL DAT_0067f22c float
// GLOBAL DAT_0067f230 float
// GLOBAL DAT_0067f234 float
// GLOBAL DAT_0067f238 float
// GLOBAL DAT_0067f23c float
// GLOBAL DAT_0067f240 float

void func_0067EF3C(float *param_1,float *param_2,float fparam_0)

{
  char cVar1;
  byte bVar2;
  bool bVar3;
  float *pfVar4;
  float *pfVar5;
  float fVar6;
  uint in_fpscr;
  uint uVar7;
  float fVar8;
  int iVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  
  fVar8 = DAT_0067f228;
  fVar6 = param_1[8];
  pfVar5 = (float *)((uint)*(ushort *)((int)param_1 + 0xe) * 0x10 + -0x10 + (int)ALBW_AS_U32(fVar6));
  bVar3 = false;
  uVar7 = in_fpscr & 0xfffffff | (uint)(DAT_0067f228 <= fparam_0) << 0x1d;
  if ((!SUB41(uVar7 >> 0x1d,0)) ||
     (uVar7 = in_fpscr & 0xfffffff | (uint)(*pfVar5 == fparam_0) << 0x1e |
              (uint)(fparam_0 <= *pfVar5) << 0x1d, bVar2 = (byte)(uVar7 >> 0x18),
     !(bool)(bVar2 >> 5 & 1) || (bool)(bVar2 >> 6))) {
    uVar7 = uVar7 & 0xfffffff | (uint)(DAT_0067f228 <= fparam_0) << 0x1d;
    if (SUB41(uVar7 >> 0x1d,0)) {
      cVar1 = *(char *)((int)param_1 + 9);
    }
    else {
      cVar1 = *(char *)(param_1 + 2);
    }
    if (cVar1 == '\0') {
      if (fparam_0 < DAT_0067f228) {
        fVar13 = *(float *)((int)ALBW_AS_U32(fVar6) + 4);
        *param_2 = fVar6;
        param_2[1] = ALBW_NAN_NEG;
        fVar6 = *param_1;
        param_2[2] = DAT_0067f22c;
        param_2[4] = fVar13;
        param_2[3] = fVar6;
        param_2[5] = fVar8;
        param_2[6] = fVar8;
        param_2[7] = fVar8;
        return;
      }
      fVar16 = *pfVar5;
      fVar10 = *param_1;
      fVar11 = pfVar5[1];
      param_2[1] = 1.4013e-45;
      *param_2 = 0.0;
      fVar6 = DAT_0067f230;
      fVar13 = fVar16 + fVar10;
      if (param_1[1] < fVar16 + fVar10) {
        fVar13 = param_1[1];
      }
      param_2[2] = fVar13;
      param_2[4] = fVar11;
      param_2[3] = fVar6;
      param_2[5] = fVar8;
      param_2[6] = fVar8;
      param_2[7] = fVar8;
      return;
    }
    fVar6 = DAT_0067f228;
    fVar8 = func_00590D4C(param_1[7] * fparam_0);
    fVar8 = ALBW_AS_F32((int)fVar8);
    param_2[1] = fVar8;
    if ((cVar1 == '\x02') && (((uint)ALBW_AS_U32(fVar8) & 1) != 0)) {
      bVar3 = true;
      fVar8 = (float)VectorSignedToFloat((int)ALBW_AS_U32(fVar8) + 1,(byte)(uVar7 >> 0x15) & 3);
      fVar8 = (param_1[1] - *param_1) * fVar8;
      fparam_0 = fVar8 - fparam_0;
    }
    else {
      fVar8 = (float)VectorSignedToFloat(ALBW_AS_U32(fVar8),(byte)(uVar7 >> 0x15) & 3);
      fVar8 = (param_1[1] - *param_1) * fVar8;
      fparam_0 = fparam_0 - fVar8;
    }
  }
  else {
    param_2[1] = 0.0;
    fVar6 = fVar8;
  }
  fVar11 = DAT_0067f240;
  fVar10 = DAT_0067f23c;
  fVar16 = DAT_0067f238;
  fVar13 = DAT_0067f234;
  pfVar5 = (float *)ALBW_PTR_BITS(*param_2);
  if (pfVar5 == (float *)0x0) {
    fVar14 = (float)VectorSignedToFloat(*(ushort *)((int)param_1 + 0xe) - 1,
                                        (byte)(uVar7 >> 0x15) & 3);
    iVar9 = VectorFloatToUnsigned(param_1[7] * fVar14 * fparam_0,3);
    pfVar5 = (float *)((int)ALBW_AS_U32(param_1[8]) + iVar9 * 0x10);
  }
  if (bVar3) {
    pfVar4 = pfVar5;
    if (*pfVar5 < fparam_0) {
      do {
        pfVar5 = pfVar5 + 4;
      } while (*pfVar5 < fparam_0);
    }
    else {
      do {
        pfVar5 = pfVar4;
        pfVar4 = pfVar5 + -4;
      } while (fparam_0 <= pfVar5[-4]);
    }
    fVar12 = *pfVar5;
    fVar14 = *param_1;
    fVar15 = pfVar5[-4];
    *param_2 = ALBW_AS_F32((pfVar5 + -4));
    cVar1 = *(char *)(param_1 + 3);
    fVar12 = (fVar14 - fVar12) + fVar8;
    fVar8 = (fVar14 - fVar15) + fVar8;
    if (cVar1 == '\0') {
      fVar13 = pfVar5[1];
      param_2[2] = fVar12;
      param_2[3] = fVar8;
      param_2[4] = fVar13;
      param_2[5] = fVar6;
      param_2[6] = fVar6;
      param_2[7] = fVar6;
      return;
    }
    if (cVar1 == '\x01') {
      fVar13 = pfVar5[1];
      fVar16 = pfVar5[-3];
      param_2[2] = fVar12;
      param_2[3] = fVar8;
      param_2[4] = fVar13;
      param_2[5] = (fVar16 - fVar13) / (fVar8 - fVar12);
      param_2[6] = fVar6;
      param_2[7] = fVar6;
      return;
    }
    if (cVar1 == '\x02') {
      fVar6 = pfVar5[3];
      fVar15 = pfVar5[-2];
      fVar14 = pfVar5[1];
      fVar17 = pfVar5[-3];
      param_2[2] = fVar12;
      param_2[3] = fVar8;
      fVar8 = fVar8 - fVar12;
      fVar6 = -fVar6;
      param_2[4] = fVar14;
      param_2[5] = fVar6;
      fVar13 = fVar13 / fVar8;
      fVar14 = fVar14 - fVar17;
      param_2[6] = ((fVar8 * fVar16 * fVar6 - fVar14 * fVar10) - fVar8 * -fVar15) * fVar13 * fVar13;
      param_2[7] = (fVar14 * fVar11 + fVar8 * fVar6 + fVar8 * -fVar15) * fVar13 * fVar13 * fVar13;
      return;
    }
  }
  else {
    pfVar4 = pfVar5;
    if (*pfVar5 <= fparam_0) {
      do {
        pfVar5 = pfVar4;
        pfVar4 = pfVar5 + 4;
      } while (pfVar5[4] <= fparam_0);
    }
    else {
      do {
        pfVar5 = pfVar5 + -4;
      } while (fparam_0 < *pfVar5);
    }
    fVar14 = *param_1;
    fVar12 = *pfVar5;
    fVar15 = pfVar5[4];
    *param_2 = ALBW_AS_F32((pfVar5 + 4));
    cVar1 = *(char *)(param_1 + 3);
    fVar12 = fVar12 + fVar14 + fVar8;
    fVar8 = fVar15 + fVar14 + fVar8;
    if (cVar1 == '\0') {
      fVar13 = pfVar5[1];
      param_2[2] = fVar12;
      param_2[3] = fVar8;
      param_2[4] = fVar13;
      param_2[5] = fVar6;
      param_2[6] = fVar6;
      param_2[7] = fVar6;
      return;
    }
    if (cVar1 == '\x01') {
      fVar13 = pfVar5[1];
      fVar16 = pfVar5[5];
      param_2[2] = fVar12;
      param_2[3] = fVar8;
      param_2[4] = fVar13;
      param_2[5] = (fVar16 - fVar13) / (fVar8 - fVar12);
      param_2[6] = fVar6;
      param_2[7] = fVar6;
      return;
    }
    if (cVar1 == '\x02') {
      fVar17 = pfVar5[1];
      fVar14 = pfVar5[3];
      fVar6 = pfVar5[5];
      fVar15 = pfVar5[6];
      param_2[2] = fVar12;
      param_2[3] = fVar8;
      fVar8 = fVar8 - fVar12;
      fVar6 = fVar17 - fVar6;
      param_2[4] = fVar17;
      param_2[5] = fVar14;
      fVar13 = fVar13 / fVar8;
      param_2[6] = ((fVar8 * fVar16 * fVar14 - fVar6 * fVar10) - fVar8 * fVar15) * fVar13 * fVar13;
      param_2[7] = (fVar6 * fVar11 + fVar8 * fVar14 + fVar8 * fVar15) * fVar13 * fVar13 * fVar13;
      return;
    }
  }
  return;
}

