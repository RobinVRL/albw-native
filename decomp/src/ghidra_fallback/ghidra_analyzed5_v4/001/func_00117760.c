#include "ghidra_types.h"

extern undefined *DAT_00117774;
extern int DAT_00117778;

// USA 00117760 <- EU 00117760 (Ghidra, non-matching)
// GLOBAL DAT_00117774 undefined *
// GLOBAL DAT_00117778 int

int func_00117760(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_00117778;
  pcVar1 = DAT_00117774;
  iVar3 = DAT_00117778 + 8;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

