#include "ghidra_types.h"

extern undefined *DAT_00117330;
extern int DAT_00117334;

// USA 0011731C <- EU 0011731C (Ghidra, non-matching)
// GLOBAL DAT_00117330 undefined *
// GLOBAL DAT_00117334 int

int func_0011731C(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_00117334;
  pcVar1 = DAT_00117330;
  iVar3 = DAT_00117334 + 0x20;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

