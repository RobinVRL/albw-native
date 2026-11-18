#include "ghidra_types.h"

extern int func_0014FAFC(int param_1,uint param_2,float fparam_0);
extern int func_0065D264(undefined4 *param_1,undefined1 param_2);
extern float DAT_00203910;
extern float DAT_00203914;

// USA 00203888 <- EU 00203888 (Ghidra, non-matching)
// GLOBAL DAT_00203910 float
// GLOBAL DAT_00203914 float

void func_00203888(int param_1)

{
  undefined1 uVar1;
  float fVar2;
  undefined4 uVar3;
  
  if (*(uint *)(param_1 + 0x90c) < *(uint *)(param_1 + 0x910)) {
    *(uint *)(param_1 + 0x90c) = *(uint *)(param_1 + 0x90c) + 1;
  }
  else {
    if (*(short *)(param_1 + 0x8fe) == 0) {
      uVar1 = 1;
    }
    else {
      uVar1 = 2;
    }
    func_0065D264((undefined4 *)(param_1 + 0x8bc),uVar1);
  }
  *(undefined4 *)(param_1 + 1000) = 0;
  fVar2 = *(float *)(param_1 + 0x8f0);
  uVar3 = *(undefined4 *)(param_1 + 0x3e0);
  fVar2 = fVar2 + (DAT_00203914 - fVar2) * DAT_00203910;
  *(float *)(param_1 + 0x8f0) = fVar2;
  func_0014FAFC(param_1,*(uint *)(param_1 + 0x908),fVar2);
  *(undefined4 *)(param_1 + 0x3e0) = uVar3;
  return;
}

