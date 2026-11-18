#include "ghidra_types.h"

extern float func_0068C7E0(float fparam_0,float fparam_1,float fparam_2,float fparam_3,float fparam_4, float fparam_5,float fparam_6);
extern float DAT_0051d4dc;
extern float DAT_0051d4e0;

// USA 0051D3EC <- EU 0051D3C4 (Ghidra, non-matching)
// GLOBAL DAT_0051d4dc float
// GLOBAL DAT_0051d4e0 float

void func_0051D3EC(undefined1 *param_1,byte *param_2,byte *param_3,float fparam_0)

{
  uint in_fpscr;
  undefined4 uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fparam_1;
  
  fVar4 = (float)VectorUnsignedToFloat((uint)*param_3,(byte)(in_fpscr >> 0x15) & 3);
  fVar3 = (float)VectorUnsignedToFloat((uint)*param_2,(byte)(in_fpscr >> 0x15) & 3);
  fVar2 = DAT_0051d4dc;
  fparam_1 = DAT_0051d4e0;
  fVar3 = func_0068C7E0(fparam_0,DAT_0051d4e0,fVar3,DAT_0051d4e0,DAT_0051d4dc,fVar4,DAT_0051d4dc);
  uVar1 = VectorFloatToUnsigned(fVar3,3);
  *param_1 = (char)uVar1;
  fVar4 = (float)VectorUnsignedToFloat((uint)param_3[1],(byte)(in_fpscr >> 0x15) & 3);
  fVar3 = (float)VectorUnsignedToFloat((uint)param_2[1],(byte)(in_fpscr >> 0x15) & 3);
  fVar3 = func_0068C7E0(fparam_0,fparam_1,fVar3,fparam_1,fVar2,fVar4,fVar2);
  uVar1 = VectorFloatToUnsigned(fVar3,3);
  param_1[1] = (char)uVar1;
  fVar4 = (float)VectorUnsignedToFloat((uint)param_3[2],(byte)(in_fpscr >> 0x15) & 3);
  fVar3 = (float)VectorUnsignedToFloat((uint)param_2[2],(byte)(in_fpscr >> 0x15) & 3);
  fVar3 = func_0068C7E0(fparam_0,fparam_1,fVar3,fparam_1,fVar2,fVar4,fVar2);
  uVar1 = VectorFloatToUnsigned(fVar3,3);
  param_1[2] = (char)uVar1;
  fVar4 = (float)VectorUnsignedToFloat((uint)param_3[3],(byte)(in_fpscr >> 0x15) & 3);
  fVar3 = (float)VectorUnsignedToFloat((uint)param_2[3],(byte)(in_fpscr >> 0x15) & 3);
  fVar2 = func_0068C7E0(fparam_0,fparam_1,fVar3,fparam_1,fVar2,fVar4,fVar2);
  uVar1 = VectorFloatToUnsigned(fVar2,3);
  param_1[3] = (char)uVar1;
  return;
}

