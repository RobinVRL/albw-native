#include "ghidra_types.h"

extern undefined *DAT_0011c2c4;
extern int DAT_0011c2c8;

// USA 0011C2B0 <- EU 0011C2B0 (Ghidra, non-matching)
// GLOBAL DAT_0011c2c4 undefined *
// GLOBAL DAT_0011c2c8 int

int func_0011C2B0(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_0011c2c8;
  pcVar1 = DAT_0011c2c4;
  iVar3 = DAT_0011c2c8 + 0x100;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

