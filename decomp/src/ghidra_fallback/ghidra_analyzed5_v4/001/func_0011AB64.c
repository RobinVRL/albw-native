#include "ghidra_types.h"

extern undefined *DAT_0011ab78;
extern int DAT_0011ab7c;

// USA 0011AB64 <- EU 0011AB64 (Ghidra, non-matching)
// GLOBAL DAT_0011ab78 undefined *
// GLOBAL DAT_0011ab7c int

int func_0011AB64(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_0011ab7c;
  pcVar1 = DAT_0011ab78;
  iVar3 = DAT_0011ab7c + 8;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

