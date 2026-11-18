#include "ghidra_types.h"

extern undefined *DAT_0011c040;
extern int DAT_0011c044;

// USA 0011C02C <- EU 0011C02C (Ghidra, non-matching)
// GLOBAL DAT_0011c040 undefined *
// GLOBAL DAT_0011c044 int

int func_0011C02C(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_0011c044;
  pcVar1 = DAT_0011c040;
  iVar3 = DAT_0011c044 + 8;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

