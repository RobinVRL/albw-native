#include "ghidra_types.h"

extern undefined *DAT_0011de38;
extern int DAT_0011de3c;

// USA 0011DE24 <- EU 0011DE24 (Ghidra, non-matching)
// GLOBAL DAT_0011de38 undefined *
// GLOBAL DAT_0011de3c int

int func_0011DE24(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_0011de3c;
  pcVar1 = DAT_0011de38;
  iVar3 = DAT_0011de3c + 0x100;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

