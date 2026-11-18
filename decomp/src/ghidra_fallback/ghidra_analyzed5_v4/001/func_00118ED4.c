#include "ghidra_types.h"

extern undefined *DAT_00118ee8;
extern int DAT_00118eec;

// USA 00118ED4 <- EU 00118ED4 (Ghidra, non-matching)
// GLOBAL DAT_00118ee8 undefined *
// GLOBAL DAT_00118eec int

int func_00118ED4(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_00118eec;
  pcVar1 = DAT_00118ee8;
  iVar3 = DAT_00118eec + 8;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

