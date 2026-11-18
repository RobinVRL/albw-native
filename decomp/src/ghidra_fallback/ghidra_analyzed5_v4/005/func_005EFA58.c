#include "ghidra_types.h"

extern int DAT_005efa54;
extern undefined4 *DAT_005efa58;

// USA 005EFA58 <- EU 005EFA30 (Ghidra, non-matching)
// GLOBAL DAT_005efa54 int
// GLOBAL DAT_005efa58 undefined4 *

void func_005EFA58(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = DAT_005efa54;
  *(undefined4 *)(DAT_005efa54 + 8) = 0xffffffff;
  *(undefined4 *)(iVar1 + 0xc) = 0xffffffff;
  puVar2 = DAT_005efa58;
  *DAT_005efa58 = 0;
  puVar2[1] = 0;
  return;
}

