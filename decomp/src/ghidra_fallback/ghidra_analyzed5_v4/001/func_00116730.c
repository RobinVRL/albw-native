#include "ghidra_types.h"

extern undefined *DAT_00116744;
extern int DAT_00116748;

// USA 00116730 <- EU 00116730 (Ghidra, non-matching)
// GLOBAL DAT_00116744 undefined *
// GLOBAL DAT_00116748 int

int func_00116730(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_00116748;
  pcVar1 = DAT_00116744;
  iVar3 = DAT_00116748 + 0x20;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

