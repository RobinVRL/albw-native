#include "ghidra_types.h"

extern undefined *DAT_0011ade0;
extern int DAT_0011ade4;

// USA 0011ADCC <- EU 0011ADCC (Ghidra, non-matching)
// GLOBAL DAT_0011ade0 undefined *
// GLOBAL DAT_0011ade4 int

int func_0011ADCC(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_0011ade4;
  pcVar1 = DAT_0011ade0;
  iVar3 = DAT_0011ade4 + 0x200;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

