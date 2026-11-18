#include "ghidra_types.h"

extern undefined *DAT_00116afc;
extern int DAT_00116b00;

// USA 00116AE8 <- EU 00116AE8 (Ghidra, non-matching)
// GLOBAL DAT_00116afc undefined *
// GLOBAL DAT_00116b00 int

int func_00116AE8(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_00116b00;
  pcVar1 = DAT_00116afc;
  iVar3 = DAT_00116b00 + 8;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

