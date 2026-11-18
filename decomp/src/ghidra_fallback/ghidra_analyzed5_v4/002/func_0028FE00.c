#include "ghidra_types.h"

extern int func_002D55D0(int param_1,uint param_2);
extern int DAT_0028fe70;

// USA 0028FE00 <- EU 0028FE28 (Ghidra, non-matching)
// GLOBAL DAT_0028fe70 int

undefined4 func_0028FE00(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  
  if ((*(uint *)(DAT_0028fe70 + *(short *)(*(int *)(param_1 + 0x14) + 0x42) * 0x10 + 4) & 0x80) == 0
     ) {
    uVar1 = 0;
  }
  else {
    if (param_2 == 0) {
      uVar3 = 0x68;
    }
    else {
      uVar3 = 0x69;
    }
    iVar2 = func_002D55D0(*(int *)(*(int *)(param_1 + 0x14) + 0x48),uVar3);
    uVar1 = 0;
    if (iVar2 != 0) {
      uVar1 = 1;
    }
  }
  return uVar1;
}

