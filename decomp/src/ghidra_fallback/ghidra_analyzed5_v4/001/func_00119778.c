#include "ghidra_types.h"

extern undefined *DAT_0011978c;
extern int DAT_00119790;

// USA 00119778 <- EU 00119778 (Ghidra, non-matching)
// GLOBAL DAT_0011978c undefined *
// GLOBAL DAT_00119790 int

int func_00119778(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_00119790;
  pcVar1 = DAT_0011978c;
  iVar3 = DAT_00119790 + 8;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

