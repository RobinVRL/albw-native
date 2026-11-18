#include "ghidra_types.h"

extern undefined *DAT_00117c98;
extern int DAT_00117c9c;

// USA 00117C84 <- EU 00117C84 (Ghidra, non-matching)
// GLOBAL DAT_00117c98 undefined *
// GLOBAL DAT_00117c9c int

int func_00117C84(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_00117c9c;
  pcVar1 = DAT_00117c98;
  iVar3 = DAT_00117c9c + 8;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

