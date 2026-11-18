#include "ghidra_types.h"

extern undefined *DAT_00118d60;
extern int DAT_00118d64;

// USA 00118D4C <- EU 00118D4C (Ghidra, non-matching)
// GLOBAL DAT_00118d60 undefined *
// GLOBAL DAT_00118d64 int

int func_00118D4C(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_00118d64;
  pcVar1 = DAT_00118d60;
  iVar3 = DAT_00118d64 + 0x30;
  do {
    iVar3 = iVar3 + -0xc;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

