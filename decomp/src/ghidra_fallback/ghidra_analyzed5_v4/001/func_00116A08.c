#include "ghidra_types.h"

extern undefined *DAT_00116a1c;
extern int DAT_00116a20;

// USA 00116A08 <- EU 00116A08 (Ghidra, non-matching)
// GLOBAL DAT_00116a1c undefined *
// GLOBAL DAT_00116a20 int

int func_00116A08(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_00116a20;
  pcVar1 = DAT_00116a1c;
  iVar3 = DAT_00116a20 + 8;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

