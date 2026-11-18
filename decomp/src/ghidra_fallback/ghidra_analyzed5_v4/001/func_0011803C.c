#include "ghidra_types.h"

extern undefined *DAT_00118050;
extern int DAT_00118054;

// USA 0011803C <- EU 0011803C (Ghidra, non-matching)
// GLOBAL DAT_00118050 undefined *
// GLOBAL DAT_00118054 int

int func_0011803C(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_00118054;
  pcVar1 = DAT_00118050;
  iVar3 = DAT_00118054 + 0x20;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

