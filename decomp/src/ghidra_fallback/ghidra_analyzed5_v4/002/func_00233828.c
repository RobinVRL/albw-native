#include "ghidra_types.h"

extern int DAT_00233874;
extern int DAT_00233878;

// USA 00233828 <- EU 00233828 (Ghidra, non-matching)
// GLOBAL DAT_00233874 int
// GLOBAL DAT_00233878 int

void func_00233828(int param_1)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = (uint)*(byte *)(DAT_00233874 + -0xbc + param_1);
  if (*(char *)(DAT_00233874 + param_1) != '\0') {
    uVar2 = 1 - uVar2;
  }
  iVar1 = param_1 + uVar2 * DAT_00233878 * 4;
  *(undefined1 *)(iVar1 + 0x8c) = 0;
  *(undefined1 *)(iVar1 + 0x8d) = 1;
  *(undefined1 *)(iVar1 + 0x1618) = 0;
  *(undefined1 *)(iVar1 + 0x1619) = 1;
  return;
}

