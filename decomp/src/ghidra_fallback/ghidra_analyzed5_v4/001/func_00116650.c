#include "ghidra_types.h"

extern undefined *DAT_00116664;
extern int DAT_00116668;

// USA 00116650 <- EU 00116650 (Ghidra, non-matching)
// GLOBAL DAT_00116664 undefined *
// GLOBAL DAT_00116668 int

int func_00116650(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_00116668;
  pcVar1 = DAT_00116664;
  iVar3 = DAT_00116668 + 8;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

