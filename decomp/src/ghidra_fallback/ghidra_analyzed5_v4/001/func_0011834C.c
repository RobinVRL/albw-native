#include "ghidra_types.h"

extern undefined *DAT_00118360;
extern int DAT_00118364;

// USA 0011834C <- EU 0011834C (Ghidra, non-matching)
// GLOBAL DAT_00118360 undefined *
// GLOBAL DAT_00118364 int

int func_0011834C(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_00118364;
  pcVar1 = DAT_00118360;
  iVar3 = DAT_00118364 + 0x20;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

