#include "ghidra_types.h"

extern undefined *DAT_00118c10;
extern int DAT_00118c14;

// USA 00118BFC <- EU 00118BFC (Ghidra, non-matching)
// GLOBAL DAT_00118c10 undefined *
// GLOBAL DAT_00118c14 int

int func_00118BFC(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_00118c14;
  pcVar1 = DAT_00118c10;
  iVar3 = DAT_00118c14 + 0x3c;
  do {
    iVar3 = iVar3 + -0xc;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

