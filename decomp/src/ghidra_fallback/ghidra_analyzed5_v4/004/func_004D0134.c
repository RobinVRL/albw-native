#include "ghidra_types.h"


// USA 004D0134 <- EU 004D010C (Ghidra, non-matching)

void * func_004D0134(int param_1,int param_2)

{
  uint uVar1;
  uint in_r3;
  int iVar2;
  
  if (0 < *(int *)(param_1 + 0x5c)) {
    in_r3 = param_2 << 0x1e;
  }
  uVar1 = 0;
  if (*(int *)(param_1 + 0x5c) < 1) {
    return (void *)param_1;
  }
  do {
    if (uVar1 < *(uint *)(param_1 + 0x5c)) {
      iVar2 = *(int *)(*(int *)(param_1 + 100) + uVar1 * 4);
    }
    else {
      iVar2 = 0;
    }
    uVar1 = uVar1 + 1;
    *(char *)(iVar2 + 0x89) = (char)param_2;
    *(uint *)(iVar2 + 0x7c) = *(uint *)(iVar2 + 0x7c) & 0xcfffffff | in_r3 >> 2;
  } while ((int)uVar1 < *(int *)(param_1 + 0x5c));
  return (void *)param_1;
}

