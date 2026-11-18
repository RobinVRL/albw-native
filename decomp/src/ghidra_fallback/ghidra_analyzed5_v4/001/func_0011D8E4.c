#include "ghidra_types.h"

extern undefined *DAT_0011d8f8;
extern int DAT_0011d8fc;

// USA 0011D8E4 <- EU 0011D8E4 (Ghidra, non-matching)
// GLOBAL DAT_0011d8f8 undefined *
// GLOBAL DAT_0011d8fc int

int func_0011D8E4(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_0011d8fc;
  pcVar1 = DAT_0011d8f8;
  iVar3 = DAT_0011d8fc + 0x18;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

