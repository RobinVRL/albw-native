#include "ghidra_types.h"

extern undefined *DAT_00116f40;
extern int DAT_00116f44;

// USA 00116F2C <- EU 00116F2C (Ghidra, non-matching)
// GLOBAL DAT_00116f40 undefined *
// GLOBAL DAT_00116f44 int

int func_00116F2C(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_00116f44;
  pcVar1 = DAT_00116f40;
  iVar3 = DAT_00116f44 + 8;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

