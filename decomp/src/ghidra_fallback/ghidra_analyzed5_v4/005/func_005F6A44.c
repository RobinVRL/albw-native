#include "ghidra_types.h"

extern int DAT_005f6a40;
extern undefined4 *DAT_005f6a44;

// USA 005F6A44 <- EU 005F6A1C (Ghidra, non-matching)
// GLOBAL DAT_005f6a40 int
// GLOBAL DAT_005f6a44 undefined4 *

void func_005F6A44(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = DAT_005f6a40;
  *(undefined4 *)(DAT_005f6a40 + 8) = 0xffffffff;
  *(undefined4 *)(iVar1 + 0xc) = 0xffffffff;
  puVar2 = DAT_005f6a44;
  *DAT_005f6a44 = 0;
  puVar2[1] = 0;
  return;
}

