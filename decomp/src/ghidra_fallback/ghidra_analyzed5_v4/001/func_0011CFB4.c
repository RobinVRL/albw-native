#include "ghidra_types.h"

extern undefined *DAT_0011cfc8;
extern int DAT_0011cfcc;

// USA 0011CFB4 <- EU 0011CFB4 (Ghidra, non-matching)
// GLOBAL DAT_0011cfc8 undefined *
// GLOBAL DAT_0011cfcc int

int func_0011CFB4(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_0011cfcc;
  pcVar1 = DAT_0011cfc8;
  iVar3 = DAT_0011cfcc + 8;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

