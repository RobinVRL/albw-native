#include "ghidra_types.h"

extern undefined *DAT_0011cd28;
extern int DAT_0011cd2c;

// USA 0011CD14 <- EU 0011CD14 (Ghidra, non-matching)
// GLOBAL DAT_0011cd28 undefined *
// GLOBAL DAT_0011cd2c int

int func_0011CD14(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_0011cd2c;
  pcVar1 = DAT_0011cd28;
  iVar3 = DAT_0011cd2c + 0x10;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

