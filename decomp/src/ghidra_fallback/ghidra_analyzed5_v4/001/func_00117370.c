#include "ghidra_types.h"

extern undefined *DAT_00117384;
extern int DAT_00117388;

// USA 00117370 <- EU 00117370 (Ghidra, non-matching)
// GLOBAL DAT_00117384 undefined *
// GLOBAL DAT_00117388 int

int func_00117370(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_00117388;
  pcVar1 = DAT_00117384;
  iVar3 = DAT_00117388 + 0x60;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

