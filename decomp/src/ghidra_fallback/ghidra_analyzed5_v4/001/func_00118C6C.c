#include "ghidra_types.h"

extern undefined *DAT_00118c80;
extern int DAT_00118c84;

// USA 00118C6C <- EU 00118C6C (Ghidra, non-matching)
// GLOBAL DAT_00118c80 undefined *
// GLOBAL DAT_00118c84 int

int func_00118C6C(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_00118c84;
  pcVar1 = DAT_00118c80;
  iVar3 = DAT_00118c84 + 8;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

