#include "ghidra_types.h"

extern undefined4 DAT_00679164;
extern float DAT_00679168;
extern float DAT_0067916c;
extern float DAT_00679170;
extern float DAT_00679174;
extern float DAT_00679178;

// USA 00678F84 <- EU 00678F5C (Ghidra, non-matching)
// GLOBAL DAT_00679164 undefined4
// GLOBAL DAT_00679168 float
// GLOBAL DAT_0067916c float
// GLOBAL DAT_00679170 float
// GLOBAL DAT_00679174 float
// GLOBAL DAT_00679178 float

undefined4
func_00678F84(undefined4 *param_1,float *param_2,byte *param_3,float fparam_0,float fparam_1)

{
  uint uVar1;
  char cVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  undefined4 uVar9;
  bool bVar10;
  uint in_fpscr;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  
  fVar11 = (float)VectorUnsignedToFloat((uint)*param_3,(byte)(in_fpscr >> 0x15) & 3);
  fVar17 = (float)VectorUnsignedToFloat((uint)param_3[-6],(byte)(in_fpscr >> 0x15) & 3);
  fVar12 = (*param_2 - fVar11 * param_2[6]) + fparam_0;
  uVar1 = in_fpscr & 0xfffffff | (uint)(fparam_1 == fVar12) << 0x1e |
          (uint)(fVar12 <= fparam_1) << 0x1d;
  bVar3 = (byte)(uVar1 >> 0x18);
  fVar11 = (*param_2 - fVar17 * param_2[6]) + fparam_0;
  bVar10 = false;
  if ((bool)(bVar3 >> 5 & 1)) {
    uVar1 = in_fpscr & 0xfffffff | (uint)(fVar11 == fparam_1) << 0x1e |
            (uint)(fparam_1 <= fVar11) << 0x1d;
    bVar3 = (byte)(uVar1 >> 0x18);
    bVar10 = (bool)(bVar3 >> 5 & 1);
  }
  if (!bVar10 || (bool)(bVar3 >> 6)) {
    uVar9 = 0;
  }
  else {
    *param_1 = param_3 + -6;
    fVar21 = DAT_00679178;
    fVar18 = DAT_00679174;
    fVar14 = DAT_00679170;
    fVar17 = DAT_0067916c;
    uVar9 = DAT_00679164;
    cVar2 = *(char *)(param_2 + 3);
    if (cVar2 == '\0') {
      bVar3 = param_3[1];
      bVar4 = param_3[2];
      fVar14 = param_2[4];
      fVar17 = param_2[5];
      param_1[2] = ALBW_AS_U32(fVar12);
      param_1[5] = uVar9;
      param_1[6] = uVar9;
      param_1[7] = uVar9;
      fVar12 = (float)VectorUnsignedToFloat
                                ((uint)bVar3 + (uint)bVar4 * 0x100,(byte)(uVar1 >> 0x15) & 3);
      param_1[3] = ALBW_AS_U32(fVar11);
      param_1[4] = ALBW_AS_U32(fVar17 + fVar12 * fVar14);
    }
    else if (cVar2 == '\x01') {
      bVar3 = param_3[1];
      bVar4 = param_3[2];
      fVar18 = param_2[4];
      fVar14 = param_2[5];
      bVar5 = param_3[-4];
      bVar6 = param_3[-5];
      param_1[2] = ALBW_AS_U32(fVar12);
      fVar17 = (float)VectorUnsignedToFloat
                                ((uint)bVar3 + (uint)bVar4 * 0x100,(byte)(uVar1 >> 0x15) & 3);
      fVar17 = fVar14 + fVar17 * fVar18;
      fVar21 = (float)VectorUnsignedToFloat
                                ((uint)bVar6 + (uint)bVar5 * 0x100,(byte)(uVar1 >> 0x15) & 3);
      param_1[5] = ALBW_AS_U32(((fVar14 + fVar21 * fVar18) - fVar17) / (fVar11 - fVar12));
      param_1[6] = uVar9;
      param_1[7] = uVar9;
      param_1[3] = ALBW_AS_U32(fVar11);
      param_1[4] = ALBW_AS_U32(fVar17);
    }
    else if (cVar2 == '\x02') {
      fVar15 = param_2[4];
      fVar13 = param_2[5];
      bVar3 = param_3[-4];
      bVar4 = param_3[-5];
      fVar19 = (float)VectorUnsignedToFloat
                                ((uint)param_3[1] + (uint)param_3[2] * 0x100,
                                 (byte)(uVar1 >> 0x15) & 3);
      bVar5 = param_3[-3];
      bVar6 = param_3[-2];
      fVar19 = fVar13 + fVar19 * fVar15;
      bVar8 = param_3[5];
      bVar7 = param_3[4];
      param_1[2] = ALBW_AS_U32(fVar12);
      fVar20 = (float)VectorUnsignedToFloat
                                ((uint)bVar4 + (uint)bVar3 * 0x100,(byte)(uVar1 >> 0x15) & 3);
      fVar22 = (float)VectorSignedToFloat((uint)bVar5 + (char)(bVar6 << 4) * 0x10,
                                          (byte)(uVar1 >> 0x15) & 3);
      fVar16 = (float)VectorSignedToFloat((char)bVar8 * 0x10 + (uint)(bVar7 >> 4),
                                          (byte)(uVar1 >> 0x15) & 3);
      fVar22 = fVar22 * DAT_00679168;
      fVar13 = fVar19 - (fVar13 + fVar20 * fVar15);
      fVar16 = fVar16 * DAT_00679168;
      fVar12 = fVar11 - fVar12;
      param_1[5] = ALBW_AS_U32(fVar16);
      fVar14 = fVar14 / fVar12;
      param_1[6] = ALBW_AS_U32(((fVar12 * fVar17 * fVar16 - fVar13 * fVar21) - fVar12 * fVar22) *
                   fVar14 * fVar14);
      param_1[7] = ALBW_AS_U32((fVar13 * fVar18 + fVar12 * fVar16 + fVar12 * fVar22) * fVar14 * fVar14 * fVar14);
      param_1[3] = ALBW_AS_U32(fVar11);
      param_1[4] = ALBW_AS_U32(fVar19);
    }
    uVar9 = 1;
  }
  return uVar9;
}

