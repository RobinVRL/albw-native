#include "ghidra_types.h"

extern int DAT_005b9cc0;
extern undefined4 *DAT_005b9cc4;

// USA 005B9CBC <- EU 005B9C94 (Ghidra, non-matching)
// GLOBAL DAT_005b9cc0 int
// GLOBAL DAT_005b9cc4 undefined4 *

void func_005B9CBC(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = DAT_005b9cc0;
  *(undefined4 *)(DAT_005b9cc0 + 8) = 0xffffffff;
  *(undefined4 *)(iVar1 + 0xc) = 0xffffffff;
  puVar2 = DAT_005b9cc4;
  *DAT_005b9cc4 = 0;
  puVar2[1] = 0;
  puVar2[-3] = 0;
  return;
}

