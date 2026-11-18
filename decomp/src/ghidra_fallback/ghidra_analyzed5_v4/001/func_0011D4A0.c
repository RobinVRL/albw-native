#include "ghidra_types.h"

extern undefined *DAT_0011d4b4;
extern int DAT_0011d4b8;

// USA 0011D4A0 <- EU 0011D4A0 (Ghidra, non-matching)
// GLOBAL DAT_0011d4b4 undefined *
// GLOBAL DAT_0011d4b8 int

int func_0011D4A0(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_0011d4b8;
  pcVar1 = DAT_0011d4b4;
  iVar3 = DAT_0011d4b8 + 0x18;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

