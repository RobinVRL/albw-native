#include "ghidra_types.h"

extern undefined *DAT_00116d2c;
extern int DAT_00116d30;

// USA 00116D18 <- EU 00116D18 (Ghidra, non-matching)
// GLOBAL DAT_00116d2c undefined *
// GLOBAL DAT_00116d30 int

int func_00116D18(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_00116d30;
  pcVar1 = DAT_00116d2c;
  iVar3 = DAT_00116d30 + 0x10;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

