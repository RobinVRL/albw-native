#include "ghidra_types.h"

extern undefined *DAT_00117bf0;
extern int DAT_00117bf4;

// USA 00117BDC <- EU 00117BDC (Ghidra, non-matching)
// GLOBAL DAT_00117bf0 undefined *
// GLOBAL DAT_00117bf4 int

int func_00117BDC(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_00117bf4;
  pcVar1 = DAT_00117bf0;
  iVar3 = DAT_00117bf4 + 0x68;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

