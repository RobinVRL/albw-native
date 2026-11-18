#include "ghidra_types.h"

extern undefined *DAT_0011d930;
extern int DAT_0011d934;

// USA 0011D91C <- EU 0011D91C (Ghidra, non-matching)
// GLOBAL DAT_0011d930 undefined *
// GLOBAL DAT_0011d934 int

int func_0011D91C(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_0011d934;
  pcVar1 = DAT_0011d930;
  iVar3 = DAT_0011d934 + 8;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

