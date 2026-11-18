#include "ghidra_types.h"

extern undefined *DAT_0011d770;
extern int DAT_0011d774;

// USA 0011D75C <- EU 0011D75C (Ghidra, non-matching)
// GLOBAL DAT_0011d770 undefined *
// GLOBAL DAT_0011d774 int

int func_0011D75C(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_0011d774;
  pcVar1 = DAT_0011d770;
  iVar3 = DAT_0011d774 + 8;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

