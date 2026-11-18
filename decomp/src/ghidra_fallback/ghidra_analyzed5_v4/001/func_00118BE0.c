#include "ghidra_types.h"

extern undefined *DAT_00118bf4;
extern int DAT_00118bf8;

// USA 00118BE0 <- EU 00118BE0 (Ghidra, non-matching)
// GLOBAL DAT_00118bf4 undefined *
// GLOBAL DAT_00118bf8 int

int func_00118BE0(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_00118bf8;
  pcVar1 = DAT_00118bf4;
  iVar3 = DAT_00118bf8 + 0x80;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

