#include "ghidra_types.h"

extern undefined *DAT_0011b1ec;
extern int DAT_0011b1f0;

// USA 0011B1D8 <- EU 0011B1D8 (Ghidra, non-matching)
// GLOBAL DAT_0011b1ec undefined *
// GLOBAL DAT_0011b1f0 int

int func_0011B1D8(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_0011b1f0;
  pcVar1 = DAT_0011b1ec;
  iVar3 = DAT_0011b1f0 + 8;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

