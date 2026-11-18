#include "ghidra_types.h"

extern undefined *DAT_0011742c;
extern int DAT_00117430;

// USA 00117418 <- EU 00117418 (Ghidra, non-matching)
// GLOBAL DAT_0011742c undefined *
// GLOBAL DAT_00117430 int

int func_00117418(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_00117430;
  pcVar1 = DAT_0011742c;
  iVar3 = DAT_00117430 + 8;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

