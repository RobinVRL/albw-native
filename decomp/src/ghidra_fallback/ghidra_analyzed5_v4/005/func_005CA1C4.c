#include "ghidra_types.h"

extern int DAT_005ca1c0;
extern undefined4 *DAT_005ca1c4;

// USA 005CA1C4 <- EU 005CA19C (Ghidra, non-matching)
// GLOBAL DAT_005ca1c0 int
// GLOBAL DAT_005ca1c4 undefined4 *

void func_005CA1C4(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = DAT_005ca1c0;
  *(undefined4 *)(DAT_005ca1c0 + 0x38) = 0xffffffff;
  *(undefined4 *)(iVar1 + 0x3c) = 0xffffffff;
  puVar2 = DAT_005ca1c4;
  *DAT_005ca1c4 = 0;
  puVar2[1] = 0;
  return;
}

