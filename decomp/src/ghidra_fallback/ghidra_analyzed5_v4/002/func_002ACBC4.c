#include "ghidra_types.h"

extern int func_002ACD14(undefined4 *param_1,int param_2,int param_3);
extern float DAT_002acc34;
extern float DAT_002acc38;
extern float DAT_002acc3c;
extern float DAT_002acc40;

// USA 002ACBC4 <- EU 002ACBA0 (Ghidra, non-matching)
// GLOBAL DAT_002acc34 float
// GLOBAL DAT_002acc38 float
// GLOBAL DAT_002acc3c float
// GLOBAL DAT_002acc40 float

undefined4 func_002ACBC4(undefined4 *param_1,float fparam_0,float fparam_1,float fparam_2)

{
  float fVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  uint in_fpscr;
  float fVar4;
  float fVar5;
  
  fVar1 = DAT_002acc34;
  puVar2 = param_1 + 0x80;
  *(short *)(param_1 + 0xb0) = *(short *)(param_1 + 0xb0) + 1;
  puVar3 = (undefined4 *)param_1[0xb];
  if (puVar3 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)param_1[10];
  }
  fVar4 = fVar1;
  if ((puVar3 != (undefined4 *)0x0 && puVar2 != (undefined4 *)0x0) &&
     (fVar4 = DAT_002acc38, puVar2 < puVar3)) {
    fVar4 = (float)VectorUnsignedToFloat(puVar2,(byte)(in_fpscr >> 0x15) & 3);
    fVar4 = fVar4 * ALBW_AS_F32(param_1[0xc]);
  }
  fVar5 = fVar4 * DAT_002acc3c;
  param_1[0x1c] = ALBW_AS_U32(fVar1);
  param_1[0x1d] = ALBW_AS_U32(fVar5);
  param_1[0x1e] = ALBW_AS_U32(fVar1);
  *(int *)(param_1[0xd] + 0x500) = (int)(fVar4 * DAT_002acc40);
  if ((uint)param_1[10] < (uint)param_1[0xb]) {
    param_1[10] = param_1[10] + 1;
  }
  return func_002ACD14(param_1,0,0);
}

