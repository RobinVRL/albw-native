#include "ghidra_types.h"

extern undefined *DAT_001173bc;
extern int DAT_001173c0;

// USA 001173A8 <- EU 001173A8 (Ghidra, non-matching)
// GLOBAL DAT_001173bc undefined *
// GLOBAL DAT_001173c0 int

int func_001173A8(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_001173c0;
  pcVar1 = DAT_001173bc;
  iVar3 = DAT_001173c0 + 0x100;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

