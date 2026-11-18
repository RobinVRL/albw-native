#include "ghidra_types.h"

extern undefined *DAT_00117cd0;
extern int DAT_00117cd4;

// USA 00117CBC <- EU 00117CBC (Ghidra, non-matching)
// GLOBAL DAT_00117cd0 undefined *
// GLOBAL DAT_00117cd4 int

int func_00117CBC(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_00117cd4;
  pcVar1 = DAT_00117cd0;
  iVar3 = DAT_00117cd4 + 0x78;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

