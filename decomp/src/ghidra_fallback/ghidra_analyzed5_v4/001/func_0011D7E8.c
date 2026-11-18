#include "ghidra_types.h"

extern undefined *DAT_0011d7fc;
extern int DAT_0011d800;

// USA 0011D7E8 <- EU 0011D7E8 (Ghidra, non-matching)
// GLOBAL DAT_0011d7fc undefined *
// GLOBAL DAT_0011d800 int

int func_0011D7E8(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_0011d800;
  pcVar1 = DAT_0011d7fc;
  iVar3 = DAT_0011d800 + 0x50;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

