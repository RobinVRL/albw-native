#include "ghidra_types.h"

extern undefined *DAT_0011b8ec;
extern int DAT_0011b8f0;

// USA 0011B8D8 <- EU 0011B8D8 (Ghidra, non-matching)
// GLOBAL DAT_0011b8ec undefined *
// GLOBAL DAT_0011b8f0 int

int func_0011B8D8(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_0011b8f0;
  pcVar1 = DAT_0011b8ec;
  iVar3 = DAT_0011b8f0 + 0x10;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

