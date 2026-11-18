#include "ghidra_types.h"

extern undefined *DAT_00116bc0;
extern int DAT_00116bc4;

// USA 00116BAC <- EU 00116BAC (Ghidra, non-matching)
// GLOBAL DAT_00116bc0 undefined *
// GLOBAL DAT_00116bc4 int

int func_00116BAC(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_00116bc4;
  pcVar1 = DAT_00116bc0;
  iVar3 = DAT_00116bc4 + 0x100;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

