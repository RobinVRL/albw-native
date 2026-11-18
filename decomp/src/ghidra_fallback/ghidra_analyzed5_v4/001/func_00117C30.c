#include "ghidra_types.h"

extern undefined *DAT_00117c44;
extern int DAT_00117c48;

// USA 00117C30 <- EU 00117C30 (Ghidra, non-matching)
// GLOBAL DAT_00117c44 undefined *
// GLOBAL DAT_00117c48 int

int func_00117C30(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_00117c48;
  pcVar1 = DAT_00117c44;
  iVar3 = DAT_00117c48 + 0x20;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

