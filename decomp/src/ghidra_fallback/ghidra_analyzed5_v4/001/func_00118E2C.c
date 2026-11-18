#include "ghidra_types.h"

extern undefined *DAT_00118e40;
extern int DAT_00118e44;

// USA 00118E2C <- EU 00118E2C (Ghidra, non-matching)
// GLOBAL DAT_00118e40 undefined *
// GLOBAL DAT_00118e44 int

int func_00118E2C(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_00118e44;
  pcVar1 = DAT_00118e40;
  iVar3 = DAT_00118e44 + 0x18;
  do {
    iVar3 = iVar3 + -0xc;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

