#include "ghidra_types.h"

extern int DAT_005edec0;
extern undefined4 *DAT_005edec4;

// USA 005EDEC4 <- EU 005EDE9C (Ghidra, non-matching)
// GLOBAL DAT_005edec0 int
// GLOBAL DAT_005edec4 undefined4 *

void func_005EDEC4(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = DAT_005edec0;
  *(undefined4 *)(DAT_005edec0 + 8) = 0xffffffff;
  *(undefined4 *)(iVar1 + 0xc) = 0xffffffff;
  puVar2 = DAT_005edec4;
  *DAT_005edec4 = 0;
  puVar2[1] = 0;
  return;
}

