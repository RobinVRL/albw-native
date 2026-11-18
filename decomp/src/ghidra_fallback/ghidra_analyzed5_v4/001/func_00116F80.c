#include "ghidra_types.h"

extern undefined *DAT_00116f94;
extern int DAT_00116f98;

// USA 00116F80 <- EU 00116F80 (Ghidra, non-matching)
// GLOBAL DAT_00116f94 undefined *
// GLOBAL DAT_00116f98 int

int func_00116F80(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_00116f98;
  pcVar1 = DAT_00116f94;
  iVar3 = DAT_00116f98 + 0x48;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

