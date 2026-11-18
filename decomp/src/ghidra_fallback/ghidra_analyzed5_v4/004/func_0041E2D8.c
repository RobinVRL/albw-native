#include "ghidra_types.h"

extern int func_0041E368(undefined4 *param_1,int param_2,float fparam_0);
extern float DAT_0041e344;

// USA 0041E2D8 <- EU 0041E2B8 (Ghidra, non-matching)
// GLOBAL DAT_0041e344 float

float func_0041E2D8(undefined4 *param_1,int param_2)

{
  uint in_fpscr;
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar1 = ALBW_AS_F32(param_1[2]);
  if (*(char *)((int)param_1 + 0x2d) == '\0') {
    fVar4 = (float)VectorUnsignedToFloat((uint)*(byte *)(param_2 + 6),(byte)(in_fpscr >> 0x15) & 3);
    fVar2 = (float)VectorSignedToFloat((int)*(char *)(param_2 + 4),(byte)(in_fpscr >> 0x15) & 3);
    fVar4 = fVar4 * fVar1;
    fVar2 = fVar2 * fVar1;
  }
  else {
    fVar4 = ALBW_AS_F32(param_1[7]);
    fVar3 = (float)VectorUnsignedToFloat((uint)*(byte *)(param_2 + 6),(byte)(in_fpscr >> 0x15) & 3);
    fVar2 = (float)VectorSignedToFloat((int)*(char *)(param_2 + 4),(byte)(in_fpscr >> 0x15) & 3);
    fVar2 = (fVar4 - fVar3 * fVar1) * DAT_0041e344 + fVar2 * fVar1;
  }
  func_0041E368(param_1,param_2,ALBW_AS_F32(param_1[4]) + fVar2);
  param_1[4] = ALBW_AS_U32(ALBW_AS_F32(param_1[4]) + fVar4);
  return fVar4;
}

