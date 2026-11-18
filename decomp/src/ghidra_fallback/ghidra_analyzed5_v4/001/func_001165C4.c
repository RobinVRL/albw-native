#include "ghidra_types.h"

extern undefined *DAT_001165d8;
extern int DAT_001165dc;

// USA 001165C4 <- EU 001165C4 (Ghidra, non-matching)
// GLOBAL DAT_001165d8 undefined *
// GLOBAL DAT_001165dc int

int func_001165C4(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_001165dc;
  pcVar1 = DAT_001165d8;
  iVar3 = DAT_001165dc + 0x18;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

