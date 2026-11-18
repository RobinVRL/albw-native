#include "ghidra_types.h"

extern undefined *DAT_00116cf4;
extern int DAT_00116cf8;

// USA 00116CE0 <- EU 00116CE0 (Ghidra, non-matching)
// GLOBAL DAT_00116cf4 undefined *
// GLOBAL DAT_00116cf8 int

int func_00116CE0(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_00116cf8;
  pcVar1 = DAT_00116cf4;
  iVar3 = DAT_00116cf8 + 0x30;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

