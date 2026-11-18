#include "ghidra_types.h"

extern undefined *DAT_0011cd0c;
extern int DAT_0011cd10;

// USA 0011CCF8 <- EU 0011CCF8 (Ghidra, non-matching)
// GLOBAL DAT_0011cd0c undefined *
// GLOBAL DAT_0011cd10 int

int func_0011CCF8(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_0011cd10;
  pcVar1 = DAT_0011cd0c;
  iVar3 = DAT_0011cd10 + 8;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

