#include "ghidra_types.h"

extern undefined *DAT_0011cf58;
extern int DAT_0011cf5c;

// USA 0011CF44 <- EU 0011CF44 (Ghidra, non-matching)
// GLOBAL DAT_0011cf58 undefined *
// GLOBAL DAT_0011cf5c int

int func_0011CF44(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_0011cf5c;
  pcVar1 = DAT_0011cf58;
  iVar3 = DAT_0011cf5c + 8;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

