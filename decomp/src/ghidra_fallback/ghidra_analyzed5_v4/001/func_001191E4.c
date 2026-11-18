#include "ghidra_types.h"

extern undefined *DAT_001191f8;
extern int DAT_001191fc;

// USA 001191E4 <- EU 001191E4 (Ghidra, non-matching)
// GLOBAL DAT_001191f8 undefined *
// GLOBAL DAT_001191fc int

int func_001191E4(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_001191fc;
  pcVar1 = DAT_001191f8;
  iVar3 = DAT_001191fc + 8;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

