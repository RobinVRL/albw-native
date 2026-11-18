#include "ghidra_types.h"

extern undefined *DAT_0011c1e4;
extern int DAT_0011c1e8;

// USA 0011C1D0 <- EU 0011C1D0 (Ghidra, non-matching)
// GLOBAL DAT_0011c1e4 undefined *
// GLOBAL DAT_0011c1e8 int

int func_0011C1D0(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_0011c1e8;
  pcVar1 = DAT_0011c1e4;
  iVar3 = DAT_0011c1e8 + 0x20;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

