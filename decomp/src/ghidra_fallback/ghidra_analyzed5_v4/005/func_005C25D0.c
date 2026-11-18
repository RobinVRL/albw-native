#include "ghidra_types.h"

extern int DAT_005c25cc;
extern undefined4 *DAT_005c25d0;

// USA 005C25D0 <- EU 005C25A8 (Ghidra, non-matching)
// GLOBAL DAT_005c25cc int
// GLOBAL DAT_005c25d0 undefined4 *

void func_005C25D0(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = DAT_005c25cc;
  *(undefined4 *)(DAT_005c25cc + 8) = 0xffffffff;
  *(undefined4 *)(iVar1 + 0xc) = 0xffffffff;
  puVar2 = DAT_005c25d0;
  *DAT_005c25d0 = 0;
  puVar2[1] = 0;
  return;
}

