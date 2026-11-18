#include "ghidra_types.h"

extern undefined *DAT_00117aa0;
extern int DAT_00117aa4;

// USA 00117A8C <- EU 00117A8C (Ghidra, non-matching)
// GLOBAL DAT_00117aa0 undefined *
// GLOBAL DAT_00117aa4 int

int func_00117A8C(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_00117aa4;
  pcVar1 = DAT_00117aa0;
  iVar3 = DAT_00117aa4 + 8;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

