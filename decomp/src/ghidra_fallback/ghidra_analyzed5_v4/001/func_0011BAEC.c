#include "ghidra_types.h"

extern undefined *DAT_0011bb00;
extern int DAT_0011bb04;

// USA 0011BAEC <- EU 0011BAEC (Ghidra, non-matching)
// GLOBAL DAT_0011bb00 undefined *
// GLOBAL DAT_0011bb04 int

int func_0011BAEC(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_0011bb04;
  pcVar1 = DAT_0011bb00;
  iVar3 = DAT_0011bb04 + 0x10;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

