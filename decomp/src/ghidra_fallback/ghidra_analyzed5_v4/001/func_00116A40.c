#include "ghidra_types.h"

extern undefined *DAT_00116a54;
extern int DAT_00116a58;

// USA 00116A40 <- EU 00116A40 (Ghidra, non-matching)
// GLOBAL DAT_00116a54 undefined *
// GLOBAL DAT_00116a58 int

int func_00116A40(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_00116a58;
  pcVar1 = DAT_00116a54;
  iVar3 = DAT_00116a58 + 0x20;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

