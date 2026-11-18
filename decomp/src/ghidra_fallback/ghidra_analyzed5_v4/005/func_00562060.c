#include "ghidra_types.h"

extern float DAT_00562248;
extern float DAT_0056224c;
extern int DAT_00562250;
extern float DAT_00562254;

// USA 00562060 <- EU 00562038 (Ghidra, non-matching)
// GLOBAL DAT_00562248 float
// GLOBAL DAT_0056224c float
// GLOBAL DAT_00562250 int
// GLOBAL DAT_00562254 float

undefined4 * func_00562060(float *param_1,undefined4 *param_2)

{
  float fVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint in_fpscr;
  float fVar7;
  float fVar8;
  
  iVar6 = DAT_00562250;
  fVar1 = DAT_0056224c;
  fVar7 = DAT_00562248;
  uVar2 = in_fpscr & 0xfffffff | (uint)(*param_1 == DAT_00562248) << 0x1e;
  iVar5 = DAT_00562250 + -0x20;
  iVar4 = DAT_00562250 + -0x1f;
  if (SUB41(uVar2 >> 0x1e,0)) {
    *param_2 = 1;
    param_2[1] = iVar6;
    fVar7 = param_1[3] - param_1[4];
    iVar6 = 0;
    if ((ABS(fVar7) == 0.0) || (iVar6 = ((uint)((int)ALBW_AS_U32(fVar7) << 1) >> 0x18) - 0x40, -1 < iVar6)) {
      uVar3 = (uint)((int)ALBW_AS_U32(fVar7) << 9) >> 0x10 | iVar6 << 0x10 | ((uint)ALBW_AS_U32(fVar7) >> 0x1f) << 0x17;
    }
    else {
      uVar3 = ((uint)ALBW_AS_U32(fVar7) >> 0x1f) << 0x17;
    }
    param_2[2] = uVar3;
    param_2[3] = iVar5;
    if (*(char *)(param_1 + 1) == '\0') {
      fVar7 = param_1[3];
    }
    else {
      fVar7 = (float)VectorSignedToFloat((1 << *(sbyte *)(param_1 + 5)) + -1,
                                         (byte)(uVar2 >> 0x15) & 3);
      fVar7 = param_1[3] - ((param_1[3] - param_1[4]) * fVar1 * param_1[2]) / fVar7;
    }
    iVar6 = 0;
    if ((ABS(fVar7) == 0.0) || (iVar6 = ((uint)((int)ALBW_AS_U32(fVar7) << 1) >> 0x18) - 0x40, -1 < iVar6)) {
      uVar2 = (uint)((int)ALBW_AS_U32(fVar7) << 9) >> 0x10 | iVar6 << 0x10 | ((uint)ALBW_AS_U32(fVar7) >> 0x1f) << 0x17;
    }
    else {
      uVar2 = ((uint)ALBW_AS_U32(fVar7) >> 0x1f) << 0x17;
    }
    goto LAB_00562138;
  }
  *param_2 = 0;
  param_2[1] = iVar6;
  fVar8 = -*param_1;
  iVar6 = 0;
  if ((ABS(fVar8) == 0.0) || (iVar6 = ((uint)((int)ALBW_AS_U32(fVar8) << 1) >> 0x18) - 0x40, -1 < iVar6)) {
    uVar3 = (uint)((int)ALBW_AS_U32(fVar8) << 9) >> 0x10 | iVar6 << 0x10 | ((uint)ALBW_AS_U32(fVar8) >> 0x1f) << 0x17;
  }
  else {
    uVar3 = ((uint)ALBW_AS_U32(fVar8) >> 0x1f) << 0x17;
  }
  param_2[2] = uVar3;
  param_2[3] = iVar5;
  if (*(char *)(param_1 + 1) != '\0') {
    if (*(byte *)(param_1 + 5) == 0x18) {
      fVar7 = (param_1[2] * fVar1) / DAT_00562254;
      iVar6 = 0;
      if ((ABS(fVar7) == 0.0) || (iVar6 = ((uint)((int)ALBW_AS_U32(fVar7) << 1) >> 0x18) - 0x40, -1 < iVar6))
      goto LAB_005621e8;
LAB_0056222c:
      uVar3 = ((uint)ALBW_AS_U32(fVar7) >> 0x1f) << 0x17;
    }
    else {
      fVar7 = (float)VectorSignedToFloat((1 << (uint)*(byte *)(param_1 + 5)) + -1,
                                         (byte)(uVar2 >> 0x15) & 3);
      fVar7 = param_1[2] / fVar7;
      iVar6 = 0;
      if ((ABS(fVar7) != 0.0) && (iVar6 = ((uint)((int)ALBW_AS_U32(fVar7) << 1) >> 0x18) - 0x40, iVar6 < 0))
      goto LAB_0056222c;
LAB_005621e8:
      uVar3 = (uint)((int)ALBW_AS_U32(fVar7) << 9) >> 0x10 | iVar6 << 0x10 | ((uint)ALBW_AS_U32(fVar7) >> 0x1f) << 0x17;
    }
    fVar7 = (float)VectorUnsignedToFloat(uVar3,(byte)(uVar2 >> 0x15) & 3);
  }
  uVar2 = VectorFloatToUnsigned(fVar7,3);
LAB_00562138:
  param_2[4] = uVar2;
  param_2[5] = iVar4;
  return param_2 + 6;
}

