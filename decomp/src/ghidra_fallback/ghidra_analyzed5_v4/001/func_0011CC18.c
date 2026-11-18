#include "ghidra_types.h"

extern undefined *DAT_0011cc2c;
extern int DAT_0011cc30;

// USA 0011CC18 <- EU 0011CC18 (Ghidra, non-matching)
// GLOBAL DAT_0011cc2c undefined *
// GLOBAL DAT_0011cc30 int

int func_0011CC18(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_0011cc30;
  pcVar1 = DAT_0011cc2c;
  iVar3 = DAT_0011cc30 + 0x20;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

