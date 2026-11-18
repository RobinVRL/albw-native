#include "ghidra_types.h"

extern undefined *DAT_00116e60;
extern int DAT_00116e64;

// USA 00116E4C <- EU 00116E4C (Ghidra, non-matching)
// GLOBAL DAT_00116e60 undefined *
// GLOBAL DAT_00116e64 int

int func_00116E4C(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_00116e64;
  pcVar1 = DAT_00116e60;
  iVar3 = DAT_00116e64 + 8;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

