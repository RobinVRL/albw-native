#include "ghidra_types.h"

extern undefined *DAT_00118398;
extern int DAT_0011839c;

// USA 00118384 <- EU 00118384 (Ghidra, non-matching)
// GLOBAL DAT_00118398 undefined *
// GLOBAL DAT_0011839c int

int func_00118384(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_0011839c;
  pcVar1 = DAT_00118398;
  iVar3 = DAT_0011839c + 0x20;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

