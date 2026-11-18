#include "ghidra_types.h"

extern int DAT_005a149c;
extern undefined4 *DAT_005a14a0;

// USA 005A14A0 <- EU 005A1478 (Ghidra, non-matching)
// GLOBAL DAT_005a149c int
// GLOBAL DAT_005a14a0 undefined4 *

void func_005A14A0(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = DAT_005a149c;
  *(undefined4 *)(DAT_005a149c + 8) = 0xffffffff;
  *(undefined4 *)(iVar1 + 0xc) = 0xffffffff;
  puVar2 = DAT_005a14a0;
  *DAT_005a14a0 = 0;
  puVar2[1] = 0;
  return;
}

