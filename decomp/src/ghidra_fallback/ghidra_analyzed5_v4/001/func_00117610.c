#include "ghidra_types.h"

extern undefined *DAT_00117624;
extern int DAT_00117628;

// USA 00117610 <- EU 00117610 (Ghidra, non-matching)
// GLOBAL DAT_00117624 undefined *
// GLOBAL DAT_00117628 int

int func_00117610(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_00117628;
  pcVar1 = DAT_00117624;
  iVar3 = DAT_00117628 + 8;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

