#include "ghidra_types.h"

extern undefined *DAT_00116d10;
extern int DAT_00116d14;

// USA 00116CFC <- EU 00116CFC (Ghidra, non-matching)
// GLOBAL DAT_00116d10 undefined *
// GLOBAL DAT_00116d14 int

int func_00116CFC(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_00116d14;
  pcVar1 = DAT_00116d10;
  iVar3 = DAT_00116d14 + 8;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

