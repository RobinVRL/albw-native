#include "ghidra_types.h"

extern int func_00111A64(uint *param_1);
extern int func_0037EEE8(int param_1);
extern int func_004FC07C(int param_1,int param_2,uint param_3,int param_4);
extern undefined8 func_0058A474(undefined4 param_1,uint param_2);
extern undefined4 *DAT_0037fa0c;
extern undefined4 DAT_0037fa10;
extern float DAT_0037fa14;

// USA 0037F988 <- EU 0037F964 (Ghidra, non-matching)
// GLOBAL DAT_0037fa0c undefined4 *
// GLOBAL DAT_0037fa10 undefined4
// GLOBAL DAT_0037fa14 float

undefined4 func_0037F988(int param_1)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  uint in_fpscr;
  float fVar4;
  undefined8 uVar5;
  
  uVar5 = func_0058A474(param_1,0x32);
  if ((int)uVar5 == 0) {
    *(undefined1 *)(param_1 + 0xb00) = 2;
  }
  else {
    *(undefined1 *)(param_1 + 0xb00) = 0;
  }
  uVar2 = func_00111A64((uint *)*DAT_0037fa0c);
  uVar1 = DAT_0037fa10;
  iVar3 = (int)((ulonglong)uVar2 * 2 >> 0x20) + 2;
  *(int *)(param_1 + 0xaec) = iVar3;
  if (iVar3 == 0) {
    *(undefined4 *)(param_1 + 0xaf0) = uVar1;
  }
  else {
    fVar4 = (float)VectorUnsignedToFloat(iVar3,(byte)(in_fpscr >> 0x15) & 3);
    *(float *)(param_1 + 0xaf0) = DAT_0037fa14 / fVar4;
  }
  *(undefined4 *)(param_1 + 0xae8) = 0;
  *(undefined1 *)(param_1 + 0xb2c) = 0;
  *(undefined1 *)(param_1 + 0xb2d) = 0;
  *(undefined1 *)(param_1 + 0xb2e) = 0;
  *(undefined4 *)(param_1 + 0xb0c) = uVar1;
  *(undefined1 *)(param_1 + 0xb2f) = 0;
  func_0037EEE8(param_1);
  return func_004FC07C(param_1,1,0xffffffff,0);
}

