#include "ghidra_types.h"

extern undefined *DAT_0011c238;
extern int DAT_0011c23c;

// USA 0011C224 <- EU 0011C224 (Ghidra, non-matching)
// GLOBAL DAT_0011c238 undefined *
// GLOBAL DAT_0011c23c int

int func_0011C224(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_0011c23c;
  pcVar1 = DAT_0011c238;
  iVar3 = DAT_0011c23c + 0x24;
  do {
    iVar3 = iVar3 + -0xc;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

