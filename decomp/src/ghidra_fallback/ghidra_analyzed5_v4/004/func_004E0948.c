#include "ghidra_types.h"

extern int func_00111A64(uint *param_1);
extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern float func_00115DC8(float *param_1);
extern undefined4 func_00151148(int param_1,int param_2);
extern float fRam004e0a7c;
extern float fRam004e0a88;
extern float fRam004e0a8c;
extern float fRam004e0a90;
extern float fRam004e0a94;
extern float fRam004e0a98;
extern float fRam004e0a9c;
extern undefined4 uRam004e0a80;
extern int *piRam004e0a84;

// USA 004E0948 <- EU 004E0920 (Ghidra, non-matching)
// GLOBAL UNK_004e0a7c float
// GLOBAL UNK_004e0a80 undefined4
// GLOBAL UNK_004e0a84 int *
// GLOBAL UNK_004e0a88 float
// GLOBAL UNK_004e0a8c float
// GLOBAL UNK_004e0a90 float
// GLOBAL UNK_004e0a94 float
// GLOBAL UNK_004e0a98 float
// GLOBAL UNK_004e0a9c float

void func_004E0948(int param_1)

{
  uint uVar1;
  uint in_fpscr;
  float fVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  undefined4 uVar6;
  float fVar7;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define fStack_28 (*(float *)(albw_frame + 0x8))
  #define uStack_24 (*(undefined4 *)(albw_frame + 0xc))
  #define fStack_20 (*(float *)(albw_frame + 0x10))
  func_00151148(*(int *)(param_1 + 0x410),1);
  *(undefined4 *)(param_1 + 0x550) = 0;
  *(undefined2 *)(param_1 + 0x42c) = 2;
  fVar7 = fRam004e0a7c;
  fVar5 = *(float *)(param_1 + 0x508) + fRam004e0a7c;
  *(undefined4 *)(param_1 + 0x368) = *(undefined4 *)(param_1 + 0x504);
  *(float *)(param_1 + 0x36c) = fVar5;
  *(undefined4 *)(param_1 + 0x370) = *(undefined4 *)(param_1 + 0x50c);
  *(undefined4 *)(param_1 + 0x3d0) = *(undefined4 *)(param_1 + 0x504);
  *(float *)(param_1 + 0x3d4) = fVar5;
  *(undefined4 *)(param_1 + 0x3d8) = *(undefined4 *)(param_1 + 0x50c);
  func_00115C70(&fStack_28,(float *)(param_1 + 0x510),(float *)(param_1 + 0x3d0));
  uVar6 = uRam004e0a80;
  uStack_24 = uRam004e0a80;
  *(float *)(param_1 + 0x54c) = SQRT(fStack_28 * fStack_28 + fStack_20 * fStack_20);
  func_00115DC8(&fStack_28);
  fVar5 = fRam004e0a88;
  uVar1 = func_00111A64((uint *)(*piRam004e0a84 + 0x660));
  fVar2 = (float)VectorUnsignedToFloat(uVar1,(byte)(in_fpscr >> 0x15) & 3);
  fVar5 = fVar2 * fRam004e0a8c * fVar5 + fRam004e0a90;
  fVar2 = fVar5 * fRam004e0a94;
  iVar3 = (int)fVar2;
  *(int *)(param_1 + 0x4fc) = iVar3;
  if (iVar3 == 0) {
    *(undefined4 *)(param_1 + 0x500) = uVar6;
  }
  else {
    fVar4 = (float)VectorUnsignedToFloat(iVar3,(byte)(in_fpscr >> 0x15) & 3);
    *(float *)(param_1 + 0x500) = fVar7 / fVar4;
  }
  *(undefined4 *)(param_1 + 0x4f8) = 0;
  fVar7 = fRam004e0a9c;
  fVar2 = (*(float *)(param_1 + 0x54c) * fRam004e0a98) / fVar2;
  fStack_28 = fStack_28 * fVar2;
  fStack_20 = fStack_20 * fVar2;
  *(float *)(param_1 + 0x3dc) = fStack_28;
  *(float *)(param_1 + 0x3e0) = fVar5;
  *(float *)(param_1 + 0x3e4) = fStack_20;
  *(float *)(param_1 + 0x51c) = fStack_28 * fVar7;
  *(undefined4 *)(param_1 + 0x520) = uVar6;
  *(float *)(param_1 + 0x524) = fStack_20 * fVar7;
  return;
}

