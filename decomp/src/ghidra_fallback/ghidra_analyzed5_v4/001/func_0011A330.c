#include "ghidra_types.h"

extern undefined *DAT_0011a344;
extern int DAT_0011a348;

// USA 0011A330 <- EU 0011A330 (Ghidra, non-matching)
// GLOBAL DAT_0011a344 undefined *
// GLOBAL DAT_0011a348 int

int func_0011A330(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_0011a348;
  pcVar1 = DAT_0011a344;
  iVar3 = DAT_0011a348 + 0x10;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

