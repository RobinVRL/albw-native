#include "ghidra_types.h"

extern undefined *DAT_00118088;
extern int DAT_0011808c;

// USA 00118074 <- EU 00118074 (Ghidra, non-matching)
// GLOBAL DAT_00118088 undefined *
// GLOBAL DAT_0011808c int

int func_00118074(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_0011808c;
  pcVar1 = DAT_00118088;
  iVar3 = DAT_0011808c + 8;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

