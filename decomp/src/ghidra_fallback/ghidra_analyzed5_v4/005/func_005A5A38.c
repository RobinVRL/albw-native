#include "ghidra_types.h"

extern int DAT_005a5a3c;
extern undefined4 DAT_005a5a40;

// USA 005A5A38 <- EU 005A5A10 (Ghidra, non-matching)
// GLOBAL DAT_005a5a3c int
// GLOBAL DAT_005a5a40 undefined4

void func_005A5A38(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = DAT_005a5a3c;
  *(undefined4 *)(DAT_005a5a3c + 0x10) = 0xffffffff;
  *(undefined4 *)(iVar1 + 0x14) = 0xffffffff;
  uVar2 = DAT_005a5a40;
  *(undefined4 *)(iVar1 + 0x18) = 0;
  *(undefined4 *)(iVar1 + 0x1c) = 0;
  *(undefined4 *)(iVar1 + 8) = uVar2;
  return;
}

