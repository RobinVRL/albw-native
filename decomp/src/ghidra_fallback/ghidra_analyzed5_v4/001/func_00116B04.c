#include "ghidra_types.h"

extern undefined *DAT_00116b18;
extern int DAT_00116b1c;

// USA 00116B04 <- EU 00116B04 (Ghidra, non-matching)
// GLOBAL DAT_00116b18 undefined *
// GLOBAL DAT_00116b1c int

int func_00116B04(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_00116b1c;
  pcVar1 = DAT_00116b18;
  iVar3 = DAT_00116b1c + 8;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

