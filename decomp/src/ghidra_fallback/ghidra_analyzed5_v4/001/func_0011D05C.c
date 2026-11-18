#include "ghidra_types.h"

extern undefined *DAT_0011d070;
extern int DAT_0011d074;

// USA 0011D05C <- EU 0011D05C (Ghidra, non-matching)
// GLOBAL DAT_0011d070 undefined *
// GLOBAL DAT_0011d074 int

int func_0011D05C(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_0011d074;
  pcVar1 = DAT_0011d070;
  iVar3 = DAT_0011d074 + 0x20;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

