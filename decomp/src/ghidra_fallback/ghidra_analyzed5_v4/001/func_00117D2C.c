#include "ghidra_types.h"

extern undefined *DAT_00117d40;
extern int DAT_00117d44;

// USA 00117D2C <- EU 00117D2C (Ghidra, non-matching)
// GLOBAL DAT_00117d40 undefined *
// GLOBAL DAT_00117d44 int

int func_00117D2C(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_00117d44;
  pcVar1 = DAT_00117d40;
  iVar3 = DAT_00117d44 + 8;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

