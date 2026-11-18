#include "ghidra_types.h"

extern undefined *DAT_00116904;
extern int DAT_00116908;

// USA 001168F0 <- EU 001168F0 (Ghidra, non-matching)
// GLOBAL DAT_00116904 undefined *
// GLOBAL DAT_00116908 int

int func_001168F0(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_00116908;
  pcVar1 = DAT_00116904;
  iVar3 = DAT_00116908 + 8;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

