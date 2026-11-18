#include "ghidra_types.h"

extern undefined *DAT_00117854;
extern int DAT_00117858;

// USA 00117840 <- EU 00117840 (Ghidra, non-matching)
// GLOBAL DAT_00117854 undefined *
// GLOBAL DAT_00117858 int

int func_00117840(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_00117858;
  pcVar1 = DAT_00117854;
  iVar3 = DAT_00117858 + 0x20;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

