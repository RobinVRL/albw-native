#include "ghidra_types.h"

extern int DAT_005b8b20;
extern undefined4 *DAT_005b8b24;

// USA 005B8B24 <- EU 005B8AFC (Ghidra, non-matching)
// GLOBAL DAT_005b8b20 int
// GLOBAL DAT_005b8b24 undefined4 *

void func_005B8B24(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = DAT_005b8b20;
  *(undefined4 *)(DAT_005b8b20 + 0x18) = 0xffffffff;
  *(undefined4 *)(iVar1 + 0x1c) = 0xffffffff;
  puVar2 = DAT_005b8b24;
  *DAT_005b8b24 = 0;
  puVar2[1] = 0;
  return;
}

