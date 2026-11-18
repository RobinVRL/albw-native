#include "ghidra_types.h"

extern undefined *DAT_0011dab8;
extern int DAT_0011dabc;

// USA 0011DAA4 <- EU 0011DAA4 (Ghidra, non-matching)
// GLOBAL DAT_0011dab8 undefined *
// GLOBAL DAT_0011dabc int

int func_0011DAA4(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_0011dabc;
  pcVar1 = DAT_0011dab8;
  iVar3 = DAT_0011dabc + 0x10;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

