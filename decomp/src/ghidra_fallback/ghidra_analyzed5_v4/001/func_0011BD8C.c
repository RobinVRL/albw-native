#include "ghidra_types.h"

extern undefined *DAT_0011bda0;
extern int DAT_0011bda4;

// USA 0011BD8C <- EU 0011BD8C (Ghidra, non-matching)
// GLOBAL DAT_0011bda0 undefined *
// GLOBAL DAT_0011bda4 int

int func_0011BD8C(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_0011bda4;
  pcVar1 = DAT_0011bda0;
  iVar3 = DAT_0011bda4 + 8;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

