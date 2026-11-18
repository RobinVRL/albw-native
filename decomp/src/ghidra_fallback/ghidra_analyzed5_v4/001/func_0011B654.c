#include "ghidra_types.h"

extern undefined *DAT_0011b668;
extern int DAT_0011b66c;

// USA 0011B654 <- EU 0011B654 (Ghidra, non-matching)
// GLOBAL DAT_0011b668 undefined *
// GLOBAL DAT_0011b66c int

int func_0011B654(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_0011b66c;
  pcVar1 = DAT_0011b668;
  iVar3 = DAT_0011b66c + 8;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

