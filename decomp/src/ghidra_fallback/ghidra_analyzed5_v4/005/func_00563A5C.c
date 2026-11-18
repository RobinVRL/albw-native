#include "ghidra_types.h"

extern float DAT_00563bc4;
extern float DAT_00563bc8;
extern uint DAT_00563bcc;
extern uint DAT_00563bd0;

// USA 00563A5C <- EU 00563A34 (Ghidra, non-matching)
// GLOBAL DAT_00563bc4 float
// GLOBAL DAT_00563bc8 float
// GLOBAL DAT_00563bcc uint
// GLOBAL DAT_00563bd0 uint

uint * func_00563A5C(uint *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint in_fpscr;
  float fVar8;
  
  uVar2 = DAT_00563bd0;
  uVar1 = DAT_00563bcc;
  fVar8 = (float)VectorUnsignedToFloat(param_1[2],(byte)(in_fpscr >> 0x15) & 3);
  fVar8 = fVar8 * DAT_00563bc4;
  iVar6 = 0;
  if ((ABS(fVar8) == 0.0) || (iVar6 = ((uint)((int)ALBW_AS_U32(fVar8) << 1) >> 0x18) - 0x40, -1 < iVar6)) {
    uVar7 = (uint)((int)ALBW_AS_U32(fVar8) << 9) >> 0x10 | iVar6 << 0x10 | ((uint)ALBW_AS_U32(fVar8) >> 0x1f) << 0x17;
  }
  else {
    uVar7 = ((uint)ALBW_AS_U32(fVar8) >> 0x1f) << 0x17;
  }
  fVar8 = (float)VectorUnsignedToFloat(param_1[2],(byte)(in_fpscr >> 0x15) & 3);
  fVar8 = DAT_00563bc8 / fVar8;
  if (ABS(fVar8) == 0.0) {
    iVar6 = 0;
LAB_00563ad4:
    uVar3 = (uint)ALBW_AS_U32(fVar8) & 0x7fffff | iVar6 << 0x17 | ((uint)ALBW_AS_U32(fVar8) >> 0x1f) << 0x1e;
  }
  else {
    iVar6 = ((uint)((int)ALBW_AS_U32(fVar8) << 1) >> 0x18) - 0x40;
    if (-1 < iVar6) goto LAB_00563ad4;
    uVar3 = ((uint)ALBW_AS_U32(fVar8) >> 0x1f) << 0x1e;
  }
  fVar8 = (float)VectorUnsignedToFloat(param_1[3],(byte)(in_fpscr >> 0x15) & 3);
  fVar8 = fVar8 * DAT_00563bc4;
  iVar6 = 0;
  if ((ABS(fVar8) == 0.0) || (iVar6 = ((uint)((int)ALBW_AS_U32(fVar8) << 1) >> 0x18) - 0x40, -1 < iVar6)) {
    uVar5 = (uint)((int)ALBW_AS_U32(fVar8) << 9) >> 0x10 | iVar6 << 0x10 | ((uint)ALBW_AS_U32(fVar8) >> 0x1f) << 0x17;
  }
  else {
    uVar5 = ((uint)ALBW_AS_U32(fVar8) >> 0x1f) << 0x17;
  }
  fVar8 = (float)VectorUnsignedToFloat(param_1[3],(byte)(in_fpscr >> 0x15) & 3);
  fVar8 = DAT_00563bc8 / fVar8;
  if (ABS(fVar8) == 0.0) {
    iVar6 = 0;
  }
  else {
    iVar6 = ((uint)((int)ALBW_AS_U32(fVar8) << 1) >> 0x18) - 0x40;
    if (iVar6 < 0) {
      uVar4 = ((uint)ALBW_AS_U32(fVar8) >> 0x1f) << 0x1e;
      goto LAB_00563b80;
    }
  }
  uVar4 = (uint)ALBW_AS_U32(fVar8) & 0x7fffff | iVar6 << 0x17 | ((uint)ALBW_AS_U32(fVar8) >> 0x1f) << 0x1e;
LAB_00563b80:
  *param_2 = uVar7;
  param_2[1] = uVar1;
  param_2[2] = uVar3 << 1;
  param_2[3] = uVar2;
  param_2[4] = uVar5;
  param_2[5] = uVar1 | (int)uVar2 >> 0x12;
  param_2[6] = uVar4 << 1;
  param_2[7] = uVar2 + 2;
  param_2[8] = *param_1 | param_1[1] << 0x10;
  param_2[9] = uVar2 + 0x26;
  return param_2 + 10;
}

