#include "ghidra_types.h"

extern undefined *DAT_00116878;
extern int DAT_0011687c;

// USA 00116864 <- EU 00116864 (Ghidra, non-matching)
// GLOBAL DAT_00116878 undefined *
// GLOBAL DAT_0011687c int

int func_00116864(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_0011687c;
  pcVar1 = DAT_00116878;
  iVar3 = DAT_0011687c + 0x80;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

