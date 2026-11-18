#include "ghidra_types.h"

extern undefined *DAT_0011b4e0;
extern int DAT_0011b4e4;

// USA 0011B4CC <- EU 0011B4CC (Ghidra, non-matching)
// GLOBAL DAT_0011b4e0 undefined *
// GLOBAL DAT_0011b4e4 int

int func_0011B4CC(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_0011b4e4;
  pcVar1 = DAT_0011b4e0;
  iVar3 = DAT_0011b4e4 + 0x20;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

