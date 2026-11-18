#include "ghidra_types.h"

extern undefined *DAT_00117560;
extern int DAT_00117564;

// USA 0011754C <- EU 0011754C (Ghidra, non-matching)
// GLOBAL DAT_00117560 undefined *
// GLOBAL DAT_00117564 int

int func_0011754C(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_00117564;
  pcVar1 = DAT_00117560;
  iVar3 = DAT_00117564 + 0x100;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

