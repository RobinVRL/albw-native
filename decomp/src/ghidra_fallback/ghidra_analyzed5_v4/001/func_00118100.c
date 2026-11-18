#include "ghidra_types.h"

extern undefined *DAT_00118114;
extern int DAT_00118118;

// USA 00118100 <- EU 00118100 (Ghidra, non-matching)
// GLOBAL DAT_00118114 undefined *
// GLOBAL DAT_00118118 int

int func_00118100(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_00118118;
  pcVar1 = DAT_00118114;
  iVar3 = DAT_00118118 + 8;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

