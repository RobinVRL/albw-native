#include "ghidra_types.h"

extern undefined *DAT_0011e12c;
extern int DAT_0011e130;

// USA 0011E118 <- EU 0011E118 (Ghidra, non-matching)
// GLOBAL DAT_0011e12c undefined *
// GLOBAL DAT_0011e130 int

int func_0011E118(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_0011e130;
  pcVar1 = DAT_0011e12c;
  iVar3 = DAT_0011e130 + 0x40;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

