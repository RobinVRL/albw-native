#include "ghidra_types.h"

extern undefined *DAT_0011cbf4;
extern int DAT_0011cbf8;

// USA 0011CBE0 <- EU 0011CBE0 (Ghidra, non-matching)
// GLOBAL DAT_0011cbf4 undefined *
// GLOBAL DAT_0011cbf8 int

int func_0011CBE0(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_0011cbf8;
  pcVar1 = DAT_0011cbf4;
  iVar3 = DAT_0011cbf8 + 0x10;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

