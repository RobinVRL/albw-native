#include "ghidra_types.h"

extern undefined *DAT_00117f38;
extern int DAT_00117f3c;

// USA 00117F24 <- EU 00117F24 (Ghidra, non-matching)
// GLOBAL DAT_00117f38 undefined *
// GLOBAL DAT_00117f3c int

int func_00117F24(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_00117f3c;
  pcVar1 = DAT_00117f38;
  iVar3 = DAT_00117f3c + 8;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

