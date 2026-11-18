#include "ghidra_types.h"

extern undefined *DAT_00116f78;
extern int DAT_00116f7c;

// USA 00116F64 <- EU 00116F64 (Ghidra, non-matching)
// GLOBAL DAT_00116f78 undefined *
// GLOBAL DAT_00116f7c int

int func_00116F64(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_00116f7c;
  pcVar1 = DAT_00116f78;
  iVar3 = DAT_00116f7c + 0x18;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

