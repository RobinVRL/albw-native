#include "ghidra_types.h"

extern undefined *DAT_00118adc;
extern int DAT_00118ae0;

// USA 00118AC8 <- EU 00118AC8 (Ghidra, non-matching)
// GLOBAL DAT_00118adc undefined *
// GLOBAL DAT_00118ae0 int

int func_00118AC8(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_00118ae0;
  pcVar1 = DAT_00118adc;
  iVar3 = DAT_00118ae0 + 0x30;
  do {
    iVar3 = iVar3 + -0xc;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

