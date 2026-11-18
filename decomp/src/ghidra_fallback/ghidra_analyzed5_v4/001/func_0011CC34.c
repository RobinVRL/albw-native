#include "ghidra_types.h"

extern undefined *DAT_0011cc48;
extern int DAT_0011cc4c;

// USA 0011CC34 <- EU 0011CC34 (Ghidra, non-matching)
// GLOBAL DAT_0011cc48 undefined *
// GLOBAL DAT_0011cc4c int

int func_0011CC34(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_0011cc4c;
  pcVar1 = DAT_0011cc48;
  iVar3 = DAT_0011cc4c + 0x20;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

