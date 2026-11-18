#include "ghidra_types.h"

extern undefined *DAT_00117288;
extern int DAT_0011728c;

// USA 00117274 <- EU 00117274 (Ghidra, non-matching)
// GLOBAL DAT_00117288 undefined *
// GLOBAL DAT_0011728c int

int func_00117274(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_0011728c;
  pcVar1 = DAT_00117288;
  iVar3 = DAT_0011728c + 0x10;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

