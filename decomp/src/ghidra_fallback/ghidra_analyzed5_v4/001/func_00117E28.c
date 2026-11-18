#include "ghidra_types.h"

extern undefined *DAT_00117e3c;
extern int DAT_00117e40;

// USA 00117E28 <- EU 00117E28 (Ghidra, non-matching)
// GLOBAL DAT_00117e3c undefined *
// GLOBAL DAT_00117e40 int

int func_00117E28(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_00117e40;
  pcVar1 = DAT_00117e3c;
  iVar3 = DAT_00117e40 + 8;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

