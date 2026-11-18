#include "ghidra_types.h"

extern undefined *DAT_00117e74;
extern int DAT_00117e78;

// USA 00117E60 <- EU 00117E60 (Ghidra, non-matching)
// GLOBAL DAT_00117e74 undefined *
// GLOBAL DAT_00117e78 int

int func_00117E60(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_00117e78;
  pcVar1 = DAT_00117e74;
  iVar3 = DAT_00117e78 + 8;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

