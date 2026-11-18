#include "ghidra_types.h"

extern undefined *DAT_0011d038;
extern int DAT_0011d03c;

// USA 0011D024 <- EU 0011D024 (Ghidra, non-matching)
// GLOBAL DAT_0011d038 undefined *
// GLOBAL DAT_0011d03c int

int func_0011D024(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_0011d03c;
  pcVar1 = DAT_0011d038;
  iVar3 = DAT_0011d03c + 8;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

