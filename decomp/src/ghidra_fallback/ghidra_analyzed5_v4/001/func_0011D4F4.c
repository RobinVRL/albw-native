#include "ghidra_types.h"

extern undefined *DAT_0011d508;
extern int DAT_0011d50c;

// USA 0011D4F4 <- EU 0011D4F4 (Ghidra, non-matching)
// GLOBAL DAT_0011d508 undefined *
// GLOBAL DAT_0011d50c int

int func_0011D4F4(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_0011d50c;
  pcVar1 = DAT_0011d508;
  iVar3 = DAT_0011d50c + 0x10;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

