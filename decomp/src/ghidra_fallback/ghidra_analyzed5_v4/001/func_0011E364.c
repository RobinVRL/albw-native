#include "ghidra_types.h"

extern undefined *DAT_0011e378;
extern int DAT_0011e37c;

// USA 0011E364 <- EU 0011E364 (Ghidra, non-matching)
// GLOBAL DAT_0011e378 undefined *
// GLOBAL DAT_0011e37c int

int func_0011E364(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_0011e37c;
  pcVar1 = DAT_0011e378;
  iVar3 = DAT_0011e37c + 8;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

