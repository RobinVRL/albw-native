#include "ghidra_types.h"

extern undefined *DAT_0011e1b8;
extern int DAT_0011e1bc;

// USA 0011E1A4 <- EU 0011E1A4 (Ghidra, non-matching)
// GLOBAL DAT_0011e1b8 undefined *
// GLOBAL DAT_0011e1bc int

int func_0011E1A4(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_0011e1bc;
  pcVar1 = DAT_0011e1b8;
  iVar3 = DAT_0011e1bc + 0x20;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

