#include "ghidra_types.h"

extern undefined *DAT_001166b8;
extern int DAT_001166bc;

// USA 001166A4 <- EU 001166A4 (Ghidra, non-matching)
// GLOBAL DAT_001166b8 undefined *
// GLOBAL DAT_001166bc int

int func_001166A4(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_001166bc;
  pcVar1 = DAT_001166b8;
  iVar3 = DAT_001166bc + 0x20;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

