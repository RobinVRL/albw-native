#include "ghidra_types.h"

extern undefined *DAT_001192d8;
extern int DAT_001192dc;

// USA 001192C4 <- EU 001192C4 (Ghidra, non-matching)
// GLOBAL DAT_001192d8 undefined *
// GLOBAL DAT_001192dc int

int func_001192C4(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_001192dc;
  pcVar1 = DAT_001192d8;
  iVar3 = DAT_001192dc + 8;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

