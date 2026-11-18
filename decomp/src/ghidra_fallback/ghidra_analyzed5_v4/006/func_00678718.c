#include "ghidra_types.h"

extern undefined4 DAT_006788b8;
extern float DAT_006788bc;
extern float DAT_006788c0;
extern float DAT_006788c4;
extern float DAT_006788c8;
extern float DAT_006788cc;

// USA 00678718 <- EU 006786F0 (Ghidra, non-matching)
// GLOBAL DAT_006788b8 undefined4
// GLOBAL DAT_006788bc float
// GLOBAL DAT_006788c0 float
// GLOBAL DAT_006788c4 float
// GLOBAL DAT_006788c8 float
// GLOBAL DAT_006788cc float

undefined4
func_00678718(undefined4 *param_1,float *param_2,uint *param_3,float fparam_0,float fparam_1)

{
  uint uVar1;
  char cVar2;
  byte bVar3;
  float fVar4;
  undefined4 uVar5;
  uint *puVar6;
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
  
  puVar6 = param_3 + -1;
  fVar13 = (float)VectorUnsignedToFloat(*param_3 & 0xfff,(byte)(in_fpscr >> 0x15) & 3);
  fVar15 = (float)VectorUnsignedToFloat(param_3[-1] & 0xfff,(byte)(in_fpscr >> 0x15) & 3);
  fVar13 = (*param_2 - fVar13 * param_2[6]) + fparam_0;
  uVar1 = in_fpscr & 0xfffffff | (uint)(fparam_1 == fVar13) << 0x1e |
          (uint)(fVar13 <= fparam_1) << 0x1d;
  bVar3 = (byte)(uVar1 >> 0x18);
  fVar15 = (*param_2 - fVar15 * param_2[6]) + fparam_0;
  bVar7 = false;
  if ((bool)(bVar3 >> 5 & 1)) {
    uVar1 = in_fpscr & 0xfffffff | (uint)(fVar15 == fparam_1) << 0x1e |
            (uint)(fparam_1 <= fVar15) << 0x1d;
    bVar3 = (byte)(uVar1 >> 0x18);
    bVar7 = (bool)(bVar3 >> 5 & 1);
  }
  if (!bVar7 || (bool)(bVar3 >> 6)) {
    uVar5 = 0;
  }
  else {
    *param_1 = puVar6;
    fVar4 = DAT_006788cc;
    fVar17 = DAT_006788c8;
    fVar14 = DAT_006788c4;
    fVar12 = DAT_006788c0;
    fVar8 = DAT_006788bc;
    uVar5 = DAT_006788b8;
    cVar2 = *(char *)(param_2 + 3);
    if (cVar2 == '\0') {
      fVar8 = (float)VectorUnsignedToFloat(*param_3 >> 0xc,(byte)(uVar1 >> 0x15) & 3);
      param_1[4] = ALBW_AS_U32(param_2[5] + fVar8 * param_2[4]);
      param_1[5] = uVar5;
      param_1[6] = uVar5;
      param_1[7] = uVar5;
      param_1[2] = ALBW_AS_U32(fVar13);
      param_1[3] = ALBW_AS_U32(fVar15);
    }
    else if (cVar2 == '\x01') {
      fVar8 = param_2[5];
      fVar14 = param_2[4];
      fVar12 = (float)VectorUnsignedToFloat(*param_3 >> 0xc,(byte)(uVar1 >> 0x15) & 3);
      fVar12 = fVar8 + fVar12 * fVar14;
      fVar17 = (float)VectorUnsignedToFloat(*puVar6 >> 0xc,(byte)(uVar1 >> 0x15) & 3);
      param_1[4] = ALBW_AS_U32(fVar12);
      param_1[5] = ALBW_AS_U32(((fVar8 + fVar17 * fVar14) - fVar12) / (fVar15 - fVar13));
      param_1[6] = uVar5;
      param_1[7] = uVar5;
      param_1[2] = ALBW_AS_U32(fVar13);
      param_1[3] = ALBW_AS_U32(fVar15);
    }
    else if (cVar2 == '\x02') {
      fVar9 = param_2[4];
      fVar10 = param_2[5];
      fVar16 = (float)VectorUnsignedToFloat(*param_3 >> 0xc,(byte)(uVar1 >> 0x15) & 3);
      fVar16 = fVar10 + fVar16 * fVar9;
      fVar11 = (float)VectorUnsignedToFloat(*puVar6 >> 0xc,(byte)(uVar1 >> 0x15) & 3);
      param_1[4] = ALBW_AS_U32(fVar16);
      param_1[2] = ALBW_AS_U32(fVar13);
      param_1[3] = ALBW_AS_U32(fVar15);
      fVar15 = fVar15 - fVar13;
      fVar16 = fVar16 - (fVar10 + fVar11 * fVar9);
      param_1[5] = ALBW_AS_U32(fVar8);
      fVar12 = fVar12 / fVar15;
      param_1[6] = ALBW_AS_U32(((fVar15 * fVar14 * fVar8 - fVar16 * fVar4) - fVar15 * fVar8) * fVar12 * fVar12);
      param_1[7] = ALBW_AS_U32((fVar16 * fVar17 + fVar15 * fVar8 + fVar15 * fVar8) * fVar12 * fVar12 * fVar12);
    }
    uVar5 = 1;
  }
  return uVar5;
}

