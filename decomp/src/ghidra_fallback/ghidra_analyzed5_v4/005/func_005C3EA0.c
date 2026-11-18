#include "ghidra_types.h"

extern int DAT_005c3eb4;
extern undefined4 *DAT_005c3eb8;
extern undefined4 DAT_005c3ebc;
extern undefined4 DAT_005c3ec0;

// USA 005C3EA0 <- EU 005C3E78 (Ghidra, non-matching)
// GLOBAL DAT_005c3eb4 int
// GLOBAL DAT_005c3eb8 undefined4 *
// GLOBAL DAT_005c3ebc undefined4
// GLOBAL DAT_005c3ec0 undefined4

void func_005C3EA0(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = DAT_005c3eb4;
  *(undefined4 *)(DAT_005c3eb4 + 0x10) = 0xffffffff;
  *(undefined4 *)(iVar1 + 0x14) = 0xffffffff;
  puVar2 = DAT_005c3eb8;
  *DAT_005c3eb8 = 0;
  puVar2[1] = 0;
  puVar2[-4] = DAT_005c3ebc;
  puVar2[-3] = DAT_005c3ec0;
  return;
}

