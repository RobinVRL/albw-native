#include "ghidra_types.h"

extern int func_00111A64(uint *param_1);
extern int func_001A6F14(int param_1);
extern int func_004FABDC(int param_1,undefined4 param_2,uint param_3,int param_4);
extern int func_004FB4E0(int param_1,float fparam_0);
extern float fRam001a7480;
extern float fRam001a7488;
extern undefined4 uRam001a748c;
extern int *piRam001a7484;

// USA 001A73C4 <- EU 001A73C4 (Ghidra, non-matching)
// GLOBAL UNK_001a7480 float
// GLOBAL UNK_001a7484 int *
// GLOBAL UNK_001a7488 float
// GLOBAL UNK_001a748c undefined4

void func_001A73C4(int param_1)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  uint in_fpscr;
  float fVar4;
  float fVar5;
  
  func_001A6F14(param_1);
  func_004FABDC(param_1,1,0xffffffff,0);
  fVar4 = fRam001a7480;
  fVar5 = fRam001a7480;
  func_004FB4E0(param_1,fRam001a7480);
  uVar2 = func_00111A64((uint *)(*piRam001a7484 + 0x660));
  iVar3 = (int)((ulonglong)uVar2 * 0x3c >> 0x20) + 0x5a;
  if (iVar3 == 0) {
    fVar4 = fRam001a7488;
  }
  *(int *)(param_1 + 0x8ec) = iVar3;
  if (iVar3 == 0) {
    *(float *)(param_1 + 0x8f0) = fVar4;
  }
  else {
    fVar4 = (float)VectorUnsignedToFloat(iVar3,(byte)(in_fpscr >> 0x15) & 3);
    *(float *)(param_1 + 0x8f0) = fVar5 / fVar4;
  }
  *(undefined4 *)(param_1 + 0x8e8) = 0;
  uVar1 = uRam001a748c;
  if (*(char *)(param_1 + 0x938) != '\0') {
    *(undefined4 *)(param_1 + 0x910) = 0xf0;
    *(undefined4 *)(param_1 + 0x914) = uVar1;
    *(undefined4 *)(param_1 + 0x90c) = 0;
  }
  *(undefined1 *)(param_1 + 0x938) = 0;
  return;
}

