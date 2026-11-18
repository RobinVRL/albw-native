#include "ghidra_types.h"

extern undefined *DAT_0011b898;
extern int DAT_0011b89c;

// USA 0011B884 <- EU 0011B884 (Ghidra, non-matching)
// GLOBAL DAT_0011b898 undefined *
// GLOBAL DAT_0011b89c int

int func_0011B884(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_0011b89c;
  pcVar1 = DAT_0011b898;
  iVar3 = DAT_0011b89c + 8;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

