#include "ghidra_types.h"

extern undefined *DAT_00116c14;
extern int DAT_00116c18;

// USA 00116C00 <- EU 00116C00 (Ghidra, non-matching)
// GLOBAL DAT_00116c14 undefined *
// GLOBAL DAT_00116c18 int

int func_00116C00(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_00116c18;
  pcVar1 = DAT_00116c14;
  iVar3 = DAT_00116c18 + 0x20;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

