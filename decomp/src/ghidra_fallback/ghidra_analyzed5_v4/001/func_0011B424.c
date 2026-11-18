#include "ghidra_types.h"

extern undefined *DAT_0011b438;
extern int DAT_0011b43c;

// USA 0011B424 <- EU 0011B424 (Ghidra, non-matching)
// GLOBAL DAT_0011b438 undefined *
// GLOBAL DAT_0011b43c int

int func_0011B424(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_0011b43c;
  pcVar1 = DAT_0011b438;
  iVar3 = DAT_0011b43c + 8;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

