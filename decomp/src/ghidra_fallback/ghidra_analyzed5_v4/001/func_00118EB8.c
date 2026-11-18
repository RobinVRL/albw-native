#include "ghidra_types.h"

extern undefined *DAT_00118ecc;
extern int DAT_00118ed0;

// USA 00118EB8 <- EU 00118EB8 (Ghidra, non-matching)
// GLOBAL DAT_00118ecc undefined *
// GLOBAL DAT_00118ed0 int

int func_00118EB8(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_00118ed0;
  pcVar1 = DAT_00118ecc;
  iVar3 = DAT_00118ed0 + 0x20;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

