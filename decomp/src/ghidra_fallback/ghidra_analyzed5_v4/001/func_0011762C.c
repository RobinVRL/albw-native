#include "ghidra_types.h"

extern undefined *DAT_00117640;
extern int DAT_00117644;

// USA 0011762C <- EU 0011762C (Ghidra, non-matching)
// GLOBAL DAT_00117640 undefined *
// GLOBAL DAT_00117644 int

int func_0011762C(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_00117644;
  pcVar1 = DAT_00117640;
  iVar3 = DAT_00117644 + 0x20;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

