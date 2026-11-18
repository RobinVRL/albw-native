#include "ghidra_types.h"

extern undefined *DAT_0011e420;
extern int DAT_0011e424;

// USA 0011E40C <- EU 0011E40C (Ghidra, non-matching)
// GLOBAL DAT_0011e420 undefined *
// GLOBAL DAT_0011e424 int

int func_0011E40C(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_0011e424;
  pcVar1 = DAT_0011e420;
  iVar3 = DAT_0011e424 + 0x20;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

