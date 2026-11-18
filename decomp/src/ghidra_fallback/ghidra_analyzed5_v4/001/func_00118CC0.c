#include "ghidra_types.h"

extern undefined *DAT_00118cd4;
extern int DAT_00118cd8;

// USA 00118CC0 <- EU 00118CC0 (Ghidra, non-matching)
// GLOBAL DAT_00118cd4 undefined *
// GLOBAL DAT_00118cd8 int

int func_00118CC0(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_00118cd8;
  pcVar1 = DAT_00118cd4;
  iVar3 = DAT_00118cd8 + 8;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

