#include "ghidra_types.h"

extern undefined *DAT_0011cac0;
extern int DAT_0011cac4;

// USA 0011CAAC <- EU 0011CAAC (Ghidra, non-matching)
// GLOBAL DAT_0011cac0 undefined *
// GLOBAL DAT_0011cac4 int

int func_0011CAAC(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_0011cac4;
  pcVar1 = DAT_0011cac0;
  iVar3 = DAT_0011cac4 + 8;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

