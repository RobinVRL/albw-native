#include "ghidra_types.h"

extern int DAT_005cb5b8;
extern undefined4 *DAT_005cb5bc;

// USA 005CB5BC <- EU 005CB594 (Ghidra, non-matching)
// GLOBAL DAT_005cb5b8 int
// GLOBAL DAT_005cb5bc undefined4 *

void func_005CB5BC(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = DAT_005cb5b8;
  *(undefined4 *)(DAT_005cb5b8 + 8) = 0xffffffff;
  *(undefined4 *)(iVar1 + 0xc) = 0xffffffff;
  puVar2 = DAT_005cb5bc;
  *DAT_005cb5bc = 0;
  puVar2[1] = 0;
  return;
}

