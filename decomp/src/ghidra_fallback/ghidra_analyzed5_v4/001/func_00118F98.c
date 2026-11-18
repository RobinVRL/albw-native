#include "ghidra_types.h"

extern undefined *DAT_00118fac;
extern int DAT_00118fb0;

// USA 00118F98 <- EU 00118F98 (Ghidra, non-matching)
// GLOBAL DAT_00118fac undefined *
// GLOBAL DAT_00118fb0 int

int func_00118F98(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_00118fb0;
  pcVar1 = DAT_00118fac;
  iVar3 = DAT_00118fb0 + 8;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

