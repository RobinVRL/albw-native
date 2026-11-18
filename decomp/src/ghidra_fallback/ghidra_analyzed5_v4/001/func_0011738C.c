#include "ghidra_types.h"

extern undefined *DAT_001173a0;
extern int DAT_001173a4;

// USA 0011738C <- EU 0011738C (Ghidra, non-matching)
// GLOBAL DAT_001173a0 undefined *
// GLOBAL DAT_001173a4 int

int func_0011738C(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_001173a4;
  pcVar1 = DAT_001173a0;
  iVar3 = DAT_001173a4 + 8;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

