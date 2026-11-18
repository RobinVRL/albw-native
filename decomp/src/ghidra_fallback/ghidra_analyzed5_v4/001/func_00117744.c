#include "ghidra_types.h"

extern undefined *DAT_00117758;
extern int DAT_0011775c;

// USA 00117744 <- EU 00117744 (Ghidra, non-matching)
// GLOBAL DAT_00117758 undefined *
// GLOBAL DAT_0011775c int

int func_00117744(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_0011775c;
  pcVar1 = DAT_00117758;
  iVar3 = DAT_0011775c + 0x18;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

