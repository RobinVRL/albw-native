#include "ghidra_types.h"

extern undefined *DAT_0011c2fc;
extern int DAT_0011c300;

// USA 0011C2E8 <- EU 0011C2E8 (Ghidra, non-matching)
// GLOBAL DAT_0011c2fc undefined *
// GLOBAL DAT_0011c300 int

int func_0011C2E8(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_0011c300;
  pcVar1 = DAT_0011c2fc;
  iVar3 = DAT_0011c300 + 0x10;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

