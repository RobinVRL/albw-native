#include "ghidra_types.h"

extern undefined *DAT_0011aab4;
extern int DAT_0011aab8;

// USA 0011AAA0 <- EU 0011AAA0 (Ghidra, non-matching)
// GLOBAL DAT_0011aab4 undefined *
// GLOBAL DAT_0011aab8 int

int func_0011AAA0(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_0011aab8;
  pcVar1 = DAT_0011aab4;
  iVar3 = DAT_0011aab8 + 8;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

