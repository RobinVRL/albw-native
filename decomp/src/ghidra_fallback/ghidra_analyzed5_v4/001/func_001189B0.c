#include "ghidra_types.h"

extern undefined *DAT_001189c4;
extern int DAT_001189c8;

// USA 001189B0 <- EU 001189B0 (Ghidra, non-matching)
// GLOBAL DAT_001189c4 undefined *
// GLOBAL DAT_001189c8 int

int func_001189B0(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_001189c8;
  pcVar1 = DAT_001189c4;
  iVar3 = DAT_001189c8 + 0x30;
  do {
    iVar3 = iVar3 + -0xc;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

