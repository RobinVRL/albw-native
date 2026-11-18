#include "ghidra_types.h"

extern undefined4 DAT_0067c480;
extern float DAT_0067c484;
extern float DAT_0067c488;
extern float DAT_0067c48c;
extern float DAT_0067c490;
extern float DAT_0067c494;

// USA 0067C2C8 <- EU 0067C2A0 (Ghidra, non-matching)
// GLOBAL DAT_0067c480 undefined4
// GLOBAL DAT_0067c484 float
// GLOBAL DAT_0067c488 float
// GLOBAL DAT_0067c48c float
// GLOBAL DAT_0067c490 float
// GLOBAL DAT_0067c494 float

undefined4
func_0067C2C8(undefined4 *param_1,float *param_2,uint *param_3,float fparam_0,float fparam_1)

{
  uint uVar1;
  char cVar2;
  short sVar3;
  byte bVar4;
  undefined4 uVar5;
  uint uVar6;
  uint uVar7;
  uint *puVar8;
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
  
  puVar8 = param_3 + 2;
  fVar11 = (float)VectorUnsignedToFloat(*param_3 & 0xfff,(byte)(in_fpscr >> 0x15) & 3);
  fVar16 = (float)VectorUnsignedToFloat(param_3[2] & 0xfff,(byte)(in_fpscr >> 0x15) & 3);
  fVar12 = fVar11 * param_2[6] + fparam_0 + *param_2;
  uVar1 = in_fpscr & 0xfffffff | (uint)(fparam_1 == fVar12) << 0x1e |
          (uint)(fVar12 <= fparam_1) << 0x1d;
  bVar4 = (byte)(uVar1 >> 0x18);
  fVar11 = fVar16 * param_2[6] + fparam_0 + *param_2;
  bVar9 = false;
  if ((bool)(bVar4 >> 5 & 1)) {
    uVar1 = in_fpscr & 0xfffffff | (uint)(fVar11 == fparam_1) << 0x1e |
            (uint)(fparam_1 <= fVar11) << 0x1d;
    bVar4 = (byte)(uVar1 >> 0x18);
    bVar9 = (bool)(bVar4 >> 5 & 1);
  }
  if (!bVar9 || (bool)(bVar4 >> 6)) {
    uVar5 = 0;
  }
  else {
    *param_1 = puVar8;
    fVar17 = DAT_0067c490;
    fVar13 = DAT_0067c48c;
    fVar16 = DAT_0067c488;
    uVar5 = DAT_0067c480;
    cVar2 = *(char *)(param_2 + 3);
    if (cVar2 == '\0') {
      uVar6 = *param_3;
      fVar13 = param_2[4];
      fVar16 = param_2[5];
      param_1[2] = ALBW_AS_U32(fVar12);
      param_1[5] = uVar5;
      param_1[6] = uVar5;
      param_1[7] = uVar5;
      fVar12 = (float)VectorUnsignedToFloat(uVar6 >> 0xc,(byte)(uVar1 >> 0x15) & 3);
      param_1[3] = ALBW_AS_U32(fVar11);
      param_1[4] = ALBW_AS_U32(fVar16 + fVar12 * fVar13);
    }
    else if (cVar2 == '\x01') {
      uVar7 = *param_3;
      fVar13 = param_2[5];
      fVar17 = param_2[4];
      uVar6 = *puVar8;
      param_1[2] = ALBW_AS_U32(fVar12);
      fVar16 = (float)VectorUnsignedToFloat(uVar7 >> 0xc,(byte)(uVar1 >> 0x15) & 3);
      fVar16 = fVar13 + fVar16 * fVar17;
      fVar18 = (float)VectorUnsignedToFloat(uVar6 >> 0xc,(byte)(uVar1 >> 0x15) & 3);
      param_1[3] = ALBW_AS_U32(fVar11);
      param_1[4] = ALBW_AS_U32(fVar16);
      param_1[5] = ALBW_AS_U32(((fVar13 + fVar18 * fVar17) - fVar16) / (fVar11 - fVar12));
      param_1[6] = uVar5;
      param_1[7] = uVar5;
    }
    else if (cVar2 == '\x02') {
      fVar14 = param_2[5];
      fVar15 = param_2[4];
      uVar7 = *puVar8;
      fVar18 = (float)VectorUnsignedToFloat(*param_3 >> 0xc,(byte)(uVar1 >> 0x15) & 3);
      fVar10 = fVar14 + fVar18 * fVar15;
      sVar3 = *(short *)((int)param_3 + 6);
      uVar6 = param_3[3];
      param_1[2] = ALBW_AS_U32(fVar12);
      fVar19 = (float)VectorUnsignedToFloat(uVar7 >> 0xc,(byte)(uVar1 >> 0x15) & 3);
      param_1[3] = ALBW_AS_U32(fVar11);
      param_1[4] = ALBW_AS_U32(fVar10);
      fVar18 = DAT_0067c494;
      fVar11 = fVar11 - fVar12;
      fVar20 = (float)VectorSignedToFloat((int)(short)uVar6,(byte)(uVar1 >> 0x15) & 3);
      fVar12 = (float)VectorSignedToFloat((int)sVar3,(byte)(uVar1 >> 0x15) & 3);
      fVar10 = fVar10 - (fVar14 + fVar19 * fVar15);
      fVar16 = fVar16 / fVar11;
      fVar12 = fVar12 * DAT_0067c484;
      fVar20 = fVar20 * DAT_0067c484;
      param_1[5] = ALBW_AS_U32(fVar12);
      param_1[6] = ALBW_AS_U32(((fVar11 * fVar13 * fVar12 - fVar10 * fVar18) - fVar11 * fVar20) *
                   fVar16 * fVar16);
      param_1[7] = ALBW_AS_U32((fVar10 * fVar17 + fVar11 * fVar12 + fVar11 * fVar20) * fVar16 * fVar16 * fVar16);
    }
    uVar5 = 1;
  }
  return uVar5;
}

