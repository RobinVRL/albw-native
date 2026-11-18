#include "ghidra_types.h"

extern undefined *DAT_0011734c;
extern int DAT_00117350;

// USA 00117338 <- EU 00117338 (Ghidra, non-matching)
// GLOBAL DAT_0011734c undefined *
// GLOBAL DAT_00117350 int

int func_00117338(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_00117350;
  pcVar1 = DAT_0011734c;
  iVar3 = DAT_00117350 + 8;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

