#include "ghidra_types.h"

extern undefined *DAT_00116610;
extern int DAT_00116614;

// USA 001165FC <- EU 001165FC (Ghidra, non-matching)
// GLOBAL DAT_00116610 undefined *
// GLOBAL DAT_00116614 int

int func_001165FC(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_00116614;
  pcVar1 = DAT_00116610;
  iVar3 = DAT_00116614 + 0x30;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

