#include "ghidra_types.h"

extern undefined *DAT_00117bd4;
extern int DAT_00117bd8;

// USA 00117BC0 <- EU 00117BC0 (Ghidra, non-matching)
// GLOBAL DAT_00117bd4 undefined *
// GLOBAL DAT_00117bd8 int

int func_00117BC0(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_00117bd8;
  pcVar1 = DAT_00117bd4;
  iVar3 = DAT_00117bd8 + 8;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

