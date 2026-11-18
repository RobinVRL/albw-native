#include "ghidra_types.h"

extern int DAT_005bd7e8;

// USA 005BD7E4 <- EU 005BD7BC (Ghidra, non-matching)
// GLOBAL DAT_005bd7e8 int

void func_005BD7E4(void)

{
  int iVar1;
  
  iVar1 = DAT_005bd7e8;
  *(undefined4 *)(DAT_005bd7e8 + 8) = 0xffffffff;
  *(undefined4 *)(iVar1 + 0xc) = 0xffffffff;
  *(undefined4 *)(iVar1 + 0x10) = 0;
  *(undefined4 *)(iVar1 + 0x14) = 0;
  *(undefined4 *)(iVar1 + 4) = 0x32;
  return;
}

