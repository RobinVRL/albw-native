#include "ghidra_types.h"


// USA 0041F33C <- EU 0041F31C (Ghidra, non-matching)

int func_0041F33C(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  iVar1 = param_1 + *(int *)(param_1 + 4) * 4;
  uVar3 = *(uint *)(iVar1 + 0x14);
  iVar2 = (uVar3 >> 7) * 0x84;
  if ((uVar3 & 0x7f) != 0) {
    iVar2 = iVar2 + ((uVar3 & 0x7f) + 4 & 0xfffffffe);
  }
  uVar3 = *(uint *)(iVar1 + 0x1c);
  iVar1 = (uVar3 >> 7) * 0x84;
  if ((uVar3 & 0x7f) != 0) {
    iVar1 = iVar1 + ((uVar3 & 0x7f) + 4 & 0xfffffffe);
  }
  return (iVar2 + iVar1 + *(int *)(param_1 + *(int *)(param_1 + 8) + 0x1c) * 6) * 4 + 0xc18;
}

