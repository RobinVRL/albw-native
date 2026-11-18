#include "ghidra_types.h"

extern undefined4 DAT_0067bd48;
extern float DAT_0067bd4c;
extern float DAT_0067bd50;
extern float DAT_0067bd54;
extern float DAT_0067bd58;
extern float DAT_0067bd5c;

// USA 0067BB60 <- EU 0067BB38 (Ghidra, non-matching)
// GLOBAL DAT_0067bd48 undefined4
// GLOBAL DAT_0067bd4c float
// GLOBAL DAT_0067bd50 float
// GLOBAL DAT_0067bd54 float
// GLOBAL DAT_0067bd58 float
// GLOBAL DAT_0067bd5c float

undefined4
func_0067BB60(undefined4 *param_1,float *param_2,byte *param_3,float fparam_0,float fparam_1)

{
  uint uVar1;
  char cVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  undefined4 uVar8;
  bool bVar9;
  uint in_fpscr;
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
  
  fVar11 = (float)VectorUnsignedToFloat((uint)*param_3,(byte)(in_fpscr >> 0x15) & 3);
  fVar16 = (float)VectorUnsignedToFloat((uint)param_3[4],(byte)(in_fpscr >> 0x15) & 3);
  fVar12 = fVar11 * param_2[6] + fparam_0 + *param_2;
  uVar1 = in_fpscr & 0xfffffff | (uint)(fparam_1 == fVar12) << 0x1e |
          (uint)(fVar12 <= fparam_1) << 0x1d;
  bVar3 = (byte)(uVar1 >> 0x18);
  fVar11 = fVar16 * param_2[6] + fparam_0 + *param_2;
  bVar9 = false;
  if ((bool)(bVar3 >> 5 & 1)) {
    uVar1 = in_fpscr & 0xfffffff | (uint)(fVar11 == fparam_1) << 0x1e |
            (uint)(fparam_1 <= fVar11) << 0x1d;
    bVar3 = (byte)(uVar1 >> 0x18);
    bVar9 = (bool)(bVar3 >> 5 & 1);
  }
  if (!bVar9 || (bool)(bVar3 >> 6)) {
    uVar8 = 0;
  }
  else {
    *param_1 = param_3 + 4;
    fVar17 = DAT_0067bd58;
    fVar13 = DAT_0067bd54;
    fVar16 = DAT_0067bd50;
    uVar8 = DAT_0067bd48;
    cVar2 = *(char *)(param_2 + 3);
    if (cVar2 == '\0') {
      bVar3 = param_3[2];
      bVar4 = param_3[1];
      fVar13 = param_2[4];
      fVar16 = param_2[5];
      param_1[2] = ALBW_AS_U32(fVar12);
      param_1[5] = uVar8;
      param_1[6] = uVar8;
      param_1[7] = uVar8;
      fVar12 = (float)VectorUnsignedToFloat
                                ((uint)bVar4 + (bVar3 & 0xf) * 0x100,(byte)(uVar1 >> 0x15) & 3);
      param_1[3] = ALBW_AS_U32(fVar11);
      param_1[4] = ALBW_AS_U32(fVar16 + fVar12 * fVar13);
    }
    else if (cVar2 == '\x01') {
      bVar3 = param_3[2];
      bVar4 = param_3[1];
      fVar17 = param_2[4];
      fVar13 = param_2[5];
      bVar5 = param_3[6];
      bVar6 = param_3[5];
      param_1[2] = ALBW_AS_U32(fVar12);
      fVar16 = (float)VectorUnsignedToFloat
                                ((uint)bVar4 + (bVar3 & 0xf) * 0x100,(byte)(uVar1 >> 0x15) & 3);
      fVar16 = fVar13 + fVar16 * fVar17;
      fVar18 = (float)VectorUnsignedToFloat
                                ((uint)bVar6 + (bVar5 & 0xf) * 0x100,(byte)(uVar1 >> 0x15) & 3);
      param_1[3] = ALBW_AS_U32(fVar11);
      param_1[4] = ALBW_AS_U32(fVar16);
      param_1[5] = ALBW_AS_U32(((fVar13 + fVar18 * fVar17) - fVar16) / (fVar11 - fVar12));
      param_1[6] = uVar8;
      param_1[7] = uVar8;
    }
    else if (cVar2 == '\x02') {
      bVar3 = param_3[2];
      fVar15 = param_2[4];
      fVar14 = param_2[5];
      bVar4 = param_3[6];
      bVar5 = param_3[5];
      fVar18 = (float)VectorUnsignedToFloat
                                ((uint)param_3[1] + (bVar3 & 0xf) * 0x100,(byte)(uVar1 >> 0x15) & 3)
      ;
      fVar10 = fVar14 + fVar18 * fVar15;
      bVar6 = param_3[3];
      bVar7 = param_3[7];
      param_1[2] = ALBW_AS_U32(fVar12);
      fVar19 = (float)VectorUnsignedToFloat
                                ((uint)bVar5 + (bVar4 & 0xf) * 0x100,(byte)(uVar1 >> 0x15) & 3);
      param_1[3] = ALBW_AS_U32(fVar11);
      param_1[4] = ALBW_AS_U32(fVar10);
      fVar18 = DAT_0067bd5c;
      fVar11 = fVar11 - fVar12;
      fVar20 = (float)VectorSignedToFloat((char)bVar7 * 0x10 + (uint)(bVar4 >> 4),
                                          (byte)(uVar1 >> 0x15) & 3);
      fVar12 = (float)VectorSignedToFloat((char)bVar6 * 0x10 + (uint)(bVar3 >> 4),
                                          (byte)(uVar1 >> 0x15) & 3);
      fVar10 = fVar10 - (fVar14 + fVar19 * fVar15);
      fVar16 = fVar16 / fVar11;
      fVar12 = fVar12 * DAT_0067bd4c;
      fVar20 = fVar20 * DAT_0067bd4c;
      param_1[5] = ALBW_AS_U32(fVar12);
      param_1[6] = ALBW_AS_U32(((fVar11 * fVar13 * fVar12 - fVar10 * fVar18) - fVar11 * fVar20) *
                   fVar16 * fVar16);
      param_1[7] = ALBW_AS_U32((fVar10 * fVar17 + fVar11 * fVar12 + fVar11 * fVar20) * fVar16 * fVar16 * fVar16);
    }
    uVar8 = 1;
  }
  return uVar8;
}

