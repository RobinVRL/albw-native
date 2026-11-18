#include "ghidra_types.h"

extern undefined *DAT_0011d150;
extern int DAT_0011d154;

// USA 0011D13C <- EU 0011D13C (Ghidra, non-matching)
// GLOBAL DAT_0011d150 undefined *
// GLOBAL DAT_0011d154 int

int func_0011D13C(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_0011d154;
  pcVar1 = DAT_0011d150;
  iVar3 = DAT_0011d154 + 0x84;
  do {
    iVar3 = iVar3 + -0xc;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

