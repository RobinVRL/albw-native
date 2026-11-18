#include "ghidra_types.h"

extern undefined *DAT_00116808;
extern int DAT_0011680c;

// USA 001167F4 <- EU 001167F4 (Ghidra, non-matching)
// GLOBAL DAT_00116808 undefined *
// GLOBAL DAT_0011680c int

int func_001167F4(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_0011680c;
  pcVar1 = DAT_00116808;
  iVar3 = DAT_0011680c + 0x28;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

