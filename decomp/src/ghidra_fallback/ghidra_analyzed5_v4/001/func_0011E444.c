#include "ghidra_types.h"

extern undefined *DAT_0011e458;
extern int DAT_0011e45c;

// USA 0011E444 <- EU 0011E444 (Ghidra, non-matching)
// GLOBAL DAT_0011e458 undefined *
// GLOBAL DAT_0011e45c int

int func_0011E444(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_0011e45c;
  pcVar1 = DAT_0011e458;
  iVar3 = DAT_0011e45c + 8;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

