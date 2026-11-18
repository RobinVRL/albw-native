#include "ghidra_types.h"

extern undefined *DAT_00117918;
extern int DAT_0011791c;

// USA 00117904 <- EU 00117904 (Ghidra, non-matching)
// GLOBAL DAT_00117918 undefined *
// GLOBAL DAT_0011791c int

int func_00117904(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_0011791c;
  pcVar1 = DAT_00117918;
  iVar3 = DAT_0011791c + 8;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

