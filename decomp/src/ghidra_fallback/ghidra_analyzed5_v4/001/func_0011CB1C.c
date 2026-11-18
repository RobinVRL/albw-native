#include "ghidra_types.h"

extern undefined *DAT_0011cb30;
extern int DAT_0011cb34;

// USA 0011CB1C <- EU 0011CB1C (Ghidra, non-matching)
// GLOBAL DAT_0011cb30 undefined *
// GLOBAL DAT_0011cb34 int

int func_0011CB1C(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_0011cb34;
  pcVar1 = DAT_0011cb30;
  iVar3 = DAT_0011cb34 + 0x48;
  do {
    iVar3 = iVar3 + -0xc;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

