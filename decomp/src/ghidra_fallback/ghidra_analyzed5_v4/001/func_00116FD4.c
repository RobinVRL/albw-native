#include "ghidra_types.h"

extern undefined *DAT_00116fe8;
extern int DAT_00116fec;

// USA 00116FD4 <- EU 00116FD4 (Ghidra, non-matching)
// GLOBAL DAT_00116fe8 undefined *
// GLOBAL DAT_00116fec int

int func_00116FD4(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_00116fec;
  pcVar1 = DAT_00116fe8;
  iVar3 = DAT_00116fec + 8;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

