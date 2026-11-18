#include "ghidra_types.h"

extern int func_0036BE78();
extern int func_004FB4E0(int param_1,float fparam_0);
extern int func_0058A8F0(int param_1);
extern void func_0065E398();
extern float DAT_0021ee20;

// USA 0021ED80 <- EU 0021ED80 (Ghidra, non-matching)
// GLOBAL DAT_0021ee20 float

void func_0021ED80(int param_1)

{
  int iVar1;
  uint in_fpscr;
  float fVar2;
  float fVar3;
  
  func_0036BE78(param_1 + 0x8e8);
  fVar2 = DAT_0021ee20;
  fVar3 = DAT_0021ee20;
  func_004FB4E0(param_1,DAT_0021ee20);
  if (*(uint *)(param_1 + 0xa68) < *(uint *)(param_1 + 0xa6c)) {
    *(uint *)(param_1 + 0xa68) = *(uint *)(param_1 + 0xa68) + 1;
  }
  else {
    iVar1 = func_0058A8F0(param_1);
    if (iVar1 != 0) {
      func_0065E398((undefined4 *)(param_1 + 0x8c0),3,fVar2);
    }
  }
  iVar1 = *(int *)(param_1 + 0xa6c) - *(int *)(param_1 + 0xa68);
  if (iVar1 < 2) {
    iVar1 = 1;
  }
  fVar2 = (float)VectorSignedToFloat(iVar1,(byte)(in_fpscr >> 0x15) & 3);
  *(float *)(param_1 + 0x3d4) =
       *(float *)(param_1 + 0x3d4) +
       (*(float *)(param_1 + 0xa54) - *(float *)(param_1 + 0x3d4)) * (fVar3 / fVar2);
  return;
}

