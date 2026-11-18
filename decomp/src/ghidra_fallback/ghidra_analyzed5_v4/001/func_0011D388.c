#include "ghidra_types.h"

extern undefined *DAT_0011d39c;
extern int DAT_0011d3a0;

// USA 0011D388 <- EU 0011D388 (Ghidra, non-matching)
// GLOBAL DAT_0011d39c undefined *
// GLOBAL DAT_0011d3a0 int

int func_0011D388(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_0011d3a0;
  pcVar1 = DAT_0011d39c;
  iVar3 = DAT_0011d3a0 + 0x48;
  do {
    iVar3 = iVar3 + -0xc;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

