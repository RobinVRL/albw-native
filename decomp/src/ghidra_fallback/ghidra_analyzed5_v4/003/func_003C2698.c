#include "ghidra_types.h"

extern int DAT_003c26a8;

// USA 003C2698 <- EU 003C2674 (Ghidra, non-matching)
// GLOBAL DAT_003c26a8 int

void func_003C2698(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  *(undefined1 *)(param_1 + 0xb3d) = 1;
  *(uint *)(param_1 + 0x59c) = *(uint *)(param_1 + 0x59c) & 0xffffff73;
  uVar1 = *(undefined4 *)(DAT_003c26a8 + 8);
  uVar2 = *(undefined4 *)(DAT_003c26a8 + 0xc);
  *(int *)(param_1 + 0x8fc) = param_1 + 0x8e0;
  *(undefined4 *)(param_1 + 0x900) = uVar1;
  *(undefined4 *)(param_1 + 0x904) = uVar2;
  return;
}

