#include "ghidra_types.h"

extern undefined *DAT_00117a14;
extern int DAT_00117a18;

// USA 00117A00 <- EU 00117A00 (Ghidra, non-matching)
// GLOBAL DAT_00117a14 undefined *
// GLOBAL DAT_00117a18 int

int func_00117A00(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_00117a18;
  pcVar1 = DAT_00117a14;
  iVar3 = DAT_00117a18 + 0x60;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

