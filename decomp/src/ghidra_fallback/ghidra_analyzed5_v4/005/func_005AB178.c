#include "ghidra_types.h"

extern int DAT_005ab174;
extern undefined4 *DAT_005ab178;

// USA 005AB178 <- EU 005AB150 (Ghidra, non-matching)
// GLOBAL DAT_005ab174 int
// GLOBAL DAT_005ab178 undefined4 *

void func_005AB178(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = DAT_005ab174;
  *(undefined4 *)(DAT_005ab174 + 8) = 0xffffffff;
  *(undefined4 *)(iVar1 + 0xc) = 0xffffffff;
  puVar2 = DAT_005ab178;
  *DAT_005ab178 = 0;
  puVar2[1] = 0;
  return;
}

