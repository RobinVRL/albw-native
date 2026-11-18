#include "ghidra_types.h"

extern undefined *DAT_0011b374;
extern int DAT_0011b378;

// USA 0011B360 <- EU 0011B360 (Ghidra, non-matching)
// GLOBAL DAT_0011b374 undefined *
// GLOBAL DAT_0011b378 int

int func_0011B360(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_0011b378;
  pcVar1 = DAT_0011b374;
  iVar3 = DAT_0011b378 + 0x100;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

