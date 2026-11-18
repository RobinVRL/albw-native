#include "ghidra_types.h"

extern int DAT_005eff70;
extern undefined4 *DAT_005eff74;

// USA 005EFF74 <- EU 005EFF4C (Ghidra, non-matching)
// GLOBAL DAT_005eff70 int
// GLOBAL DAT_005eff74 undefined4 *

void func_005EFF74(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = DAT_005eff70;
  *(undefined4 *)(DAT_005eff70 + 8) = 0xffffffff;
  *(undefined4 *)(iVar1 + 0xc) = 0xffffffff;
  puVar2 = DAT_005eff74;
  *DAT_005eff74 = 0;
  puVar2[1] = 0;
  return;
}

