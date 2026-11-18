#include "ghidra_types.h"

extern undefined *DAT_0011b358;
extern int DAT_0011b35c;

// USA 0011B344 <- EU 0011B344 (Ghidra, non-matching)
// GLOBAL DAT_0011b358 undefined *
// GLOBAL DAT_0011b35c int

int func_0011B344(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_0011b35c;
  pcVar1 = DAT_0011b358;
  iVar3 = DAT_0011b35c + 0x100;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

