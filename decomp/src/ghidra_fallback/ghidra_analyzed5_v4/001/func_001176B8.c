#include "ghidra_types.h"

extern undefined *DAT_001176cc;
extern int DAT_001176d0;

// USA 001176B8 <- EU 001176B8 (Ghidra, non-matching)
// GLOBAL DAT_001176cc undefined *
// GLOBAL DAT_001176d0 int

int func_001176B8(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_001176d0;
  pcVar1 = DAT_001176cc;
  iVar3 = DAT_001176d0 + 8;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

