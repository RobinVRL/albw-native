#include "ghidra_types.h"

extern undefined *DAT_0011af30;
extern int DAT_0011af34;

// USA 0011AF1C <- EU 0011AF1C (Ghidra, non-matching)
// GLOBAL DAT_0011af30 undefined *
// GLOBAL DAT_0011af34 int

int func_0011AF1C(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_0011af34;
  pcVar1 = DAT_0011af30;
  iVar3 = DAT_0011af34 + 8;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

