#include "ghidra_types.h"

extern undefined *DAT_0011bb70;
extern int DAT_0011bb74;

// USA 0011BB5C <- EU 0011BB5C (Ghidra, non-matching)
// GLOBAL DAT_0011bb70 undefined *
// GLOBAL DAT_0011bb74 int

int func_0011BB5C(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_0011bb74;
  pcVar1 = DAT_0011bb70;
  iVar3 = DAT_0011bb74 + 0x10;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

