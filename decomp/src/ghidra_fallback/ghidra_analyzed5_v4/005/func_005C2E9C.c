#include "ghidra_types.h"

extern int DAT_005c2e98;
extern undefined4 *DAT_005c2e9c;

// USA 005C2E9C <- EU 005C2E74 (Ghidra, non-matching)
// GLOBAL DAT_005c2e98 int
// GLOBAL DAT_005c2e9c undefined4 *

void func_005C2E9C(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = DAT_005c2e98;
  *(undefined4 *)(DAT_005c2e98 + 8) = 0xffffffff;
  *(undefined4 *)(iVar1 + 0xc) = 0xffffffff;
  puVar2 = DAT_005c2e9c;
  *DAT_005c2e9c = 0;
  puVar2[1] = 0;
  return;
}

