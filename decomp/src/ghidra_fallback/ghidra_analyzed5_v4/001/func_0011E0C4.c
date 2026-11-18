#include "ghidra_types.h"

extern undefined *DAT_0011e0d8;
extern int DAT_0011e0dc;

// USA 0011E0C4 <- EU 0011E0C4 (Ghidra, non-matching)
// GLOBAL DAT_0011e0d8 undefined *
// GLOBAL DAT_0011e0dc int

int func_0011E0C4(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_0011e0dc;
  pcVar1 = DAT_0011e0d8;
  iVar3 = DAT_0011e0dc + 0x40;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

