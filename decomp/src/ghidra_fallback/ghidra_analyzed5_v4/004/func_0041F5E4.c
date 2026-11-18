#include "ghidra_types.h"

extern float DAT_0041f69c;
extern float DAT_0041f6a0;
extern float DAT_0041f6a4;
extern float DAT_0041f6a8;

// USA 0041F5E4 <- EU 0041F5C4 (Ghidra, non-matching)
// GLOBAL DAT_0041f69c float
// GLOBAL DAT_0041f6a0 float
// GLOBAL DAT_0041f6a4 float
// GLOBAL DAT_0041f6a8 float

undefined4 func_0041F5E4(int param_1)

{
  int iVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  uint in_fpscr;
  
  fVar5 = *(float *)(param_1 + 0x608);
  fVar3 = *(float *)(param_1 + 0x5fc);
  fVar4 = *(float *)(param_1 + 0x600);
  fVar6 = *(float *)(param_1 + 0x604);
  iVar1 = param_1 + (uint)*(byte *)(param_1 + 0x30) * 0x10;
  pfVar2 = (float *)(iVar1 + 0x88);
  *(float *)(iVar1 + 0x94) = fVar5;
  *pfVar2 = fVar3;
  *(float *)(iVar1 + 0x8c) = fVar4;
  *(float *)(iVar1 + 0x90) = fVar6;
  if (*(byte *)(param_1 + 0x5f8) != 0) {
    fVar3 = (float)VectorUnsignedToFloat
                             ((uint)*(byte *)(param_1 + 0x5f8),(byte)(in_fpscr >> 0x15) & 3);
    *pfVar2 = *pfVar2 + fVar3 * DAT_0041f69c;
  }
  if (*(byte *)(param_1 + 0x5f9) != 0) {
    fVar3 = (float)VectorUnsignedToFloat
                             ((uint)*(byte *)(param_1 + 0x5f9),(byte)(in_fpscr >> 0x15) & 3);
    *(float *)(iVar1 + 0x8c) = fVar4 + fVar3 * DAT_0041f6a0;
  }
  if (*(byte *)(param_1 + 0x5fa) != 0) {
    fVar3 = (float)VectorUnsignedToFloat
                             ((uint)*(byte *)(param_1 + 0x5fa),(byte)(in_fpscr >> 0x15) & 3);
    *(float *)(iVar1 + 0x90) = fVar6 + fVar3 * DAT_0041f6a4;
  }
  if ((0x3f800000 < (int)ALBW_AS_U32(fVar5)) && (*(byte *)(param_1 + 0x5fb) != 0)) {
    fVar3 = (float)VectorUnsignedToFloat
                             ((uint)*(byte *)(param_1 + 0x5fb),(byte)(in_fpscr >> 0x15) & 3);
    *(float *)(iVar1 + 0x94) = fVar5 + fVar3 * DAT_0041f6a8;
  }
  *(char *)(param_1 + 0x30) = *(char *)(param_1 + 0x30) + '\x01';
  return (undefined4)param_1;
}

