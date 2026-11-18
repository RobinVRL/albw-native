#include "ghidra_types.h"

extern undefined *DAT_00116b50;
extern int DAT_00116b54;

// USA 00116B3C <- EU 00116B3C (Ghidra, non-matching)
// GLOBAL DAT_00116b50 undefined *
// GLOBAL DAT_00116b54 int

int func_00116B3C(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_00116b54;
  pcVar1 = DAT_00116b50;
  iVar3 = DAT_00116b54 + 0x60;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

