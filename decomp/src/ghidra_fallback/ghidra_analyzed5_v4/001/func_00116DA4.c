#include "ghidra_types.h"

extern undefined *DAT_00116db8;
extern int DAT_00116dbc;

// USA 00116DA4 <- EU 00116DA4 (Ghidra, non-matching)
// GLOBAL DAT_00116db8 undefined *
// GLOBAL DAT_00116dbc int

int func_00116DA4(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_00116dbc;
  pcVar1 = DAT_00116db8;
  iVar3 = DAT_00116dbc + 0x9c;
  do {
    iVar3 = iVar3 + -0xc;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

