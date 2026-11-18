#include "ghidra_types.h"

extern undefined *DAT_0011d690;
extern int DAT_0011d694;

// USA 0011D67C <- EU 0011D67C (Ghidra, non-matching)
// GLOBAL DAT_0011d690 undefined *
// GLOBAL DAT_0011d694 int

int func_0011D67C(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_0011d694;
  pcVar1 = DAT_0011d690;
  iVar3 = DAT_0011d694 + 0x84;
  do {
    iVar3 = iVar3 + -0xc;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

