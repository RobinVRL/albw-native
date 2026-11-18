#include "ghidra_types.h"

extern undefined *DAT_001174f0;
extern int DAT_001174f4;

// USA 001174DC <- EU 001174DC (Ghidra, non-matching)
// GLOBAL DAT_001174f0 undefined *
// GLOBAL DAT_001174f4 int

int func_001174DC(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_001174f4;
  pcVar1 = DAT_001174f0;
  iVar3 = DAT_001174f4 + 8;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

