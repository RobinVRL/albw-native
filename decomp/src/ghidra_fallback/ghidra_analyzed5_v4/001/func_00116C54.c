#include "ghidra_types.h"

extern undefined *DAT_00116c68;
extern int DAT_00116c6c;

// USA 00116C54 <- EU 00116C54 (Ghidra, non-matching)
// GLOBAL DAT_00116c68 undefined *
// GLOBAL DAT_00116c6c int

int func_00116C54(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_00116c6c;
  pcVar1 = DAT_00116c68;
  iVar3 = DAT_00116c6c + 0x20;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

