#include "ghidra_types.h"

extern undefined *DAT_00117b10;
extern int DAT_00117b14;

// USA 00117AFC <- EU 00117AFC (Ghidra, non-matching)
// GLOBAL DAT_00117b10 undefined *
// GLOBAL DAT_00117b14 int

int func_00117AFC(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_00117b14;
  pcVar1 = DAT_00117b10;
  iVar3 = DAT_00117b14 + 0x54;
  do {
    iVar3 = iVar3 + -0xc;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

