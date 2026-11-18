#include "ghidra_types.h"

extern undefined *DAT_0011d5e8;
extern int DAT_0011d5ec;

// USA 0011D5D4 <- EU 0011D5D4 (Ghidra, non-matching)
// GLOBAL DAT_0011d5e8 undefined *
// GLOBAL DAT_0011d5ec int

int func_0011D5D4(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_0011d5ec;
  pcVar1 = DAT_0011d5e8;
  iVar3 = DAT_0011d5ec + 0x10;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

