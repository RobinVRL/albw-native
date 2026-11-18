#include "ghidra_types.h"

extern undefined DAT_00584be8;

// USA 00584BC4 <- EU 00584B9C (Ghidra, non-matching)
// GLOBAL DAT_00584be8 undefined

undefined * func_00584BC4(int param_1,uint param_2)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  
  uVar4 = *(uint *)(param_1 + 0x5c);
  uVar5 = uVar4;
  if (param_2 < uVar4) {
    uVar5 = *(uint *)(param_1 + 100);
  }
  if (param_2 < uVar4) {
    iVar2 = *(int *)(uVar5 + param_2 * 4);
  }
  else {
    iVar2 = 0;
  }
  iVar3 = *(int *)(*(int *)(param_1 + 0x50) + 8);
  uVar5 = (uint)*(ushort *)(*(int *)(iVar2 + 0x90) + 4);
  if (uVar5 < *(ushort *)(iVar3 + 0x88)) {
    puVar1 = *(undefined **)(*(int *)(iVar3 + 0x8c) + uVar5 * 0xc + 0x14);
  }
  else {
    puVar1 = &DAT_00584be8;
  }
  return puVar1;
}

