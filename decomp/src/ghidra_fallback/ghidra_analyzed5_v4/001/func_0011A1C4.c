#include "ghidra_types.h"

extern undefined *DAT_0011a1d8;
extern int DAT_0011a1dc;

// USA 0011A1C4 <- EU 0011A1C4 (Ghidra, non-matching)
// GLOBAL DAT_0011a1d8 undefined *
// GLOBAL DAT_0011a1dc int

int func_0011A1C4(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_0011a1dc;
  pcVar1 = DAT_0011a1d8;
  iVar3 = DAT_0011a1dc + 0x10;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

