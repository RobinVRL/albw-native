#include "ghidra_types.h"

extern undefined *DAT_001190e0;
extern int DAT_001190e4;

// USA 001190CC <- EU 001190CC (Ghidra, non-matching)
// GLOBAL DAT_001190e0 undefined *
// GLOBAL DAT_001190e4 int

int func_001190CC(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_001190e4;
  pcVar1 = DAT_001190e0;
  iVar3 = DAT_001190e4 + 8;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

