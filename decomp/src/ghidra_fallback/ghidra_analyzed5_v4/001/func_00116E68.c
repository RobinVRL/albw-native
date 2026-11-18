#include "ghidra_types.h"

extern undefined *DAT_00116e7c;
extern int DAT_00116e80;

// USA 00116E68 <- EU 00116E68 (Ghidra, non-matching)
// GLOBAL DAT_00116e7c undefined *
// GLOBAL DAT_00116e80 int

int func_00116E68(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_00116e80;
  pcVar1 = DAT_00116e7c;
  iVar3 = DAT_00116e80 + 0x28;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

