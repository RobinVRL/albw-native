#include "ghidra_types.h"

extern undefined *DAT_00117b80;
extern int DAT_00117b84;

// USA 00117B6C <- EU 00117B6C (Ghidra, non-matching)
// GLOBAL DAT_00117b80 undefined *
// GLOBAL DAT_00117b84 int

int func_00117B6C(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_00117b84;
  pcVar1 = DAT_00117b80;
  iVar3 = DAT_00117b84 + 0x50;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

