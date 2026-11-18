#include "ghidra_types.h"

extern int DAT_005d0c58;
extern undefined4 *DAT_005d0c5c;

// USA 005D0C5C <- EU 005D0C34 (Ghidra, non-matching)
// GLOBAL DAT_005d0c58 int
// GLOBAL DAT_005d0c5c undefined4 *

void func_005D0C5C(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = DAT_005d0c58;
  *(undefined4 *)(DAT_005d0c58 + 8) = 0xffffffff;
  *(undefined4 *)(iVar1 + 0xc) = 0xffffffff;
  puVar2 = DAT_005d0c5c;
  *DAT_005d0c5c = 0;
  puVar2[1] = 0;
  return;
}

