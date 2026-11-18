#include "ghidra_types.h"

extern undefined *DAT_0011c794;
extern int DAT_0011c798;

// USA 0011C780 <- EU 0011C780 (Ghidra, non-matching)
// GLOBAL DAT_0011c794 undefined *
// GLOBAL DAT_0011c798 int

int func_0011C780(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_0011c798;
  pcVar1 = DAT_0011c794;
  iVar3 = DAT_0011c798 + 0x30;
  do {
    iVar3 = iVar3 + -0xc;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

