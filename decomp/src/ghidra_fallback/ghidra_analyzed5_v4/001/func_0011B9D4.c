#include "ghidra_types.h"

extern undefined *DAT_0011b9e8;
extern int DAT_0011b9ec;

// USA 0011B9D4 <- EU 0011B9D4 (Ghidra, non-matching)
// GLOBAL DAT_0011b9e8 undefined *
// GLOBAL DAT_0011b9ec int

int func_0011B9D4(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_0011b9ec;
  pcVar1 = DAT_0011b9e8;
  iVar3 = DAT_0011b9ec + 8;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

