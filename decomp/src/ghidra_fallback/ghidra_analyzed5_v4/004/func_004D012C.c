#include "ghidra_types.h"


// USA 004D012C <- EU 004D0104 (Ghidra, non-matching)

void func_004D012C(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  uint in_r3;
  int iVar3;
  
  iVar1 = *(int *)(param_1 + 8);
  if (0 < *(int *)(iVar1 + 0x5c)) {
    in_r3 = param_2 << 0x1e;
  }
  uVar2 = 0;
  if (*(int *)(iVar1 + 0x5c) < 1) {
    return;
  }
  do {
    if (uVar2 < *(uint *)(iVar1 + 0x5c)) {
      iVar3 = *(int *)(*(int *)(iVar1 + 100) + uVar2 * 4);
    }
    else {
      iVar3 = 0;
    }
    uVar2 = uVar2 + 1;
    *(char *)(iVar3 + 0x89) = (char)param_2;
    *(uint *)(iVar3 + 0x7c) = *(uint *)(iVar3 + 0x7c) & 0xcfffffff | in_r3 >> 2;
  } while ((int)uVar2 < *(int *)(iVar1 + 0x5c));
  return;
}

