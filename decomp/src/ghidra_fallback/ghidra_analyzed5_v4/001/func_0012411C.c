#include "ghidra_types.h"

extern int func_004FC07C(int param_1,int param_2,uint param_3,int param_4);
extern undefined4 DAT_00124188;
extern float DAT_0012418c;
extern float DAT_00124190;

// USA 0012411C <- EU 0012411C (Ghidra, non-matching)
// GLOBAL DAT_00124188 undefined4
// GLOBAL DAT_0012418c float
// GLOBAL DAT_00124190 float

void func_0012411C(int param_1)

{
  undefined4 uVar1;
  float fVar2;
  
  uVar1 = DAT_00124188;
  *(undefined4 *)(param_1 + 0x3dc) = DAT_00124188;
  *(undefined4 *)(param_1 + 0x3e0) = uVar1;
  *(undefined4 *)(param_1 + 0x3e4) = uVar1;
  *(undefined4 *)(param_1 + 0x4fc) = 0;
  func_004FC07C(param_1,0,0xffffffff,0);
  fVar2 = (*(float *)(param_1 + 0x8e0) * *(float *)(param_1 + 0x8e0) +
          *(float *)(param_1 + 0x8e8) * *(float *)(param_1 + 0x8e8)) * DAT_0012418c;
  if (DAT_00124190 < fVar2) {
    fVar2 = DAT_00124190;
  }
  *(float *)(param_1 + 0x8f0) = fVar2;
  return;
}

