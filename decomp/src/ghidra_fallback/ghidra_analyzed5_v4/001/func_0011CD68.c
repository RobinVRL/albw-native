#include "ghidra_types.h"

extern undefined *DAT_0011cd7c;
extern int DAT_0011cd80;

// USA 0011CD68 <- EU 0011CD68 (Ghidra, non-matching)
// GLOBAL DAT_0011cd7c undefined *
// GLOBAL DAT_0011cd80 int

int func_0011CD68(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_0011cd80;
  pcVar1 = DAT_0011cd7c;
  iVar3 = DAT_0011cd80 + 0x30;
  do {
    iVar3 = iVar3 + -0xc;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

