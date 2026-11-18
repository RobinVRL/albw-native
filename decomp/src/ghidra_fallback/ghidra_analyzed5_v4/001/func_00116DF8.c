#include "ghidra_types.h"

extern undefined *DAT_00116e0c;
extern int DAT_00116e10;

// USA 00116DF8 <- EU 00116DF8 (Ghidra, non-matching)
// GLOBAL DAT_00116e0c undefined *
// GLOBAL DAT_00116e10 int

int func_00116DF8(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_00116e10;
  pcVar1 = DAT_00116e0c;
  iVar3 = DAT_00116e10 + 8;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

