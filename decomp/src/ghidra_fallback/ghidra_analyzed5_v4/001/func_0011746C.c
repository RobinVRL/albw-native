#include "ghidra_types.h"

extern undefined *DAT_00117480;
extern int DAT_00117484;

// USA 0011746C <- EU 0011746C (Ghidra, non-matching)
// GLOBAL DAT_00117480 undefined *
// GLOBAL DAT_00117484 int

int func_0011746C(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_00117484;
  pcVar1 = DAT_00117480;
  iVar3 = DAT_00117484 + 0x48;
  do {
    iVar3 = iVar3 + -0xc;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

