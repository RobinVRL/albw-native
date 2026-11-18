#include "ghidra_types.h"

extern undefined *DAT_0011d054;
extern int DAT_0011d058;

// USA 0011D040 <- EU 0011D040 (Ghidra, non-matching)
// GLOBAL DAT_0011d054 undefined *
// GLOBAL DAT_0011d058 int

int func_0011D040(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_0011d058;
  pcVar1 = DAT_0011d054;
  iVar3 = DAT_0011d058 + 0x10;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

