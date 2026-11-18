#include "ghidra_types.h"

extern undefined *DAT_00117c7c;
extern int DAT_00117c80;

// USA 00117C68 <- EU 00117C68 (Ghidra, non-matching)
// GLOBAL DAT_00117c7c undefined *
// GLOBAL DAT_00117c80 int

int func_00117C68(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_00117c80;
  pcVar1 = DAT_00117c7c;
  iVar3 = DAT_00117c80 + 8;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

