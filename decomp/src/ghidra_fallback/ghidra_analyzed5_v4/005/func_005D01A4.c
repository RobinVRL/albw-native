#include "ghidra_types.h"

extern int DAT_005d01a0;
extern undefined4 *DAT_005d01a4;

// USA 005D01A4 <- EU 005D017C (Ghidra, non-matching)
// GLOBAL DAT_005d01a0 int
// GLOBAL DAT_005d01a4 undefined4 *

void func_005D01A4(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = DAT_005d01a0;
  *(undefined4 *)(DAT_005d01a0 + 8) = 0xffffffff;
  *(undefined4 *)(iVar1 + 0xc) = 0xffffffff;
  puVar2 = DAT_005d01a4;
  *DAT_005d01a4 = 0;
  puVar2[1] = 0;
  return;
}

