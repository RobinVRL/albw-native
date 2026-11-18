#include "ghidra_types.h"

extern undefined *DAT_0011bbe0;
extern int DAT_0011bbe4;

// USA 0011BBCC <- EU 0011BBCC (Ghidra, non-matching)
// GLOBAL DAT_0011bbe0 undefined *
// GLOBAL DAT_0011bbe4 int

int func_0011BBCC(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_0011bbe4;
  pcVar1 = DAT_0011bbe0;
  iVar3 = DAT_0011bbe4 + 8;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

