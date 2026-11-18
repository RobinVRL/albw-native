#include "ghidra_types.h"

extern undefined *DAT_0011a948;
extern int DAT_0011a94c;

// USA 0011A934 <- EU 0011A934 (Ghidra, non-matching)
// GLOBAL DAT_0011a948 undefined *
// GLOBAL DAT_0011a94c int

int func_0011A934(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_0011a94c;
  pcVar1 = DAT_0011a948;
  iVar3 = DAT_0011a94c + 8;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

