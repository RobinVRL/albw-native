#include "ghidra_types.h"


// USA 004789F8 <- EU 004789D0 (Ghidra, non-matching)

void func_004789F8(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x158);
  if (*(int *)(iVar1 + 0x210) != 0) {
    *(undefined1 *)(*(int *)(iVar1 + 0x210) + 0x98) = 9;
    *(uint *)(*(int *)(iVar1 + 0x210) + 0x18) = *(uint *)(*(int *)(iVar1 + 0x210) + 0x18) | 0x40;
  }
  if (*(int *)(iVar1 + 0x214) != 0) {
    *(undefined1 *)(*(int *)(iVar1 + 0x214) + 0x98) = 9;
    *(uint *)(*(int *)(iVar1 + 0x214) + 0x18) = *(uint *)(*(int *)(iVar1 + 0x214) + 0x18) | 0x40;
  }
  if (*(int *)(iVar1 + 0x218) != 0) {
    *(undefined1 *)(*(int *)(iVar1 + 0x218) + 0x80) = 0xff;
    *(uint *)(*(int *)(iVar1 + 0x218) + 0x18) = *(uint *)(*(int *)(iVar1 + 0x218) + 0x18) | 0x40;
  }
  return;
}

