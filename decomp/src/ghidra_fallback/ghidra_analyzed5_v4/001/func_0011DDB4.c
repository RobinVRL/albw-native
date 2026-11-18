#include "ghidra_types.h"

extern undefined *DAT_0011ddc8;
extern int DAT_0011ddcc;

// USA 0011DDB4 <- EU 0011DDB4 (Ghidra, non-matching)
// GLOBAL DAT_0011ddc8 undefined *
// GLOBAL DAT_0011ddcc int

int func_0011DDB4(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_0011ddcc;
  pcVar1 = DAT_0011ddc8;
  iVar3 = DAT_0011ddcc + 0x100;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

