#include "ghidra_types.h"

extern undefined *DAT_0011b978;
extern int DAT_0011b97c;

// USA 0011B964 <- EU 0011B964 (Ghidra, non-matching)
// GLOBAL DAT_0011b978 undefined *
// GLOBAL DAT_0011b97c int

int func_0011B964(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_0011b97c;
  pcVar1 = DAT_0011b978;
  iVar3 = DAT_0011b97c + 0x48;
  do {
    iVar3 = iVar3 + -0xc;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

