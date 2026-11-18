#include "ghidra_types.h"

extern undefined *DAT_0011c778;
extern int DAT_0011c77c;

// USA 0011C764 <- EU 0011C764 (Ghidra, non-matching)
// GLOBAL DAT_0011c778 undefined *
// GLOBAL DAT_0011c77c int

int func_0011C764(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_0011c77c;
  pcVar1 = DAT_0011c778;
  iVar3 = DAT_0011c77c + 8;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

