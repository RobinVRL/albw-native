#include "ghidra_types.h"

extern int DAT_005ae850;
extern undefined4 *DAT_005ae854;

// USA 005AE854 <- EU 005AE82C (Ghidra, non-matching)
// GLOBAL DAT_005ae850 int
// GLOBAL DAT_005ae854 undefined4 *

void func_005AE854(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = DAT_005ae850;
  *(undefined4 *)(DAT_005ae850 + 0x10) = 0xffffffff;
  *(undefined4 *)(iVar1 + 0x14) = 0xffffffff;
  puVar2 = DAT_005ae854;
  *DAT_005ae854 = 0;
  puVar2[1] = 0;
  return;
}

