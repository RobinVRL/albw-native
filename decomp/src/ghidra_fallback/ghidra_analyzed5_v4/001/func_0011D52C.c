#include "ghidra_types.h"

extern undefined *DAT_0011d540;
extern int DAT_0011d544;

// USA 0011D52C <- EU 0011D52C (Ghidra, non-matching)
// GLOBAL DAT_0011d540 undefined *
// GLOBAL DAT_0011d544 int

int func_0011D52C(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_0011d544;
  pcVar1 = DAT_0011d540;
  iVar3 = DAT_0011d544 + 0x20;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

