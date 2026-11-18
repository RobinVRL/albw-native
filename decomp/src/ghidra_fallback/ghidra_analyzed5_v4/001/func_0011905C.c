#include "ghidra_types.h"

extern undefined *DAT_00119070;
extern int DAT_00119074;

// USA 0011905C <- EU 0011905C (Ghidra, non-matching)
// GLOBAL DAT_00119070 undefined *
// GLOBAL DAT_00119074 int

int func_0011905C(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_00119074;
  pcVar1 = DAT_00119070;
  iVar3 = DAT_00119074 + 0x18;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

