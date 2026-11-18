#include "ghidra_types.h"

extern int DAT_0059b1a4;
extern undefined4 *DAT_0059b1a8;

// USA 0059B1A8 <- EU 0059B180 (Ghidra, non-matching)
// GLOBAL DAT_0059b1a4 int
// GLOBAL DAT_0059b1a8 undefined4 *

void func_0059B1A8(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = DAT_0059b1a4;
  *(undefined4 *)(DAT_0059b1a4 + 8) = 0xffffffff;
  *(undefined4 *)(iVar1 + 0xc) = 0xffffffff;
  puVar2 = DAT_0059b1a8;
  *DAT_0059b1a8 = 0;
  puVar2[1] = 0;
  return;
}

