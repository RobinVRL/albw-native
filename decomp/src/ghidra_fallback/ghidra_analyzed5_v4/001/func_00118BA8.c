#include "ghidra_types.h"

extern undefined *DAT_00118bbc;
extern int DAT_00118bc0;

// USA 00118BA8 <- EU 00118BA8 (Ghidra, non-matching)
// GLOBAL DAT_00118bbc undefined *
// GLOBAL DAT_00118bc0 int

int func_00118BA8(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_00118bc0;
  pcVar1 = DAT_00118bbc;
  iVar3 = DAT_00118bc0 + 0x20;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

