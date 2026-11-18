#include "ghidra_types.h"

extern undefined *DAT_00117db0;
extern int DAT_00117db4;

// USA 00117D9C <- EU 00117D9C (Ghidra, non-matching)
// GLOBAL DAT_00117db0 undefined *
// GLOBAL DAT_00117db4 int

int func_00117D9C(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_00117db4;
  pcVar1 = DAT_00117db0;
  iVar3 = DAT_00117db4 + 0x48;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

