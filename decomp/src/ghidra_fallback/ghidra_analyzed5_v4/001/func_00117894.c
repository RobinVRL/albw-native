#include "ghidra_types.h"

extern undefined *DAT_001178a8;
extern int DAT_001178ac;

// USA 00117894 <- EU 00117894 (Ghidra, non-matching)
// GLOBAL DAT_001178a8 undefined *
// GLOBAL DAT_001178ac int

int func_00117894(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_001178ac;
  pcVar1 = DAT_001178a8;
  iVar3 = DAT_001178ac + 8;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

