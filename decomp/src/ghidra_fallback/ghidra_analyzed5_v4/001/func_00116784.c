#include "ghidra_types.h"

extern undefined *DAT_00116798;
extern int DAT_0011679c;

// USA 00116784 <- EU 00116784 (Ghidra, non-matching)
// GLOBAL DAT_00116798 undefined *
// GLOBAL DAT_0011679c int

int func_00116784(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_0011679c;
  pcVar1 = DAT_00116798;
  iVar3 = DAT_0011679c + 0x48;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

