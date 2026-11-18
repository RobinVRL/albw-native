#include "ghidra_types.h"

extern undefined *DAT_0011c0b0;
extern int DAT_0011c0b4;

// USA 0011C09C <- EU 0011C09C (Ghidra, non-matching)
// GLOBAL DAT_0011c0b0 undefined *
// GLOBAL DAT_0011c0b4 int

int func_0011C09C(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_0011c0b4;
  pcVar1 = DAT_0011c0b0;
  iVar3 = DAT_0011c0b4 + 0x48;
  do {
    iVar3 = iVar3 + -0xc;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

