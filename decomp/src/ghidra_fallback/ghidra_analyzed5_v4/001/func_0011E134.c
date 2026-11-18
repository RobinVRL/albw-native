#include "ghidra_types.h"

extern undefined *DAT_0011e148;
extern int DAT_0011e14c;

// USA 0011E134 <- EU 0011E134 (Ghidra, non-matching)
// GLOBAL DAT_0011e148 undefined *
// GLOBAL DAT_0011e14c int

int func_0011E134(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_0011e14c;
  pcVar1 = DAT_0011e148;
  iVar3 = DAT_0011e14c + 0x10;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

