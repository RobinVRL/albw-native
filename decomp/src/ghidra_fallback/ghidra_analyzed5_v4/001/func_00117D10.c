#include "ghidra_types.h"

extern undefined *DAT_00117d24;
extern int DAT_00117d28;

// USA 00117D10 <- EU 00117D10 (Ghidra, non-matching)
// GLOBAL DAT_00117d24 undefined *
// GLOBAL DAT_00117d28 int

int func_00117D10(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_00117d28;
  pcVar1 = DAT_00117d24;
  iVar3 = DAT_00117d28 + 0x20;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

