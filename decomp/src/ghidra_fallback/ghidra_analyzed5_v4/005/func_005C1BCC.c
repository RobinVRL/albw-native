#include "ghidra_types.h"

extern int DAT_005c1bc8;
extern undefined4 *DAT_005c1bcc;

// USA 005C1BCC <- EU 005C1BA4 (Ghidra, non-matching)
// GLOBAL DAT_005c1bc8 int
// GLOBAL DAT_005c1bcc undefined4 *

void func_005C1BCC(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = DAT_005c1bc8;
  *(undefined4 *)(DAT_005c1bc8 + 8) = 0xffffffff;
  *(undefined4 *)(iVar1 + 0xc) = 0xffffffff;
  puVar2 = DAT_005c1bcc;
  *DAT_005c1bcc = 0;
  puVar2[1] = 0;
  return;
}

