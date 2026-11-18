#include "ghidra_types.h"

extern undefined *DAT_0011b048;
extern int DAT_0011b04c;

// USA 0011B034 <- EU 0011B034 (Ghidra, non-matching)
// GLOBAL DAT_0011b048 undefined *
// GLOBAL DAT_0011b04c int

int func_0011B034(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_0011b04c;
  pcVar1 = DAT_0011b048;
  iVar3 = DAT_0011b04c + 8;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

