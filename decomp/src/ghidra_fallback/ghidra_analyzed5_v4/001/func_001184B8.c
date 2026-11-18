#include "ghidra_types.h"

extern undefined *DAT_001184cc;
extern int DAT_001184d0;

// USA 001184B8 <- EU 001184B8 (Ghidra, non-matching)
// GLOBAL DAT_001184cc undefined *
// GLOBAL DAT_001184d0 int

int func_001184B8(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_001184d0;
  pcVar1 = DAT_001184cc;
  iVar3 = DAT_001184d0 + 0x10;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

