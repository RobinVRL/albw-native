#include "ghidra_types.h"

extern float DAT_0067bf28;
extern undefined4 DAT_0067bf2c;
extern float DAT_0067bf30;
extern float DAT_0067bf34;
extern float DAT_0067bf38;
extern float DAT_0067bf3c;
extern float DAT_0067bf40;

// USA 0067BD88 <- EU 0067BD60 (Ghidra, non-matching)
// GLOBAL DAT_0067bf28 float
// GLOBAL DAT_0067bf2c undefined4
// GLOBAL DAT_0067bf30 float
// GLOBAL DAT_0067bf34 float
// GLOBAL DAT_0067bf38 float
// GLOBAL DAT_0067bf3c float
// GLOBAL DAT_0067bf40 float

undefined4
func_0067BD88(undefined4 *param_1,float *param_2,ushort *param_3,float fparam_0,float fparam_1)

{
  uint uVar1;
  char cVar2;
  ushort uVar3;
  ushort uVar4;
  byte bVar5;
  undefined4 uVar6;
  bool bVar7;
  uint in_fpscr;
  float fVar8;
  float fVar9;
  float fVar10;
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
  
  fVar10 = (float)VectorUnsignedToFloat((uint)*param_3,(byte)(in_fpscr >> 0x15) & 3);
  fVar17 = (float)VectorUnsignedToFloat((uint)param_3[3],(byte)(in_fpscr >> 0x15) & 3);
  fVar10 = fVar10 * DAT_0067bf28 * param_2[6] + fparam_0 + *param_2;
  uVar1 = in_fpscr & 0xfffffff | (uint)(fparam_1 == fVar10) << 0x1e |
          (uint)(fVar10 <= fparam_1) << 0x1d;
  bVar5 = (byte)(uVar1 >> 0x18);
  fVar17 = fVar17 * DAT_0067bf28 * param_2[6] + fparam_0 + *param_2;
  bVar7 = false;
  if ((bool)(bVar5 >> 5 & 1)) {
    uVar1 = in_fpscr & 0xfffffff | (uint)(fVar17 == fparam_1) << 0x1e |
            (uint)(fparam_1 <= fVar17) << 0x1d;
    bVar5 = (byte)(uVar1 >> 0x18);
    bVar7 = (bool)(bVar5 >> 5 & 1);
  }
  if (!bVar7 || (bool)(bVar5 >> 6)) {
    uVar6 = 0;
  }
  else {
    *param_1 = param_3 + 3;
    fVar19 = DAT_0067bf40;
    fVar12 = DAT_0067bf3c;
    fVar9 = DAT_0067bf38;
    fVar18 = DAT_0067bf34;
    uVar6 = DAT_0067bf2c;
    cVar2 = *(char *)(param_2 + 3);
    if (cVar2 == '\0') {
      fVar18 = (float)VectorUnsignedToFloat((uint)param_3[1],(byte)(uVar1 >> 0x15) & 3);
      param_1[4] = ALBW_AS_U32(param_2[5] + fVar18 * param_2[4]);
      param_1[5] = uVar6;
      param_1[6] = uVar6;
      param_1[7] = uVar6;
      param_1[2] = ALBW_AS_U32(fVar10);
      param_1[3] = ALBW_AS_U32(fVar17);
    }
    else if (cVar2 == '\x01') {
      uVar3 = param_3[1];
      fVar9 = param_2[5];
      fVar12 = param_2[4];
      uVar4 = param_3[4];
      param_1[6] = DAT_0067bf2c;
      param_1[7] = uVar6;
      fVar18 = (float)VectorUnsignedToFloat((uint)uVar3,(byte)(uVar1 >> 0x15) & 3);
      fVar18 = fVar9 + fVar18 * fVar12;
      fVar19 = (float)VectorUnsignedToFloat((uint)uVar4,(byte)(uVar1 >> 0x15) & 3);
      param_1[4] = ALBW_AS_U32(fVar18);
      param_1[5] = ALBW_AS_U32(((fVar9 + fVar19 * fVar12) - fVar18) / (fVar17 - fVar10));
      param_1[2] = ALBW_AS_U32(fVar10);
      param_1[3] = ALBW_AS_U32(fVar17);
    }
    else if (cVar2 == '\x02') {
      fVar8 = param_2[5];
      fVar11 = param_2[4];
      fVar13 = (float)VectorUnsignedToFloat((uint)param_3[1],(byte)(uVar1 >> 0x15) & 3);
      fVar13 = fVar8 + fVar13 * fVar11;
      uVar3 = param_3[2];
      uVar4 = param_3[5];
      fVar14 = (float)VectorUnsignedToFloat((uint)param_3[4],(byte)(uVar1 >> 0x15) & 3);
      param_1[4] = ALBW_AS_U32(fVar13);
      fVar20 = (float)VectorSignedToFloat((int)(short)uVar3,(byte)(uVar1 >> 0x15) & 3);
      fVar15 = (float)VectorSignedToFloat((int)(short)uVar4,(byte)(uVar1 >> 0x15) & 3);
      fVar20 = fVar20 * DAT_0067bf30;
      fVar15 = fVar15 * DAT_0067bf30;
      fVar16 = fVar17 - fVar10;
      fVar13 = fVar13 - (fVar8 + fVar14 * fVar11);
      param_1[5] = ALBW_AS_U32(fVar20);
      fVar9 = fVar9 / fVar16;
      param_1[6] = ALBW_AS_U32(((fVar16 * fVar18 * fVar20 - fVar13 * fVar19) - fVar16 * fVar15) * fVar9 * fVar9);
      param_1[7] = ALBW_AS_U32((fVar13 * fVar12 + fVar16 * fVar20 + fVar16 * fVar15) * fVar9 * fVar9 * fVar9);
      param_1[2] = ALBW_AS_U32(fVar10);
      param_1[3] = ALBW_AS_U32(fVar17);
    }
    uVar6 = 1;
  }
  return uVar6;
}

