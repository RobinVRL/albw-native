#include "ghidra_types.h"

extern int DAT_005bd8c0;
extern undefined4 *DAT_005bd8c4;

// USA 005BD8C4 <- EU 005BD89C (Ghidra, non-matching)
// GLOBAL DAT_005bd8c0 int
// GLOBAL DAT_005bd8c4 undefined4 *

void func_005BD8C4(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = DAT_005bd8c0;
  *(undefined4 *)(DAT_005bd8c0 + 8) = 0xffffffff;
  *(undefined4 *)(iVar1 + 0xc) = 0xffffffff;
  puVar2 = DAT_005bd8c4;
  *DAT_005bd8c4 = 0;
  puVar2[1] = 0;
  return;
}

