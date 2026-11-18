#include "ghidra_types.h"

extern int func_001672F8(int param_1,uint param_2,float fparam_0,float fparam_1);
extern float DAT_00231594;

// USA 00231524 <- EU 00231524 (Ghidra, non-matching)
// GLOBAL DAT_00231594 float

int func_00231524(int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  
  iVar1 = *(int *)(param_1 + 8);
  if ((iVar1 != 0) && (-1 < *(short *)(param_1 + 2))) {
    func_001672F8(iVar1,(int)*(short *)(param_1 + 2),DAT_00231594,DAT_00231594);
    iVar1 = *(int *)(param_1 + 8);
    uVar2 = (uint)*(short *)(param_1 + 2);
    if (uVar2 < *(uint *)(iVar1 + 8)) {
      iVar3 = *(int *)(iVar1 + 0xc) + uVar2 * 0x38;
      iVar1 = *(int *)(iVar1 + 0xc) + uVar2 * 0x38;
    }
    else {
      iVar3 = *(int *)(iVar1 + 0xc);
      iVar1 = *(int *)(iVar1 + 0xc);
    }
    uVar4 = *(undefined4 *)(iVar3 + 0x20);
    *(undefined4 *)(iVar1 + 0x14) = uVar4;
    iVar1 = *(int *)(iVar1 + 0x10);
    *(undefined4 *)(iVar1 + 0x10) = uVar4;
  }
  return iVar1;
}

