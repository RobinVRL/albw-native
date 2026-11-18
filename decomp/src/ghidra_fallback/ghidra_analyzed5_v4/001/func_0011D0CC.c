#include "ghidra_types.h"

extern undefined *DAT_0011d0e0;
extern int DAT_0011d0e4;

// USA 0011D0CC <- EU 0011D0CC (Ghidra, non-matching)
// GLOBAL DAT_0011d0e0 undefined *
// GLOBAL DAT_0011d0e4 int

int func_0011D0CC(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_0011d0e4;
  pcVar1 = DAT_0011d0e0;
  iVar3 = DAT_0011d0e4 + 8;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

