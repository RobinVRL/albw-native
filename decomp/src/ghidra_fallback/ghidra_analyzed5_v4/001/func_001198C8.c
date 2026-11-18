#include "ghidra_types.h"

extern undefined *DAT_001198dc;
extern int DAT_001198e0;

// USA 001198C8 <- EU 001198C8 (Ghidra, non-matching)
// GLOBAL DAT_001198dc undefined *
// GLOBAL DAT_001198e0 int

int func_001198C8(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_001198e0;
  pcVar1 = DAT_001198dc;
  iVar3 = DAT_001198e0 + 0x10;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

