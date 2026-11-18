#include "ghidra_types.h"

extern undefined *DAT_0011ab94;
extern int DAT_0011ab98;

// USA 0011AB80 <- EU 0011AB80 (Ghidra, non-matching)
// GLOBAL DAT_0011ab94 undefined *
// GLOBAL DAT_0011ab98 int

int func_0011AB80(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_0011ab98;
  pcVar1 = DAT_0011ab94;
  iVar3 = DAT_0011ab98 + 8;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

