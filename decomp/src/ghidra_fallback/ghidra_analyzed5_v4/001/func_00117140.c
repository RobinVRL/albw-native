#include "ghidra_types.h"

extern undefined *DAT_00117154;
extern int DAT_00117158;

// USA 00117140 <- EU 00117140 (Ghidra, non-matching)
// GLOBAL DAT_00117154 undefined *
// GLOBAL DAT_00117158 int

int func_00117140(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_00117158;
  pcVar1 = DAT_00117154;
  iVar3 = DAT_00117158 + 0x20;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

