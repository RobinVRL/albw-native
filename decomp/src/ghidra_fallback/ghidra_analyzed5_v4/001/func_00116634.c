#include "ghidra_types.h"

extern undefined *DAT_00116648;
extern int DAT_0011664c;

// USA 00116634 <- EU 00116634 (Ghidra, non-matching)
// GLOBAL DAT_00116648 undefined *
// GLOBAL DAT_0011664c int

int func_00116634(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_0011664c;
  pcVar1 = DAT_00116648;
  iVar3 = DAT_0011664c + 8;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

