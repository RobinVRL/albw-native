#include "ghidra_types.h"

extern undefined *DAT_00116bf8;
extern int DAT_00116bfc;

// USA 00116BE4 <- EU 00116BE4 (Ghidra, non-matching)
// GLOBAL DAT_00116bf8 undefined *
// GLOBAL DAT_00116bfc int

int func_00116BE4(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_00116bfc;
  pcVar1 = DAT_00116bf8;
  iVar3 = DAT_00116bfc + 0x20;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

