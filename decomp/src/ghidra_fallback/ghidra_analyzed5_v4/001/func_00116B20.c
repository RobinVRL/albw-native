#include "ghidra_types.h"

extern undefined *DAT_00116b34;
extern int DAT_00116b38;

// USA 00116B20 <- EU 00116B20 (Ghidra, non-matching)
// GLOBAL DAT_00116b34 undefined *
// GLOBAL DAT_00116b38 int

int func_00116B20(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_00116b38;
  pcVar1 = DAT_00116b34;
  iVar3 = DAT_00116b38 + 0x98;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

