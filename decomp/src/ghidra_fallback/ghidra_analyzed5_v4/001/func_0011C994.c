#include "ghidra_types.h"

extern undefined *DAT_0011c9a8;
extern int DAT_0011c9ac;

// USA 0011C994 <- EU 0011C994 (Ghidra, non-matching)
// GLOBAL DAT_0011c9a8 undefined *
// GLOBAL DAT_0011c9ac int

int func_0011C994(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_0011c9ac;
  pcVar1 = DAT_0011c9a8;
  iVar3 = DAT_0011c9ac + 0x50;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

