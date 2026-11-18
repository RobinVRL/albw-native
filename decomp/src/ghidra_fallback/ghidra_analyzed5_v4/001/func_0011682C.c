#include "ghidra_types.h"

extern undefined *DAT_00116840;
extern int DAT_00116844;

// USA 0011682C <- EU 0011682C (Ghidra, non-matching)
// GLOBAL DAT_00116840 undefined *
// GLOBAL DAT_00116844 int

int func_0011682C(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_00116844;
  pcVar1 = DAT_00116840;
  iVar3 = DAT_00116844 + 0x20;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

