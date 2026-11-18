#include "ghidra_types.h"

extern undefined *DAT_00117218;
extern int DAT_0011721c;

// USA 00117204 <- EU 00117204 (Ghidra, non-matching)
// GLOBAL DAT_00117218 undefined *
// GLOBAL DAT_0011721c int

int func_00117204(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_0011721c;
  pcVar1 = DAT_00117218;
  iVar3 = DAT_0011721c + 0x30;
  do {
    iVar3 = iVar3 + -0xc;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

