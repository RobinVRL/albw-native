#include "ghidra_types.h"

extern undefined *DAT_00117608;
extern int DAT_0011760c;

// USA 001175F4 <- EU 001175F4 (Ghidra, non-matching)
// GLOBAL DAT_00117608 undefined *
// GLOBAL DAT_0011760c int

int func_001175F4(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_0011760c;
  pcVar1 = DAT_00117608;
  iVar3 = DAT_0011760c + 0x20;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

