#include "ghidra_types.h"

extern undefined *DAT_00117988;
extern int DAT_0011798c;

// USA 00117974 <- EU 00117974 (Ghidra, non-matching)
// GLOBAL DAT_00117988 undefined *
// GLOBAL DAT_0011798c int

int func_00117974(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_0011798c;
  pcVar1 = DAT_00117988;
  iVar3 = DAT_0011798c + 0x100;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

