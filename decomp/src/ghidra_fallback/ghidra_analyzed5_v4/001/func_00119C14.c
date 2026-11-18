#include "ghidra_types.h"

extern undefined *DAT_00119c28;
extern int DAT_00119c2c;

// USA 00119C14 <- EU 00119C14 (Ghidra, non-matching)
// GLOBAL DAT_00119c28 undefined *
// GLOBAL DAT_00119c2c int

int func_00119C14(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_00119c2c;
  pcVar1 = DAT_00119c28;
  iVar3 = DAT_00119c2c + 0x30;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

