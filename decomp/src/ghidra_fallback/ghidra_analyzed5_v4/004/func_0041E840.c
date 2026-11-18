#include "ghidra_types.h"

extern float DAT_0041e8f4;

// USA 0041E840 <- EU 0041E820 (Ghidra, non-matching)
// GLOBAL DAT_0041e8f4 float

undefined4 func_0041E840(int param_1,byte *param_2)

{
  float fVar1;
  int iVar2;
  uint in_fpscr;
  undefined4 uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  iVar2 = param_1 + (uint)*(byte *)(param_1 + 0x31) * 0x10;
  uVar3 = ALBW_AS_U32(VectorUnsignedToFloat((uint)*(byte *)(param_1 + 0x31),(byte)(in_fpscr >> 0x15) & 3));
  *(undefined4 *)(param_1 + 0x608) = uVar3;
  fVar1 = DAT_0041e8f4;
  fVar11 = (float)VectorUnsignedToFloat((uint)*param_2,(byte)(in_fpscr >> 0x15) & 3);
  fVar10 = (float)VectorUnsignedToFloat((uint)param_2[1],(byte)(in_fpscr >> 0x15) & 3);
  fVar9 = (float)VectorUnsignedToFloat((uint)param_2[2],(byte)(in_fpscr >> 0x15) & 3);
  fVar4 = (float)VectorUnsignedToFloat((uint)param_2[4],(byte)(in_fpscr >> 0x15) & 3);
  fVar8 = (float)VectorUnsignedToFloat((uint)param_2[3],(byte)(in_fpscr >> 0x15) & 3);
  fVar5 = (float)VectorUnsignedToFloat((uint)param_2[5],(byte)(in_fpscr >> 0x15) & 3);
  fVar6 = (float)VectorUnsignedToFloat((uint)param_2[6],(byte)(in_fpscr >> 0x15) & 3);
  fVar7 = (float)VectorUnsignedToFloat((uint)param_2[7],(byte)(in_fpscr >> 0x15) & 3);
  fVar10 = fVar10 * DAT_0041e8f4;
  fVar9 = fVar9 * DAT_0041e8f4;
  fVar4 = fVar4 * DAT_0041e8f4;
  fVar8 = fVar8 * DAT_0041e8f4;
  fVar5 = fVar5 * DAT_0041e8f4;
  fVar6 = fVar6 * DAT_0041e8f4;
  *(float *)(iVar2 + 0x1f8) = fVar11 * DAT_0041e8f4;
  *(float *)(iVar2 + 0x1fc) = fVar10;
  *(float *)(iVar2 + 0x200) = fVar9;
  *(float *)(iVar2 + 0x204) = fVar8;
  *(float *)(iVar2 + 0x214) = fVar7 * fVar1;
  *(float *)(iVar2 + 0x208) = fVar4;
  *(float *)(iVar2 + 0x20c) = fVar5;
  *(float *)(iVar2 + 0x210) = fVar6;
  *(char *)(param_1 + 0x31) = *(char *)(param_1 + 0x31) + '\x02';
  return (undefined4)param_1;
}

