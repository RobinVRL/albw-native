#include "ghidra_types.h"

extern int DAT_005cdb3c;
extern undefined4 *DAT_005cdb40;

// USA 005CDB38 <- EU 005CDB10 (Ghidra, non-matching)
// GLOBAL DAT_005cdb3c int
// GLOBAL DAT_005cdb40 undefined4 *

void func_005CDB38(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = DAT_005cdb3c;
  *(undefined4 *)(DAT_005cdb3c + 0x10) = 0xffffffff;
  *(undefined4 *)(iVar1 + 0x14) = 0xffffffff;
  puVar2 = DAT_005cdb40;
  *DAT_005cdb40 = 0;
  puVar2[1] = 0;
  puVar2[-4] = 0;
  return;
}

