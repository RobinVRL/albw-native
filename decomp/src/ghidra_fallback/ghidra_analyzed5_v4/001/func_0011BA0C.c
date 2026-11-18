#include "ghidra_types.h"

extern undefined *DAT_0011ba20;
extern int DAT_0011ba24;

// USA 0011BA0C <- EU 0011BA0C (Ghidra, non-matching)
// GLOBAL DAT_0011ba20 undefined *
// GLOBAL DAT_0011ba24 int

int func_0011BA0C(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_0011ba24;
  pcVar1 = DAT_0011ba20;
  iVar3 = DAT_0011ba24 + 8;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

