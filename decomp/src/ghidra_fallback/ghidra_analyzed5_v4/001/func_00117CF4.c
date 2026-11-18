#include "ghidra_types.h"

extern undefined *DAT_00117d08;
extern int DAT_00117d0c;

// USA 00117CF4 <- EU 00117CF4 (Ghidra, non-matching)
// GLOBAL DAT_00117d08 undefined *
// GLOBAL DAT_00117d0c int

int func_00117CF4(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_00117d0c;
  pcVar1 = DAT_00117d08;
  iVar3 = DAT_00117d0c + 0x20;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

