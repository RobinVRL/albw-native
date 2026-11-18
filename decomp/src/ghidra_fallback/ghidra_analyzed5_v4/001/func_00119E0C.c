#include "ghidra_types.h"

extern undefined *DAT_00119e20;
extern int DAT_00119e24;

// USA 00119E0C <- EU 00119E0C (Ghidra, non-matching)
// GLOBAL DAT_00119e20 undefined *
// GLOBAL DAT_00119e24 int

int func_00119E0C(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_00119e24;
  pcVar1 = DAT_00119e20;
  iVar3 = DAT_00119e24 + 0xb20;
  do {
    iVar3 = iVar3 + -0x10;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

