#include "ghidra_types.h"

extern int DAT_005d0d98;
extern undefined4 *DAT_005d0d9c;

// USA 005D0D9C <- EU 005D0D74 (Ghidra, non-matching)
// GLOBAL DAT_005d0d98 int
// GLOBAL DAT_005d0d9c undefined4 *

void func_005D0D9C(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = DAT_005d0d98;
  *(undefined4 *)(DAT_005d0d98 + 8) = 0xffffffff;
  *(undefined4 *)(iVar1 + 0xc) = 0xffffffff;
  puVar2 = DAT_005d0d9c;
  *DAT_005d0d9c = 0;
  puVar2[1] = 0;
  return;
}

