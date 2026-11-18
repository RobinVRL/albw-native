#include "ghidra_types.h"

extern undefined *DAT_0011d498;
extern int DAT_0011d49c;

// USA 0011D484 <- EU 0011D484 (Ghidra, non-matching)
// GLOBAL DAT_0011d498 undefined *
// GLOBAL DAT_0011d49c int

int func_0011D484(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_0011d49c;
  pcVar1 = DAT_0011d498;
  iVar3 = DAT_0011d49c + 0x20;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

