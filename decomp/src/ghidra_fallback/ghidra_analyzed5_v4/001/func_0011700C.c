#include "ghidra_types.h"

extern undefined *DAT_00117020;
extern int DAT_00117024;

// USA 0011700C <- EU 0011700C (Ghidra, non-matching)
// GLOBAL DAT_00117020 undefined *
// GLOBAL DAT_00117024 int

int func_0011700C(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_00117024;
  pcVar1 = DAT_00117020;
  iVar3 = DAT_00117024 + 0x20;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

