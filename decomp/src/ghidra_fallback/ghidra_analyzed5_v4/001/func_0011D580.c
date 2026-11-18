#include "ghidra_types.h"

extern undefined *DAT_0011d594;
extern int DAT_0011d598;

// USA 0011D580 <- EU 0011D580 (Ghidra, non-matching)
// GLOBAL DAT_0011d594 undefined *
// GLOBAL DAT_0011d598 int

int func_0011D580(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_0011d598;
  pcVar1 = DAT_0011d594;
  iVar3 = DAT_0011d598 + 0x20;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

