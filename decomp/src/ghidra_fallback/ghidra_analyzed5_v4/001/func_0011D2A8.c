#include "ghidra_types.h"

extern undefined *DAT_0011d2bc;
extern int DAT_0011d2c0;

// USA 0011D2A8 <- EU 0011D2A8 (Ghidra, non-matching)
// GLOBAL DAT_0011d2bc undefined *
// GLOBAL DAT_0011d2c0 int

int func_0011D2A8(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_0011d2c0;
  pcVar1 = DAT_0011d2bc;
  iVar3 = DAT_0011d2c0 + 0x20;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

