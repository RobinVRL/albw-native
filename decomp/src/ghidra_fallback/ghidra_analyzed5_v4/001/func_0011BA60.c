#include "ghidra_types.h"

extern undefined *DAT_0011ba74;
extern int DAT_0011ba78;

// USA 0011BA60 <- EU 0011BA60 (Ghidra, non-matching)
// GLOBAL DAT_0011ba74 undefined *
// GLOBAL DAT_0011ba78 int

int func_0011BA60(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_0011ba78;
  pcVar1 = DAT_0011ba74;
  iVar3 = DAT_0011ba78 + 8;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

