#include "ghidra_types.h"

extern undefined *DAT_0011d578;
extern int DAT_0011d57c;

// USA 0011D564 <- EU 0011D564 (Ghidra, non-matching)
// GLOBAL DAT_0011d578 undefined *
// GLOBAL DAT_0011d57c int

int func_0011D564(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_0011d57c;
  pcVar1 = DAT_0011d578;
  iVar3 = DAT_0011d57c + 0x30;
  do {
    iVar3 = iVar3 + -0xc;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

