#include "ghidra_types.h"

extern undefined *DAT_00117eac;
extern int DAT_00117eb0;

// USA 00117E98 <- EU 00117E98 (Ghidra, non-matching)
// GLOBAL DAT_00117eac undefined *
// GLOBAL DAT_00117eb0 int

int func_00117E98(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_00117eb0;
  pcVar1 = DAT_00117eac;
  iVar3 = DAT_00117eb0 + 8;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

