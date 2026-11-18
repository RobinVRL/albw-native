#include "ghidra_types.h"

extern undefined *DAT_0011e35c;
extern int DAT_0011e360;

// USA 0011E348 <- EU 0011E348 (Ghidra, non-matching)
// GLOBAL DAT_0011e35c undefined *
// GLOBAL DAT_0011e360 int

int func_0011E348(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_0011e360;
  pcVar1 = DAT_0011e35c;
  iVar3 = DAT_0011e360 + 0x20;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

