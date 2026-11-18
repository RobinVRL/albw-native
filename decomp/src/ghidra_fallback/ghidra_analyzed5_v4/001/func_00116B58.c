#include "ghidra_types.h"

extern undefined *DAT_00116b6c;
extern int DAT_00116b70;

// USA 00116B58 <- EU 00116B58 (Ghidra, non-matching)
// GLOBAL DAT_00116b6c undefined *
// GLOBAL DAT_00116b70 int

int func_00116B58(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_00116b70;
  pcVar1 = DAT_00116b6c;
  iVar3 = DAT_00116b70 + 8;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

