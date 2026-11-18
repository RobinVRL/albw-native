#include "ghidra_types.h"

extern undefined *DAT_00117e20;
extern int DAT_00117e24;

// USA 00117E0C <- EU 00117E0C (Ghidra, non-matching)
// GLOBAL DAT_00117e20 undefined *
// GLOBAL DAT_00117e24 int

int func_00117E0C(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_00117e24;
  pcVar1 = DAT_00117e20;
  iVar3 = DAT_00117e24 + 0x30;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

