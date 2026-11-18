#include "ghidra_types.h"

extern undefined *DAT_0011cee8;
extern int DAT_0011ceec;

// USA 0011CED4 <- EU 0011CED4 (Ghidra, non-matching)
// GLOBAL DAT_0011cee8 undefined *
// GLOBAL DAT_0011ceec int

int func_0011CED4(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_0011ceec;
  pcVar1 = DAT_0011cee8;
  iVar3 = DAT_0011ceec + 0x100;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

