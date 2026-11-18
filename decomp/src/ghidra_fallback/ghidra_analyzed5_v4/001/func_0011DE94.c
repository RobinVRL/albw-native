#include "ghidra_types.h"

extern undefined *DAT_0011dea8;
extern int DAT_0011deac;

// USA 0011DE94 <- EU 0011DE94 (Ghidra, non-matching)
// GLOBAL DAT_0011dea8 undefined *
// GLOBAL DAT_0011deac int

int func_0011DE94(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_0011deac;
  pcVar1 = DAT_0011dea8;
  iVar3 = DAT_0011deac + 0x20;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

