#include "ghidra_types.h"

extern int DAT_005d0d6c;
extern undefined4 *DAT_005d0d70;

// USA 005D0D70 <- EU 005D0D48 (Ghidra, non-matching)
// GLOBAL DAT_005d0d6c int
// GLOBAL DAT_005d0d70 undefined4 *

void func_005D0D70(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = DAT_005d0d6c;
  *(undefined4 *)(DAT_005d0d6c + 8) = 0xffffffff;
  *(undefined4 *)(iVar1 + 0xc) = 0xffffffff;
  puVar2 = DAT_005d0d70;
  *DAT_005d0d70 = 0;
  puVar2[1] = 0;
  return;
}

