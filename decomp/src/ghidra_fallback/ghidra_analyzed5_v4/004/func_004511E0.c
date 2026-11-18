#include "ghidra_types.h"

extern int func_004A5D48(int param_1);

// USA 004511E0 <- EU 004511B8 (Ghidra, non-matching)

void func_004511E0(int param_1)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = 0;
  do {
    if (uVar2 < *(uint *)(param_1 + 0x108)) {
      iVar1 = *(int *)(*(int *)(param_1 + 0x110) + uVar2 * 4);
    }
    else {
      iVar1 = 0;
    }
    func_004A5D48(iVar1);
    uVar2 = uVar2 + 1;
  } while ((int)uVar2 < 3);
  return;
}

