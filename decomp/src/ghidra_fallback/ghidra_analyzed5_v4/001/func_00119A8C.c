#include "ghidra_types.h"

extern undefined *DAT_00119aa0;
extern int DAT_00119aa4;

// USA 00119A8C <- EU 00119A8C (Ghidra, non-matching)
// GLOBAL DAT_00119aa0 undefined *
// GLOBAL DAT_00119aa4 int

int func_00119A8C(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_00119aa4;
  pcVar1 = DAT_00119aa0;
  iVar3 = DAT_00119aa4 + 0x1080;
  do {
    iVar3 = iVar3 + -0x18;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

