#include "ghidra_types.h"

extern undefined *DAT_00116eec;
extern int DAT_00116ef0;

// USA 00116ED8 <- EU 00116ED8 (Ghidra, non-matching)
// GLOBAL DAT_00116eec undefined *
// GLOBAL DAT_00116ef0 int

int func_00116ED8(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_00116ef0;
  pcVar1 = DAT_00116eec;
  iVar3 = DAT_00116ef0 + 0x48;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

