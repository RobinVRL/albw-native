#include "ghidra_types.h"

extern undefined *DAT_00116c4c;
extern int DAT_00116c50;

// USA 00116C38 <- EU 00116C38 (Ghidra, non-matching)
// GLOBAL DAT_00116c4c undefined *
// GLOBAL DAT_00116c50 int

int func_00116C38(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_00116c50;
  pcVar1 = DAT_00116c4c;
  iVar3 = DAT_00116c50 + 0x10;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

