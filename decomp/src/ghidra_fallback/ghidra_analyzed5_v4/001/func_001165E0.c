#include "ghidra_types.h"

extern undefined *DAT_001165f4;
extern int DAT_001165f8;

// USA 001165E0 <- EU 001165E0 (Ghidra, non-matching)
// GLOBAL DAT_001165f4 undefined *
// GLOBAL DAT_001165f8 int

int func_001165E0(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_001165f8;
  pcVar1 = DAT_001165f4;
  iVar3 = DAT_001165f8 + 0x10;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

