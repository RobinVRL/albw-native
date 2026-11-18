#include "ghidra_types.h"

extern undefined *DAT_0011d6c8;
extern int DAT_0011d6cc;

// USA 0011D6B4 <- EU 0011D6B4 (Ghidra, non-matching)
// GLOBAL DAT_0011d6c8 undefined *
// GLOBAL DAT_0011d6cc int

int func_0011D6B4(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_0011d6cc;
  pcVar1 = DAT_0011d6c8;
  iVar3 = DAT_0011d6cc + 0x20;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

