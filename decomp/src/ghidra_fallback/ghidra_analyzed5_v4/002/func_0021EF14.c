#include "ghidra_types.h"

extern int func_004FB4E0(int param_1,float fparam_0);
extern float func_0058AC78(int param_1);
extern void func_0065E398();
extern float DAT_0021ef84;
extern float DAT_0021ef88;

// USA 0021EF14 <- EU 0021EF14 (Ghidra, non-matching)
// GLOBAL DAT_0021ef84 float
// GLOBAL DAT_0021ef88 float

void func_0021EF14(int param_1)

{
  int iVar1;
  uint in_fpscr;
  float fVar2;
  float fVar3;
  
  fVar2 = func_0058AC78(param_1);
  iVar1 = *(int *)(param_1 + 0xa6c) - *(int *)(param_1 + 0xa68);
  if (iVar1 < 2) {
    iVar1 = 1;
  }
  fVar3 = (float)VectorSignedToFloat(iVar1,(byte)(in_fpscr >> 0x15) & 3);
  fVar2 = fVar2 + (DAT_0021ef84 - fVar2) * (DAT_0021ef88 / fVar3);
  func_004FB4E0(param_1,fVar2);
  if (*(uint *)(param_1 + 0xa68) < *(uint *)(param_1 + 0xa6c)) {
    *(uint *)(param_1 + 0xa68) = *(uint *)(param_1 + 0xa68) + 1;
  }
  else {
    func_0065E398((undefined4 *)(param_1 + 0x8c0),0xb,fVar2);
  }
  return;
}

