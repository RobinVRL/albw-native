#include "ghidra_types.h"

extern undefined *DAT_001176b0;
extern int DAT_001176b4;

// USA 0011769C <- EU 0011769C (Ghidra, non-matching)
// GLOBAL DAT_001176b0 undefined *
// GLOBAL DAT_001176b4 int

int func_0011769C(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_001176b4;
  pcVar1 = DAT_001176b0;
  iVar3 = DAT_001176b4 + 0x20;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

