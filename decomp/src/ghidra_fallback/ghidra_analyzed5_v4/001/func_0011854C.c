#include "ghidra_types.h"

extern undefined *DAT_00118560;
extern int DAT_00118564;

// USA 0011854C <- EU 0011854C (Ghidra, non-matching)
// GLOBAL DAT_00118560 undefined *
// GLOBAL DAT_00118564 int

int func_0011854C(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_00118564;
  pcVar1 = DAT_00118560;
  iVar3 = DAT_00118564 + 0x58;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

