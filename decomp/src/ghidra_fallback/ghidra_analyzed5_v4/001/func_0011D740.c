#include "ghidra_types.h"

extern undefined *DAT_0011d754;
extern int DAT_0011d758;

// USA 0011D740 <- EU 0011D740 (Ghidra, non-matching)
// GLOBAL DAT_0011d754 undefined *
// GLOBAL DAT_0011d758 int

int func_0011D740(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_0011d758;
  pcVar1 = DAT_0011d754;
  iVar3 = DAT_0011d758 + 0x20;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

