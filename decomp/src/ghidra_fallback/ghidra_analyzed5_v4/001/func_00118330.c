#include "ghidra_types.h"

extern undefined *DAT_00118344;
extern int DAT_00118348;

// USA 00118330 <- EU 00118330 (Ghidra, non-matching)
// GLOBAL DAT_00118344 undefined *
// GLOBAL DAT_00118348 int

int func_00118330(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_00118348;
  pcVar1 = DAT_00118344;
  iVar3 = DAT_00118348 + 0x20;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

