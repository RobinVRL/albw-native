#include "ghidra_types.h"

extern int DAT_005aba74;
extern undefined4 *DAT_005aba78;

// USA 005ABA78 <- EU 005ABA50 (Ghidra, non-matching)
// GLOBAL DAT_005aba74 int
// GLOBAL DAT_005aba78 undefined4 *

void func_005ABA78(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = DAT_005aba74;
  *(undefined4 *)(DAT_005aba74 + 0x10) = 0xffffffff;
  *(undefined4 *)(iVar1 + 0x14) = 0xffffffff;
  puVar2 = DAT_005aba78;
  *DAT_005aba78 = 0;
  puVar2[1] = 0;
  return;
}

