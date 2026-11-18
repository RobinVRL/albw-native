#include "ghidra_types.h"

extern undefined *DAT_00116680;
extern int DAT_00116684;

// USA 0011666C <- EU 0011666C (Ghidra, non-matching)
// GLOBAL DAT_00116680 undefined *
// GLOBAL DAT_00116684 int

int func_0011666C(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_00116684;
  pcVar1 = DAT_00116680;
  iVar3 = DAT_00116684 + 8;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

