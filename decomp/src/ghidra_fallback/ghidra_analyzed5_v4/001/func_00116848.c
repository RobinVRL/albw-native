#include "ghidra_types.h"

extern undefined *DAT_0011685c;
extern int DAT_00116860;

// USA 00116848 <- EU 00116848 (Ghidra, non-matching)
// GLOBAL DAT_0011685c undefined *
// GLOBAL DAT_00116860 int

int func_00116848(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_00116860;
  pcVar1 = DAT_0011685c;
  iVar3 = DAT_00116860 + 8;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

