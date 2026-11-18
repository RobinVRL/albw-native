#include "ghidra_types.h"

extern undefined *DAT_00116ba4;
extern int DAT_00116ba8;

// USA 00116B90 <- EU 00116B90 (Ghidra, non-matching)
// GLOBAL DAT_00116ba4 undefined *
// GLOBAL DAT_00116ba8 int

int func_00116B90(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_00116ba8;
  pcVar1 = DAT_00116ba4;
  iVar3 = DAT_00116ba8 + 0x20;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

