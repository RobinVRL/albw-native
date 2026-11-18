#include "ghidra_types.h"

extern undefined *DAT_00116f5c;
extern int DAT_00116f60;

// USA 00116F48 <- EU 00116F48 (Ghidra, non-matching)
// GLOBAL DAT_00116f5c undefined *
// GLOBAL DAT_00116f60 int

int func_00116F48(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_00116f60;
  pcVar1 = DAT_00116f5c;
  iVar3 = DAT_00116f60 + 8;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

