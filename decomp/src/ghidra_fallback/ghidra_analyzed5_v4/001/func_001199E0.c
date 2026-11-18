#include "ghidra_types.h"

extern undefined *DAT_001199f4;
extern int DAT_001199f8;

// USA 001199E0 <- EU 001199E0 (Ghidra, non-matching)
// GLOBAL DAT_001199f4 undefined *
// GLOBAL DAT_001199f8 int

int func_001199E0(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_001199f8;
  pcVar1 = DAT_001199f4;
  iVar3 = DAT_001199f8 + 8;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

