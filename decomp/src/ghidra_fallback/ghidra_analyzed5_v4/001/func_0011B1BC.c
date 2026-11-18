#include "ghidra_types.h"

extern undefined *DAT_0011b1d0;
extern int DAT_0011b1d4;

// USA 0011B1BC <- EU 0011B1BC (Ghidra, non-matching)
// GLOBAL DAT_0011b1d0 undefined *
// GLOBAL DAT_0011b1d4 int

int func_0011B1BC(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_0011b1d4;
  pcVar1 = DAT_0011b1d0;
  iVar3 = DAT_0011b1d4 + 8;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

