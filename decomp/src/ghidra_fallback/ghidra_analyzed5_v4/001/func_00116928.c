#include "ghidra_types.h"

extern undefined *DAT_0011693c;
extern int DAT_00116940;

// USA 00116928 <- EU 00116928 (Ghidra, non-matching)
// GLOBAL DAT_0011693c undefined *
// GLOBAL DAT_00116940 int

int func_00116928(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_00116940;
  pcVar1 = DAT_0011693c;
  iVar3 = DAT_00116940 + 0x100;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

