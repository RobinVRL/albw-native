#include "ghidra_types.h"

extern int DAT_005a7ec0;
extern undefined4 *DAT_005a7ec4;

// USA 005A7EC4 <- EU 005A7E9C (Ghidra, non-matching)
// GLOBAL DAT_005a7ec0 int
// GLOBAL DAT_005a7ec4 undefined4 *

void func_005A7EC4(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = DAT_005a7ec0;
  *(undefined4 *)(DAT_005a7ec0 + 8) = 0xffffffff;
  *(undefined4 *)(iVar1 + 0xc) = 0xffffffff;
  puVar2 = DAT_005a7ec4;
  *DAT_005a7ec4 = 0;
  puVar2[1] = 0;
  return;
}

