#include "ghidra_types.h"

extern int DAT_005f7b20;
extern undefined4 *DAT_005f7b24;

// USA 005F7B24 <- EU 005F7AFC (Ghidra, non-matching)
// GLOBAL DAT_005f7b20 int
// GLOBAL DAT_005f7b24 undefined4 *

void func_005F7B24(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = DAT_005f7b20;
  *(undefined4 *)(DAT_005f7b20 + 8) = 0xffffffff;
  *(undefined4 *)(iVar1 + 0xc) = 0xffffffff;
  puVar2 = DAT_005f7b24;
  *DAT_005f7b24 = 0;
  puVar2[1] = 0;
  return;
}

