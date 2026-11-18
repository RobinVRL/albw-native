#include "ghidra_types.h"

extern undefined *DAT_00116d9c;
extern int DAT_00116da0;

// USA 00116D88 <- EU 00116D88 (Ghidra, non-matching)
// GLOBAL DAT_00116d9c undefined *
// GLOBAL DAT_00116da0 int

int func_00116D88(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_00116da0;
  pcVar1 = DAT_00116d9c;
  iVar3 = DAT_00116da0 + 0x20;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

