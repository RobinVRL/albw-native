#include "ghidra_types.h"

extern undefined *DAT_00117250;
extern int DAT_00117254;

// USA 0011723C <- EU 0011723C (Ghidra, non-matching)
// GLOBAL DAT_00117250 undefined *
// GLOBAL DAT_00117254 int

int func_0011723C(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_00117254;
  pcVar1 = DAT_00117250;
  iVar3 = DAT_00117254 + 8;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

