#include "ghidra_types.h"

extern undefined *DAT_00116eb4;
extern int DAT_00116eb8;

// USA 00116EA0 <- EU 00116EA0 (Ghidra, non-matching)
// GLOBAL DAT_00116eb4 undefined *
// GLOBAL DAT_00116eb8 int

int func_00116EA0(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_00116eb8;
  pcVar1 = DAT_00116eb4;
  iVar3 = DAT_00116eb8 + 0x20;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

