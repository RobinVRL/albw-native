#include "ghidra_types.h"

extern undefined *DAT_00118264;
extern int DAT_00118268;

// USA 00118250 <- EU 00118250 (Ghidra, non-matching)
// GLOBAL DAT_00118264 undefined *
// GLOBAL DAT_00118268 int

int func_00118250(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_00118268;
  pcVar1 = DAT_00118264;
  iVar3 = DAT_00118268 + 0x30;
  do {
    iVar3 = iVar3 + -0xc;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

