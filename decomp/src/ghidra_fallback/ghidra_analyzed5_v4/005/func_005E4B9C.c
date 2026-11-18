#include "ghidra_types.h"

extern int DAT_005e4b98;
extern undefined4 *DAT_005e4b9c;

// USA 005E4B9C <- EU 005E4B74 (Ghidra, non-matching)
// GLOBAL DAT_005e4b98 int
// GLOBAL DAT_005e4b9c undefined4 *

void func_005E4B9C(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = DAT_005e4b98;
  *(undefined4 *)(DAT_005e4b98 + 8) = 0xffffffff;
  *(undefined4 *)(iVar1 + 0xc) = 0xffffffff;
  puVar2 = DAT_005e4b9c;
  *DAT_005e4b9c = 0;
  puVar2[1] = 0;
  return;
}

