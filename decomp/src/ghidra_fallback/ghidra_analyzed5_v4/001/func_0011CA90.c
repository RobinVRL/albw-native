#include "ghidra_types.h"

extern undefined *DAT_0011caa4;
extern int DAT_0011caa8;

// USA 0011CA90 <- EU 0011CA90 (Ghidra, non-matching)
// GLOBAL DAT_0011caa4 undefined *
// GLOBAL DAT_0011caa8 int

int func_0011CA90(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_0011caa8;
  pcVar1 = DAT_0011caa4;
  iVar3 = DAT_0011caa8 + 0x30;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

