#include "ghidra_types.h"

extern undefined *DAT_00117838;
extern int DAT_0011783c;

// USA 00117824 <- EU 00117824 (Ghidra, non-matching)
// GLOBAL DAT_00117838 undefined *
// GLOBAL DAT_0011783c int

int func_00117824(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_0011783c;
  pcVar1 = DAT_00117838;
  iVar3 = DAT_0011783c + 8;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

