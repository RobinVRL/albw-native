#include "ghidra_types.h"

extern undefined *DAT_0011d0a8;
extern int DAT_0011d0ac;

// USA 0011D094 <- EU 0011D094 (Ghidra, non-matching)
// GLOBAL DAT_0011d0a8 undefined *
// GLOBAL DAT_0011d0ac int

int func_0011D094(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_0011d0ac;
  pcVar1 = DAT_0011d0a8;
  iVar3 = DAT_0011d0ac + 0x28;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

