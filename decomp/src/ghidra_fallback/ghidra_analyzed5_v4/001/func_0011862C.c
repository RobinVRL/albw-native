#include "ghidra_types.h"

extern undefined *DAT_00118640;
extern int DAT_00118644;

// USA 0011862C <- EU 0011862C (Ghidra, non-matching)
// GLOBAL DAT_00118640 undefined *
// GLOBAL DAT_00118644 int

int func_0011862C(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_00118644;
  pcVar1 = DAT_00118640;
  iVar3 = DAT_00118644 + 0x150;
  do {
    iVar3 = iVar3 + -0xc;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

