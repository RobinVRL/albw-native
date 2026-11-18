#include "ghidra_types.h"

extern undefined *DAT_001191dc;
extern int DAT_001191e0;

// USA 001191C8 <- EU 001191C8 (Ghidra, non-matching)
// GLOBAL DAT_001191dc undefined *
// GLOBAL DAT_001191e0 int

int func_001191C8(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_001191e0;
  pcVar1 = DAT_001191dc;
  iVar3 = DAT_001191e0 + 8;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

