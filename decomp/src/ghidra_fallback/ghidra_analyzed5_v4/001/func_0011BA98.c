#include "ghidra_types.h"

extern undefined *DAT_0011baac;
extern int DAT_0011bab0;

// USA 0011BA98 <- EU 0011BA98 (Ghidra, non-matching)
// GLOBAL DAT_0011baac undefined *
// GLOBAL DAT_0011bab0 int

int func_0011BA98(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_0011bab0;
  pcVar1 = DAT_0011baac;
  iVar3 = DAT_0011bab0 + 8;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

