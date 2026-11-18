#include "ghidra_types.h"

extern int DAT_005fe5f8;
extern undefined4 *DAT_005fe5fc;

// USA 005FE5FC <- EU 005FE5D4 (Ghidra, non-matching)
// GLOBAL DAT_005fe5f8 int
// GLOBAL DAT_005fe5fc undefined4 *

void func_005FE5FC(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = DAT_005fe5f8;
  *(undefined4 *)(DAT_005fe5f8 + 8) = 0xffffffff;
  *(undefined4 *)(iVar1 + 0xc) = 0xffffffff;
  puVar2 = DAT_005fe5fc;
  *DAT_005fe5fc = 0;
  puVar2[1] = 0;
  return;
}

