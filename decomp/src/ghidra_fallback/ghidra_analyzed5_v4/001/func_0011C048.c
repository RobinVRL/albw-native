#include "ghidra_types.h"

extern undefined *DAT_0011c05c;
extern int DAT_0011c060;

// USA 0011C048 <- EU 0011C048 (Ghidra, non-matching)
// GLOBAL DAT_0011c05c undefined *
// GLOBAL DAT_0011c060 int

int func_0011C048(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_0011c060;
  pcVar1 = DAT_0011c05c;
  iVar3 = DAT_0011c060 + 0x24;
  do {
    iVar3 = iVar3 + -0xc;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

