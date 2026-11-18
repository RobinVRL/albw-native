#include "ghidra_types.h"

extern undefined *DAT_00116b88;
extern int DAT_00116b8c;

// USA 00116B74 <- EU 00116B74 (Ghidra, non-matching)
// GLOBAL DAT_00116b88 undefined *
// GLOBAL DAT_00116b8c int

int func_00116B74(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_00116b8c;
  pcVar1 = DAT_00116b88;
  iVar3 = DAT_00116b8c + 0x20;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

