#include "ghidra_types.h"

extern undefined *DAT_0011830c;
extern int DAT_00118310;

// USA 001182F8 <- EU 001182F8 (Ghidra, non-matching)
// GLOBAL DAT_0011830c undefined *
// GLOBAL DAT_00118310 int

int func_001182F8(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_00118310;
  pcVar1 = DAT_0011830c;
  iVar3 = DAT_00118310 + 0x18;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

