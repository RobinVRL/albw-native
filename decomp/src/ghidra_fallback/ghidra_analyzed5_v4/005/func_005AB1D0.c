#include "ghidra_types.h"

extern int DAT_005ab1d4;
extern undefined4 *DAT_005ab1d8;

// USA 005AB1D0 <- EU 005AB1A8 (Ghidra, non-matching)
// GLOBAL DAT_005ab1d4 int
// GLOBAL DAT_005ab1d8 undefined4 *

void func_005AB1D0(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = DAT_005ab1d4;
  *(undefined4 *)(DAT_005ab1d4 + 0x10) = 0xffffffff;
  *(undefined4 *)(iVar1 + 0x14) = 0xffffffff;
  puVar2 = DAT_005ab1d8;
  *DAT_005ab1d8 = 0;
  puVar2[1] = 0;
  *(undefined1 *)(puVar2 + -6) = 0;
  return;
}

