#include "ghidra_types.h"

extern undefined *DAT_0011ba58;
extern int DAT_0011ba5c;

// USA 0011BA44 <- EU 0011BA44 (Ghidra, non-matching)
// GLOBAL DAT_0011ba58 undefined *
// GLOBAL DAT_0011ba5c int

int func_0011BA44(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_0011ba5c;
  pcVar1 = DAT_0011ba58;
  iVar3 = DAT_0011ba5c + 8;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

