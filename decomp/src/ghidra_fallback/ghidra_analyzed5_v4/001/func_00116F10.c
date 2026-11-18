#include "ghidra_types.h"

extern undefined *DAT_00116f24;
extern int DAT_00116f28;

// USA 00116F10 <- EU 00116F10 (Ghidra, non-matching)
// GLOBAL DAT_00116f24 undefined *
// GLOBAL DAT_00116f28 int

int func_00116F10(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_00116f28;
  pcVar1 = DAT_00116f24;
  iVar3 = DAT_00116f28 + 0x20;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

