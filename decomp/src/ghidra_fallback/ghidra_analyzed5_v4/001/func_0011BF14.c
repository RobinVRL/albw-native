#include "ghidra_types.h"

extern undefined *DAT_0011bf28;
extern int DAT_0011bf2c;

// USA 0011BF14 <- EU 0011BF14 (Ghidra, non-matching)
// GLOBAL DAT_0011bf28 undefined *
// GLOBAL DAT_0011bf2c int

int func_0011BF14(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_0011bf2c;
  pcVar1 = DAT_0011bf28;
  iVar3 = DAT_0011bf2c + 0x48;
  do {
    iVar3 = iVar3 + -0xc;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

