#include "ghidra_types.h"

extern undefined *DAT_0011d674;
extern int DAT_0011d678;

// USA 0011D660 <- EU 0011D660 (Ghidra, non-matching)
// GLOBAL DAT_0011d674 undefined *
// GLOBAL DAT_0011d678 int

int func_0011D660(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_0011d678;
  pcVar1 = DAT_0011d674;
  iVar3 = DAT_0011d678 + 0x24;
  do {
    iVar3 = iVar3 + -0xc;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

