#include "ghidra_types.h"

extern int DAT_0059ac3c;
extern undefined4 *DAT_0059ac40;

// USA 0059AC40 <- EU 0059AC18 (Ghidra, non-matching)
// GLOBAL DAT_0059ac3c int
// GLOBAL DAT_0059ac40 undefined4 *

void func_0059AC40(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = DAT_0059ac3c;
  *(undefined4 *)(DAT_0059ac3c + 0x10) = 0xffffffff;
  *(undefined4 *)(iVar1 + 0x14) = 0xffffffff;
  puVar2 = DAT_0059ac40;
  *DAT_0059ac40 = 0;
  puVar2[1] = 0;
  return;
}

