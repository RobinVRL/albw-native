#include "ghidra_types.h"

extern int DAT_005cb018;
extern undefined4 *DAT_005cb01c;

// USA 005CB01C <- EU 005CAFF4 (Ghidra, non-matching)
// GLOBAL DAT_005cb018 int
// GLOBAL DAT_005cb01c undefined4 *

void func_005CB01C(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = DAT_005cb018;
  *(undefined4 *)(DAT_005cb018 + 8) = 0xffffffff;
  *(undefined4 *)(iVar1 + 0xc) = 0xffffffff;
  puVar2 = DAT_005cb01c;
  *DAT_005cb01c = 0;
  puVar2[1] = 0;
  return;
}

