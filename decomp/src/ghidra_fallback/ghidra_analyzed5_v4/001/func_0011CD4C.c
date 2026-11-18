#include "ghidra_types.h"

extern undefined *DAT_0011cd60;
extern int DAT_0011cd64;

// USA 0011CD4C <- EU 0011CD4C (Ghidra, non-matching)
// GLOBAL DAT_0011cd60 undefined *
// GLOBAL DAT_0011cd64 int

int func_0011CD4C(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_0011cd64;
  pcVar1 = DAT_0011cd60;
  iVar3 = DAT_0011cd64 + 0x18;
  do {
    iVar3 = iVar3 + -0xc;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

