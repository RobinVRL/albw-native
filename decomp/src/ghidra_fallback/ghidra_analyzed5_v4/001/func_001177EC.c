#include "ghidra_types.h"

extern undefined *DAT_00117800;
extern int DAT_00117804;

// USA 001177EC <- EU 001177EC (Ghidra, non-matching)
// GLOBAL DAT_00117800 undefined *
// GLOBAL DAT_00117804 int

int func_001177EC(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_00117804;
  pcVar1 = DAT_00117800;
  iVar3 = DAT_00117804 + 8;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

