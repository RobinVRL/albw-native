#include "ghidra_types.h"

extern undefined *DAT_001193b8;
extern int DAT_001193bc;

// USA 001193A4 <- EU 001193A4 (Ghidra, non-matching)
// GLOBAL DAT_001193b8 undefined *
// GLOBAL DAT_001193bc int

int func_001193A4(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_001193bc;
  pcVar1 = DAT_001193b8;
  iVar3 = DAT_001193bc + 0x10;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

