#include "ghidra_types.h"


// USA 00533CD4 <- EU 00533CAC (Ghidra, non-matching)

undefined4 func_00533CD4(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    uVar1 = 0;
  }
  else {
    if (*(uint *)(param_2 + 0x14) < *(uint *)(param_1 + 0x630)) {
      iVar2 = *(int *)(param_1 + 0x634) + *(uint *)(param_2 + 0x14) * 0x104;
    }
    else {
      iVar2 = *(int *)(param_1 + 0x634);
    }
    iVar2 = *(int *)(iVar2 + 0x30);
    *(undefined4 *)(param_2 + 8) = *(undefined4 *)(iVar2 + 4);
    *(undefined4 *)(param_2 + 0xc) = *(undefined4 *)(iVar2 + 8);
    *(undefined4 *)(param_2 + 0x10) = *(undefined4 *)(iVar2 + 0xc);
    uVar1 = 4;
    *(float *)(param_2 + 0xc) = *(float *)(param_2 + 0xc) - *(float *)(param_1 + 0x620);
  }
  return uVar1;
}

