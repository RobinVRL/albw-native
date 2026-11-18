#include "ghidra_types.h"

extern int *DAT_0052292c;

// USA 005228DC <- EU 005228B4 (Ghidra, non-matching)
// GLOBAL DAT_0052292c int *

bool func_005228DC(int param_1,int param_2)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = *(uint *)(param_1 + 0x18);
  if (uVar2 == 0) {
    return false;
  }
  if (param_2 != 0) {
    if (uVar2 - 1 < uVar2) {
      iVar3 = *(int *)(*(int *)(param_1 + 0x20) + (uVar2 - 1) * 4);
    }
    else {
      iVar3 = 0;
    }
    if (iVar3 != param_2) {
      return false;
    }
  }
  if (uVar2 - 1 < uVar2) {
    iVar3 = *(int *)(*(int *)(param_1 + 0x20) + (uVar2 - 1) * 4);
  }
  else {
    iVar3 = 0;
  }
  uVar2 = *(uint *)(*DAT_0052292c + (uint)*(byte *)(iVar3 + 0x70) * 400 + 0x2c) & 1;
  bVar1 = SUB41(uVar2,0);
  if (uVar2 != 0) {
    bVar1 = true;
  }
  return bVar1;
}

