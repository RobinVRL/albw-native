#include "ghidra_types.h"

extern undefined *DAT_00117100;
extern int DAT_00117104;

// USA 001170EC <- EU 001170EC (Ghidra, non-matching)
// GLOBAL DAT_00117100 undefined *
// GLOBAL DAT_00117104 int

int func_001170EC(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_00117104;
  pcVar1 = DAT_00117100;
  iVar3 = DAT_00117104 + 8;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

