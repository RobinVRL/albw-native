#include "ghidra_types.h"

extern undefined *DAT_00118f20;
extern int DAT_00118f24;

// USA 00118F0C <- EU 00118F0C (Ghidra, non-matching)
// GLOBAL DAT_00118f20 undefined *
// GLOBAL DAT_00118f24 int

int func_00118F0C(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_00118f24;
  pcVar1 = DAT_00118f20;
  iVar3 = DAT_00118f24 + 0x20;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

