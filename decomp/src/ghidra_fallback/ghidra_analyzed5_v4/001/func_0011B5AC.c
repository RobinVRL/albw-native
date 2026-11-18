#include "ghidra_types.h"

extern undefined *DAT_0011b5c0;
extern int DAT_0011b5c4;

// USA 0011B5AC <- EU 0011B5AC (Ghidra, non-matching)
// GLOBAL DAT_0011b5c0 undefined *
// GLOBAL DAT_0011b5c4 int

int func_0011B5AC(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_0011b5c4;
  pcVar1 = DAT_0011b5c0;
  iVar3 = DAT_0011b5c4 + 0x10;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

