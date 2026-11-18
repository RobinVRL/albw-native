#include "ghidra_types.h"

extern undefined *DAT_00116d64;
extern int DAT_00116d68;

// USA 00116D50 <- EU 00116D50 (Ghidra, non-matching)
// GLOBAL DAT_00116d64 undefined *
// GLOBAL DAT_00116d68 int

int func_00116D50(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_00116d68;
  pcVar1 = DAT_00116d64;
  iVar3 = DAT_00116d68 + 8;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

