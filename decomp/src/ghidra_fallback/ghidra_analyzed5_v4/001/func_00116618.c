#include "ghidra_types.h"

extern undefined *DAT_0011662c;
extern int DAT_00116630;

// USA 00116618 <- EU 00116618 (Ghidra, non-matching)
// GLOBAL DAT_0011662c undefined *
// GLOBAL DAT_00116630 int

int func_00116618(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_00116630;
  pcVar1 = DAT_0011662c;
  iVar3 = DAT_00116630 + 8;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

