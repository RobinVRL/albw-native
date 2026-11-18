#include "ghidra_types.h"

extern undefined *DAT_0011cb84;
extern int DAT_0011cb88;

// USA 0011CB70 <- EU 0011CB70 (Ghidra, non-matching)
// GLOBAL DAT_0011cb84 undefined *
// GLOBAL DAT_0011cb88 int

int func_0011CB70(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_0011cb88;
  pcVar1 = DAT_0011cb84;
  iVar3 = DAT_0011cb88 + 8;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

