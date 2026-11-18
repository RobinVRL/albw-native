#include "ghidra_types.h"

extern undefined *DAT_0011af84;
extern int DAT_0011af88;

// USA 0011AF70 <- EU 0011AF70 (Ghidra, non-matching)
// GLOBAL DAT_0011af84 undefined *
// GLOBAL DAT_0011af88 int

int func_0011AF70(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_0011af88;
  pcVar1 = DAT_0011af84;
  iVar3 = DAT_0011af88 + 8;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

