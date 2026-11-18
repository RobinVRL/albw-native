#include "ghidra_types.h"

extern undefined *DAT_0011b518;
extern int DAT_0011b51c;

// USA 0011B504 <- EU 0011B504 (Ghidra, non-matching)
// GLOBAL DAT_0011b518 undefined *
// GLOBAL DAT_0011b51c int

int func_0011B504(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_0011b51c;
  pcVar1 = DAT_0011b518;
  iVar3 = DAT_0011b51c + 0x28;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

