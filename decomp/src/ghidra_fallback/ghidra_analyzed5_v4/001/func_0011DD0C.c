#include "ghidra_types.h"

extern undefined *DAT_0011dd20;
extern int DAT_0011dd24;

// USA 0011DD0C <- EU 0011DD0C (Ghidra, non-matching)
// GLOBAL DAT_0011dd20 undefined *
// GLOBAL DAT_0011dd24 int

int func_0011DD0C(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_0011dd24;
  pcVar1 = DAT_0011dd20;
  iVar3 = DAT_0011dd24 + 0x28;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

