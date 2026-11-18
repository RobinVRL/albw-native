#include "ghidra_types.h"

extern int DAT_005c1b1c;

// USA 005C1AE4 <- EU 005C1ABC (Ghidra, non-matching)
// GLOBAL DAT_005c1b1c int

void func_005C1AE4(void)

{
  int iVar1;
  
  iVar1 = DAT_005c1b1c;
  *(undefined4 *)(DAT_005c1b1c + 0x70) = 0xffffffff;
  *(undefined4 *)(iVar1 + 0x74) = 0xffffffff;
  *(undefined4 *)(iVar1 + 0x78) = 0;
  *(undefined4 *)(iVar1 + 0x7c) = 0;
  *(undefined4 *)(iVar1 + 0x120) = *(undefined4 *)(iVar1 + 0x2c);
  *(undefined4 *)(iVar1 + 0x130) = *(undefined4 *)(iVar1 + 0x30);
  *(undefined4 *)(iVar1 + 0x148) = *(undefined4 *)(iVar1 + 0x30);
  *(undefined4 *)(iVar1 + 0x13c) = *(undefined4 *)(iVar1 + 0x20);
  *(undefined4 *)(iVar1 + 0x168) = *(undefined4 *)(iVar1 + 0x38);
  *(undefined4 *)(iVar1 + 0x1dc) = *(undefined4 *)(iVar1 + 0x24);
  *(undefined4 *)(iVar1 + 0x1fc) = *(undefined4 *)(iVar1 + 0x28);
  return;
}

