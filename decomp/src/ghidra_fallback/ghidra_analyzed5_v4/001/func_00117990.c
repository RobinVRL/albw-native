#include "ghidra_types.h"

extern undefined *DAT_001179a4;
extern int DAT_001179a8;

// USA 00117990 <- EU 00117990 (Ghidra, non-matching)
// GLOBAL DAT_001179a4 undefined *
// GLOBAL DAT_001179a8 int

int func_00117990(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_001179a8;
  pcVar1 = DAT_001179a4;
  iVar3 = DAT_001179a8 + 8;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

