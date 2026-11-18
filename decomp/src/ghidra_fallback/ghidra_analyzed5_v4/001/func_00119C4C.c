#include "ghidra_types.h"

extern undefined *DAT_00119c60;
extern int DAT_00119c64;

// USA 00119C4C <- EU 00119C4C (Ghidra, non-matching)
// GLOBAL DAT_00119c60 undefined *
// GLOBAL DAT_00119c64 int

int func_00119C4C(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_00119c64;
  pcVar1 = DAT_00119c60;
  iVar3 = DAT_00119c64 + 0x20;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

