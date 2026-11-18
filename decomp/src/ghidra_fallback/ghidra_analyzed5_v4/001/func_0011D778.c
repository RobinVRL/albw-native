#include "ghidra_types.h"

extern undefined *DAT_0011d78c;
extern int DAT_0011d790;

// USA 0011D778 <- EU 0011D778 (Ghidra, non-matching)
// GLOBAL DAT_0011d78c undefined *
// GLOBAL DAT_0011d790 int

int func_0011D778(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_0011d790;
  pcVar1 = DAT_0011d78c;
  iVar3 = DAT_0011d790 + 0x20;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

