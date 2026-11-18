#include "ghidra_types.h"

extern int func_00111A64(uint *param_1);
extern undefined4 func_00151148(int param_1,int param_2);
extern int func_004CF478(int param_1,int param_2);
extern float fRam002d05e0;
extern float fRam002d05e8;
extern float fRam002d05ec;
extern float fRam002d05f0;
extern undefined4 uRam002d05dc;
extern int *piRam002d05e4;

// USA 002D0558 <- EU 002D0534 (Ghidra, non-matching)
// GLOBAL UNK_002d05dc undefined4
// GLOBAL UNK_002d05e0 float
// GLOBAL UNK_002d05e4 int *
// GLOBAL UNK_002d05e8 float
// GLOBAL UNK_002d05ec float
// GLOBAL UNK_002d05f0 float

void func_002D0558(int param_1)

{
  uint uVar1;
  uint in_fpscr;
  float fVar2;
  float fVar3;
  undefined4 uVar4;
  float fVar5;
  float fVar6;
  
  func_004CF478(*(int *)(param_1 + 0x444),0);
  func_00151148(*(int *)(param_1 + 0x44c),0);
  uVar4 = uRam002d05dc;
  *(undefined1 *)(param_1 + 0x4b1) = 0;
  *(undefined4 *)(param_1 + 0x3dc) = uVar4;
  *(undefined4 *)(param_1 + 0x3e0) = uVar4;
  *(undefined4 *)(param_1 + 0x3e4) = uVar4;
  fVar5 = *(float *)(param_1 + 8);
  fVar3 = *(float *)(param_1 + 0xc) + fRam002d05e0;
  uVar4 = *(undefined4 *)(param_1 + 0x10);
  fVar6 = fRam002d05e8;
  uVar1 = func_00111A64((uint *)(*piRam002d05e4 + 0x660));
  fVar2 = (float)VectorUnsignedToFloat(uVar1,(byte)(in_fpscr >> 0x15) & 3);
  fVar5 = (fVar2 * fRam002d05ec * fVar6 - fRam002d05f0) + fVar5;
  *(float *)(param_1 + 0x368) = fVar5;
  *(float *)(param_1 + 0x36c) = fVar3;
  *(undefined4 *)(param_1 + 0x370) = uVar4;
  *(float *)(param_1 + 0x3d0) = fVar5;
  *(float *)(param_1 + 0x3d4) = fVar3;
  *(undefined4 *)(param_1 + 0x3d8) = uVar4;
  return;
}

