#include "ghidra_types.h"

extern undefined *DAT_001172a4;
extern int DAT_001172a8;

// USA 00117290 <- EU 00117290 (Ghidra, non-matching)
// GLOBAL DAT_001172a4 undefined *
// GLOBAL DAT_001172a8 int

int func_00117290(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_001172a8;
  pcVar1 = DAT_001172a4;
  iVar3 = DAT_001172a8 + 8;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

