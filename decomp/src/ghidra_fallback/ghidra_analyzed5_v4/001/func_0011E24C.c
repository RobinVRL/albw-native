#include "ghidra_types.h"

extern undefined *DAT_0011e260;
extern int DAT_0011e264;

// USA 0011E24C <- EU 0011E24C (Ghidra, non-matching)
// GLOBAL DAT_0011e260 undefined *
// GLOBAL DAT_0011e264 int

int func_0011E24C(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_0011e264;
  pcVar1 = DAT_0011e260;
  iVar3 = DAT_0011e264 + 0x20;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

