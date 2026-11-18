#include "ghidra_types.h"

extern undefined *DAT_00116e98;
extern int DAT_00116e9c;

// USA 00116E84 <- EU 00116E84 (Ghidra, non-matching)
// GLOBAL DAT_00116e98 undefined *
// GLOBAL DAT_00116e9c int

int func_00116E84(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_00116e9c;
  pcVar1 = DAT_00116e98;
  iVar3 = DAT_00116e9c + 0x48;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

