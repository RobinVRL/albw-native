#include "ghidra_types.h"

extern undefined *DAT_0011be80;
extern int DAT_0011be84;

// USA 0011BE6C <- EU 0011BE6C (Ghidra, non-matching)
// GLOBAL DAT_0011be80 undefined *
// GLOBAL DAT_0011be84 int

int func_0011BE6C(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_0011be84;
  pcVar1 = DAT_0011be80;
  iVar3 = DAT_0011be84 + 8;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

