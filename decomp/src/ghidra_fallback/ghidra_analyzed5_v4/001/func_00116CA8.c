#include "ghidra_types.h"

extern undefined *DAT_00116cbc;
extern int DAT_00116cc0;

// USA 00116CA8 <- EU 00116CA8 (Ghidra, non-matching)
// GLOBAL DAT_00116cbc undefined *
// GLOBAL DAT_00116cc0 int

int func_00116CA8(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_00116cc0;
  pcVar1 = DAT_00116cbc;
  iVar3 = DAT_00116cc0 + 0x60;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

