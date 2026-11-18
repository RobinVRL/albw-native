#include "ghidra_types.h"

extern undefined8 func_00114608(uint param_1,uint param_2);
extern float DAT_0032c33c;
extern int DAT_0032c340;
extern float DAT_0032c344;
extern float DAT_0032c348;
extern float DAT_0032c34c;
extern float DAT_0032c350;
extern float DAT_0032c354;
extern float DAT_0032c358;
extern float DAT_0032c35c;

// USA 0032C1EC <- EU 0032C1C8 (Ghidra, non-matching)
// GLOBAL DAT_0032c33c float
// GLOBAL DAT_0032c340 int
// GLOBAL DAT_0032c344 float
// GLOBAL DAT_0032c348 float
// GLOBAL DAT_0032c34c float
// GLOBAL DAT_0032c350 float
// GLOBAL DAT_0032c354 float
// GLOBAL DAT_0032c358 float
// GLOBAL DAT_0032c35c float

undefined4 func_0032C1EC(int param_1)

{
  byte bVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  bool bVar5;
  uint in_fpscr;
  float fVar6;
  uint uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  uint uVar11;
  float fVar12;
  undefined8 uVar13;
  
  *(undefined1 *)(param_1 + 0xc93) = 0;
  fVar12 = DAT_0032c344;
  fVar10 = DAT_0032c33c;
  fVar6 = (float)VectorUnsignedToFloat(*(undefined4 *)(param_1 + 1000),(byte)(in_fpscr >> 0x15) & 3)
  ;
  fVar8 = (float)VectorUnsignedToFloat
                           (*(undefined4 *)(param_1 + 0xc40),(byte)(in_fpscr >> 0x15) & 3);
  fVar6 = fVar6 * DAT_0032c33c;
  fVar8 = fVar8 * DAT_0032c33c;
  fVar9 = (float)VectorUnsignedToFloat
                           (*(undefined4 *)(param_1 + 0xc3c),(byte)(in_fpscr >> 0x15) & 3);
  bVar5 = *(char *)(DAT_0032c340 + param_1) != '\0';
  if (bVar5) {
    iVar4 = 0;
    *(undefined4 *)(param_1 + 0xa74) = 0;
    *(undefined4 *)(param_1 + 0xa78) = 0;
  }
  else {
    iVar4 = 0x5a;
  }
  fVar3 = DAT_0032c358;
  fVar2 = DAT_0032c354;
  fVar9 = fVar9 * fVar10;
  fVar10 = (float)VectorUnsignedToFloat(iVar4,(byte)(in_fpscr >> 0x15) & 3);
  fVar12 = fVar9 * fVar10 * fVar12;
  if (!bVar5) {
    uVar11 = in_fpscr & 0xfffffff | (uint)(fVar8 < fVar6) << 0x1f | (uint)(fVar8 == fVar6) << 0x1e;
    bVar1 = (byte)(uVar11 >> 0x18);
    fVar10 = (float)VectorUnsignedToFloat(iVar4,(byte)(uVar11 >> 0x15) & 3);
    if ((bool)(bVar1 >> 6 & 1) || (bool)(bVar1 >> 7) != (NAN(fVar8) || NAN(fVar6))) {
      fVar8 = fVar8 + DAT_0032c350;
    }
    fVar8 = fVar8 - fVar6;
    fVar10 = fVar9 * DAT_0032c348 + fVar9 * (fVar10 - DAT_0032c34c);
    uVar11 = in_fpscr & 0xfffffff | (uint)(fVar12 <= fVar8) << 0x1d;
    bVar1 = (byte)(uVar11 >> 0x18);
    while (!(bool)(bVar1 >> 5)) {
      fVar8 = fVar8 + DAT_0032c350;
      uVar11 = uVar11 & 0xfffffff | (uint)(fVar12 <= fVar8) << 0x1d;
      bVar1 = (byte)(uVar11 >> 0x18);
    }
    uVar11 = uVar11 & 0xfffffff | (uint)(fVar8 == fVar10) << 0x1e | (uint)(fVar10 <= fVar8) << 0x1d;
    *(undefined4 *)(param_1 + 0xa74) = 0;
    bVar1 = (byte)(uVar11 >> 0x18);
    if ((bool)(bVar1 >> 5 & 1) && !(bool)(bVar1 >> 6)) {
      fVar12 = (float)VectorUnsignedToFloat(iVar4,(byte)(uVar11 >> 0x15) & 3);
      uVar11 = (uint)((fVar10 * fVar2) / fVar9 - fVar12);
      fVar6 = fVar9 * DAT_0032c35c;
      *(uint *)(param_1 + 0xa78) = (int)((fVar8 - fVar10) / fVar9) + uVar11;
      fVar6 = fVar6 * fVar3;
      uVar13 = func_00114608((uint)ALBW_AS_U32(fVar6),uVar11);
      *(int *)(param_1 + 0xa7c) = (int)uVar13;
    }
    else {
      fVar10 = (float)VectorUnsignedToFloat(iVar4,(byte)(uVar11 >> 0x15) & 3);
      uVar7 = (uint)((fVar8 * fVar2) / fVar9 - fVar10);
      *(uint *)(param_1 + 0xa78) = uVar7;
      fVar8 = (float)VectorUnsignedToFloat(iVar4 - uVar7,(byte)(uVar11 >> 0x15) & 3);
      fVar6 = (fVar9 / fVar8) * fVar3;
      uVar13 = func_00114608((uint)ALBW_AS_U32(fVar6),uVar7);
      *(int *)(param_1 + 0xa7c) = (int)uVar13;
    }
  }
  *(undefined1 *)(param_1 + 0xc9a) = 0;
  return ALBW_AS_U32(fVar6);
}

