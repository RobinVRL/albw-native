#include "ghidra_types.h"

extern undefined *DAT_0011ab08;
extern int DAT_0011ab0c;

// USA 0011AAF4 <- EU 0011AAF4 (Ghidra, non-matching)
// GLOBAL DAT_0011ab08 undefined *
// GLOBAL DAT_0011ab0c int

int func_0011AAF4(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_0011ab0c;
  pcVar1 = DAT_0011ab08;
  iVar3 = DAT_0011ab0c + 8;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

