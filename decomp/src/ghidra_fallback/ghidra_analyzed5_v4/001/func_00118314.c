#include "ghidra_types.h"

extern undefined *DAT_00118328;
extern int DAT_0011832c;

// USA 00118314 <- EU 00118314 (Ghidra, non-matching)
// GLOBAL DAT_00118328 undefined *
// GLOBAL DAT_0011832c int

int func_00118314(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_0011832c;
  pcVar1 = DAT_00118328;
  iVar3 = DAT_0011832c + 0x20;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

