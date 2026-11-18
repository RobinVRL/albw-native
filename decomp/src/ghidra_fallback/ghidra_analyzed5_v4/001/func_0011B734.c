#include "ghidra_types.h"

extern undefined *DAT_0011b748;
extern int DAT_0011b74c;

// USA 0011B734 <- EU 0011B734 (Ghidra, non-matching)
// GLOBAL DAT_0011b748 undefined *
// GLOBAL DAT_0011b74c int

int func_0011B734(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_0011b74c;
  pcVar1 = DAT_0011b748;
  iVar3 = DAT_0011b74c + 8;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

