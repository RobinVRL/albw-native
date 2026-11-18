#include "ghidra_types.h"

extern undefined *DAT_00117d94;
extern int DAT_00117d98;

// USA 00117D80 <- EU 00117D80 (Ghidra, non-matching)
// GLOBAL DAT_00117d94 undefined *
// GLOBAL DAT_00117d98 int

int func_00117D80(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_00117d98;
  pcVar1 = DAT_00117d94;
  iVar3 = DAT_00117d98 + 8;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

