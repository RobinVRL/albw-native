#include "ghidra_types.h"

extern int DAT_005aef4c;
extern undefined4 *DAT_005aef50;

// USA 005AEF50 <- EU 005AEF28 (Ghidra, non-matching)
// GLOBAL DAT_005aef4c int
// GLOBAL DAT_005aef50 undefined4 *

void func_005AEF50(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = DAT_005aef4c;
  *(undefined4 *)(DAT_005aef4c + 8) = 0xffffffff;
  *(undefined4 *)(iVar1 + 0xc) = 0xffffffff;
  puVar2 = DAT_005aef50;
  *DAT_005aef50 = 0;
  puVar2[1] = 0;
  return;
}

