#include "ghidra_types.h"

extern int DAT_005b2e94;
extern undefined4 *DAT_005b2e98;

// USA 005B2E98 <- EU 005B2E70 (Ghidra, non-matching)
// GLOBAL DAT_005b2e94 int
// GLOBAL DAT_005b2e98 undefined4 *

void func_005B2E98(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = DAT_005b2e94;
  *(undefined4 *)(DAT_005b2e94 + 8) = 0xffffffff;
  *(undefined4 *)(iVar1 + 0xc) = 0xffffffff;
  puVar2 = DAT_005b2e98;
  *DAT_005b2e98 = 0;
  puVar2[1] = 0;
  return;
}

