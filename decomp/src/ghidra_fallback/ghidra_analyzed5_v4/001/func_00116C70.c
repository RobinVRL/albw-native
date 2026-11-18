#include "ghidra_types.h"

extern undefined *DAT_00116c84;
extern int DAT_00116c88;

// USA 00116C70 <- EU 00116C70 (Ghidra, non-matching)
// GLOBAL DAT_00116c84 undefined *
// GLOBAL DAT_00116c88 int

int func_00116C70(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_00116c88;
  pcVar1 = DAT_00116c84;
  iVar3 = DAT_00116c88 + 0x38;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

