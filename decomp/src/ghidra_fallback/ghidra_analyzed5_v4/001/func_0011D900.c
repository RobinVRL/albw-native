#include "ghidra_types.h"

extern undefined *DAT_0011d914;
extern int DAT_0011d918;

// USA 0011D900 <- EU 0011D900 (Ghidra, non-matching)
// GLOBAL DAT_0011d914 undefined *
// GLOBAL DAT_0011d918 int

int func_0011D900(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_0011d918;
  pcVar1 = DAT_0011d914;
  iVar3 = DAT_0011d918 + 0x20;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

