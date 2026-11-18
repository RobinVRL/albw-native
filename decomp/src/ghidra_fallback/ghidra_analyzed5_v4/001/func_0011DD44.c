#include "ghidra_types.h"

extern undefined *DAT_0011dd58;
extern int DAT_0011dd5c;

// USA 0011DD44 <- EU 0011DD44 (Ghidra, non-matching)
// GLOBAL DAT_0011dd58 undefined *
// GLOBAL DAT_0011dd5c int

int func_0011DD44(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_0011dd5c;
  pcVar1 = DAT_0011dd58;
  iVar3 = DAT_0011dd5c + 0x3c;
  do {
    iVar3 = iVar3 + -0xc;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

