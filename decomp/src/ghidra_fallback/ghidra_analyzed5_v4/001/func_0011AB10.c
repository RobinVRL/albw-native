#include "ghidra_types.h"

extern undefined *DAT_0011ab24;
extern int DAT_0011ab28;

// USA 0011AB10 <- EU 0011AB10 (Ghidra, non-matching)
// GLOBAL DAT_0011ab24 undefined *
// GLOBAL DAT_0011ab28 int

int func_0011AB10(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_0011ab28;
  pcVar1 = DAT_0011ab24;
  iVar3 = DAT_0011ab28 + 8;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

