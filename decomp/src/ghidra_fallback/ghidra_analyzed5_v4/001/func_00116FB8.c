#include "ghidra_types.h"

extern undefined *DAT_00116fcc;
extern int DAT_00116fd0;

// USA 00116FB8 <- EU 00116FB8 (Ghidra, non-matching)
// GLOBAL DAT_00116fcc undefined *
// GLOBAL DAT_00116fd0 int

int func_00116FB8(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_00116fd0;
  pcVar1 = DAT_00116fcc;
  iVar3 = DAT_00116fd0 + 0x18;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

