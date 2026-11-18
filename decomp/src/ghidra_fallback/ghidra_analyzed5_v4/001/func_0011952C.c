#include "ghidra_types.h"

extern undefined *DAT_00119540;
extern int DAT_00119544;

// USA 0011952C <- EU 0011952C (Ghidra, non-matching)
// GLOBAL DAT_00119540 undefined *
// GLOBAL DAT_00119544 int

int func_0011952C(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_00119544;
  pcVar1 = DAT_00119540;
  iVar3 = DAT_00119544 + 0x20;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

