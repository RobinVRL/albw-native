#include "ghidra_types.h"

extern undefined *DAT_00116990;
extern int DAT_00116994;

// USA 0011697C <- EU 0011697C (Ghidra, non-matching)
// GLOBAL DAT_00116990 undefined *
// GLOBAL DAT_00116994 int

int func_0011697C(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_00116994;
  pcVar1 = DAT_00116990;
  iVar3 = DAT_00116994 + 0x20;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

