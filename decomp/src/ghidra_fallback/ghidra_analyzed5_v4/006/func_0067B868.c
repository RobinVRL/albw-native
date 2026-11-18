#include "ghidra_types.h"

extern float DAT_0067b9f4;
extern float DAT_0067b9f8;
extern float DAT_0067b9fc;
extern float DAT_0067ba00;
extern float DAT_0067ba04;

// USA 0067B868 <- EU 0067B840 (Ghidra, non-matching)
// GLOBAL DAT_0067b9f4 float
// GLOBAL DAT_0067b9f8 float
// GLOBAL DAT_0067b9fc float
// GLOBAL DAT_0067ba00 float
// GLOBAL DAT_0067ba04 float

undefined4
func_0067B868(undefined4 *param_1,float *param_2,uint *param_3,float fparam_0,float fparam_1)

{
  uint uVar1;
  char cVar2;
  byte bVar3;
  uint *puVar4;
  bool bVar5;
  uint in_fpscr;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  
  puVar4 = param_3 + 1;
  fVar9 = (float)VectorUnsignedToFloat(*param_3 & 0xfff,(byte)(in_fpscr >> 0x15) & 3);
  fVar11 = (float)VectorUnsignedToFloat(param_3[1] & 0xfff,(byte)(in_fpscr >> 0x15) & 3);
  fVar10 = fVar9 * param_2[6] + fparam_0 + *param_2;
  uVar1 = in_fpscr & 0xfffffff | (uint)(fparam_1 == fVar10) << 0x1e |
          (uint)(fVar10 <= fparam_1) << 0x1d;
  bVar3 = (byte)(uVar1 >> 0x18);
  fVar9 = fVar11 * param_2[6] + fparam_0 + *param_2;
  bVar5 = false;
  if ((bool)(bVar3 >> 5 & 1)) {
    uVar1 = in_fpscr & 0xfffffff | (uint)(fVar9 == fparam_1) << 0x1e |
            (uint)(fparam_1 <= fVar9) << 0x1d;
    bVar3 = (byte)(uVar1 >> 0x18);
    bVar5 = (bool)(bVar3 >> 5 & 1);
  }
  if (bVar5 && !(bool)(bVar3 >> 6)) {
    *param_1 = puVar4;
    fVar12 = DAT_0067ba00;
    fVar13 = DAT_0067b9fc;
    fVar7 = DAT_0067b9f8;
    fVar11 = DAT_0067b9f4;
    cVar2 = *(char *)(param_2 + 3);
    if (cVar2 == '\0') {
      fVar7 = (float)VectorUnsignedToFloat(*param_3 >> 0xc,(byte)(uVar1 >> 0x15) & 3);
      param_1[4] = ALBW_AS_U32(param_2[5] + fVar7 * param_2[4]);
      param_1[5] = ALBW_AS_U32(fVar11);
      param_1[6] = ALBW_AS_U32(fVar11);
      param_1[7] = ALBW_AS_U32(fVar11);
      param_1[2] = ALBW_AS_U32(fVar10);
      param_1[3] = ALBW_AS_U32(fVar9);
    }
    else {
      if (cVar2 == '\x01') {
        fVar12 = param_2[5];
        fVar13 = param_2[4];
        fVar7 = (float)VectorUnsignedToFloat(*param_3 >> 0xc,(byte)(uVar1 >> 0x15) & 3);
        fVar7 = fVar12 + fVar7 * fVar13;
        fVar6 = (float)VectorUnsignedToFloat(*puVar4 >> 0xc,(byte)(uVar1 >> 0x15) & 3);
        param_1[4] = ALBW_AS_U32(fVar7);
        param_1[2] = ALBW_AS_U32(fVar10);
        param_1[3] = ALBW_AS_U32(fVar9);
        param_1[5] = ALBW_AS_U32(((fVar12 + fVar6 * fVar13) - fVar7) / (fVar9 - fVar10));
        param_1[6] = ALBW_AS_U32(fVar11);
      }
      else {
        if (cVar2 != '\x02') {
          return 1;
        }
        fVar6 = param_2[5];
        fVar8 = param_2[4];
        fVar14 = (float)VectorUnsignedToFloat(*param_3 >> 0xc,(byte)(uVar1 >> 0x15) & 3);
        fVar14 = fVar6 + fVar14 * fVar8;
        fVar15 = (float)VectorUnsignedToFloat(*puVar4 >> 0xc,(byte)(uVar1 >> 0x15) & 3);
        param_1[2] = ALBW_AS_U32(fVar10);
        param_1[3] = ALBW_AS_U32(fVar9);
        param_1[4] = ALBW_AS_U32(fVar14);
        param_1[5] = ALBW_AS_U32(fVar11);
        fVar9 = fVar9 - fVar10;
        fVar14 = fVar14 - (fVar6 + fVar15 * fVar8);
        fVar7 = fVar7 / fVar9;
        fVar13 = fVar9 * fVar13 * fVar11;
        fVar10 = fVar9 * fVar11;
        fVar11 = (fVar14 * fVar12 + fVar9 * fVar11 + fVar9 * fVar11) * fVar7 * fVar7 * fVar7;
        param_1[6] = ALBW_AS_U32(((fVar13 - fVar14 * DAT_0067ba04) - fVar10) * fVar7 * fVar7);
      }
      param_1[7] = ALBW_AS_U32(fVar11);
    }
    return 1;
  }
  return 0;
}

