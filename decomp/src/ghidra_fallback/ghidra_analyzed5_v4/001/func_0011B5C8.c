#include "ghidra_types.h"

extern undefined *DAT_0011b5dc;
extern int DAT_0011b5e0;

// USA 0011B5C8 <- EU 0011B5C8 (Ghidra, non-matching)
// GLOBAL DAT_0011b5dc undefined *
// GLOBAL DAT_0011b5e0 int

int func_0011B5C8(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_0011b5e0;
  pcVar1 = DAT_0011b5dc;
  iVar3 = DAT_0011b5e0 + 0x20;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

