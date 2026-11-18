#include "ghidra_types.h"

extern int DAT_005a5b4c;
extern undefined4 *DAT_005a5b50;

// USA 005A5B48 <- EU 005A5B20 (Ghidra, non-matching)
// GLOBAL DAT_005a5b4c int
// GLOBAL DAT_005a5b50 undefined4 *

void func_005A5B48(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = DAT_005a5b4c;
  *(undefined4 *)(DAT_005a5b4c + 8) = 0xffffffff;
  *(undefined4 *)(iVar1 + 0xc) = 0xffffffff;
  puVar2 = DAT_005a5b50;
  *DAT_005a5b50 = 0;
  puVar2[1] = 0;
  *(undefined1 *)(puVar2 + -4) = 0;
  return;
}

