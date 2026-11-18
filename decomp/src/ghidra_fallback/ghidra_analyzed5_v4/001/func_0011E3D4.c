#include "ghidra_types.h"

extern undefined *DAT_0011e3e8;
extern int DAT_0011e3ec;

// USA 0011E3D4 <- EU 0011E3D4 (Ghidra, non-matching)
// GLOBAL DAT_0011e3e8 undefined *
// GLOBAL DAT_0011e3ec int

int func_0011E3D4(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_0011e3ec;
  pcVar1 = DAT_0011e3e8;
  iVar3 = DAT_0011e3ec + 0x30;
  do {
    iVar3 = iVar3 + -0xc;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

