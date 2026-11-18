#include "ghidra_types.h"

extern int DAT_003c2670;

// USA 003C2668 <- EU 003C2644 (Ghidra, non-matching)
// GLOBAL DAT_003c2670 int

void func_003C2668(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  *(uint *)(param_1 + 0x59c) = *(uint *)(param_1 + 0x59c) | 0x8c;
  uVar1 = *(undefined4 *)(DAT_003c2670 + 0x10);
  uVar2 = *(undefined4 *)(DAT_003c2670 + 0x14);
  *(int *)(param_1 + 0x8fc) = param_1 + 0x8e0;
  *(undefined4 *)(param_1 + 0x900) = uVar1;
  *(undefined4 *)(param_1 + 0x904) = uVar2;
  return;
}

