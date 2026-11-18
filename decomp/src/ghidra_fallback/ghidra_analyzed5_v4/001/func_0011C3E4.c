#include "ghidra_types.h"

extern undefined *DAT_0011c3f8;
extern int DAT_0011c3fc;

// USA 0011C3E4 <- EU 0011C3E4 (Ghidra, non-matching)
// GLOBAL DAT_0011c3f8 undefined *
// GLOBAL DAT_0011c3fc int

int func_0011C3E4(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_0011c3fc;
  pcVar1 = DAT_0011c3f8;
  iVar3 = DAT_0011c3fc + 0x54;
  do {
    iVar3 = iVar3 + -0xc;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

