#include "ghidra_types.h"

extern undefined *DAT_0011c008;
extern int DAT_0011c00c;

// USA 0011BFF4 <- EU 0011BFF4 (Ghidra, non-matching)
// GLOBAL DAT_0011c008 undefined *
// GLOBAL DAT_0011c00c int

int func_0011BFF4(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_0011c00c;
  pcVar1 = DAT_0011c008;
  iVar3 = DAT_0011c00c + 8;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

