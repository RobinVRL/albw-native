#include "ghidra_types.h"

extern undefined *DAT_00118778;
extern int DAT_0011877c;

// USA 00118764 <- EU 00118764 (Ghidra, non-matching)
// GLOBAL DAT_00118778 undefined *
// GLOBAL DAT_0011877c int

int func_00118764(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_0011877c;
  pcVar1 = DAT_00118778;
  iVar3 = DAT_0011877c + 8;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

