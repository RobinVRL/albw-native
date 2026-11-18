#include "ghidra_types.h"

extern undefined *DAT_00118dec;
extern int DAT_00118df0;

// USA 00118DD8 <- EU 00118DD8 (Ghidra, non-matching)
// GLOBAL DAT_00118dec undefined *
// GLOBAL DAT_00118df0 int

int func_00118DD8(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_00118df0;
  pcVar1 = DAT_00118dec;
  iVar3 = DAT_00118df0 + 8;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

