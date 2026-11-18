#include "ghidra_types.h"

extern undefined *DAT_0011654c;
extern int DAT_00116550;

// USA 00116538 <- EU 00116538 (Ghidra, non-matching)
// GLOBAL DAT_0011654c undefined *
// GLOBAL DAT_00116550 int

int func_00116538(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_00116550;
  pcVar1 = DAT_0011654c;
  iVar3 = DAT_00116550 + 8;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

