#include "ghidra_types.h"

extern undefined *DAT_00118d28;
extern int DAT_00118d2c;

// USA 00118D14 <- EU 00118D14 (Ghidra, non-matching)
// GLOBAL DAT_00118d28 undefined *
// GLOBAL DAT_00118d2c int

int func_00118D14(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_00118d2c;
  pcVar1 = DAT_00118d28;
  iVar3 = DAT_00118d2c + 0x30;
  do {
    iVar3 = iVar3 + -0xc;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

