#include "ghidra_types.h"

extern undefined *DAT_0011b470;
extern int DAT_0011b474;

// USA 0011B45C <- EU 0011B45C (Ghidra, non-matching)
// GLOBAL DAT_0011b470 undefined *
// GLOBAL DAT_0011b474 int

int func_0011B45C(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_0011b474;
  pcVar1 = DAT_0011b470;
  iVar3 = DAT_0011b474 + 0x10;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

