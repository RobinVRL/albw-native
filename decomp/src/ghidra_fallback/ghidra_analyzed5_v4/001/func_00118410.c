#include "ghidra_types.h"

extern undefined *DAT_00118424;
extern int DAT_00118428;

// USA 00118410 <- EU 00118410 (Ghidra, non-matching)
// GLOBAL DAT_00118424 undefined *
// GLOBAL DAT_00118428 int

int func_00118410(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_00118428;
  pcVar1 = DAT_00118424;
  iVar3 = DAT_00118428 + 8;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

