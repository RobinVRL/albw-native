#include "ghidra_types.h"

extern undefined *DAT_00116cd8;
extern int DAT_00116cdc;

// USA 00116CC4 <- EU 00116CC4 (Ghidra, non-matching)
// GLOBAL DAT_00116cd8 undefined *
// GLOBAL DAT_00116cdc int

int func_00116CC4(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_00116cdc;
  pcVar1 = DAT_00116cd8;
  iVar3 = DAT_00116cdc + 0x10;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

