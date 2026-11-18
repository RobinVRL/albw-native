#include "ghidra_types.h"

extern undefined *DAT_00116c30;
extern int DAT_00116c34;

// USA 00116C1C <- EU 00116C1C (Ghidra, non-matching)
// GLOBAL DAT_00116c30 undefined *
// GLOBAL DAT_00116c34 int

int func_00116C1C(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_00116c34;
  pcVar1 = DAT_00116c30;
  iVar3 = DAT_00116c34 + 8;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

