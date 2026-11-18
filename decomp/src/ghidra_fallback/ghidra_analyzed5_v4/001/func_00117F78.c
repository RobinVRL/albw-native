#include "ghidra_types.h"

extern undefined *DAT_00117f8c;
extern int DAT_00117f90;

// USA 00117F78 <- EU 00117F78 (Ghidra, non-matching)
// GLOBAL DAT_00117f8c undefined *
// GLOBAL DAT_00117f90 int

int func_00117F78(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_00117f90;
  pcVar1 = DAT_00117f8c;
  iVar3 = DAT_00117f90 + 8;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

