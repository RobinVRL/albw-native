#include "ghidra_types.h"

extern undefined *DAT_0011ccb8;
extern int DAT_0011ccbc;

// USA 0011CCA4 <- EU 0011CCA4 (Ghidra, non-matching)
// GLOBAL DAT_0011ccb8 undefined *
// GLOBAL DAT_0011ccbc int

int func_0011CCA4(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_0011ccbc;
  pcVar1 = DAT_0011ccb8;
  iVar3 = DAT_0011ccbc + 0x20;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

