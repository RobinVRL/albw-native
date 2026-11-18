#include "ghidra_types.h"

extern undefined *DAT_00116a00;
extern int DAT_00116a04;

// USA 001169EC <- EU 001169EC (Ghidra, non-matching)
// GLOBAL DAT_00116a00 undefined *
// GLOBAL DAT_00116a04 int

int func_001169EC(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_00116a04;
  pcVar1 = DAT_00116a00;
  iVar3 = DAT_00116a04 + 0x10;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

