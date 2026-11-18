#include "ghidra_types.h"

extern undefined *DAT_0011d7e0;
extern int DAT_0011d7e4;

// USA 0011D7CC <- EU 0011D7CC (Ghidra, non-matching)
// GLOBAL DAT_0011d7e0 undefined *
// GLOBAL DAT_0011d7e4 int

int func_0011D7CC(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_0011d7e4;
  pcVar1 = DAT_0011d7e0;
  iVar3 = DAT_0011d7e4 + 0x10;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

