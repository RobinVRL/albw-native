#include "ghidra_types.h"

extern int DAT_005c1a88;
extern undefined4 *DAT_005c1a8c;

// USA 005C1A8C <- EU 005C1A64 (Ghidra, non-matching)
// GLOBAL DAT_005c1a88 int
// GLOBAL DAT_005c1a8c undefined4 *

void func_005C1A8C(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = DAT_005c1a88;
  *(undefined4 *)(DAT_005c1a88 + 0x40) = 0xffffffff;
  *(undefined4 *)(iVar1 + 0x44) = 0xffffffff;
  puVar2 = DAT_005c1a8c;
  *DAT_005c1a8c = 0;
  puVar2[1] = 0;
  return;
}

