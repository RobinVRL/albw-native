#include "ghidra_types.h"

extern undefined *DAT_00117fa8;
extern int DAT_00117fac;

// USA 00117F94 <- EU 00117F94 (Ghidra, non-matching)
// GLOBAL DAT_00117fa8 undefined *
// GLOBAL DAT_00117fac int

int func_00117F94(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_00117fac;
  pcVar1 = DAT_00117fa8;
  iVar3 = DAT_00117fac + 8;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

