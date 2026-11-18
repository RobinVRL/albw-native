#include "ghidra_types.h"

extern undefined *DAT_00117870;
extern int DAT_00117874;

// USA 0011785C <- EU 0011785C (Ghidra, non-matching)
// GLOBAL DAT_00117870 undefined *
// GLOBAL DAT_00117874 int

int func_0011785C(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_00117874;
  pcVar1 = DAT_00117870;
  iVar3 = DAT_00117874 + 8;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

