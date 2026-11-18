#include "ghidra_types.h"

extern undefined *DAT_0011d984;
extern int DAT_0011d988;

// USA 0011D970 <- EU 0011D970 (Ghidra, non-matching)
// GLOBAL DAT_0011d984 undefined *
// GLOBAL DAT_0011d988 int

int func_0011D970(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_0011d988;
  pcVar1 = DAT_0011d984;
  iVar3 = DAT_0011d988 + 0x30;
  do {
    iVar3 = iVar3 + -0xc;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

