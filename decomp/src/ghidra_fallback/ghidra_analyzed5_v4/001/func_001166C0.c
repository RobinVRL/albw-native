#include "ghidra_types.h"

extern undefined *DAT_001166d4;
extern int DAT_001166d8;

// USA 001166C0 <- EU 001166C0 (Ghidra, non-matching)
// GLOBAL DAT_001166d4 undefined *
// GLOBAL DAT_001166d8 int

int func_001166C0(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_001166d8;
  pcVar1 = DAT_001166d4;
  iVar3 = DAT_001166d8 + 0x1b0;
  do {
    iVar3 = iVar3 + -0x24;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

