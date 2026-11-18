#include "ghidra_types.h"

extern int DAT_005f3088;
extern undefined4 *DAT_005f308c;

// USA 005F308C <- EU 005F3064 (Ghidra, non-matching)
// GLOBAL DAT_005f3088 int
// GLOBAL DAT_005f308c undefined4 *

void func_005F308C(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = DAT_005f3088;
  *(undefined4 *)(DAT_005f3088 + 8) = 0xffffffff;
  *(undefined4 *)(iVar1 + 0xc) = 0xffffffff;
  puVar2 = DAT_005f308c;
  *DAT_005f308c = 0;
  puVar2[1] = 0;
  return;
}

