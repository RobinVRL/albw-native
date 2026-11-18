#include "ghidra_types.h"

extern undefined *DAT_001178e0;
extern int DAT_001178e4;

// USA 001178CC <- EU 001178CC (Ghidra, non-matching)
// GLOBAL DAT_001178e0 undefined *
// GLOBAL DAT_001178e4 int

int func_001178CC(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_001178e4;
  pcVar1 = DAT_001178e0;
  iVar3 = DAT_001178e4 + 8;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

