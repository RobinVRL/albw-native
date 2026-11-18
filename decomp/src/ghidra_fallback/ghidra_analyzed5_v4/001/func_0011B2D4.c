#include "ghidra_types.h"

extern undefined *DAT_0011b2e8;
extern int DAT_0011b2ec;

// USA 0011B2D4 <- EU 0011B2D4 (Ghidra, non-matching)
// GLOBAL DAT_0011b2e8 undefined *
// GLOBAL DAT_0011b2ec int

int func_0011B2D4(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_0011b2ec;
  pcVar1 = DAT_0011b2e8;
  iVar3 = DAT_0011b2ec + 8;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

