#include "ghidra_types.h"

extern undefined *DAT_00116894;
extern int DAT_00116898;

// USA 00116880 <- EU 00116880 (Ghidra, non-matching)
// GLOBAL DAT_00116894 undefined *
// GLOBAL DAT_00116898 int

int func_00116880(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_00116898;
  pcVar1 = DAT_00116894;
  iVar3 = DAT_00116898 + 0x10;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

