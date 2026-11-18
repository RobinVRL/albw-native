#include "ghidra_types.h"

extern undefined *DAT_001169e4;
extern int DAT_001169e8;

// USA 001169D0 <- EU 001169D0 (Ghidra, non-matching)
// GLOBAL DAT_001169e4 undefined *
// GLOBAL DAT_001169e8 int

int func_001169D0(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_001169e8;
  pcVar1 = DAT_001169e4;
  iVar3 = DAT_001169e8 + 0x58;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

