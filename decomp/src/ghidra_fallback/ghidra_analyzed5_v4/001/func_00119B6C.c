#include "ghidra_types.h"

extern undefined *DAT_00119b80;
extern int DAT_00119b84;

// USA 00119B6C <- EU 00119B6C (Ghidra, non-matching)
// GLOBAL DAT_00119b80 undefined *
// GLOBAL DAT_00119b84 int

int func_00119B6C(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_00119b84;
  pcVar1 = DAT_00119b80;
  iVar3 = DAT_00119b84 + 0x10;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

