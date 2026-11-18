#include "ghidra_types.h"

extern undefined *DAT_0011d4ec;
extern int DAT_0011d4f0;

// USA 0011D4D8 <- EU 0011D4D8 (Ghidra, non-matching)
// GLOBAL DAT_0011d4ec undefined *
// GLOBAL DAT_0011d4f0 int

int func_0011D4D8(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_0011d4f0;
  pcVar1 = DAT_0011d4ec;
  iVar3 = DAT_0011d4f0 + 0x100;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

