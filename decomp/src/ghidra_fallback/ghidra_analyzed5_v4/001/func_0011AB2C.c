#include "ghidra_types.h"

extern undefined *DAT_0011ab40;
extern int DAT_0011ab44;

// USA 0011AB2C <- EU 0011AB2C (Ghidra, non-matching)
// GLOBAL DAT_0011ab40 undefined *
// GLOBAL DAT_0011ab44 int

int func_0011AB2C(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_0011ab44;
  pcVar1 = DAT_0011ab40;
  iVar3 = DAT_0011ab44 + 0x100;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

