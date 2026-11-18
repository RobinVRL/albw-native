#include "ghidra_types.h"

extern undefined *DAT_001181d8;
extern int DAT_001181dc;

// USA 001181C4 <- EU 001181C4 (Ghidra, non-matching)
// GLOBAL DAT_001181d8 undefined *
// GLOBAL DAT_001181dc int

int func_001181C4(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_001181dc;
  pcVar1 = DAT_001181d8;
  iVar3 = DAT_001181dc + 8;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

