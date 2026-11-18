#include "ghidra_types.h"

extern undefined *DAT_00117004;
extern int DAT_00117008;

// USA 00116FF0 <- EU 00116FF0 (Ghidra, non-matching)
// GLOBAL DAT_00117004 undefined *
// GLOBAL DAT_00117008 int

int func_00116FF0(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_00117008;
  pcVar1 = DAT_00117004;
  iVar3 = DAT_00117008 + 0x78;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

