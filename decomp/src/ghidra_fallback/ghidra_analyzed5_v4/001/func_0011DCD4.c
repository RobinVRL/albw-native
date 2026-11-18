#include "ghidra_types.h"

extern undefined *DAT_0011dce8;
extern int DAT_0011dcec;

// USA 0011DCD4 <- EU 0011DCD4 (Ghidra, non-matching)
// GLOBAL DAT_0011dce8 undefined *
// GLOBAL DAT_0011dcec int

int func_0011DCD4(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_0011dcec;
  pcVar1 = DAT_0011dce8;
  iVar3 = DAT_0011dcec + 0x20;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

