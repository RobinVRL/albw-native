#include "ghidra_types.h"

extern undefined *DAT_00117c0c;
extern int DAT_00117c10;

// USA 00117BF8 <- EU 00117BF8 (Ghidra, non-matching)
// GLOBAL DAT_00117c0c undefined *
// GLOBAL DAT_00117c10 int

int func_00117BF8(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_00117c10;
  pcVar1 = DAT_00117c0c;
  iVar3 = DAT_00117c10 + 0x20;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

