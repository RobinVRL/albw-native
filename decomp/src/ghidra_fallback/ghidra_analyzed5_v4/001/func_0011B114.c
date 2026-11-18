#include "ghidra_types.h"

extern undefined *DAT_0011b128;
extern int DAT_0011b12c;

// USA 0011B114 <- EU 0011B114 (Ghidra, non-matching)
// GLOBAL DAT_0011b128 undefined *
// GLOBAL DAT_0011b12c int

int func_0011B114(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_0011b12c;
  pcVar1 = DAT_0011b128;
  iVar3 = DAT_0011b12c + 8;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

