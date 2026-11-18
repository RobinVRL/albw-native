#include "ghidra_types.h"

extern undefined *DAT_00116d80;
extern int DAT_00116d84;

// USA 00116D6C <- EU 00116D6C (Ghidra, non-matching)
// GLOBAL DAT_00116d80 undefined *
// GLOBAL DAT_00116d84 int

int func_00116D6C(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_00116d84;
  pcVar1 = DAT_00116d80;
  iVar3 = DAT_00116d84 + 8;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

