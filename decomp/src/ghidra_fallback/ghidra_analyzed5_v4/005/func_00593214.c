#include "ghidra_types.h"

extern int DAT_00593210;
extern undefined4 *DAT_00593214;

// USA 00593214 <- EU 005931EC (Ghidra, non-matching)
// GLOBAL DAT_00593210 int
// GLOBAL DAT_00593214 undefined4 *

void func_00593214(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = DAT_00593210;
  *(undefined4 *)(DAT_00593210 + 8) = 0xffffffff;
  *(undefined4 *)(iVar1 + 0xc) = 0xffffffff;
  puVar2 = DAT_00593214;
  *DAT_00593214 = 0;
  puVar2[1] = 0;
  return;
}

