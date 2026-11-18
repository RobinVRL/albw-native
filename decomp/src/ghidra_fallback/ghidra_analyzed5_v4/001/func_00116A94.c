#include "ghidra_types.h"

extern undefined *DAT_00116aa8;
extern int DAT_00116aac;

// USA 00116A94 <- EU 00116A94 (Ghidra, non-matching)
// GLOBAL DAT_00116aa8 undefined *
// GLOBAL DAT_00116aac int

int func_00116A94(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_00116aac;
  pcVar1 = DAT_00116aa8;
  iVar3 = DAT_00116aac + 0x10;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

