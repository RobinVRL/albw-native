#include "ghidra_types.h"

extern undefined *DAT_00117a84;
extern int DAT_00117a88;

// USA 00117A70 <- EU 00117A70 (Ghidra, non-matching)
// GLOBAL DAT_00117a84 undefined *
// GLOBAL DAT_00117a88 int

int func_00117A70(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_00117a88;
  pcVar1 = DAT_00117a84;
  iVar3 = DAT_00117a88 + 0x20;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

