#include "ghidra_types.h"

extern undefined *DAT_0011be10;
extern int DAT_0011be14;

// USA 0011BDFC <- EU 0011BDFC (Ghidra, non-matching)
// GLOBAL DAT_0011be10 undefined *
// GLOBAL DAT_0011be14 int

int func_0011BDFC(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_0011be14;
  pcVar1 = DAT_0011be10;
  iVar3 = DAT_0011be14 + 8;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

