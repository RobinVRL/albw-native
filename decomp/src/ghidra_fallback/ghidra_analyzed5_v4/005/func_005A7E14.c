#include "ghidra_types.h"

extern int DAT_005a7e10;
extern undefined4 *DAT_005a7e14;

// USA 005A7E14 <- EU 005A7DEC (Ghidra, non-matching)
// GLOBAL DAT_005a7e10 int
// GLOBAL DAT_005a7e14 undefined4 *

void func_005A7E14(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = DAT_005a7e10;
  *(undefined4 *)(DAT_005a7e10 + 0x10) = 0xffffffff;
  *(undefined4 *)(iVar1 + 0x14) = 0xffffffff;
  puVar2 = DAT_005a7e14;
  *DAT_005a7e14 = 0;
  puVar2[1] = 0;
  return;
}

