#include "ghidra_types.h"

extern undefined *DAT_00119c44;
extern int DAT_00119c48;

// USA 00119C30 <- EU 00119C30 (Ghidra, non-matching)
// GLOBAL DAT_00119c44 undefined *
// GLOBAL DAT_00119c48 int

int func_00119C30(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_00119c48;
  pcVar1 = DAT_00119c44;
  iVar3 = DAT_00119c48 + 0x20;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

