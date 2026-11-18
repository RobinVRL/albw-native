#include "ghidra_types.h"

extern undefined *DAT_00118900;
extern int DAT_00118904;

// USA 001188EC <- EU 001188EC (Ghidra, non-matching)
// GLOBAL DAT_00118900 undefined *
// GLOBAL DAT_00118904 int

int func_001188EC(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_00118904;
  pcVar1 = DAT_00118900;
  iVar3 = DAT_00118904 + 0x20;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

