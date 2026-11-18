#include "ghidra_types.h"

extern undefined *DAT_0011e3b0;
extern int DAT_0011e3b4;

// USA 0011E39C <- EU 0011E39C (Ghidra, non-matching)
// GLOBAL DAT_0011e3b0 undefined *
// GLOBAL DAT_0011e3b4 int

int func_0011E39C(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_0011e3b4;
  pcVar1 = DAT_0011e3b0;
  iVar3 = DAT_0011e3b4 + 0x30;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

