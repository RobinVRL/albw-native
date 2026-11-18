#include "ghidra_types.h"

extern undefined *DAT_00116a38;
extern int DAT_00116a3c;

// USA 00116A24 <- EU 00116A24 (Ghidra, non-matching)
// GLOBAL DAT_00116a38 undefined *
// GLOBAL DAT_00116a3c int

int func_00116A24(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_00116a3c;
  pcVar1 = DAT_00116a38;
  iVar3 = DAT_00116a3c + 0x20;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

