#include "ghidra_types.h"

extern int func_004FC07C(int param_1,int param_2,uint param_3,int param_4);
extern undefined4 DAT_002c4b24;
extern float DAT_002c4b28;
extern int DAT_002c4b2c;

// USA 002C4AC0 <- EU 002C4A9C (Ghidra, non-matching)
// GLOBAL DAT_002c4b24 undefined4
// GLOBAL DAT_002c4b28 float
// GLOBAL DAT_002c4b2c int

void func_002C4AC0(int param_1)

{
  float fVar1;
  uint uVar2;
  float *pfVar3;
  uint in_fpscr;
  float fVar4;
  
  *(undefined4 *)(param_1 + 0x8f4) = DAT_002c4b24;
  func_004FC07C(param_1,1,0,0);
  fVar1 = DAT_002c4b28;
  uVar2 = *(uint *)(param_1 + 0x8e4);
  pfVar3 = (float *)(DAT_002c4b2c + (uVar2 >> 0x18) * 0x10);
  fVar4 = (float)VectorUnsignedToFloat(uVar2 & 0xffffff,(byte)(in_fpscr >> 0x15) & 3);
  *(float *)(param_1 + 0x3dc) =
       (*pfVar3 + pfVar3[1] * fVar4 * DAT_002c4b28) * *(float *)(param_1 + 0x8f4);
  fVar4 = (float)VectorUnsignedToFloat(uVar2 & 0xffffff,(byte)(in_fpscr >> 0x15) & 3);
  *(float *)(param_1 + 0x3e4) =
       (pfVar3[2] + pfVar3[3] * fVar4 * fVar1) * *(float *)(param_1 + 0x8f4);
  return;
}

