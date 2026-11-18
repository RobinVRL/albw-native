#include "ghidra_types.h"

extern undefined *DAT_00117934;
extern int DAT_00117938;

// USA 00117920 <- EU 00117920 (Ghidra, non-matching)
// GLOBAL DAT_00117934 undefined *
// GLOBAL DAT_00117938 int

int func_00117920(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_00117938;
  pcVar1 = DAT_00117934;
  iVar3 = DAT_00117938 + 0x20;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

