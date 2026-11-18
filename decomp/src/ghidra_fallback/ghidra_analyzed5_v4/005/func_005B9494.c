#include "ghidra_types.h"

extern int DAT_005b9490;
extern undefined4 *DAT_005b9494;

// USA 005B9494 <- EU 005B946C (Ghidra, non-matching)
// GLOBAL DAT_005b9490 int
// GLOBAL DAT_005b9494 undefined4 *

void func_005B9494(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = DAT_005b9490;
  *(undefined4 *)(DAT_005b9490 + 8) = 0xffffffff;
  *(undefined4 *)(iVar1 + 0xc) = 0xffffffff;
  puVar2 = DAT_005b9494;
  *DAT_005b9494 = 0;
  puVar2[1] = 0;
  return;
}

