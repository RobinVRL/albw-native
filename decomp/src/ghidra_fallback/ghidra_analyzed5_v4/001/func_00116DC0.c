#include "ghidra_types.h"

extern undefined *DAT_00116dd4;
extern int DAT_00116dd8;

// USA 00116DC0 <- EU 00116DC0 (Ghidra, non-matching)
// GLOBAL DAT_00116dd4 undefined *
// GLOBAL DAT_00116dd8 int

int func_00116DC0(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_00116dd8;
  pcVar1 = DAT_00116dd4;
  iVar3 = DAT_00116dd8 + 0x100;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

