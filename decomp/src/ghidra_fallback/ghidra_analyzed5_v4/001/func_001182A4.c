#include "ghidra_types.h"

extern undefined *DAT_001182b8;
extern int DAT_001182bc;

// USA 001182A4 <- EU 001182A4 (Ghidra, non-matching)
// GLOBAL DAT_001182b8 undefined *
// GLOBAL DAT_001182bc int

int func_001182A4(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_001182bc;
  pcVar1 = DAT_001182b8;
  iVar3 = DAT_001182bc + 8;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

