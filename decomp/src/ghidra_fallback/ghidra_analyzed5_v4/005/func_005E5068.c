#include "ghidra_types.h"

extern int DAT_005e5064;
extern undefined4 *DAT_005e5068;

// USA 005E5068 <- EU 005E5040 (Ghidra, non-matching)
// GLOBAL DAT_005e5064 int
// GLOBAL DAT_005e5068 undefined4 *

void func_005E5068(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = DAT_005e5064;
  *(undefined4 *)(DAT_005e5064 + 8) = 0xffffffff;
  *(undefined4 *)(iVar1 + 0xc) = 0xffffffff;
  puVar2 = DAT_005e5068;
  *DAT_005e5068 = 0;
  puVar2[1] = 0;
  return;
}

