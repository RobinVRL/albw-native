#include "ghidra_types.h"

extern undefined *DAT_0011d6ac;
extern int DAT_0011d6b0;

// USA 0011D698 <- EU 0011D698 (Ghidra, non-matching)
// GLOBAL DAT_0011d6ac undefined *
// GLOBAL DAT_0011d6b0 int

int func_0011D698(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_0011d6b0;
  pcVar1 = DAT_0011d6ac;
  iVar3 = DAT_0011d6b0 + 0x18;
  do {
    iVar3 = iVar3 + -0xc;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

