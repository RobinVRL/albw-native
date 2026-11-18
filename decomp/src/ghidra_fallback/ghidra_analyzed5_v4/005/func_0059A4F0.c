#include "ghidra_types.h"

extern int DAT_0059a4ec;
extern undefined4 *DAT_0059a4f0;

// USA 0059A4F0 <- EU 0059A4C8 (Ghidra, non-matching)
// GLOBAL DAT_0059a4ec int
// GLOBAL DAT_0059a4f0 undefined4 *

void func_0059A4F0(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = DAT_0059a4ec;
  *(undefined4 *)(DAT_0059a4ec + 8) = 0xffffffff;
  *(undefined4 *)(iVar1 + 0xc) = 0xffffffff;
  puVar2 = DAT_0059a4f0;
  *DAT_0059a4f0 = 0;
  puVar2[1] = 0;
  return;
}

