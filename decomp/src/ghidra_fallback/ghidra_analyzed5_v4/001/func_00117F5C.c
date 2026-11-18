#include "ghidra_types.h"

extern undefined *DAT_00117f70;
extern int DAT_00117f74;

// USA 00117F5C <- EU 00117F5C (Ghidra, non-matching)
// GLOBAL DAT_00117f70 undefined *
// GLOBAL DAT_00117f74 int

int func_00117F5C(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_00117f74;
  pcVar1 = DAT_00117f70;
  iVar3 = DAT_00117f74 + 0x20;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

