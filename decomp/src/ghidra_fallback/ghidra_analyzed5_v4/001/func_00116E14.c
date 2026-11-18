#include "ghidra_types.h"

extern undefined *DAT_00116e28;
extern int DAT_00116e2c;

// USA 00116E14 <- EU 00116E14 (Ghidra, non-matching)
// GLOBAL DAT_00116e28 undefined *
// GLOBAL DAT_00116e2c int

int func_00116E14(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_00116e2c;
  pcVar1 = DAT_00116e28;
  iVar3 = DAT_00116e2c + 0x30;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

