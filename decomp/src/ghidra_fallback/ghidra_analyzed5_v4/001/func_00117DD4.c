#include "ghidra_types.h"

extern undefined *DAT_00117de8;
extern int DAT_00117dec;

// USA 00117DD4 <- EU 00117DD4 (Ghidra, non-matching)
// GLOBAL DAT_00117de8 undefined *
// GLOBAL DAT_00117dec int

int func_00117DD4(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_00117dec;
  pcVar1 = DAT_00117de8;
  iVar3 = DAT_00117dec + 0x100;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

