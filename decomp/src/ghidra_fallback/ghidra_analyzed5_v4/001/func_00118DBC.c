#include "ghidra_types.h"

extern undefined *DAT_00118dd0;
extern int DAT_00118dd4;

// USA 00118DBC <- EU 00118DBC (Ghidra, non-matching)
// GLOBAL DAT_00118dd0 undefined *
// GLOBAL DAT_00118dd4 int

int func_00118DBC(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_00118dd4;
  pcVar1 = DAT_00118dd0;
  iVar3 = DAT_00118dd4 + 0x30;
  do {
    iVar3 = iVar3 + -0xc;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

