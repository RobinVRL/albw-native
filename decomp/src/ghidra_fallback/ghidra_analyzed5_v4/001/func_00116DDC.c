#include "ghidra_types.h"

extern undefined *DAT_00116df0;
extern int DAT_00116df4;

// USA 00116DDC <- EU 00116DDC (Ghidra, non-matching)
// GLOBAL DAT_00116df0 undefined *
// GLOBAL DAT_00116df4 int

int func_00116DDC(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_00116df4;
  pcVar1 = DAT_00116df0;
  iVar3 = DAT_00116df4 + 0x20;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

