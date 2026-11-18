#include "ghidra_types.h"

extern undefined *DAT_00116f08;
extern int DAT_00116f0c;

// USA 00116EF4 <- EU 00116EF4 (Ghidra, non-matching)
// GLOBAL DAT_00116f08 undefined *
// GLOBAL DAT_00116f0c int

int func_00116EF4(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_00116f0c;
  pcVar1 = DAT_00116f08;
  iVar3 = DAT_00116f0c + 0x48;
  do {
    iVar3 = iVar3 + -0xc;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

