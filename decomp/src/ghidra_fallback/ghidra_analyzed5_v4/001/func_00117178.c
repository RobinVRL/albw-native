#include "ghidra_types.h"

extern undefined *DAT_0011718c;
extern int DAT_00117190;

// USA 00117178 <- EU 00117178 (Ghidra, non-matching)
// GLOBAL DAT_0011718c undefined *
// GLOBAL DAT_00117190 int

int func_00117178(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_00117190;
  pcVar1 = DAT_0011718c;
  iVar3 = DAT_00117190 + 8;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

