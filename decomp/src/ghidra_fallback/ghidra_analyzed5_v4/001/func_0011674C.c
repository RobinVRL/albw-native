#include "ghidra_types.h"

extern undefined *DAT_00116760;
extern int DAT_00116764;

// USA 0011674C <- EU 0011674C (Ghidra, non-matching)
// GLOBAL DAT_00116760 undefined *
// GLOBAL DAT_00116764 int

int func_0011674C(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_00116764;
  pcVar1 = DAT_00116760;
  iVar3 = DAT_00116764 + 0x84;
  do {
    iVar3 = iVar3 + -0xc;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

