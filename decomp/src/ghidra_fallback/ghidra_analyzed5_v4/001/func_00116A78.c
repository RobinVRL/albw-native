#include "ghidra_types.h"

extern undefined *DAT_00116a8c;
extern int DAT_00116a90;

// USA 00116A78 <- EU 00116A78 (Ghidra, non-matching)
// GLOBAL DAT_00116a8c undefined *
// GLOBAL DAT_00116a90 int

int func_00116A78(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_00116a90;
  pcVar1 = DAT_00116a8c;
  iVar3 = DAT_00116a90 + 8;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

