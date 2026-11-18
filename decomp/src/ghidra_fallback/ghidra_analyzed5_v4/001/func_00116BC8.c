#include "ghidra_types.h"

extern undefined *DAT_00116bdc;
extern int DAT_00116be0;

// USA 00116BC8 <- EU 00116BC8 (Ghidra, non-matching)
// GLOBAL DAT_00116bdc undefined *
// GLOBAL DAT_00116be0 int

int func_00116BC8(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_00116be0;
  pcVar1 = DAT_00116bdc;
  iVar3 = DAT_00116be0 + 0x100;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

