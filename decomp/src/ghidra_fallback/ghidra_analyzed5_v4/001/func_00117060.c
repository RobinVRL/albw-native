#include "ghidra_types.h"

extern undefined *DAT_00117074;
extern int DAT_00117078;

// USA 00117060 <- EU 00117060 (Ghidra, non-matching)
// GLOBAL DAT_00117074 undefined *
// GLOBAL DAT_00117078 int

int func_00117060(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_00117078;
  pcVar1 = DAT_00117074;
  iVar3 = DAT_00117078 + 0x20;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

