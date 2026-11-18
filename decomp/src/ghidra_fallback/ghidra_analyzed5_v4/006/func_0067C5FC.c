#include "ghidra_types.h"

extern float func_00590D4C(float fparam_0);
extern float DAT_0067c938;
extern int DAT_0067c93c;
extern int DAT_0067c940;
extern float DAT_0067c944;
extern float DAT_0067c948;
extern float DAT_0067c94c;
extern float DAT_0067c950;
extern float DAT_0067c954;

// USA 0067C5FC <- EU 0067C5D4 (Ghidra, non-matching)
// GLOBAL DAT_0067c938 float
// GLOBAL DAT_0067c93c int
// GLOBAL DAT_0067c940 int
// GLOBAL DAT_0067c944 float
// GLOBAL DAT_0067c948 float
// GLOBAL DAT_0067c94c float
// GLOBAL DAT_0067c950 float
// GLOBAL DAT_0067c954 float

void func_0067C5FC(float *param_1,int *param_2,float fparam_0)

{
  char cVar1;
  bool bVar2;
  uint *puVar3;
  uint uVar4;
  uint *puVar5;
  uint in_fpscr;
  float fVar6;
  uint uVar7;
  float fVar8;
  int iVar9;
  uint uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  
  fVar6 = DAT_0067c938;
  puVar3 = (uint *)ALBW_PTR_BITS(param_1[8]);
  bVar2 = false;
  uVar10 = VectorFloatToUnsigned(fparam_0 / param_1[6],3);
  uVar7 = in_fpscr & 0xfffffff;
  uVar4 = uVar7 | (uint)(DAT_0067c938 <= fparam_0) << 0x1d;
  if ((SUB41(uVar4 >> 0x1d,0)) && (uVar10 < (puVar3[*(ushort *)((int)param_1 + 0xe) - 1] & 0xfff)))
  {
    param_2[1] = 0;
    fVar18 = fVar6;
  }
  else {
    uVar4 = uVar7 | (uint)(DAT_0067c938 <= fparam_0) << 0x1d;
    if (SUB41(uVar4 >> 0x1d,0)) {
      cVar1 = *(char *)((int)param_1 + 9);
    }
    else {
      cVar1 = *(char *)(param_1 + 2);
    }
    if (cVar1 == '\0') {
      uVar7 = uVar7 | (uint)(DAT_0067c938 <= fparam_0) << 0x1d;
      if (!SUB41(uVar7 >> 0x1d,0)) {
        uVar4 = *puVar3;
        fVar15 = param_1[4];
        fVar13 = param_1[5];
        *param_2 = (int)puVar3;
        param_2[1] = -1;
        fVar18 = *param_1;
        fVar16 = (float)VectorUnsignedToFloat(uVar4 >> 0xc,(byte)(uVar7 >> 0x15) & 3);
        param_2[2] = DAT_0067c93c;
        param_2[3] = (int)ALBW_AS_U32(fVar18);
        param_2[4] = (int)ALBW_AS_U32((fVar13 + fVar16 * fVar15));
        param_2[5] = (int)ALBW_AS_U32(fVar6);
        param_2[6] = (int)ALBW_AS_U32(fVar6);
        param_2[7] = (int)ALBW_AS_U32(fVar6);
        return;
      }
      uVar4 = puVar3[*(ushort *)((int)param_1 + 0xe) - 1];
      fVar15 = param_1[4];
      fVar18 = (float)VectorUnsignedToFloat(uVar4 & 0xfff,(byte)(uVar7 >> 0x15) & 3);
      fVar17 = (float)VectorUnsignedToFloat(uVar4 >> 0xc,(byte)(uVar7 >> 0x15) & 3);
      fVar18 = fVar18 * param_1[6] + *param_1;
      fVar13 = param_1[5];
      param_2[1] = 1;
      *param_2 = 0;
      fVar16 = param_1[1];
      param_2[4] = (int)ALBW_AS_U32((fVar13 + fVar17 * fVar15));
      param_2[5] = (int)ALBW_AS_U32(fVar6);
      param_2[6] = (int)ALBW_AS_U32(fVar6);
      param_2[7] = (int)ALBW_AS_U32(fVar6);
      iVar9 = DAT_0067c940;
      if (fVar16 < fVar18) {
        fVar18 = fVar16;
      }
      param_2[2] = (int)ALBW_AS_U32(fVar18);
      param_2[3] = iVar9;
      return;
    }
    fVar18 = DAT_0067c938;
    fVar6 = func_00590D4C(param_1[7] * fparam_0);
    uVar7 = (uint)fVar6;
    param_2[1] = uVar7;
    if ((cVar1 == '\x02') && ((uVar7 & 1) != 0)) {
      bVar2 = true;
      fVar6 = (float)VectorSignedToFloat(uVar7 + 1,(byte)(uVar4 >> 0x15) & 3);
      fVar6 = (param_1[1] - *param_1) * fVar6;
      fparam_0 = fVar6 - fparam_0;
    }
    else {
      fVar6 = (float)VectorSignedToFloat(uVar7,(byte)(uVar4 >> 0x15) & 3);
      fVar6 = (param_1[1] - *param_1) * fVar6;
      fparam_0 = fparam_0 - fVar6;
    }
    uVar10 = VectorFloatToUnsigned(fparam_0 / param_1[6],3);
  }
  fVar17 = DAT_0067c950;
  fVar16 = DAT_0067c94c;
  fVar15 = DAT_0067c948;
  fVar13 = DAT_0067c944;
  puVar3 = (uint *)*param_2;
  if (puVar3 == (uint *)0x0) {
    fVar8 = (float)VectorSignedToFloat(*(ushort *)((int)param_1 + 0xe) - 1,(byte)(uVar4 >> 0x15) & 3
                                      );
    iVar9 = VectorFloatToUnsigned(param_1[7] * fVar8 * fparam_0,3);
    puVar3 = (uint *)((int)ALBW_AS_U32(param_1[8]) + iVar9 * 4);
  }
  if (bVar2) {
    puVar5 = puVar3;
    if ((*puVar3 & 0xfff) < uVar10) {
      do {
        puVar3 = puVar3 + 1;
      } while ((*puVar3 & 0xfff) < uVar10);
    }
    else {
      do {
        puVar3 = puVar5;
        puVar5 = puVar3 + -1;
      } while (uVar10 <= (puVar3[-1] & 0xfff));
    }
    uVar7 = *puVar3;
    fVar11 = param_1[6];
    fVar12 = *param_1;
    puVar5 = puVar3 + -1;
    uVar10 = puVar3[-1];
    *param_2 = (int)puVar5;
    fVar8 = (float)VectorUnsignedToFloat(uVar7 & 0xfff,(byte)(uVar4 >> 0x15) & 3);
    cVar1 = *(char *)(param_1 + 3);
    fVar14 = (float)VectorUnsignedToFloat(uVar10 & 0xfff,(byte)(uVar4 >> 0x15) & 3);
    fVar8 = (fVar12 - fVar8 * fVar11) + fVar6;
    fVar6 = (fVar12 - fVar14 * fVar11) + fVar6;
    if (cVar1 == '\0') {
      uVar7 = *puVar3;
      fVar15 = param_1[4];
      fVar13 = param_1[5];
      param_2[5] = (int)ALBW_AS_U32(fVar18);
      param_2[6] = (int)ALBW_AS_U32(fVar18);
      param_2[7] = (int)ALBW_AS_U32(fVar18);
      fVar18 = (float)VectorUnsignedToFloat(uVar7 >> 0xc,(byte)(uVar4 >> 0x15) & 3);
      param_2[2] = (int)ALBW_AS_U32(fVar8);
      param_2[3] = (int)ALBW_AS_U32(fVar6);
      param_2[4] = (int)ALBW_AS_U32((fVar13 + fVar18 * fVar15));
      return;
    }
    if (cVar1 == '\x01') {
      fVar15 = param_1[5];
      fVar16 = param_1[4];
      fVar13 = (float)VectorUnsignedToFloat(*puVar3 >> 0xc,(byte)(uVar4 >> 0x15) & 3);
      fVar13 = fVar15 + fVar13 * fVar16;
      fVar17 = (float)VectorUnsignedToFloat(*puVar5 >> 0xc,(byte)(uVar4 >> 0x15) & 3);
      param_2[2] = (int)ALBW_AS_U32(fVar8);
      param_2[3] = (int)ALBW_AS_U32(fVar6);
      param_2[4] = (int)ALBW_AS_U32(fVar13);
      param_2[5] = (int)ALBW_AS_U32((((fVar15 + fVar17 * fVar16) - fVar13) / (fVar6 - fVar8)));
      param_2[6] = (int)ALBW_AS_U32(fVar18);
      param_2[7] = (int)ALBW_AS_U32(fVar18);
      return;
    }
    if (cVar1 == '\x02') {
      fVar12 = param_1[5];
      fVar14 = param_1[4];
      fVar18 = (float)VectorUnsignedToFloat(*puVar3 >> 0xc,(byte)(uVar4 >> 0x15) & 3);
      fVar11 = fVar12 + fVar18 * fVar14;
      fVar19 = (float)VectorUnsignedToFloat(*puVar5 >> 0xc,(byte)(uVar4 >> 0x15) & 3);
      param_2[4] = (int)ALBW_AS_U32(fVar11);
      param_2[2] = (int)ALBW_AS_U32(fVar8);
      param_2[3] = (int)ALBW_AS_U32(fVar6);
      fVar18 = DAT_0067c954;
      fVar6 = fVar6 - fVar8;
      param_2[5] = (int)ALBW_AS_U32(DAT_0067c954);
      fVar11 = fVar11 - (fVar12 + fVar19 * fVar14);
      fVar13 = fVar13 / fVar6;
      param_2[6] = (int)ALBW_AS_U32((((fVar6 * fVar15 * fVar18 - fVar11 * fVar16) - fVar6 * fVar18) *
                        fVar13 * fVar13));
      param_2[7] = (int)ALBW_AS_U32(((fVar11 * fVar17 + fVar6 * fVar18 + fVar6 * fVar18) *
                        fVar13 * fVar13 * fVar13));
      return;
    }
  }
  else {
    puVar5 = puVar3;
    if (uVar10 < (*puVar3 & 0xfff)) {
      do {
        puVar3 = puVar3 + -1;
      } while (uVar10 < (*puVar3 & 0xfff));
    }
    else {
      do {
        puVar3 = puVar5;
        puVar5 = puVar3 + 1;
      } while ((puVar3[1] & 0xfff) <= uVar10);
    }
    fVar8 = param_1[6];
    puVar5 = puVar3 + 1;
    fVar12 = (float)VectorUnsignedToFloat(*puVar3 & 0xfff,(byte)(uVar4 >> 0x15) & 3);
    fVar14 = (float)VectorUnsignedToFloat(puVar3[1] & 0xfff,(byte)(uVar4 >> 0x15) & 3);
    fVar11 = *param_1;
    *param_2 = (int)puVar5;
    cVar1 = *(char *)(param_1 + 3);
    fVar12 = fVar12 * fVar8 + fVar6 + fVar11;
    fVar11 = fVar14 * fVar8 + fVar6 + fVar11;
    if (cVar1 == '\0') {
      uVar7 = *puVar3;
      fVar13 = param_1[4];
      fVar6 = param_1[5];
      param_2[2] = (int)ALBW_AS_U32(fVar12);
      param_2[5] = (int)ALBW_AS_U32(fVar18);
      param_2[6] = (int)ALBW_AS_U32(fVar18);
      param_2[7] = (int)ALBW_AS_U32(fVar18);
      fVar18 = (float)VectorUnsignedToFloat(uVar7 >> 0xc,(byte)(uVar4 >> 0x15) & 3);
      param_2[3] = (int)ALBW_AS_U32(fVar11);
      param_2[4] = (int)ALBW_AS_U32((fVar6 + fVar18 * fVar13));
      return;
    }
    if (cVar1 == '\x01') {
      uVar7 = *puVar3;
      fVar6 = param_1[5];
      fVar15 = param_1[4];
      uVar10 = *puVar5;
      param_2[2] = (int)ALBW_AS_U32(fVar12);
      param_2[3] = (int)ALBW_AS_U32(fVar11);
      fVar13 = (float)VectorUnsignedToFloat(uVar7 >> 0xc,(byte)(uVar4 >> 0x15) & 3);
      fVar13 = fVar6 + fVar13 * fVar15;
      fVar16 = (float)VectorUnsignedToFloat(uVar10 >> 0xc,(byte)(uVar4 >> 0x15) & 3);
      param_2[4] = (int)ALBW_AS_U32(fVar13);
      param_2[5] = (int)ALBW_AS_U32((((fVar6 + fVar16 * fVar15) - fVar13) / (fVar11 - fVar12)));
      param_2[6] = (int)ALBW_AS_U32(fVar18);
      param_2[7] = (int)ALBW_AS_U32(fVar18);
      return;
    }
    if (cVar1 == '\x02') {
      uVar7 = *puVar3;
      fVar6 = param_1[5];
      fVar14 = param_1[4];
      uVar10 = *puVar5;
      param_2[2] = (int)ALBW_AS_U32(fVar12);
      param_2[3] = (int)ALBW_AS_U32(fVar11);
      fVar11 = fVar11 - fVar12;
      fVar8 = (float)VectorUnsignedToFloat(uVar7 >> 0xc,(byte)(uVar4 >> 0x15) & 3);
      fVar13 = fVar13 / fVar11;
      fVar8 = fVar6 + fVar8 * fVar14;
      fVar12 = (float)VectorUnsignedToFloat(uVar10 >> 0xc,(byte)(uVar4 >> 0x15) & 3);
      param_2[4] = (int)ALBW_AS_U32(fVar8);
      param_2[5] = (int)ALBW_AS_U32(fVar18);
      fVar8 = fVar8 - (fVar6 + fVar12 * fVar14);
      param_2[6] = (int)ALBW_AS_U32((((fVar11 * fVar15 * fVar18 - fVar8 * fVar16) - fVar11 * fVar18) *
                        fVar13 * fVar13));
      param_2[7] = (int)ALBW_AS_U32(((fVar8 * fVar17 + fVar11 * fVar18 + fVar11 * fVar18) *
                        fVar13 * fVar13 * fVar13));
      return;
    }
  }
  return;
}

