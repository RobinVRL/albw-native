#include "ghidra_types.h"

extern undefined *DAT_0011d9f4;
extern int DAT_0011d9f8;

// USA 0011D9E0 <- EU 0011D9E0 (Ghidra, non-matching)
// GLOBAL DAT_0011d9f4 undefined *
// GLOBAL DAT_0011d9f8 int

int func_0011D9E0(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_0011d9f8;
  pcVar1 = DAT_0011d9f4;
  iVar3 = DAT_0011d9f8 + 0x38;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

