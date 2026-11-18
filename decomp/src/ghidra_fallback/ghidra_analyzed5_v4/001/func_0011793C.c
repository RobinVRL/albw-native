#include "ghidra_types.h"

extern undefined *DAT_00117950;
extern int DAT_00117954;

// USA 0011793C <- EU 0011793C (Ghidra, non-matching)
// GLOBAL DAT_00117950 undefined *
// GLOBAL DAT_00117954 int

int func_0011793C(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_00117954;
  pcVar1 = DAT_00117950;
  iVar3 = DAT_00117954 + 8;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

