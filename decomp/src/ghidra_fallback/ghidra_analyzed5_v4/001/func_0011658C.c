#include "ghidra_types.h"

extern undefined *DAT_001165a0;
extern int DAT_001165a4;

// USA 0011658C <- EU 0011658C (Ghidra, non-matching)
// GLOBAL DAT_001165a0 undefined *
// GLOBAL DAT_001165a4 int

int func_0011658C(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_001165a4;
  pcVar1 = DAT_001165a0;
  iVar3 = DAT_001165a4 + 0x40;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

