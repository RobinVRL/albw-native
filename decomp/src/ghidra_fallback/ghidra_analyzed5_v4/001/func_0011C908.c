#include "ghidra_types.h"

extern undefined *DAT_0011c91c;
extern int DAT_0011c920;

// USA 0011C908 <- EU 0011C908 (Ghidra, non-matching)
// GLOBAL DAT_0011c91c undefined *
// GLOBAL DAT_0011c920 int

int func_0011C908(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_0011c920;
  pcVar1 = DAT_0011c91c;
  iVar3 = DAT_0011c920 + 0x24;
  do {
    iVar3 = iVar3 + -0xc;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

