#include "ghidra_types.h"

extern undefined *DAT_001184e8;
extern int DAT_001184ec;

// USA 001184D4 <- EU 001184D4 (Ghidra, non-matching)
// GLOBAL DAT_001184e8 undefined *
// GLOBAL DAT_001184ec int

int func_001184D4(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_001184ec;
  pcVar1 = DAT_001184e8;
  iVar3 = DAT_001184ec + 8;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

