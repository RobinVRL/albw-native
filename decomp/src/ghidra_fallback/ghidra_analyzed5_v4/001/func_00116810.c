#include "ghidra_types.h"

extern undefined *DAT_00116824;
extern int DAT_00116828;

// USA 00116810 <- EU 00116810 (Ghidra, non-matching)
// GLOBAL DAT_00116824 undefined *
// GLOBAL DAT_00116828 int

int func_00116810(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_00116828;
  pcVar1 = DAT_00116824;
  iVar3 = DAT_00116828 + 0x20;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

