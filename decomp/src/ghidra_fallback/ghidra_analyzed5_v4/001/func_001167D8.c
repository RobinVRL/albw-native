#include "ghidra_types.h"

extern undefined *DAT_001167ec;
extern int DAT_001167f0;

// USA 001167D8 <- EU 001167D8 (Ghidra, non-matching)
// GLOBAL DAT_001167ec undefined *
// GLOBAL DAT_001167f0 int

int func_001167D8(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_001167f0;
  pcVar1 = DAT_001167ec;
  iVar3 = DAT_001167f0 + 0x10;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

