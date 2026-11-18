#include "ghidra_types.h"

extern undefined *DAT_0011e180;
extern int DAT_0011e184;

// USA 0011E16C <- EU 0011E16C (Ghidra, non-matching)
// GLOBAL DAT_0011e180 undefined *
// GLOBAL DAT_0011e184 int

int func_0011E16C(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_0011e184;
  pcVar1 = DAT_0011e180;
  iVar3 = DAT_0011e184 + 0x20;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

