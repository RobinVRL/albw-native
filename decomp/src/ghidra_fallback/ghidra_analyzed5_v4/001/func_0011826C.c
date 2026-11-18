#include "ghidra_types.h"

extern undefined *DAT_00118280;
extern int DAT_00118284;

// USA 0011826C <- EU 0011826C (Ghidra, non-matching)
// GLOBAL DAT_00118280 undefined *
// GLOBAL DAT_00118284 int

int func_0011826C(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_00118284;
  pcVar1 = DAT_00118280;
  iVar3 = DAT_00118284 + 8;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

